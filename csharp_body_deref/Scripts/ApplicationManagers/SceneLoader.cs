using Cameras;
using GameManagers;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace ApplicationManagers;

[Token(Token = "0x2000745")]
internal class SceneLoader : MonoBehaviour
{
	[Token(Token = "0x4002347")]
	[FieldOffset(Offset = "0x0")]
	private static SceneLoader _instance;

	[Token(Token = "0x4002348")]
	[FieldOffset(Offset = "0x8")]
	public static SceneName SceneName;

	[Token(Token = "0x4002349")]
	[FieldOffset(Offset = "0x10")]
	public static BaseGameManager CurrentGameManager;

	[Token(Token = "0x400234A")]
	[FieldOffset(Offset = "0x18")]
	public static BaseCamera CurrentCamera;

	[Token(Token = "0x400234B")]
	[FieldOffset(Offset = "0x20")]
	public static MinimapCamera MinimapCamera;

	[Token(Token = "0x60046D5")]
	[Address(RVA = "0x40A6F70", Offset = "0x40A6F70", VA = "0x40A6F70")]
	public static void Init()
	{
	}

	[Token(Token = "0x60046D6")]
	[Address(RVA = "0x40A7070", Offset = "0x40A7070", VA = "0x40A7070")]
	public static void LoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x60046D7")]
	[Address(RVA = "0x40A72E0", Offset = "0x40A72E0", VA = "0x40A72E0")]
	private static void CreateGameManager()
	{
	}

	[Token(Token = "0x60046D8")]
	[Address(RVA = "0x40A74D0", Offset = "0x40A74D0", VA = "0x40A74D0")]
	private static void CreateCamera()
	{
	}

	[Token(Token = "0x60046D9")]
	[Address(RVA = "0x40A7810", Offset = "0x40A7810", VA = "0x40A7810")]
	private void OnSceneWasLoaded(Scene scene, LoadSceneMode mode)
	{
	}

	[Token(Token = "0x60046DA")]
	[Address(RVA = "0x40A7860", Offset = "0x40A7860", VA = "0x40A7860")]
	public SceneLoader()
	{
	}
}
