import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 400
    height: 300

    TextField {
        id: inputField
        width: parent.width - 20
        placeholderText: "Type your search query"
        anchors.centerIn: parent
        onAccepted: {
            inputHandler.handleInput(text)
            inputField.clear()
        }
    }
}
