// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.MiscInfo
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/MiscInfo.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/MiscInfo.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;

namespace ApplicationManagers;

[Token(Token = "0x2000980")]
public class MiscInfo : MonoBehaviour
{
	[Token(Token = "0x4002FEA")]
	[FieldOffset(Offset = "0x0")]
	public static JSONNode Social;

	[Token(Token = "0x4002FEB")]
	[FieldOffset(Offset = "0x8")]
	public static JSONNode Help;

	[Token(Token = "0x4002FEC")]
	[FieldOffset(Offset = "0x10")]
	public static JSONNode Credits;

	[Token(Token = "0x60058D8")]
	[Address(RVA = "0x5D09D20", Offset = "0x5D08D20", VA = "0x5D09D20")]
	public static void Init()
	{
	}

	[Token(Token = "0x60058D9")]
	[Address(RVA = "0x5D18570", Offset = "0x5D17570", VA = "0x5D18570")]
	public MiscInfo()
	{
	}
}
