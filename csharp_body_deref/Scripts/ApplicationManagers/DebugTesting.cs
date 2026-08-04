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

[Token(Token = "0x2000784")]
internal class DebugTesting : MonoBehaviour
{
	[Token(Token = "0x400243A")]
	[FieldOffset(Offset = "0x0")]
	private static DebugTesting _instance;

	[Token(Token = "0x400243B")]
	[FieldOffset(Offset = "0x8")]
	public static bool DebugColliders;

	[Token(Token = "0x60048BF")]
	[Address(RVA = "0x43B5060", Offset = "0x43B5060", VA = "0x43B5060")]
	public static void Init()
	{
	}

	[Token(Token = "0x60048C0")]
	[Address(RVA = "0x43B5120", Offset = "0x43B5120", VA = "0x43B5120")]
	public static void RunTests()
	{
	}

	[Token(Token = "0x60048C1")]
	[Address(RVA = "0x43B5160", Offset = "0x43B5160", VA = "0x43B5160")]
	public static void RunLateTests()
	{
	}

	[Token(Token = "0x60048C2")]
	[Address(RVA = "0x43B51A0", Offset = "0x43B51A0", VA = "0x43B51A0")]
	private static void OnLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x60048C3")]
	[Address(RVA = "0x43B51B0", Offset = "0x43B51B0", VA = "0x43B51B0")]
	public static void Log(object message)
	{
	}

	[Token(Token = "0x60048C4")]
	[Address(RVA = "0x43B5220", Offset = "0x43B5220", VA = "0x43B5220")]
	private void Update()
	{
	}

	[Token(Token = "0x60048C5")]
	[Address(RVA = "0x43B5230", Offset = "0x43B5230", VA = "0x43B5230")]
	public static void RunDebugCommand(string command)
	{
	}

	[Token(Token = "0x60048C6")]
	[Address(RVA = "0x43B5560", Offset = "0x43B5560", VA = "0x43B5560")]
	public DebugTesting()
	{
	}
}
