
# маркер edding 140s ЧЕРНЫЙ

http://www.vseinstrumenti.ru/ruchnoy_instrument/dlya_shtukaturno-otdelochnyh_rabot/razmetochnyi/edding/4sht_0_3mm_e-140-4s/?gclid=CP6Cs4-bydICFV5lGQod4-cOcQ

http://www.vseinstrumenti.ru/selfDelivery/shop/3.html


# STD некоторая информация про контейнеры

std::list - двусвязный список, имеющий 2 указателя внутри каждого элемента на Предыдущ. и След. элемент
std::forward_list - односвязный список, только один указатель на следующий элемент.

Как написать СВОЙ Двусвязный список:
http://ci-plus-plus-snachala.ru/?p=60


Перестановка элементов в односвязном списке
http://ru.stackoverflow.com/questions/381470/Перестановка-элементов-в-односвязном-списке


# CLASS Mystring

http://www.sql.ru/forum/909926/ispolzovanie-sobstvennogo-klassa-strok

https://www.linux.org.ru/forum/development/911016

# SOME CODE FOR EXPERIMENTS

//#include "stdio.h" // printf, scanf
//#include <stdio.h> // printf, scanf
//#include <iostream.h>
#include <iostream> // cout, cin


void pause()
{
	std::cin.sync();
	std::cout << "\nPAUSED\n";
	std::cin.ignore();
}

int main()
{
	printf("");

/*
	int **a__[2];
	int *(*a_)[2] = 0;

	int* ad1; // = 0;
	int* ad2; // = 0;
	//ad1 = **a__;
	ad2 = **a_;

	int elem1 = ad1[1];
	int elem2 = ad2[1];
*/

//*
	char buf[4] = "str"; //определение массива символов
	char buf_[] = "str"; //определение массива символов // строковой константы

	//Б. Страуструп, ЯП C++ [5.2.2. Строковые литералы]:
	//Строковый литерал можно присвоить переменной типа char*. Это разрешается, потому что в предыдущих определениях C и C++ типом строкового литерала был char*/ Благодаря такому разрешению миллионы строк кода на C и C++ остаются синтаксически корректными.
	
	char* p_buf  = "str"; //это указатель на char (char* buf_), инициализированный константной строкой "str" = const std::string("str"). писать в константные строки нехорошо константная секция данных 
	//char* bf[4] = "str\0"; //это массив из 4 указателей на char, нулевой элемент инициализирован указателем на константную строку, остальные 3 нулем
	//char* bf[4] = "str\0"; // char *[4] = const char [5]; // can NOT convert;
	char* p_bf[4] = { "str\0" }; //это массив из 4 указателей на char, нулевой элемент инициализирован указателем на константную строку, остальные 3 нулем
	char* p_bf_[] = { "str\0" }; //это массив из 4 указателей на char, нулевой элемент инициализирован указателем на константную строку, остальные 3 нулем


	buf_[0] = '1';
	buf_[1] = '2';
	buf_[2] = '3';
	buf_[3] = '4';
	buf_[4] = '5';

	buf[0] = '1';
	buf[1] = '2';
	buf[2] = '3';
	buf[3] = '4';
	buf[4] = '5';

	*p_buf = '1';

	//*p_buf_ = 'z';
	//*p_buf_ = (char)"sm";

	//*p_bf[0] = '1';
	//*p_bf[1] = '2';
	//*p_bf[2] = '3';

//*/

# DIRTY.RU

     if(EInsOGRN->Text.Trim().Length()>13) { EInsOGRN->Text = nextOGRN.SubString(0, 12); }

//////////////////////////////////////////////////////////////////////////////////////////////

Арндт против ООО Руланд Иммобилиен и других
Тема: Пересылка копий

Уважаемая г. Арндт

настоящим передаю вам копии документов, полученные мной за эту и предыдущую неделю,
для вашего дальнейшего с ними ознакомления.

МФГ 
Симон Кекер
Адвокат

//////////////////////////////////////////////////////////////////////////////////////////////

Арндт против Сисай и ООО Руланд Иммобилиен
Тема: Отзыв и взыскание (полномочия/доверенность) Поручения о списании средств 

Уважаемый г. Руланд,
Раздел B, Пункт 2.6.1 специальных условий осуществления дебетовых операция списания:
настоящим через представление вам оригинала доверенности, сообщаю вам, что я являюсь
оффициальным  представителем интересов г. Тамары Арндт, Вагедесштр. 2, 40479 Дюс-рф.

  1. Мой клиент, которая является обладательницей права на долгосрочное пребывание и
не являющаяся собтвенницей вышеобозначенной квартиры, множество раз, начиная с
06.04.2016 совершила попытки вернуть себе от вас неправомерно снятый вами с неё
специальный налог в размере 10.518,00 Евро. Так же она потребовала, чтобы вы
предоставили разрешение на списание средств. По сегодняшний день всё, что ей было
передано является только копия документа о списании средств.
  От имени и по запросу моей подзащитной настоящим я 
  отзываю 
  все с вашей стороны совершённые денежные запросы
по оплате касающиеся квартиры и требую вас совершить данные переводы обратно мне.
  По мимо прочего я так же требую с вам сообщить мне не располагаетели вы ещё
какими-либо другими разрешениями на списание средств.
  Если до 06.01.2017 вышеказанные мной документы не будут присланы мне, то данный
запрос на получение документов будет оформлено как ходатайство и может быть
перевено в статус официального судебного требования.

  2. В письме от 23.11.2016 вы утверждалои, что у вас на руках присуствует разрешение
на списание средств моей подзащитной, которая по вашему утверждению давала вам
право на списание специального налога. Если в своих показаниях вы ссылаетесь на
посланную вами копию документа от 31.12.2003 то из него вы можете чётко и дасловно
увидеть, что она не имеет достоточной юридической силы для совершения, списания
специального налога, которое является предметом данного спора, по причине того,
что разрешение на списание средств ограничивается лишь ежемесячной оплатой ЖКУ
(жилищно комунальных услуг). 
  По сему, если вы не располагаете каким-либо другим разрешением на списание
средств, то я вынужден уже сегодня вас настоятельно призвать к тому, чтобы вы
осуществили перевод в размере 10.518,00 Евро соответсвенно до 06.01.2017 на
мой вышеобозначенный счёт.

3. Что касается сбора дебиторской задолженности вам необходимо обратиться к
владельцам жилплощади Госпоже Рут Михельс, Катрин Пасс и Инес Трогш, чьи
адреса вы можете посмотреть в выписке из поземельной книги.

МФГ 
Симон Кекер
Адвокат

//////////////////////////////////////////////////////////////////////////////////////////////

Арндт против Сисай и ООО Руланд Иммобилиен
Тема: Ваше замечание 736/2/11/1 

Уважаемый г. Руланд,

Уажаемый г. Хонен,
Раздел B, Пункт 2.6.1 специальных условий осуществления дебетовых операция списания:
  Мой клиент г. Тамара Арндт Вагедесштрассе 2, 40479 Дюссельдорф передала мне ваше
письмо от 21.12.2016, и просил меня сообщить вам следующее:

  1. Мой клиент на настоящий момент явялется правообладателем на проживание и не
являющийся собственником вышеупомянутой квартиры. Собственники квартиры - г. Рут
Михельс, г. Катрин Паас, г. Инес Трогш, чьи адреса вы можете посмотреть в выписке
из поземельной книги. В данном письме речь ведётся об участниках, совокупно владеющих
наследством господина Эмануеля Арндта.

  В вашем письме от 21.12.2006 информируются участники, совокупно владеющие
наследством, о нынешнем положении дел касательно конфликта, причиной которого явился
отзыв снятие средств на уплату специального налога, который был неправомерно
произведён с моей подзащитной. Касательно осуществления Жилищно комунальных платежей,

мой клиент так же собирается составить долгосрочный договор, который будет касаться
выделения отдельного счёта, принадлежащего собственникам.

  2. Я был уполномочен стребовать с вашей предшественницы, не правомерно снятые
06.04.2016 с моего клиента денежные средства на оплату специального налога в размере
10.518 Евро. Информируя вас, передаю в приложении мое соотв. письмо от 28.12.2016.

  3. Я прошу сообщить мне в ближайшее время о принципиальной готовности общества
собственников восстановить моему клиенту неправомерно снятую с её счёта сумму и
перенаправить запрос о списании специального налога на собственников как этого 
требует закон, а так же порядок ведения подобных дел. Если я не получу от вас 
никакой информации до 17.01.2017, я буду исходить в дальнейшем, что с вашей стороны,
вы не готовы решать вопрос.

МФГ 
Симон Кекер
Адвокат

//////////////////////////////////////////////////////////////////////////////////////////////

Арндт против Михельс, Паас и Трогш
Тема: Передача документов и требование восттановления потраченных средств 

Уважаемая г. Михельс,
Раздел B, Пункт 2.6.1 специальных условий осуществления дебетовых операция списания:
настоящим через представление вам оригинала доверенности, сообщаю вам, что я являюсь
оффициальным  представителем интересов г. Тамары Арндт, Вагедесштр. 2, 40479 Дюс-рф.

  1. Как вам уже известно из вашего разговора с г. Арндтом, с жиро-счёта моей
клиентки были списаны 06.04.2016 действующей на то время управляющей компанией, за
принадлежащую вам квартиру по алресу Вагедесштрассе 2, денежные средства в размере
10.518 Евро неправомерным образом для оплаты специального налога.

  Все попытки получить деньги обратно по сегодняшний день ничем не увенчались.
  
  Моей клиентке согласно Параграфу 1049 Часть 1, а так же Параграфу 1093 Часть 1
гражданского кодекса ФРГ предоставляется право выдвинуть тиребование по
восстановлению расходов, понесённых ею за квартиру, к которой вы непосредственно
относитесь, как участник общества наследников, и по мимо прочего в вашем случае
несёте за неё как собственники коллективную финансовую ответсвенность.
  Согласно завещанию и расзрешению на регистрацию от 30.03.2011 моя клиентка 
является лишь правообладательницей на долгосрочное проживание и не является 
(узуфруктуаром) юридическим субъектом, имеющим право владения имуществом,
 вышеупомянутой квартиры. По этой причине, безусловно единственное к чему 
она обязуется законом, это проводить косметический ремонт внутри квартиры, 
и осуществлять оплату за жил-комунал. услуги.

  Однако инициированные обществом совладельцев многоквартирного дома следующие
строительные работы - Ремонтные работы крытой части сводчатого подъезда дома и
балконов - согласно закону не подпадают под определение "регулярное поддержане
квартиры в исправном состоянии". К действиям по поддержанию условий сохранности
недвижимого имущества согласно закону относятся лишь таковые, которые при обычной
эксплуатации жилья проводятся регулярно, хотя и имеют определённые сравнительно
короткие временные промежутки между проведением предыдущего и следующего акта
поддержания жилья в надлежащем состоянии (согласно решению Федерального Верховного
Суда Германии от 5 сентября 1991 IV R 40/90 Вестник федерального налогового
управления. II 1992, страница 192).
  
  В нашем случае речь идёт о внеочередной работе по Профилактике и ремонту дома.
Это в основе своей является делом и задачей собственников-участникоы общества
наследников, а не моей клиентки, как правообладательницы на долгосрочное проживание
в данной квартире (смотри решение Федерального верховного суда Германии от
13.07.2005, VII ZR 311/04;  Федеральное собрание ... статьи 139, 28, 30 ). Даже
в случае если бы моя клиантка являлась бы узуфруктуаром, т.е. имела бы полное право
пользоваться имуществом, о чём однако не имеется записи в поземельной книге, то
даже в этом случае, она не должна была бы нести данные издержки.

  Так же из разговора с г. Арндтом сообщаю вам, что ваше надуманное расширение
понятия из пункта 2, 3-ей страницы завещания указанных там предметов, которые вы
определили, как "движимое имущество", не подпадают под объекты недвижимого
имущества, как указано пункта 1 вышеуказанного завещания. В пункте 1 завещания,
в явном виде, описаны положения касаемые обязанностей несения расходов моей
клиентки, которые воспрещают раздвигать рамки совершаемых актов, внутри квартиры,
до в какой-либо организационно-правовой форме распространяющихся актов за её пределами.

  Таким образом, общество наследников имеет долговое обязательство, в виде
возврата, за списанный с моей клиентки специальный налог, суммы в размере 10.518 Евро.

  По этой причине я вынужден требовать с вас осуществить перевод данных средств
на мой вышеуказанный счёт до 19.01.2015.
  
  2. ЖЭК Вагедесштрассе 2 на данный момент находится под управлением ООО GRUVA.
По причине текущеих проблем моя клиентка не будет предоставлять подтверждение
на списание денежных средств с её счёта. Что с законодательной точки зрения
наиболее правильно, по причине того, что задолжник денег на "домовые расходы"
в в отноешниях между товариществом собственников жилья и собсивенниками жилья,
являются именно собственники жилья и никто другой, коими являетеь вы, как
общество наследников.

  Само собой моя клиентка будет уплачивать "домовые расходы", только в данном
случае вам, как части общества наследников, а не напрямую через списания денежных
средств в ЖЕК.

  ООО GRUVA я по данному вопросу уже предупредил и прилагаю далее соотв-ющее письмо.
  
  Пожалуйста сообщите мне номер счёта  общества наследников, на который моя клиантка
в дальнейшем сможет осуществлять денежные перводы связанные с "домовыми расходами".
  
  В соответсвующем акте, я для данной операции указал вам срок до 12.01.2017.
  
Документы для остальных участников общества наследников, можно найти в приложении.

МФГ 
Симон Кекер
Адвокат

//////////////////////////////////////////////////////////////////////////////////////////////

Арндт ./. Шпаркасса Дюссельдорфа
Тема: Отзыв неавторизованного списания со счёта 

Уважаемая дамы и господа,

настоящим через представление вам оригинала доверенности, сообщаю вам, что я являюсь
оффициальным  представителем интересов г. Тамары Арндт, Вагедесштр. 2, 40479 Дюс-рф.

Моя клиентка расолагает в вашем банке Жиро-счёт № 1005841125.

  В начале апреля 2016 года моей клиентке было сообщено, что товарищество 
собственников жилья по адресу Вагедесштрассе 2-4 будет нести дополнительные расходы
на рестарвционно-ремонтные работы, согласно заключённому договору, в размере 
10.518 Евро, с каждой единицы живой площади.

  Моя клиентка однако, в отношении данной квартиры является лишь правообладательницей
на долгосрочное проживание, и не является собственницей жилья, как вы можете увидеть
исходя из ксерокопии поземельной книги. По этой причине она не обязана нести
дополнительных расходов, и была несогласна с тем, что с её счёта будут взыматься
вышеуказанные средства.
////////////////////////////////////////////////Раздел B, Пункт 2.6.1 специальных условий осуществления дебетовых операция списания:  
  Моя клиентка пожилого возраста, обратилась в вашу компанию 04.04.2016, за 2 дня до
запланированного дня списания средств, к вашей сотруднице, в вашем филиале в 
Роксусмаркте, для предостващения списания данных средств с её счёта. Что как вам 
известно, на тот момент ещё было вполне возможно сделать, без лишних проволочек.

  Там ей было сказано, что операция списание производится заранее, и что запрос на 
списание уже был отправлен в систему. Было сказано, что ничем более ей помочь никто
не может. Ей посоветовали забрать деньги с ЖЭКа. Ей так же не были пересланы 
какие-либо необходимыей ей согласно статье 675х согласно закону о ведении поземельных
книг, документации, исходя из которых можно было бы установить факт списания, или факт
того, что она по закону может с этим запросом пойти в ЖЭК. Операцию проведения списания,
не смотря на обращение и возражения моей клиентки против такового, вы можете наблюдать
в выписке из банковского счёта от 08.04.2016.

  Далее моя клиентка утрудила себя получить с ЖЭКа, ООО Сисэй и Руланд Иммобилиен,
по адресу Глокеншпитц 323, 47809 Крефельд, платёжное поручение, на основании
произошедшего списания с её счёта.

  Ей был направлен вышеуказанный документ, из которого вы можете видеть, что списание
со счёта было произведено неавторизованно, если, сопоставить это списание с платёжным
поручением.

  С одной стороны: Данное (полномочие/доверенность) поручение о списании средств со
счёта от 31.12.2003 связано со счётом умершего супруга, который несёт в себе его
подпись которой моя клиентка не была обязана и не несла обязательств вести дела
данного счёта в соответсвии с тем как его вёл ранее её супруг.

  С другой стороны: (полномочия/доверенность) Поручения о списании средств со счёта к
которым обязуется моя подзащитная, а именно ежемесячные Платежи за коммунальные услуги,
которые не должны превышать 600 евро.
  
  Наличествуют ли у вас ещё какие-либо другие (полномочия/доверенность) поручения
о списании средств со счёта, мне неизвестно. Моя клиентка не может вспомнить, чтобы
она сама давала (полномочия/доверенность) Поручения о списании средств со счёта 
со своей стороны.

Раздел B, Пункт 2.6.1 специальных условий осуществления дебетовых операция списания:
  От имени и по запросу моей подзащитной настоящим я отзываю неавторизированный 
процесс списания со счёта от 06.04.2016 во временных, рамках установленных законом,
равным 13-ти месяцам, согласно Разделу B Пункта 2.6.1 Предложение 2-ое, специальных
условий осуществления дебетовых операция списания, и прошу вас снова пополнить счёт
моей клиентки безотлагательно(незамедлительно) на сумму в 10.518 Евро.

  Все релевантные выкладки касающиеся специальных условий осуществления дебетовых 
операция списания я также прикладываю к письму.

  В случае, если у вас имеется (полномочия/доверенность) Поручение о списании средств
со счёта, прошу вас в скорейшем времени передать мне таковое. На разрешение данного
вопроса я обозначил в письме срок до 06.01.2017.

МФГ 
Симон Кекер
Адвокат

Дополнения ниже
//////////////////////////////////////////////////////////////////////////////////////////////
ДОПОЛНЕНИЕ

Раздел B, Пункт 2.6.1 специальных условий осуществления дебетовых операция списания:

"В случае наличия неавторизованного клиентом платежа банк не имеет права на 
какое-либо возмещения расходов, которые понёс банк. Банк обязуется, снятые средства
с клиентского счёта восстановить в полном размере безотлагательно. При этом счёт 
должен быть вернут банком в то состояние в котором данный счёт был, до совершённого
неавторизированного списания."

Раздел B, Пункт 2.6.5 абзатц второй, специальных условий осуществления дебетовых 
операция списания:

"Запросы/Претензии/Требования клиента (...) и отрицание/отклонение ответчиком
(клиентом) иска в сторону банка, по причине ошибочно проведённого платежа или 
вследствии неавторизованного платежа не допускаются со стороны Банка, если клиент 
проинформировал Банк как минимум в пределах 13-ти месяцев, с момента совершения 
списания денег, об ошибочно проведённом платеже или о неавторизоавнном 
осуществлённом платеже. Данный срок начинается только с того момента, как Банк 
проифнормирует клиента о проводке по дебету соотвествующего платежа, в соответсвии
с передаваемыми клиенту данными о счёте путём Выписки со счёта, в течение месяца, 
с момента вышеупомянутой проводке по дебету; в любом другом случае, начало данного
срока поределяется в соответсвии с днём, когда банк осведомит клиента любым другим
способом о данной проводке по дебету."

//////////////////////////////////////////////////////////////////////////////////////////////

# Stadtsparkasse Düsseldorf

Camphausenstraße 18, 40479 Düsseldorf, Германия
sskduesseldorf.de
+49 211 8782211
Открыто:  24 часа в сутки

Предложить исправление



# Быстрые пути в Проводнике

https://www.sevenforums.com/tutorials/85487-common-file-dialog-box-customize-places-bar.html


# HelloWorld
My first Project on Github

BEFORE EVERY INTERVIEW | BEFORE EVERY INTERVIEW | BEFORE EVERY INTERVIEW
https://www.slideshare.net/olvemaudal/deep-c/16-What_will_happen_if_you

BEFORE EVERY INTERVIEW | BEFORE EVERY INTERVIEW | BEFORE EVERY INTERVIEW


100% Threadsafe code
http://www.bogotobogo.com/cplusplus/C11/8_C11_Race_Conditions.php


http://stellenanzeige.monster.de/softwareentwickler-c-m-w-job-nürnberg-bayern-deutschland-180510068.aspx?mescoid=1500127001001&jobPosition=1


https://www.monster.de/karriereberatung/artikel/anschreiben-bewerbung-softwareingenieur

Moskau, den 20. Februar 2017
 
Bewerbung als Softwareentwickler C++
Anzeige /www.monster.de vom 10. November 2011

Sehr geehrter Herr Göpfert



Ich freue mich, Sie in einem persönlichen Gespräch überzeugen zu können. Mit freundlichen Grüßen

Klaus-Peter Magenau (als Unterschrift)

Anlagen




LINKEDIN

https://ru.linkedin.com/in/pavel-obrosov-416481130

XING

https://www.xing.com/profile/Obrosov_Pavel?sc_o=mxb_p

MONSTER.DE

https://www.monster.de/profile/profile/



Website with an example of how the Text in MD-File here on Git will look like:

http://dillinger.io



Джеффри РИХТЕР - WINDOWS для Профессионалов (C++) [Вся книга Онлайн]

http://wm-help.net/books-online/book/59464/59464.html

http://www.e-reading.club/bookreader.php/135055/Rihter_-_Windows_dlya_professionalov__sozdanie_effektivnyh_Win32-prilozheniii_s_uchetom_specifiki_64-razryadnoii--oe_izd.pdf


МиниРихтер

http://bsuir-helper.ru/sites/default/files/2011/01/24/met/spo_lectures.doc


_beginthread vs _beginthreadex vs CreateThread C++
http://stackoverflow.com/questions/331536/windows-threading-beginthread-vs-beginthreadex-vs-createthread-c
CreateThread() is a raw Win32 API call for creating another thread of control at the kernel level.

_beginthread() & _beginthreadex() are C runtime library calls that call CreateThread() behind the scenes. Once CreateThread() has returned, _beginthread/ex() takes care of additional bookkeeping to make the C runtime library usable & consistent in the new thread.

In C++ you should almost certainly use _beginthreadex() unless you won't be linking to the C runtime library at all (aka MSVCRT*.dll/.lib).


# Критическая Секция

Критическая секция — участок исполняемого кода программы, в котором производится доступ к общему ресурсу (данным или устройству), который не должен быть одновременно использован более чем одним потоком исполнения. При нахождении в критической секции двух (или более) процессов возникает состояние «гонки» («состязания»). Для избежания данной ситуации необходимо выполнение четырех условий:

Два процесса не должны одновременно находиться в критических областях.
В программе не должно быть предположений о скорости или количестве процессоров.
Процесс, находящийся вне критической области, не может блокировать другие процессы.
Невозможна ситуация, в которой процесс вечно ждет попадания в критическую область.
Критическая секция (англ. critical section) — объект синхронизации потоков, позволяющий предотвратить одновременное выполнение некоторого набора операций (обычно связанных с доступом к данным) несколькими потоками. Критическая секция выполняет те же задачи, что и мьютекс.

Между мьютексом и критической секцией есть терминологические различия, так процедура, аналогичная захвату мьютекса, называется входом в критическую секцию (англ. enter), снятию блокировки мьютекса — выходом из критической секции (англ. leave).

Процедура входа и выхода из критических секций обычно занимает меньшее время, нежели аналогичные операции мьютекса, что связано с отсутствием необходимости обращаться к ядру ОС.

В операционных системах семейства Microsoft Windows разница между мьютексом и критической секцией в том, что мьютекс является объектом ядра и может быть использован несколькими процессами одновременно, критическая секция же принадлежит процессу и служит для синхронизации только его потоков.

Критические секции Windows имеют оптимизацию, заключающуюся в использовании атомарно изменяемой переменной наряду с объектом «событие синхронизации» ядра. Захват критической секции означает атомарное увеличение переменной на 1. Переход к ожиданию на событии ядра осуществляется только в случае, если значение переменной до захвата было уже больше 0, то есть происходит реальное «соревнование» двух или более потоков за ресурс.

Таким образом, при отсутствии соревнования захват/освобождение критической секции обходятся без обращений к ядру.

Кроме того, захват уже занятой критической секции до обращения к ядру какое-то малое время ждёт в цикле (кол-во итераций цикла (англ. spin count) задаётся функциями InitializeCriticalSectionAndSpinCount() или SetCriticalSectionSpinCount()) опроса переменной числа текущих пользователей, и, если эта переменная становится равной 0, то захват происходит без обращений к ядру.

Сходный объект в ядре Windows называется FAST_MUTEX (ExAcquire/ReleaseFastMutex). Он отличается от критической секции отсутствием поддержки рекурсивного повторного захвата тем же потоком.

Аналогичный объект в Linux называется фьютекс.



# Перегружать можно следующие операторы:

http://interviewinit.com/2015/03/какие-операторы-нельзя-перегружать-к/

+ — * / % ^ & | ~ ! = < >

+= -= *= /= %= ^= &= |=

<< >> >>= <<= == != <= >=

&& || ++ — ->* , -> [] ()

new new[] delete delete[]

# ПЕРЕГРУЖАТЬ НЕЛЬЗЯ

     :: (разрешение области видимости)
     . (выбор члена)
     .* (выбор члена через указатель на член)
     ?: тернарный оператор
     sizeof, typeid
У первых трех в правой части имя, а не значение.

У тернарного оператора аж 3 параметра, к тому же его возвращаемое значение является l-value.

Переопределять sizeof, typeid, думаю, просто нет смысла.


    Для встроенных типов данных перегружать операции нельзя, потому что тип — это набор данных и операций над ними. Изменяя операции, выполняемые над данными типа, мы меняем само определение типа. Также, нельзя изменить приоритет операции и определить новую операцию.


# Как работает REALLOC

http://cppstudio.com/post/860/





# DEUTSCHLAND ARBEITS ANGEBOTE

Wir bieten Ihnen interessante fachliche Herausforderungen und ein angenehmes Betriebsklima. Ihre gründliche Einarbeitung erachten wir als wesentlichen Baustein für unseren gemeinsamen Erfolg. Wir freuen uns auf Ihre aussagekräftige Bewerbung, die Sie uns idealerweise 
per E-Mail in einer 

PDF-Datei, unter Angabe Ihrer 

Gehaltsvorstellungen und des frühestmöglichen 

Ihrer Gehaltsvorstellungen (Bruttojahreszielgehalt)

sowie ggf. Reise- und Umzugsbereitschaft

Eintrittstermins zukommen lassen.

    //Standort: Nürnberg
MFC - http://stellenanzeige.monster.de/softwareentwickler-c-weiterentwicklung-eines-branchenspezifischen-erp-systems-inhouse-m-w-job-nürnberg-bayern-deutschland-175698832.aspx?mescoid=1500127001001&jobPosition=1

    //Standort: Rosenheim
MFC - http://stellenanzeige.monster.de/softwareentwickler-c-entwicklung-von-anwendungen-bei-einem-produkthersteller-inhouse-m-w-job-rosenheim-bayern-deutschland-180244220.aspx?mescoid=1500127001001&jobPosition=1


    //Standort: Rosenheim
QT - bis-65-000-€ - http://stellenanzeige.monster.de/softwareentwickler-c-qt-guis-für-messtechnik-bis-65-000-€-inhouse-m-w-job-rosenheim-bayern-deutschland-167878006.aspx?mescoid=1500127001001&jobPosition=1

    //Standort: Rosenheim
QT - bis-70-000-€ - http://stellenanzeige.monster.de/software-achitekt-c-qt-monitoring-systeme-bis-70-000-€-inhouse-m-w-job-rosenheim-bayern-deutschland-172107908.aspx?mescoid=9901111000004&jobPosition=1

    //Standort: Hannover
QT - http://stellenanzeige.monster.de/softwareentwickler-c-qt-ms-visual-studio-oracle-mit-pl-sql-inhouse-m-w-job-hannover-niedersachsen-deutschland-167876875.aspx?mescoid=1500127001001&jobPosition=1

    // Standort: Kiel
QT - http://stellenanzeige.monster.de/softwareentwickler-c-qt-m-w-job-kiel-schleswig-holstein-deutschland-178564604.aspx?mescoid=1500127001001&jobPosition=1

    // Standort: Braunschweig //GOM GmbH Schmitzstraße 2 Deutschland Tel.: 0531 390290 E-Mail: jobs@gom.com 
QT - 3D-Bildbearbeitung / CAD-/CAM-Umfeld - http://stellenanzeige.monster.de/softwareentwickler-c-m-w-bildverarbeitung-robotik-gui-job-braunschweig-niedersachsen-deutschland-180784810.aspx?mescoid=1500127001001&jobPosition=1




# USA JOB OFFER

    //WEBSITES // WITH H1B

http://www.techfetch.com/


http://www.techfetch.com/JS/JS_view_job.aspx?js=3131574

http://www.techfetch.com/JS/JS_view_job.aspx?js=3119668

http://www.techfetch.com/JS/JS_view_job.aspx?js=3126725



https://www.glassdoor.com/job-listing/senior-c-mfc-software-engineer-penrad-JV_IC1142551_KO0,30_KE31,37.htm?jl=2278574677

https://duo.com/about/careers/job/46835?gh_jid=46835&gh_src=76gjcl

http://chm.tbe.taleo.net/chm03/ats/careers/requisition.jsp?org=TRIMBLE&cws=1&rid=10097

https://www.glassdoor.com/job-listing/software-developer-cc-in-windows-icl-georgia-tech-research-institute-JV_IC1155583_KO0,36_KE37,68.htm?jl=1861913514

https://www.glassdoor.com/job-listing/sr-software-engineer-veritas-JV_IC1162334_KO0,20_KE21,28.htm?jl=1988795595

    //Standort: Nürnberg
MFC - 

# UK JOB OFFERS

    //WEBSITES // WITH H1B

https://uk.jora.com/MFC-C++-Developer-jobs#email_alert_modal



# БАНК-КЛИЕНТ

Необходимо разработать сервис для работы с банковскими учётными записями, и приложение "Банк-Клиент".

ФТ (Функциональные требования):

ПРИЛОЖЕНИЕ "БАНК-КЛИЕНТ":
- Необходимо разработать приложение для взаимодействия с владельцем учетной записи банка и симулирующую процесс работы и его обслуживания в банкомате.
- У приложения должны быть следующие экранные формы:
1. Форма "Приветствия" (Сделайте доступным для ввода 4 целых числа - id пользователя, для симуляции сканирования карты банка)
2. Форма ввода PIN-кода
3. Главное меню с ссылками на следующие Формы. Дополните как функциональность так и формы для этих опций.
3.1. Проверка баланса
3.2. Выдача наличных
3.3. смена PIN-кода
3.4. Выписка со счёта клиента
- Для ввода информации используйте мышь и клавиатуру.
- Осуществляя трансакцию снимите фото человека используя веб-камеру. Если веб-камера отсутствует, используйте симулятор веб-камеры.
- Сохраните фото в директории приложения с названием файла в формате "idпользователя_датавремя"
- URL для соединения с сервисом, имя клиента и пароль настраиваются на стороне клиента в config-файле.

СЕРВИС:
- Для создания облачного (cloud based) Веб-Сервис используйте технологию RESTful.
1. Сервис должен содержать в себе систему защиты - логин/пароль.
2. Каждый логин уникален и идентифицирует каждую подключившуюся к системе пользовательскую машину.
3. Конфигурация каждого пользователя расположено в config-файле.
4. Сервис предоставляет все необходимые методы и действия, которые требуются для работы приложения "Банк-Клиент"

Техническое задание

Сервис: 
- Должен быть разработан с использованием Casablanca C++ REST SDK.
- Должен использовать обычный текстовый файл для хранения данных, а не полноценную БД.

Приложение "Банк-Клиент":
- Должно быть создано как "MFC windows forms application".
- Установка должна будет производиться как windows shell, а не из под explorer.exe.
- Приложение должно использовать "Рыбу" вместо полноценной БД (Рекомендуется обычный текстовый файл).
- Для работы с Веб-камерой используйте DirectShow или Windows platform SDK или любое другое API.
- Встройте валидацию, на вводимые символы, цифры, и значения, где это возможно или необходимо, как на стороне Сервиса так и на стороне Приложения.
- Приложение должно быть полностью рабочим - не допускайте в коде Критических ошибок, Выброса исключений и Непредвиденных падений приложения. 
- Добавьте недостающего функционала по необходимости, если вам покажется это правильным с логической и пользовательской точки зрения.
- НАПИШИТЕ ЮНИТ-ТЕСТЫ !!!

