// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.DebugTesting
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/DebugTesting.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/DebugTesting.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace ApplicationManagers;

[Token(Token = "0x2000979")]
internal class DebugTesting : MonoBehaviour
{
	[Token(Token = "0x4002FCB")]
	[FieldOffset(Offset = "0x0")]
	private static DebugTesting _instance;

	[Token(Token = "0x4002FCC")]
	[FieldOffset(Offset = "0x8")]
	public static bool DebugColliders;

	[Token(Token = "0x6005897")]
	[Address(RVA = "0x5D09C20", Offset = "0x5D08C20", VA = "0x5D09C20")]
	public static void Init()
	{
	}

	[Token(Token = "0x6005898")]
	[Address(RVA = "0x5D09CE0", Offset = "0x5D08CE0", VA = "0x5D09CE0")]
	public static void RunTests()
	{
	}

	[Token(Token = "0x6005899")]
	[Address(RVA = "0x5D09F90", Offset = "0x5D08F90", VA = "0x5D09F90")]
	public static void RunLateTests()
	{
	}

	[Token(Token = "0x600589A")]
	[Address(RVA = "0x5D14040", Offset = "0x5D13040", VA = "0x5D14040")]
	private static void OnLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x600589B")]
	[Address(RVA = "0x5D14050", Offset = "0x5D13050", VA = "0x5D14050")]
	public static void Log(object message)
	{
	}

	[Token(Token = "0x600589C")]
	[Address(RVA = "0x5D140C0", Offset = "0x5D130C0", VA = "0x5D140C0")]
	private void Update()
	{
	}

	[Token(Token = "0x600589D")]
	[Address(RVA = "0x5D13190", Offset = "0x5D12190", VA = "0x5D13190")]
	public static void RunDebugCommand(string command)
	{
	}

	[Token(Token = "0x600589E")]
	[Address(RVA = "0x5D140D0", Offset = "0x5D130D0", VA = "0x5D140D0")]
	public DebugTesting()
	{
	}
}
