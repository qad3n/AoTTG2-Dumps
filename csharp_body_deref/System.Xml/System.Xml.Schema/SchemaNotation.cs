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
		[Address(RVA = "0x5FFE460", Offset = "0x5FFD460", VA = "0x5FFE460")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000567")]
	internal string SystemLiteral
	{
		[Token(Token = "0x60013EC")]
		[Address(RVA = "0x5FFE470", Offset = "0x5FFD470", VA = "0x5FFE470")]
		get
		{
			return null;
		}
		[Token(Token = "0x60013ED")]
		[Address(RVA = "0x5FFE480", Offset = "0x5FFD480", VA = "0x5FFE480")]
		set
		{
		}
	}

	[Token(Token = "0x17000568")]
	internal string Pubid
	{
		[Token(Token = "0x60013EE")]
		[Address(RVA = "0x5FFE490", Offset = "0x5FFD490", VA = "0x5FFE490")]
		get
		{
			return null;
		}
		[Token(Token = "0x60013EF")]
		[Address(RVA = "0x5FFE4A0", Offset = "0x5FFD4A0", VA = "0x5FFE4A0")]
		set
		{
		}
	}

	[Token(Token = "0x60013EA")]
	[Address(RVA = "0x5FFE430", Offset = "0x5FFD430", VA = "0x5FFE430")]
	internal SchemaNotation(XmlQualifiedName name)
	{
	}
}
