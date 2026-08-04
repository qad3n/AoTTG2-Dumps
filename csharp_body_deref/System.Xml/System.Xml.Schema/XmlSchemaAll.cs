// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaAll
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200020C")]
public class XmlSchemaAll : XmlSchemaGroupBase
{
	[Token(Token = "0x4000B08")]
	[FieldOffset(Offset = "0x78")]
	private XmlSchemaObjectCollection items;

	[Token(Token = "0x17000594")]
	[XmlElement("element", typeof(XmlSchemaElement))]
	public override XmlSchemaObjectCollection Items
	{
		[Token(Token = "0x6001514")]
		[Address(RVA = "0x471DCF0", Offset = "0x471DCF0", VA = "0x471DCF0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000595")]
	internal override bool IsEmpty
	{
		[Token(Token = "0x6001515")]
		[Address(RVA = "0x471DD00", Offset = "0x471DD00", VA = "0x471DD00", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001516")]
	[Address(RVA = "0x471DD30", Offset = "0x471DD30", VA = "0x471DD30", Slot = "17")]
	internal override void SetItems(XmlSchemaObjectCollection newItems)
	{
	}

	[Token(Token = "0x6001517")]
	[Address(RVA = "0x471DD40", Offset = "0x471DD40", VA = "0x471DD40")]
	public XmlSchemaAll()
	{
	}
}
