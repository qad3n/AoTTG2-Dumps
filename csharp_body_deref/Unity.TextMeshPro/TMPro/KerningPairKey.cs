using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x200002E")]
public struct KerningPairKey
{
	[Token(Token = "0x400011D")]
	[FieldOffset(Offset = "0x0")]
	public uint ascii_Left;

	[Token(Token = "0x400011E")]
	[FieldOffset(Offset = "0x4")]
	public uint ascii_Right;

	[Token(Token = "0x400011F")]
	[FieldOffset(Offset = "0x8")]
	public uint key;

	[Token(Token = "0x600014B")]
	[Address(RVA = "0x4908F20", Offset = "0x4908F20", VA = "0x4908F20")]
	public KerningPairKey(uint ascii_left, uint ascii_right)
	{
	}
}
