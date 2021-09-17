# Floyd's Cycle Detection Algoritması
- Bu algoritmanın linked list'in içindeki döngüleri eğer varsa tespit etmektedir. Eğer C programlama diliyle yazılmış olan kaynak koda erişmek 
istiyorsanız [buraya](https://github.com/MertPehlivancik/Data-Structures-and-Algorithms/tree/main/Data%20Structures/LinkedList) tıklayabilir ve kaynak kodları 
indirebilirsiniz. Sonrasında "linked_list_detect_loop_with_FloydCycleFindingAlgorithm" fonksiyonunu çağırarak listenin içinde döngü(loop) olup olmadığını tespit edebilirsiniz.
- Eğer bu dokümanı İngilizce olarak okumak istiyorsanız [buraya](Readme.md) tıklayınız.

## Açıklama
![](pic.png)
<div align="center">Görselin kaynağı (https://www.geeksforgeeks.org/detect-loop-in-a-linked-list/)</div>
<br>
İlk olarak iki tane pointer tanımlanmalıdır. Bunlardan birisi fast pointer iken diğeri ise slow pointer'dır. Algoritmaya göre eğer tanımlanan bu iki pointer aynı düğümde(node) karşılaşırlarsa bu linked list'de loop(döngü) vardır. Yukarıdaki görselde bu senaryo açıkça gösterilmiştir. Fast pointer linked list'de ikişer ikişer ilerlerken, slow pointer birer birer ilerler. 
