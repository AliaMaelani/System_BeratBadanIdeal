#include <iostream>
using namespace std;

// Function to calculate ideal weight using Broca's formula for men
float brocaMen(float height) {
    return (height - 100) - ((height - 100) * 0.1);
}

// Function to calculate ideal weight using Broca's formula for women
float brocaWomen(float height) {
    return (height - 100) - ((height - 100) * 0.15);
}

// Function to calculate BMI
float calculateBMI(float weight, float height) {
    return weight / ((height / 100.0) * (height / 100.0)); // Convert height to meters
}

// Function to display BMI category based on BMI value
void displayBMICategory(float bmi) {
    if (bmi < 18.5) {
        cout << "Underweight (Kurus)\n";
    } else if (bmi < 24.9) {
        cout << "Normal Weight (Berat Badan Normal)\n";
    } else if (bmi < 29.9) {
        cout << "Overweight (Kelebihan Berat Badan)\n";
    } else if (bmi < 34.9) {
        cout << "Obesity Tingkat 1\n";
    } else if (bmi < 39.9) {
        cout << "Obesity Tingkat 2\n";
    } else {
        cout << "Obesity Tingkat 3 (Obesitas Morbid)\n";
    }
}

int main() {
    int option;
    float weight, height;

    cout << "\n\n\nHallo, Selamat Datang di Sistem Berat Badan Ideal.\n";
    cout << "Apa yang ingin kamu ketahui? Pilih opsi berikut:\n";
    cout << "\n===============================================\n";
    cout << "                    Menu\n";
    cout << "===============================================\n";
    cout << "            1. Hitung Berat Badan Ideal\n";
    cout << "-----------------------------------------------\n";
    cout << "            2. Rekomendasi Makanan & Minuman\n";
    cout << "-----------------------------------------------\n";
    cout << "            3. Tips Berat Badan Ideal\n";
    cout << "-----------------------------------------------\n";
    cout << "            4. Tips Menambah Berat Badan\n";
    cout << "-----------------------------------------------\n";
    cout << "            5. Tips Menurunkan Berat Badan\n";
    cout << "-----------------------------------------------\n";
    cout << "            6. Konsultasi Dokter & Ahli Gizi\n";
    cout << "-----------------------------------------------\n";
    cout << "            7. Tentang Kami\n";
    cout << "===============================================\n";
    cout << "Pilih Opsi Nomor: \n";
    cin >> option;
    cout << "===============================================\n";

    switch (option) {
        case 1:
            cout << "\n\n\n===============================================\n";
            cout << "Pilihlah Metode Perhitungan Berat Badan Ideal:\n";
            cout << "===============================================\n";
            cout << "            1. Rumus Broca\n";
            cout << "-----------------------------------------------\n";
            cout << "            2. Kalkulator BMI\n";
            cout << "===============================================\n";
            cout << "Pilih Opsi Nomor: ";
            cin >> option;
            cout << "===============================================\n";

            if (option == 1) {
                cout << "\n\n===============================================\n";
                cout << "                PERHITUNGAN BROCA\n";
                cout << "===============================================\n";
                cout << "Masukkan Berat Badan Anda (kg): ";
                cin >> weight;
                cout << "-----------------------------------------------\n";
                cout << "\nMasukkan Tinggi Badan Anda (m): ";
                cin >> height;
                cout << "-----------------------------------------------\n";
                float idealWeight;
                // Asking for gender
                char gender;
                cout << "===============================================\n";
                cout << "Apakah Anda pria (p) atau wanita (w)? ";
                cin >> gender;
                cout << "===============================================\n";
                if (gender == 'p') {
                    idealWeight = brocaMen(height);
                } else if (gender == 'w') {
                    idealWeight = brocaWomen(height);
                } else {
                    cout << "Input tidak valid\n";
                    return 1;
                }
                cout << "===============================================\n";
                cout << "Berat Badan Ideal Anda adalah: " << idealWeight << " kg\n";
                cout << "===============================================\n";

            } else if (option == 2) {
                cout << "\n\n===============================================\n";
                cout << "                PERHITUNGAN BMI\n";
                cout << "===============================================\n";
                cout << "Masukkan Berat Badan Anda (kg): ";
                cin >> weight;
                cout << "-----------------------------------------------\n";
                cout << "Masukkan Tinggi Badan Anda (m): ";
                cin >> height;
                cout << "-----------------------------------------------\n";
                float bmi = calculateBMI(weight, height);
                cout << "BMI Anda: " << calculateBMI(weight, height) << "\n";
                cout << "-------------------------------------------------------------------------\n";
                cout << "Keterangan: Berat badan anda termasuk dalam kategori ";
                displayBMICategory(bmi);
                cout << "-------------------------------------------------------------------------\n";

            } else {
                cout << "Opsi tidak valid" << endl;
                return 1;
            }
            break;

            case 2:
                cout << "\n\n==================================================================================================\n";
                cout << "                             Rekomendasi Makanan & Minuman\n";
                cout << "===================================================================================================\n";
                cout << "                                          Makanan \n";
                cout << "====================================================================================================\n";
                cout << "1. Brokoli : Brokoli rendah kalori tetapi kaya akan serat, vitamin C, dan vitamin K.\n\tSeratnya membantu menjaga rasa kenyang lebih lama dan menjaga pencernaan yang sehat\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "2. Salmon: Salmon adalah sumber protein tinggi dengan tambahan asam lemak omega-3, \n\tyang baik untuk kesehatan jantung dan otak. Protein membantu membangun otot dan mengatur rasa lapar.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "3. Tahu : Tahu adalah sumber protein nabati yang baik, rendah lemak, dan kaya akan \n\tzat besi dan kalsium. Ini juga mengandung fitonutrien yang bisa membantu menurunkan risiko penyakit \n\tjantung.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "4. Quinoa: Quinoa adalah sumber karbohidrat kompleks yang kaya akan protein, serat, \n\tdan nutrisi penting lainnya seperti magnesium dan fosfor. Ini juga rendah indeks glikemik, yang berarti \n\ttidak menyebabkan lonjakan gula darah seperti karbohidrat sederhana.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "5. Alpukat: Alpukat mengandung lemak sehat tak jenuh tunggal, serat, dan sejumlah nutrisi\n\t penting lainnya seperti vitamin K, vitamin E, dan potassium. Lemak sehat ini membantu menjaga kenyang \n\tdan meningkatkan penyerapan nutrisi lainnya.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "6. Telur: Telur adalah sumber protein berkualitas tinggi yang mengandung semua asam amino\n\t esensial yang dibutuhkan oleh tubuh. Mereka juga mengandung lemak sehat dan nutrisi penting lainnya\n\t seperti vitamin B12 dan D.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "7. Bayam: Bayam rendah kalori tetapi kaya akan vitamin dan mineral seperti vitamin A,\n\t vitamin K, dan folat. Mereka juga mengandung antioksidan kuat yang membantu melawan kerusakan sel.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "8. Oatmeal : Oatmeal adalah sumber karbohidrat kompleks yang mengandung serat larut \n\tyang membantu menjaga rasa kenyang dan mengatur gula darah. Ini juga mengandung beta-glukan, yang telah\n\t terbukti membantu menurunkan kolesterol.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "9. Yogurt Yunani rendah lemak: Yogurt Yunani rendah lemak adalah sumber protein tinggi\n\t dan rendah kalori yang juga mengandung probiotik, yang membantu menjaga kesehatan pencernaan.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "10. Ayam tanpa kulit : Ayam tanpa kulit adalah sumber protein rendah lemak yang ideal.\n\t Protein membantu memperbaiki dan membangun jaringan otot.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "11. Kacang-kacangan: Kacang-kacangan seperti kacang almond, kenari, dan kacang lentil\n\t kaya akan protein, serat, lemak sehat, dan nutrisi penting lainnya. Mereka juga mengandung antioksidan\n\t yang membantu melawan radikal bebas.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "12. Wortel: Wortel rendah kalori dan mengandung beta-karoten, yang dikonversi menjadi\n\t vitamin A dalam tubuh. Ini penting untuk kesehatan mata dan sistem kekebalan tubuh.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "13. Jeruk: Jeruk mengandung vitamin C yang tinggi, antioksidan, dan serat. Vitamin C\n\t penting untuk kesehatan sistem kekebalan tubuh dan membantu penyerapan zat besi.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "14. Buncis : Buncis rendah kalori tetapi kaya akan serat, vitamin K, dan vitamin C.\n\t Seratnya membantu menjaga pencernaan yang sehat dan mengontrol kadar gula darah.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "15. Keju cottage rendah lemak : Keju cottage rendah lemak mengandung protein tinggi \n\tdan kalsium, yang baik untuk kesehatan tulang dan otot.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "16. Tomat: Tomat mengandung likopen, antioksidan yang membantu melawan radikal bebas \n\tdan mengurangi risiko penyakit jantung. Mereka juga kaya akan vitamin C dan potassium.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "17. Stroberi: Stroberi rendah kalori dan mengandung vitamin C, serat, dan antioksidan. \n\tMereka juga diketahui memiliki sifat anti-inflamasi.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "18. Kentang rebus: Kentang rebus adalah sumber karbohidrat kompleks yang mengandung serat,\n\t potassium, dan vitamin C. Penting untuk memilih kentang rebus daripada yang digoreng untuk menjaga\n\t kandungan lemak dan kalori yang rendah.\n";
                cout << "\n====================================================================================================\n";
                cout << "                                             Minuman\n";
                cout << "====================================================================================================\n";
                cout << "1. Air Putih: Air penting untuk hidrasi tubuh dan menjaga fungsi normal tubuh,\n\t termasuk metabolisme yang sehat.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "2. Teh Hijau: Teh hijau mengandung antioksidan kuat yang disebut katekin, yang \n\tdapat membantu meningkatkan metabolisme dan membakar lemak.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "3. Air Lemon: Air lemon segar mengandung vitamin C dan antioksidan, serta dapat \n\tmembantu membersihkan racun dari tubuh.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "4. Kopi Hitam: Kopi hitam rendah kalori dan kaya akan antioksidan. Kandungan \n\tkafeinnya dapat membantu meningkatkan metabolisme dan meningkatkan fokus.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "5. Teh Herbal: Teh herbal tanpa kafein seperti chamomile atau peppermint dapat \n\tmembantu meredakan stres dan meningkatkan kualitas tidur.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "6. Air Kelapa: Air kelapa mengandung elektrolit alami dan rendah kalori, yang \n\tmembuatnya menjadi minuman hidrasi yang baik.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "7. Smoothie Sayuran : Smoothie yang terbuat dari campuran sayuran dan buah-buahan \n\tmemberikan nutrisi yang kaya dan menyegarkan.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "8. Jus Buah-buahan Segar : Jus buah-buahan segar tanpa tambahan gula merupakan sumber \n\tvitamin dan antioksidan alami.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "9. Susu rendah lemak: Susu rendah lemak adalah sumber kalsium dan protein yang penting \n\tuntuk kesehatan tulang dan otot.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "10. Kombucha: Kombucha adalah minuman probiotik yang baik untuk kesehatan pencernaan \n\tdan sistem kekebalan tubuh.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "11. Air Jahe: Air jahe memiliki sifat anti-inflamasi dan dapat membantu meningkatkan\n\t pencernaan.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "12. Teh Chamomile: Teh chamomile memiliki sifat menenangkan dan dapat membantu mengurangi\n\t kecemasan dan stres.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "13. Teh Jahe : Teh jahe memiliki sifat anti-inflamasi alami dan dapat membantu mengurangi mual.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "14. Air Lemon Mint : Air lemon mint segar dan menyegarkan, serta membantu meredakan\n\t gangguan pencernaan.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "15. Infused Water : Infused water adalah air yang diberi rasa dengan buah-buahan, \n\tsayuran, atau rempah-rempah, memberikan rasa yang menyegarkan tanpa tambahan gula.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "16. Teh Rooibos : Teh rooibos tanpa kafein kaya akan antioksidan dan dapat membantu\n\t meningkatkan kualitas tidur.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "17. Air Timun : Air timun menyegarkan dan rendah kalori, serta mengandung antioksidan\n\t dan elektrolit alami.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "18. Teh Oolong: Teh oolong membantu meningkatkan metabolisme dan membakar lemak dengan cepat.\n";
                cout << "\n\n====================================================================================================\n";
                cout << "\tPastikan untuk tetap memperhatikan porsi makanan Anda dan menghindari makanan yang \n";
                cout << "\tmengandung banyak gula tambahan, lemak jenuh, dan garam. Kombinasi pola makan sehat \n";
                cout << "\tdengan olahraga yang teratur akan membantu Anda mencapai dan mempertahankan berat badan \n";
                cout << "\tideal. Tetaplah konsisten dan berkonsultasilah dengan ahli gizi atau dokter jika Anda memiliki \n";
                cout << "\tpertanyaan atau kekhawatiran kesehatan.\n";
                cout << "====================================================================================================\n";
                break;

            case 3:
                cout << "\n\n====================================================================================================\n";
                cout << "                                    Tips Berat Badan Ideal\n";
                cout << "====================================================================================================\n";
                cout << "    Berikut ini adalah beberapa tips untuk mencapai dan mempertahankan berat badan ideal:\n";
                cout << "====================================================================================================\n";
                cout << "1. Pola Makan Seimbang : Konsumsi makanan yang seimbang antara karbohidrat kompleks, protein,\n   lemak sehat, serat, serta buah-buahan dan sayuran. Hindari makanan olahan yang tinggi gula tambahan,\n   lemak jenuh, dan sodium.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "2. Perhatikan Porsi Makan : Jaga agar porsi makan Anda sesuai dengan kebutuhan tubuh. Hindari\n   makan berlebihan dan mengonsumsi makanan secara berlebihan meskipun itu makanan sehat.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "3. Hindari Makanan Siap Saji: Makanan siap saji seringkali mengandung banyak kalori, lemak\n   trans, dan gula tambahan. Lebih baik memasak makanan sendiri di rumah menggunakan bahan-bahan segar.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "4. Olahraga Teratur: Lakukan olahraga secara teratur, minimal 3-4 kali seminggu. Pilihlah jenis\n   olahraga yang Anda nikmati agar lebih konsisten dalam menjalankannya.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "5. Tidur yang Cukup : Pastikan Anda mendapatkan tidur yang cukup setiap malam. Kurang tidur\n   dapat mempengaruhi hormon yang mengatur nafsu makan dan metabolisme.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "6. Kontrol Stres : Kelola stres dengan baik melalui teknik relaksasi seperti meditasi, yoga,\n   atau menghabiskan waktu dengan hobi yang menyenangkan.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "7.  Minum Air Secukupnya : Pastikan Anda tetap terhidrasi dengan minum air setidaknya 8 gelas\n    sehari. Terkadang rasa haus bisa disalahartikan sebagai rasa lapar.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "8. Makan Perlahan: Nikmati setiap gigitan makanan dengan cara mengunyahnya perlahan-lahan. Ini\n   dapat membantu Anda merasa lebih kenyang dengan porsi yang lebih kecil.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "9. Hindari Makan di Depan Layar: Hindari makan sambil menonton TV atau bekerja di depan komputer.\n   Ini dapat membuat Anda tidak sadar mengonsumsi lebih banyak makanan dari yang seharusnya.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "10. Berpegang pada Tujuan Jangka Panjang : Fokus pada tujuan jangka panjang Anda untuk memiliki\n    gaya hidup sehat dan menjaga berat badan ideal, bukan hanya mencari hasil cepat dalam waktu singkat.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "11. Konsultasi dengan Ahli Gizi: Jika Anda memiliki pertanyaan atau kekhawatiran tentang pola\n    makan dan berat badan, konsultasikan dengan ahli gizi atau dokter untuk saran yang tepat sesuai\n    kebutuhan Anda.\n";
                cout << "\n\n====================================================================================================\n";
                cout << "Dengan mengikuti tips-tips di atas secara konsisten, Anda dapat mencapai dan mempertahankan berat \n";
                cout << "badan ideal serta meningkatkan kesehatan secara keseluruhan.\n";
                cout << "====================================================================================================\n";
                break;
            case 4:
                cout << "\n\n====================================================================================================\n";
                cout << "                                    Tips Menambah Berat Badan\n";
                cout << "====================================================================================================\n";
                cout << "Berikut adalah beberapa tips untuk menambah berat badan secara sehat:\n";
                cout << "====================================================================================================\n";
                cout << "1. Konsumsi Makanan Bergizi Tinggi Kalori : Pilih makanan yang kaya akan kalori namun tetap bergizi,\n   seperti almond, kacang-kacangan, alpukat, kacang-kacangan, keju, daging tanpa lemak,\n   dan minyak zaitun.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "2. Tingkatkan Porsi Makan: Makanlah porsi yang lebih besar daripada biasanya pada setiap waktu makan.\n   Anda juga bisa menambahkan makanan ringan di antara waktu makan utama.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "3. Frekuensi Makan yang Lebih Sering : Cobalah untuk makan lebih sering, setidaknya 5-6 kali sehari.\n   Hal ini membantu meningkatkan asupan kalori harian Anda secara keseluruhan.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "4. Pilih Camilan Tinggi Protein : Camilan tinggi protein seperti kacang-kacangan, yogurt, atau telur\n   rebus bisa menjadi pilihan yang baik untuk menambah kalori dalam diet Anda.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "5. Tingkatkan Konsumsi Karbohidrat : Karbohidrat kompleks seperti roti gandum, nasi merah, pasta gandum\n   utuh, dan kentang bisa membantu meningkatkan asupan kalori Anda.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "6. Tambahan Sumber Lemak Sehat: Tambahkan sumber lemak sehat dalam diet Anda seperti minyak zaitun,\n   minyak kelapa, atau alpukat. Lemak sehat membantu meningkatkan jumlah kalori yang\n   Anda konsumsi.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "7. Minum Suplemen : Jika Anda kesulitan mencapai asupan kalori yang dibutuhkan dari makanan saja,\n   pertimbangkan untuk mengonsumsi suplemen gizi seperti protein shake, minyak ikan,\n   atau suplemen penambah berat badan lainnya.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "8. Olahraga dengan Pintar: Meskipun olahraga membakar kalori, Anda masih perlu berolahraga untuk menjaga\n   kesehatan Anda. Pilih jenis olahraga yang lebih ke arah kekuatan (strength training)\n   yang membantu membangun otot daripada kardiovaskular yang membakar banyak kalori.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "9. Istirahat yang Cukup: Pastikan Anda mendapatkan istirahat yang cukup setiap malam. Istirahat yang cukup\n   membantu tubuh memulihkan diri dan membangun otot setelah aktivitas fisik.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "10. Konsultasi dengan Ahli Gizi atau Dokter : Jika Anda kesulitan menambah berat badan atau memiliki\n    kekhawatiran kesehatan, penting untuk berkonsultasi dengan ahli gizi atau dokter untuk mendapatkan\n    saran yang tepat sesuai kebutuhan Anda.\n";
                cout << "\n\n====================================================================================================\n";
                cout << "    Ingatlah bahwa menambah berat badan secara sehat memerlukan waktu dan konsistensi. Selalu \n";
                cout << "    prioritaskan kesehatan Anda dan pertimbangkan untuk mendapatkan bantuan profesional jika \n";
                cout << "    diperlukan\n";
                cout << "====================================================================================================\n";
                break;

            case 5:
                cout << "\n\n===========================================================================================================\n";
                cout << "                                Tips Menurunkan Berat Badan\n";
                cout << "===========================================================================================================\n";
                cout << " Berikut adalah beberapa tips untuk menurunkan berat badan secara sehat:\n";
                cout << "===========================================================================================================\n";
                cout << "1. Konsumsi Makanan Sehat dan Rendah Kalori: Pilih makanan yang rendah kalori namun kaya akan nutrisi,\n   seperti buah-buahan, sayuran, biji-bijian utuh, dan protein rendah lemak seperti dada ayam tanpa kulit,\n   ikan, dan tahu.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "2. Perhatikan Porsi Makan: Hindari makan berlebihan dengan memperhatikan porsi makan Anda. Gunakan piring\n   yang lebih kecil, hindari mengulangi porsi, dan nikmati makanan secara perlahan-lahan.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "3. Kurangi Konsumsi Makanan Tinggi Lemak dan Gula : Batasi konsumsi makanan olahan yang tinggi lemak jenuh\n   dan gula tambahan, seperti kue-kue, permen, camilan bergula, dan minuman manis.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "4. Perbanyak Konsumsi Serat: Serat membantu menjaga rasa kenyang lebih lama sehingga Anda cenderung makan\n   lebih sedikit. Konsumsilah makanan tinggi serat seperti buah-buahan, sayuran, biji-bijian utuh, dan\n   kacang-kacangan.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "5. Minum Air Secukupnya: Seringkali rasa haus dapat disalahartikan sebagai rasa lapar. Pastikan Anda\n   terhidrasi dengan baik dengan minum air putih setidaknya 8 gelas sehari.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "6. Olahraga Teratur : Lakukan olahraga secara teratur, minimal 3-4 kali seminggu. Pilihlah jenis\n   olahraga yang Anda nikmati seperti berjalan kaki, berlari, bersepeda, atau berenang.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "7. Hindari Makanan Siap Saji : Makanan siap saji seringkali mengandung banyak kalori dan lemak jenuh.\n   Lebih baik memasak makanan sendiri di rumah menggunakan bahan-bahan segar.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "8. Hindari Makan di Depan Layar : Hindari makan sambil menonton TV atau bekerja di depan komputer. Ini\n   dapat membuat Anda tidak sadar mengonsumsi lebih banyak makanan dari yang seharusnya.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "9. Istirahat yang Cukup: Pastikan Anda mendapatkan istirahat yang cukup setiap malam. Kurang tidur dapat\n   mengganggu hormon yang mengatur nafsu makan dan metabolisme.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "10. Jaga Konsistensi dan Kesabaran : Menurunkan berat badan membutuhkan waktu dan konsistensi. Fokuslah\n    pada perubahan gaya hidup yang dapat dipertahankan dalam jangka panjang daripada mencari hasil cepat\n    dalam waktu singkat.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "11. Catat Asupan Makanan : Mencatat makanan yang Anda konsumsi dapat membantu Anda menyadari pola makan\n    Anda dan mengidentifikasi area di mana Anda dapat melakukan perubahan.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "12. Konsultasi dengan Ahli Gizi atau Dokter: Jika Anda memiliki pertanyaan atau kekhawatiran tentang\n    program penurunan berat badan Anda, konsultasikan dengan ahli gizi atau dokter untuk saran\n    yang tepat sesuai kebutuhan Anda.\n";
                cout << "\n\n===========================================================================================================\n";
                cout << "    Ingatlah bahwa menurunkan berat badan secara sehat memerlukan waktu dan konsistensi. Selalu \n";
                cout << "    prioritaskan kesehatan Anda dan pertimbangkan untuk mendapatkan bantuan profesional jika \n";
                cout << "    diperlukan\n";
                cout << "===========================================================================================================\n";
                break;

            case 6:
                cout << "\n\n====================================================================================================\n";
                cout << "                            Konsultasi Dokter & Ahli Gizi\n";
                cout << "====================================================================================================\n";
                cout << "  Berikut ini adalah informasi konsultasi dengan dokter dan ahli gizi :\n";
                cout << "\====================================================================================================\n";
                cout << "\tNama Klinik : Klinik Lia Medika\n";
                cout << "\tAlamat : Jl. Harmoni No. 123, Kota Bahagia\n";
                cout << "\tNomor Telepon : 0812-3456-7890\n";
                cout << "\tEmail : info@klinikLiaMedika.com\n";
                cout << "====================================================================================================\n";
                cout << "\n\n\n\n====================================================================================================\n";
                cout << "                            Dokter & Ahli Gizi\n";
                cout << "====================================================================================================\n";
                cout << "\t\tDokter Spesialis Gizi : Dr. Fitriani Wijaya, M.Gizi\n\n";
                cout << "\tJadwal Praktek : \n";
                cout << "\tSenin-Jumat: 08.00 - 10.00\n";
                cout << "\tSabtu: 09.00 - 12.00\n";
                cout << "\n\tBiaya Konsultasi:\n";
                cout << "\tKonsultasi Dokter: Rp 200.000,-\n";
                cout << "\tKonsultasi dengan Ahli Gizi: Rp 250.000,-\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "\t\tDokter Spesialis Gizi: Dr. Aditya Pratama, M.Gizi\n\n";
                cout << "\tJadwal Praktek:\n";
                cout << "\tSenin-Jumat: 11.00 - 13.00\n";
                cout << "\tSabtu: 13.00 - 17.00\n";
                cout << "\n\tBiaya Konsultasi:\n";
                cout << "\tKonsultasi Dokter: Rp 250.000,-\n";
                cout << "\tKonsultasi dengan Ahli Gizi: Rp 300.000,-\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "\t\tDokter Spesialis Gizi: Dr. Saraswati Wibowo, M.Gizi\n\n";
                cout << "\tJadwal Praktek:\n";
                cout << "\tSenin-Jumat: 14.00 - 16.00\n";
                cout << "\n\tBiaya Konsultasi:\n";
                cout << "\tKonsultasi Dokter: Rp 300.000,-\n";
                cout << "\tKonsultasi dengan Ahli Gizi: Rp 350.000,-\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "\n\n\n\n====================================================================================================\n";
                cout << "                            Cara Mendaftar\n";
                cout << "====================================================================================================\n";
                cout << " Untuk membuat janji konsultasi, Anda dapat menghubungi nomor telepon klinik atau \n";
                cout << " mengirimkan email ke alamat yang tertera. Anda juga dapat datang langsung ke klinik selama \n";
                cout << " jam praktek untuk mendapatkan informasi lebih lanjut atau membuat janji temu.\n";
                cout << "--------------------------------------------------------------------------------------------------------\n";
                cout << "                            Catatan Penting :\n";
                cout << " Informasi ini bersifat fiktif dan hanya digunakan untuk tujuan ilustrasi.  \n";
                cout << " Tidak ada klinik atau individu yang terkait dengan informasi di atas secara nyata.  \n";
                cout << " Jika Anda membutuhkan layanan kesehatan sesungguhnya, silakan cari informasi yang akurat \n";
                cout << " dan konsultasikan dengan profesional kesehatan yang berkualifikasi.\n";
                cout << "====================================================================================================\n";
                break;
        case 7:
            cout << "\n\n====================================================================================================\n";
            cout << "                                 Tentang Kami\n";
            cout << "====================================================================================================\n";
            cout << "                                Deskripsi Klinik\n";
            cout << "====================================================================================================\n";
            cout << " Klinik Lia Medika  adalah klinik yang didedikasikan untuk menyediakan layanan kesehatan berkualitas\n";
            cout << " dengan fokus pada gizi dan nutrisi. Klinik ini dipimpin oleh Dr. Fitriani Wijaya, seorang \n";
            cout << " dokter spesialis gizi yang berpengalaman dan berkomitmen untuk membantu pasien mencapai \n";
            cout << " kesehatan optimal melalui pemahaman yang mendalam tentang pola makan dan gaya hidup sehat.\n";
            cout << "--------------------------------------------------------------------------------------------------------\n";
            cout << "\n\n\n\n====================================================================================================\n";
            cout << "                                Layanan Yang Tersedia\n";
            cout << "====================================================================================================\n";
            cout << "1. Konsultasi Gizi: Dokter dan ahli gizi kami siap memberikan konsultasi pribadi dan perencanaan \n";
            cout << "   diet yang disesuaikan dengan kebutuhan individu.\n";
            cout << "--------------------------------------------------------------------------------------------------------\n";
            cout << "2. Evaluasi Gizi: Penilaian menyeluruh terhadap status gizi pasien, termasuk pengukuran berat \n";
            cout << "   badan, tinggi badan, dan komposisi tubuh.\n";
            cout << "--------------------------------------------------------------------------------------------------------\n";
            cout << "3. Program Penurunan Berat Badan: Program penurunan berat badan yang disesuaikan dengan \n";
            cout << "   kondisi kesehatan dan tujuan masing-masing pasien.\n";
            cout << "--------------------------------------------------------------------------------------------------------\n";
            cout << "4. Program Peningkatan Berat Badan: Program yang dirancang khusus untuk membantu pasien \n";
            cout << "   yang ingin meningkatkan berat badan secara sehat dan berkelanjutan.\n";
            cout << "--------------------------------------------------------------------------------------------------------\n";
            cout << "5. Edukasi Gizi: Sesi edukasi kelompok atau individu tentang pentingnya nutrisi seimbang dan \n";
            cout << "   cara mencapai gaya hidup sehat.\n";
            cout << "\n\n====================================================================================================\n";
            cout << "                            Catatan Penting :\n";
            cout << " Informasi ini bersifat fiktif dan hanya digunakan untuk tujuan ilustrasi.  \n";
            cout << " Tidak ada klinik atau individu yang terkait dengan informasi di atas secara nyata.  \n";
            cout << " Jika Anda membutuhkan layanan kesehatan sesungguhnya, silakan cari informasi yang akurat \n";
            cout << " dan konsultasikan dengan profesional kesehatan yang berkualifikasi.\n";
            cout << "====================================================================================================\n";
            break;

        default:
            cout << "Opsi tidak valid\n";
            return 1;
    }

    int logoutOption;
    cout << "\n\n\n\n===============================================\n";
    cout << "Pilih:\n";
    cout << "===============================================\n";
    cout << "1. Log-out\n";
    cout << "------------------------------------------------\n";
    cout << "2. Kembali ke menu utama\n";
    cout << "------------------------------------------------\n";
    cout << "Pilih Opsi Nomor: ";
    cin >> logoutOption;
    cout << "===============================================\n";

    if (logoutOption == 1) {
        cout << "Terima kasih, sampai jumpa lagi!" << endl;
    } else if (logoutOption == 2) {
        main(); // Restart the program
    } else {
        cout << "Opsi tidak valid" << endl;
    }

    return 0;
}
