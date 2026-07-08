using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x200000B")]
public class UnknownType
{
	[Token(Token = "0x4000020")]
	[FieldOffset(Offset = "0x10")]
	public byte TypeCode;

	[Token(Token = "0x4000021")]
	[FieldOffset(Offset = "0x14")]
	public int Size;

	[Token(Token = "0x4000022")]
	[FieldOffset(Offset = "0x18")]
	public byte[] Data;

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x3B69170", Offset = "0x3B69170", VA = "0x3B69170")]
	public UnknownType()
	{
	}
}
