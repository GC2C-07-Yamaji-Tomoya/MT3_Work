#include <Novice.h>

const char kWindowTitle[] = "GC1B_09_ヤマジ_トモヤ";
const int kWindowWidth = 1280;
const int kWindowHeight = 720;

struct Vector3{
	float x, y, z;
};

//加算
Vector3 Add(const Vector3& v1, const Vector3& v2) {
	Vector3 result = { v1.x + v2.x, v1.y + v2.y, v1.z + v2.z };
	return result;
};
//減算
Vector3 Subtract(const Vector3& v1, const Vector3& v2) {

};
//スカラー倍
Vector3 Multiply(float scalar, const Vector3& v) {

};
//内積
float Dot(const Vector3& v1, const Vector3& v2) {

};
//長さ（ノルム）
float Length(const Vector3& v) {

};
//正規化
Vector3 Normalize(const Vector3& v) {

};




// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(_In_ HINSTANCE, _In_opt_ HINSTANCE, _In_ LPSTR, _In_ int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, kWindowWidth, kWindowHeight);

	// キー入力結果を受け取る箱
	char keys[256] = {0};
	char preKeys[256] = {0};

	// ウィンドウの×ボタンが押されるまでループ
	while (Novice::ProcessMessage() == 0) {
		// フレームの開始
		Novice::BeginFrame();

		// キー入力を受け取る
		memcpy(preKeys, keys, 256);
		Novice::GetHitKeyStateAll(keys);

		///
		/// ↓更新処理ここから
		///

		///
		/// ↑更新処理ここまで
		///

		///
		/// ↓描画処理ここから
		///

		///
		/// ↑描画処理ここまで
		///

		// フレームの終了
		Novice::EndFrame();

		// ESCキーが押されたらループを抜ける
		if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
			break;
		}
	}

	// ライブラリの終了
	Novice::Finalize();
	return 0;
}
