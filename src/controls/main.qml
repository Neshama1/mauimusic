// main.qml

import QtQuick 2.15
import QtQuick.Controls 2.15
import org.mauikit.controls 1.3 as Maui

Maui.ApplicationWindow
{
    id: root

    ListModel { id: stationsModel }

    Maui.SideBarView
    {
        anchors.fill: parent

        sideBarContent: Maui.Page
        {
            Maui.Theme.colorSet: Maui.Theme.Window
            anchors.fill: parent

            headBar.visible: false

            ListModel {
            id: mainMenuModel
                ListElement { name: "Search" ; description: "Find a radio station" ; icon: "search" }
                ListElement { name: "Genre" ; description: "Music category" ; icon: "view-media-genre" }
                ListElement { name: "Language" ; description: "Search for a station in any language" ; icon: "languages" }
            }

            Maui.ListBrowser {
                id: menuSideBar

                anchors.fill: parent
                anchors.margins: 5

                horizontalScrollBarPolicy: ScrollBar.AlwaysOff
                verticalScrollBarPolicy: ScrollBar.AlwaysOff

                currentIndex: 0

                spacing: 5

                model: mainMenuModel

                delegate: Maui.ListBrowserDelegate {
                    width: ListView.view.width
                    height: 60
                    label1.text: name
                    label2.text: description

                    iconSource: icon

                    onClicked: {
                        switch (index) {
                            case 0: {
                                menuSideBar.currentIndex = index
                                stackView.push("qrc:/Search.qml")
                                return
                            }
                            case 1: {
                                menuSideBar.currentIndex = index
                                //stackView.push("qrc:/Page2.qml")
                                return
                            }
                            case 2: {
                                menuSideBar.currentIndex = index
                                //stackView.push("qrc:/Page3.qml")
                                return
                            }
                        }
                    }
                }
            }

            Maui.ShadowedRectangle {
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.bottom: parent.bottom
                anchors.margins: 15

                height: 70

                Maui.Theme.inherit: false
                Maui.Theme.colorSet: Maui.Theme.View
                color: Qt.darker(Maui.Theme.backgroundColor,1.02)
                border.color: Maui.Theme.backgroundColor
                border.width: 0
                shadow.size: 5
                shadow.color: Maui.ColorUtils.brightnessForColor(Maui.Theme.backgroundColor) == Maui.ColorUtils.Light ? "#dadada" : "#2c2c2c"
                shadow.xOffset: 0
                shadow.yOffset: 0
                radius: 4

                HealthSlider {
                    id: healthSlider
                    //anchors.horizontalCenter: parent.horizontalCenter
                    //anchors.bottom: parent.bottom
                    anchors.left: parent.left
                    anchors.right: parent.right
                    anchors.verticalCenter: parent.verticalCenter
                    //anchors.centerIn: parent
                    anchors.rightMargin: 0
                    anchors.bottomMargin: 10
                    scale: 0.70
                    width: 150
                }
            }
        }

        Maui.Page
        {
            anchors.fill: parent

            headBar.visible: false

            Component.onCompleted: {
                stackView.push("qrc:/Search.qml")
            }

            StackView {
                id: stackView
                anchors.fill: parent
            }
        }
    }
}
