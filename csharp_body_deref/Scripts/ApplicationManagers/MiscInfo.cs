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

[Token(Token = "0x200078B")]
public class MiscInfo : MonoBehaviour
{
	[Token(Token = "0x400245D")]
	[FieldOffset(Offset = "0x0")]
	public static JSONNode Social;

	[Token(Token = "0x400245E")]
	[FieldOffset(Offset = "0x8")]
	public static JSONNode Help;

	[Token(Token = "0x400245F")]
	[FieldOffset(Offset = "0x10")]
	public static JSONNode Credits;

	[Token(Token = "0x60048FF")]
	[Address(RVA = "0x43BA1C0", Offset = "0x43BA1C0", VA = "0x43BA1C0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6004900")]
	[Address(RVA = "0x43BA490", Offset = "0x43BA490", VA = "0x43BA490")]
	public MiscInfo()
	{
	}
}
