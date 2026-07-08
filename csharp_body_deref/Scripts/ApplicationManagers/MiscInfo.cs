using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;

namespace ApplicationManagers;

[Token(Token = "0x200073C")]
public class MiscInfo : MonoBehaviour
{
	[Token(Token = "0x40022FB")]
	[FieldOffset(Offset = "0x0")]
	public static JSONNode Social;

	[Token(Token = "0x40022FC")]
	[FieldOffset(Offset = "0x8")]
	public static JSONNode Help;

	[Token(Token = "0x40022FD")]
	[FieldOffset(Offset = "0x10")]
	public static JSONNode Credits;

	[Token(Token = "0x6004690")]
	[Address(RVA = "0x40A1040", Offset = "0x40A1040", VA = "0x40A1040")]
	public static void Init()
	{
	}

	[Token(Token = "0x6004691")]
	[Address(RVA = "0x40A1310", Offset = "0x40A1310", VA = "0x40A1310")]
	public MiscInfo()
	{
	}
}
