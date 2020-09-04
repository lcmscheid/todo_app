#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>

#include "Task.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

  void updateStatus();

public slots:
  void addTask();
  void removeTask(Task *task);
  void taskStatusChanged(Task *task);

private:
  Ui::MainWindow *ui;
  std::vector<Task *> m_tasks;
};
#endif // MAINWINDOW_H
