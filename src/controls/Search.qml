// Search.qml

import QtQuick 2.15
import QtQuick.Controls 2.15
import org.mauikit.controls 1.3 as Maui

Maui.Page {
    anchors.fill: parent

    showCSDControls: false
    headBar.background: null
    headBar.preferredHeight: 10

    /*
    Maui.GridBrowser {
        anchors.fill: parent
        anchors.topMargin: -20
        anchors.leftMargin: 0
        anchors.rightMargin: 0
        anchors.bottomMargin: 0
        itemSize: 500
        itemHeight: 200
        adaptContent: true
        horizontalScrollBarPolicy: ScrollBar.AlwaysOff
        verticalScrollBarPolicy: ScrollBar.AlwaysOff

        model: 5

        delegate: Rectangle {
            color: "transparent"
            width: GridView.view.cellWidth
            height: GridView.view.cellHeight
            Maui.ShadowedRectangle {
                anchors.fill: parent
                anchors.margins: 10

                color: Maui.Theme.alternateBackgroundColor
                border.color: Maui.Theme.alternateBackgroundColor
                border.width: 0
                shadow.size: 10
                shadow.color: Maui.ColorUtils.brightnessForColor(Maui.Theme.backgroundColor) == Maui.ColorUtils.Light ? "#dadada" : "#2c2c2c"
                shadow.xOffset: 2
                shadow.yOffset: 2
                radius: 2

                HealthSlider {
                    id: healthSlider
                    anchors.horizontalCenter: parent.horizontalCenter
                    anchors.bottom: parent.bottom
                    anchors.rightMargin: 0
                    anchors.bottomMargin: 10
                    scale: 0.90
                    width: 150
                }
            }
        }
    }
    */
}
