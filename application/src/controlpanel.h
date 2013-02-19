#ifndef CONTROLPANEL_H
#define CONTROLPANEL_H

#include <QMainWindow>
#include <QLabel>
#include "ovenmanager.h"

namespace Ui {
	class ControlPanel;
}

class ControlPanel : public QMainWindow
{
	Q_OBJECT

	public:
		explicit ControlPanel(QWidget *parent = 0);
		~ControlPanel();

	private:
		Ui::ControlPanel *ui;
		QLabel *lblConnectionStatus;
		OvenManager *_ovenManager;
		bool _reflowing;

	private slots:
		void on_actionStart_Reflow_triggered();
		void on_actionStop_Reflow_triggered();
		void ovenConnected();
		void ovenDisconnected();
		void enableActions();
};

#endif // CONTROLPANEL_H
