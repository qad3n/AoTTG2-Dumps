// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.SceneLoader
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/SceneLoader.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/SceneLoader.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Cameras;
using GameManagers;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace ApplicationManagers;

[Token(Token = "0x2000794")]
internal class SceneLoader : MonoBehaviour
{
	[Token(Token = "0x40024A6")]
	[FieldOffset(Offset = "0x0")]
	private static SceneLoader _instance;

	[Token(Token = "0x40024A7")]
	[FieldOffset(Offset = "0x8")]
	public static SceneName SceneName;

	[Token(Token = "0x40024A8")]
	[FieldOffset(Offset = "0x10")]
	public static BaseGameManager CurrentGameManager;

	[Token(Token = "0x40024A9")]
	[FieldOffset(Offset = "0x18")]
	public static BaseCamera CurrentCamera;

	[Token(Token = "0x40024AA")]
	[FieldOffset(Offset = "0x20")]
	public static MinimapCamera MinimapCamera;

	[Token(Token = "0x6004944")]
	[Address(RVA = "0x43BFF30", Offset = "0x43BFF30", VA = "0x43BFF30")]
	public static void Init()
	{
	}

	[Token(Token = "0x6004945")]
	[Address(RVA = "0x43C0030", Offset = "0x43C0030", VA = "0x43C0030")]
	public static void LoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6004946")]
	[Address(RVA = "0x43C02A0", Offset = "0x43C02A0", VA = "0x43C02A0")]
	private static void CreateGameManager()
	{
	}

	[Token(Token = "0x6004947")]
	[Address(RVA = "0x43C0490", Offset = "0x43C0490", VA = "0x43C0490")]
	private static void CreateCamera()
	{
	}

	[Token(Token = "0x6004948")]
	[Address(RVA = "0x43C07D0", Offset = "0x43C07D0", VA = "0x43C07D0")]
	private void OnSceneWasLoaded(Scene scene, LoadSceneMode mode)
	{
	}

	[Token(Token = "0x6004949")]
	[Address(RVA = "0x43C0820", Offset = "0x43C0820", VA = "0x43C0820")]
	public SceneLoader()
	{
	}
}
