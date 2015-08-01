#include "mainwindow.h"
#include "glwidget.h"

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	GLWidget *w = new GLWidget(this);
	setCentralWidget(w);
	setAttribute(Qt::WA_QuitOnClose);
}

void MainWindow::closeEvent(QCloseEvent *e)
{
	qApp->closeAllWindows();
	QMainWindow::closeEvent(e);
}
