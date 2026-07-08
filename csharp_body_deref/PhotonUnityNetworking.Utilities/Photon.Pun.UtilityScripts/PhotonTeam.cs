using System;
using Il2CppDummyDll;

namespace Photon.Pun.UtilityScripts;

[Serializable]
[Token(Token = "0x200000E")]
public class PhotonTeam
{
	[Token(Token = "0x400004E")]
	[FieldOffset(Offset = "0x10")]
	public string Name;

	[Token(Token = "0x400004F")]
	[FieldOffset(Offset = "0x18")]
	public byte Code;

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x3BEA7F0", Offset = "0x3BEA7F0", VA = "0x3BEA7F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x3BEA860", Offset = "0x3BEA860", VA = "0x3BEA860")]
	public PhotonTeam()
	{
	}
}
