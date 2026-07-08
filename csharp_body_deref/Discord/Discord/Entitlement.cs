using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x2000047")]
public struct Entitlement
{
	[Token(Token = "0x40000E0")]
	[FieldOffset(Offset = "0x0")]
	public long Id;

	[Token(Token = "0x40000E1")]
	[FieldOffset(Offset = "0x8")]
	public EntitlementType Type;

	[Token(Token = "0x40000E2")]
	[FieldOffset(Offset = "0x10")]
	public long SkuId;
}
