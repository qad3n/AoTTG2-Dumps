using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200016D")]
internal class KSStruct
{
	[Token(Token = "0x4000761")]
	[FieldOffset(Offset = "0x10")]
	public int depth;

	[Token(Token = "0x4000762")]
	[FieldOffset(Offset = "0x18")]
	public KeySequence ks;

	[Token(Token = "0x4000763")]
	[FieldOffset(Offset = "0x20")]
	public LocatedActiveAxis[] fields;

	[Token(Token = "0x6000FA7")]
	[Address(RVA = "0x4506710", Offset = "0x4506710", VA = "0x4506710")]
	public KSStruct(KeySequence ks, int dim)
	{
	}
}
