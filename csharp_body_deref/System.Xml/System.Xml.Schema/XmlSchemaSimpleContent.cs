// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaSimpleContent
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000253")]
public class XmlSchemaSimpleContent : XmlSchemaContentModel
{
	[Token(Token = "0x4000BF8")]
	[FieldOffset(Offset = "0x50")]
	private XmlSchemaContent content;

	[Token(Token = "0x17000679")]
	[XmlElement("extension", typeof(XmlSchemaSimpleContentExtension))]
	[XmlElement("restriction", typeof(XmlSchemaSimpleContentRestriction))]
	public override XmlSchemaContent Content
	{
		[Token(Token = "0x6001752")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0", Slot = "14")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001753")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6001754")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public XmlSchemaSimpleContent()
	{
	}
}
