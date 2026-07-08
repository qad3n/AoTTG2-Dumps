using Il2CppDummyDll;
using UnityEngine;

namespace ApplicationManagers;

[Token(Token = "0x2000735")]
internal class DebugTesting : MonoBehaviour
{
	[Token(Token = "0x40022D8")]
	[FieldOffset(Offset = "0x0")]
	private static DebugTesting _instance;

	[Token(Token = "0x40022D9")]
	[FieldOffset(Offset = "0x8")]
	public static bool DebugColliders;

	[Token(Token = "0x6004650")]
	[Address(RVA = "0x409BEE0", Offset = "0x409BEE0", VA = "0x409BEE0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6004651")]
	[Address(RVA = "0x409BFA0", Offset = "0x409BFA0", VA = "0x409BFA0")]
	public static void RunTests()
	{
	}

	[Token(Token = "0x6004652")]
	[Address(RVA = "0x409BFE0", Offset = "0x409BFE0", VA = "0x409BFE0")]
	public static void RunLateTests()
	{
	}

	[Token(Token = "0x6004653")]
	[Address(RVA = "0x409C020", Offset = "0x409C020", VA = "0x409C020")]
	private static void OnLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6004654")]
	[Address(RVA = "0x409C030", Offset = "0x409C030", VA = "0x409C030")]
	public static void Log(object message)
	{
	}

	[Token(Token = "0x6004655")]
	[Address(RVA = "0x409C0A0", Offset = "0x409C0A0", VA = "0x409C0A0")]
	private void Update()
	{
	}

	[Token(Token = "0x6004656")]
	[Address(RVA = "0x409C0B0", Offset = "0x409C0B0", VA = "0x409C0B0")]
	public static void RunDebugCommand(string command)
	{
	}

	[Token(Token = "0x6004657")]
	[Address(RVA = "0x409C3E0", Offset = "0x409C3E0", VA = "0x409C3E0")]
	public DebugTesting()
	{
	}
}
