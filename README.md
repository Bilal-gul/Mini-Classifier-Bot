# 🧠 Mini Classifier Bot (C++)

Bu proje, kullanıcıdan gelen girdileri sınıflandıran ve yeni gelen verilerden öğrenebilen küçük bir C++ uygulamasıdır.

---

## 🎯 Amaç

- Kullanıcıdan gelen bir kelime ya da sayı, sistemin daha önce bildiği bir sınıfa aitse sınıfı gösterilir.
- Eğer daha önce görmemişse kullanıcıdan sınıf ismi istenir ve sistem bu bilgiyi hafızasına alır.

---

## 💬 Örnek Kullanım

Input: cat
I don't know. Which class? : animal

Input: bagel
I don't know. Which class? : food

Input: cat
Class: animal


---

## 🔧 Kullanılan Yapılar

- `map<string, string>` → input–class eşlemesi
- `getline()` → tüm satır girişini alma
- `find()` → varlık kontrolü
- `insert()` → öğrenme / veri ekleme

---

## 🧪 Dosya Bilgisi

- `mini_classifier.cpp` dosyası içerisinde yazılmıştır
- Konsol tabanlı, etkileşimli çalışma sağlar
- Giriş: `exit` → program sonlanır

---

## 👨‍💻 Geliştirici

**Bilal Gül**  
GitHub: [Bilal-gul](https://github.com/Bilal-gul)
