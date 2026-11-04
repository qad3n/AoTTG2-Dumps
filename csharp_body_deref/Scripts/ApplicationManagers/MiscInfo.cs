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

[Token(Token = "0x2000916")]
public class MiscInfo : MonoBehaviour
{
	[Token(Token = "0x4002D2C")]
	[FieldOffset(Offset = "0x0")]
	public static JSONNode Social;

	[Token(Token = "0x4002D2D")]
	[FieldOffset(Offset = "0x8")]
	public static JSONNode Help;

	[Token(Token = "0x4002D2E")]
	[FieldOffset(Offset = "0x10")]
	public static JSONNode Credits;

	[Token(Token = "0x6005575")]
	[Address(RVA = "0x23519C0", Offset = "0x234FFC0", VA = "0x1823519C0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6005576")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public MiscInfo()
	{
	}
}
