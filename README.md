# pop cat ring
Проект простого аудиозвонка на платке Digispark. 3D модели корпуса найдете в папке 3D_model (внезапно).

![POP_CAT](/img/meme-pop-cat-pack.png "pop_cat")

За вдохновение спасибо [КТ](https://www.youtube.com/channel/UC2zVxdurTDmeGA-jOLt_XRw "Канал КТ").

## прошивка
Файлы прошивки были взяты из этого репозитория: <https://github.com/ArminJo/micronucleus-firmware>

Нужный бутлоадер лежит в папке attiny85_files. 
* t85_entry_on_reset_activePullup_fastExit.hex - полная прошивка, если вы прошиваете через внешний программатор (рекомедую именно этот метод);
* upgrade-t85_entry_on_reset_activePullup_fastExit.hex - файл upgrade, которым можно обновить прошивку через штатный загрузчик.

В этой же папке находится архив с драйверами, взятый из этого репозитория <https://github.com/digistump/DigistumpArduino/>.

## схема

Схема устройства.

![схема](/img/pop_cat_schematic.png "схема")

## видео

*готовится*