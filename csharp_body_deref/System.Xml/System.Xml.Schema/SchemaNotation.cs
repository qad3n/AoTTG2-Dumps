// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.SchemaNotation
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001F5")]
internal sealed class SchemaNotation
{
	[Token(Token = "0x4000A4E")]
	[FieldOffset(Offset = "0x10")]
	private XmlQualifiedName name;

	[Token(Token = "0x4000A4F")]
	[FieldOffset(Offset = "0x18")]
	private string systemLiteral;

	[Token(Token = "0x4000A50")]
	[FieldOffset(Offset = "0x20")]
	private string pubid;

	[Token(Token = "0x17000566")]
	internal XmlQualifiedName Name
	{
		[Token(Token = "0x60013EB")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000567")]
	internal string SystemLiteral
	{
		[Token(Token = "0x60013EC")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x60013ED")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		set
		{
		}
	}

	[Token(Token = "0x17000568")]
	internal string Pubid
	{
		[Token(Token = "0x60013EE")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60013EF")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		set
		{
		}
	}

	[Token(Token = "0x60013EA")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	internal SchemaNotation(XmlQualifiedName name)
	{
	}
}
