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

[Token(Token = "0x200090F")]
internal class DebugTesting : MonoBehaviour
{
	[Token(Token = "0x4002D09")]
	[FieldOffset(Offset = "0x0")]
	private static DebugTesting _instance;

	[Token(Token = "0x4002D0A")]
	[FieldOffset(Offset = "0x8")]
	public static bool DebugColliders;

	[Token(Token = "0x6005535")]
	[Address(RVA = "0x234D530", Offset = "0x234BB30", VA = "0x18234D530")]
	public static void Init()
	{
	}

	[Token(Token = "0x6005536")]
	[Address(RVA = "0x234D990", Offset = "0x234BF90", VA = "0x18234D990")]
	public static void RunTests()
	{
	}

	[Token(Token = "0x6005537")]
	[Address(RVA = "0x234D950", Offset = "0x234BF50", VA = "0x18234D950")]
	public static void RunLateTests()
	{
	}

	[Token(Token = "0x6005538")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private static void OnLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6005539")]
	[Address(RVA = "0x234D5F0", Offset = "0x234BBF0", VA = "0x18234D5F0")]
	public static void Log(object message)
	{
	}

	[Token(Token = "0x600553A")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private void Update()
	{
	}

	[Token(Token = "0x600553B")]
	[Address(RVA = "0x234D640", Offset = "0x234BC40", VA = "0x18234D640")]
	public static void RunDebugCommand(string command)
	{
	}

	[Token(Token = "0x600553C")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public DebugTesting()
	{
	}
}
