#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_addButton_clicked() {
    // Get student details from GUI fields
    QString name = ui->nameLineEdit->text();
    int rollNumber = ui->rollNumberSpinBox->value();
    double marks = ui->marksDoubleSpinBox->value();

    // Create a Student object and add it to the vector
    Student student(name.toStdString(), rollNumber, marks);
    students.push_back(student);

    // Clear input fields
    ui->nameLineEdit->clear();
    ui->rollNumberSpinBox->clear();
    ui->marksDoubleSpinBox->clear();

    QMessageBox::information(this, "Success", "Student added!");
}

void MainWindow::on_viewButton_clicked() {
    QString info = "Student Records:\n\n";
    for (const Student& student : students) {
        info += "Name: " + QString::fromStdString(student.getName()) + "\n";
        info += "Roll Number: " + QString::number(student.getRollNumber()) + "\n";
        info += "Marks: " + QString::number(student.getMarks()) + "\n\n";
    }

    if (students.isEmpty()) {
        info = "No student records available.";
    }

    QMessageBox::information(this, "Student Records", info);
}
