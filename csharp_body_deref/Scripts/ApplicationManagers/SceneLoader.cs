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

[Token(Token = "0x2000986")]
internal class SceneLoader : MonoBehaviour
{
	[Token(Token = "0x4003022")]
	[FieldOffset(Offset = "0x0")]
	private static SceneLoader _instance;

	[Token(Token = "0x4003023")]
	[FieldOffset(Offset = "0x8")]
	public static SceneName SceneName;

	[Token(Token = "0x4003024")]
	[FieldOffset(Offset = "0x10")]
	public static BaseGameManager CurrentGameManager;

	[Token(Token = "0x4003025")]
	[FieldOffset(Offset = "0x18")]
	public static BaseCamera CurrentCamera;

	[Token(Token = "0x4003026")]
	[FieldOffset(Offset = "0x20")]
	public static MinimapCamera MinimapCamera;

	[Token(Token = "0x6005912")]
	[Address(RVA = "0x5D09E90", Offset = "0x5D08E90", VA = "0x5D09E90")]
	public static void Init()
	{
	}

	[Token(Token = "0x6005913")]
	[Address(RVA = "0x5D1D070", Offset = "0x5D1C070", VA = "0x5D1D070")]
	public static void LoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6005914")]
	[Address(RVA = "0x5D1D2E0", Offset = "0x5D1C2E0", VA = "0x5D1D2E0")]
	private static void CreateGameManager()
	{
	}

	[Token(Token = "0x6005915")]
	[Address(RVA = "0x5D1D4D0", Offset = "0x5D1C4D0", VA = "0x5D1D4D0")]
	private static void CreateCamera()
	{
	}

	[Token(Token = "0x6005916")]
	[Address(RVA = "0x5D1D840", Offset = "0x5D1C840", VA = "0x5D1D840")]
	private void OnSceneWasLoaded(Scene scene, LoadSceneMode mode)
	{
	}

	[Token(Token = "0x6005917")]
	[Address(RVA = "0x5D1D8B0", Offset = "0x5D1C8B0", VA = "0x5D1D8B0")]
	public SceneLoader()
	{
	}
}
