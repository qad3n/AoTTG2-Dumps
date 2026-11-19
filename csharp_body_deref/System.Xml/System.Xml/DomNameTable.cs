// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.DomNameTable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.Schema;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000095")]
internal class DomNameTable
{
	[Token(Token = "0x4000428")]
	[FieldOffset(Offset = "0x10")]
	private XmlName[] entries;

	[Token(Token = "0x4000429")]
	[FieldOffset(Offset = "0x18")]
	private int count;

	[Token(Token = "0x400042A")]
	[FieldOffset(Offset = "0x1C")]
	private int mask;

	[Token(Token = "0x400042B")]
	[FieldOffset(Offset = "0x20")]
	private XmlDocument ownerDocument;

	[Token(Token = "0x400042C")]
	[FieldOffset(Offset = "0x28")]
	private XmlNameTable nameTable;

	[Token(Token = "0x60007AE")]
	[Address(RVA = "0x60CAD10", Offset = "0x60C9D10", VA = "0x60CAD10")]
	public DomNameTable(XmlDocument document)
	{
	}

	[Token(Token = "0x60007AF")]
	[Address(RVA = "0x60CADB0", Offset = "0x60C9DB0", VA = "0x60CADB0")]
	public XmlName GetName(string prefix, string localName, string ns, IXmlSchemaInfo schemaInfo)
	{
		return null;
	}

	[Token(Token = "0x60007B0")]
	[Address(RVA = "0x60CAF00", Offset = "0x60C9F00", VA = "0x60CAF00")]
	public XmlName AddName(string prefix, string localName, string ns, IXmlSchemaInfo schemaInfo)
	{
		return null;
	}

	[Token(Token = "0x60007B1")]
	[Address(RVA = "0x60CB170", Offset = "0x60CA170", VA = "0x60CB170")]
	private void Grow()
	{
	}
}
