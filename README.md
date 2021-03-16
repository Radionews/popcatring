# pop cat ring
Проект простого аудиозвонка на платке Digispark. 3D модели корпуса найдете в папке 3D_model (внезапно).

![POP_CAT](/img/meme-pop-cat-pack.png "pop_cat")

За вдохновение спасибо [КТ](https://www.youtube.com/channel/UC2zVxdurTDmeGA-jOLt_XRw "Канал КТ").

## как повторить проект?
* скачиваем архив проекта
* прошиваем attiny85 через программатор t85_entry_on_reset_activePullup_fastExit.hex
* читаем и изменяем fuse биты (**avrdude** High Byte - **0xDD**; Low Byte - **0xF1**)
* открываем pop_cat_attiny85.ino и жмем прошивку
* вставляем attiny85 в usb и она прошивается
* собираем все по схеме, хорошо изолируем
* печатаем корпус, красим, термоклей
* **PROFIT!**

## прошивка
Файлы прошивки были взяты из этого репозитория: <https://github.com/ArminJo/micronucleus-firmware>

Рекомендуемые fuse биты (avrdude): High Byte - **0xDD**; Low Byte - **0xF1**

Нужный бутлоадер лежит в папке attiny85_files. 
* t85_entry_on_reset_activePullup_fastExit.hex - полная прошивка, если вы прошиваете через внешний программатор (рекомедую именно этот метод);
* upgrade-t85_entry_on_reset_activePullup_fastExit.hex - файл upgrade, которым можно обновить прошивку через штатный загрузчик.

В этой же папке находится архив с драйверами, взятый из этого репозитория <https://github.com/digistump/DigistumpArduino/>.

## схема

Схема устройства.

![схема](/img/pop_cat_schematic.png "схема")

## видео

*готовится*

## распиновка
Распиновка Digispark взята от [сюда](https://www.deviantart.com/mortenaaserud/art/Digispark-Attiny85-Pinout-738150591 "pinout").

![pinout](/img/pinout.png "pinout")