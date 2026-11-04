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

[Token(Token = "0x200091F")]
internal class SceneLoader : MonoBehaviour
{
	[Token(Token = "0x4002D74")]
	[FieldOffset(Offset = "0x0")]
	private static SceneLoader _instance;

	[Token(Token = "0x4002D75")]
	[FieldOffset(Offset = "0x8")]
	public static SceneName SceneName;

	[Token(Token = "0x4002D76")]
	[FieldOffset(Offset = "0x10")]
	public static BaseGameManager CurrentGameManager;

	[Token(Token = "0x4002D77")]
	[FieldOffset(Offset = "0x18")]
	public static BaseCamera CurrentCamera;

	[Token(Token = "0x4002D78")]
	[FieldOffset(Offset = "0x20")]
	public static MinimapCamera MinimapCamera;

	[Token(Token = "0x60055BC")]
	[Address(RVA = "0x2356E80", Offset = "0x2355480", VA = "0x182356E80")]
	public static void Init()
	{
	}

	[Token(Token = "0x60055BD")]
	[Address(RVA = "0x2356F90", Offset = "0x2355590", VA = "0x182356F90")]
	public static void LoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x60055BE")]
	[Address(RVA = "0x2356C80", Offset = "0x2355280", VA = "0x182356C80")]
	private static void CreateGameManager()
	{
	}

	[Token(Token = "0x60055BF")]
	[Address(RVA = "0x23568C0", Offset = "0x2354EC0", VA = "0x1823568C0")]
	private static void CreateCamera()
	{
	}

	[Token(Token = "0x60055C0")]
	[Address(RVA = "0x2357180", Offset = "0x2355780", VA = "0x182357180")]
	private void OnSceneWasLoaded(Scene scene, LoadSceneMode mode)
	{
	}

	[Token(Token = "0x60055C1")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public SceneLoader()
	{
	}
}
