using System;
using Il2CppDummyDll;

namespace Photon.Voice.IOS;

[Serializable]
[Token(Token = "0x20000B1")]
public struct AudioSessionParameters
{
	[Token(Token = "0x40002E1")]
	[FieldOffset(Offset = "0x0")]
	public AudioSessionCategory Category;

	[Token(Token = "0x40002E2")]
	[FieldOffset(Offset = "0x4")]
	public AudioSessionMode Mode;

	[Token(Token = "0x40002E3")]
	[FieldOffset(Offset = "0x8")]
	public AudioSessionCategoryOption[] CategoryOptions;

	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x3C45620", Offset = "0x3C45620", VA = "0x3C45620")]
	public int CategoryOptionsToInt()
	{
		return default(int);
	}

	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x3C45660", Offset = "0x3C45660", VA = "0x3C45660", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
