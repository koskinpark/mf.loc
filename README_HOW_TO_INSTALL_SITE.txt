
После того, как сайт установится, необходимо:

1. В консоли набрать команду "drush fra -y"

2. В консоли набрать команду "drush cc all"

3. Перебилдить меню
   - Импорт выполняется на странице admin/structure/taxonomy/catalog/edit
   - В поле "Select to rebuild the menu on submit." необходимо поставить галочку и нажать кнопку "Save"

4. Импорт в Меню "footer-menu" из файла "menu-footer-menu-export.txt", находящего в корне сайта.
   - Импорт выполняется на странице admin/structure/menu/import
   - Файл с термами для импорта находится в корне сайта и называется "menu-footer-menu-export.txt"
   - В поле Target-menu выбрать "Footer-menu"
   - В качестве исходного файла выбрать menu-footer-menu-export.txt
   - Нажать кнопку Upload & preview
   - На следующей странице нажать кнопку Import

5. Импорт локализации из файла "ru.po", находящегося в корне сайта на странице
   - Импорт выполняется на странице admin/config/regional/translate/import
   - Файл с термами для импорта находится в корне сайта и называется "ru.po"
   - В поле Language-file выбрать файл "ru.po"
   - В поле Text group выбрать "Built-in interface"
   - Нажать кнопку Import

6. В консоли набрать команду "drush cic"
   - Запустится импорт контента по типу Product из файлов, хранящихся в папке "parse",
   которая лежит также в корне сайта).

7. Запустить cron
   - Выполнит команду в консоли "drush core-cron"