using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x200003A")]
public struct ImageDimensions
{
	[Token(Token = "0x40000AE")]
	[FieldOffset(Offset = "0x0")]
	public uint Width;

	[Token(Token = "0x40000AF")]
	[FieldOffset(Offset = "0x4")]
	public uint Height;
}
