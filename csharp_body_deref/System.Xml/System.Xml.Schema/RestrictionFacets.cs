using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200018B")]
internal class RestrictionFacets
{
	[Token(Token = "0x40007C2")]
	[FieldOffset(Offset = "0x10")]
	internal int Length;

	[Token(Token = "0x40007C3")]
	[FieldOffset(Offset = "0x14")]
	internal int MinLength;

	[Token(Token = "0x40007C4")]
	[FieldOffset(Offset = "0x18")]
	internal int MaxLength;

	[Token(Token = "0x40007C5")]
	[FieldOffset(Offset = "0x20")]
	internal ArrayList Patterns;

	[Token(Token = "0x40007C6")]
	[FieldOffset(Offset = "0x28")]
	internal ArrayList Enumeration;

	[Token(Token = "0x40007C7")]
	[FieldOffset(Offset = "0x30")]
	internal XmlSchemaWhiteSpace WhiteSpace;

	[Token(Token = "0x40007C8")]
	[FieldOffset(Offset = "0x38")]
	internal object MaxInclusive;

	[Token(Token = "0x40007C9")]
	[FieldOffset(Offset = "0x40")]
	internal object MaxExclusive;

	[Token(Token = "0x40007CA")]
	[FieldOffset(Offset = "0x48")]
	internal object MinInclusive;

	[Token(Token = "0x40007CB")]
	[FieldOffset(Offset = "0x50")]
	internal object MinExclusive;

	[Token(Token = "0x40007CC")]
	[FieldOffset(Offset = "0x58")]
	internal int TotalDigits;

	[Token(Token = "0x40007CD")]
	[FieldOffset(Offset = "0x5C")]
	internal int FractionDigits;

	[Token(Token = "0x40007CE")]
	[FieldOffset(Offset = "0x60")]
	internal RestrictionFlags Flags;

	[Token(Token = "0x40007CF")]
	[FieldOffset(Offset = "0x64")]
	internal RestrictionFlags FixedFlags;

	[Token(Token = "0x600104D")]
	[Address(RVA = "0x4511A20", Offset = "0x4511A20", VA = "0x4511A20")]
	public RestrictionFacets()
	{
	}
}
