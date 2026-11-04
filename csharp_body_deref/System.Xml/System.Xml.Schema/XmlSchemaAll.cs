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
		[Address(RVA = "0xCDB5A0", Offset = "0xCD9BA0", VA = "0x180CDB5A0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000595")]
	internal override bool IsEmpty
	{
		[Token(Token = "0x6001515")]
		[Address(RVA = "0x2665550", Offset = "0x2663B50", VA = "0x182665550", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001516")]
	[Address(RVA = "0xCDB690", Offset = "0xCD9C90", VA = "0x180CDB690", Slot = "17")]
	internal override void SetItems(XmlSchemaObjectCollection newItems)
	{
	}

	[Token(Token = "0x6001517")]
	[Address(RVA = "0x26654B0", Offset = "0x2663AB0", VA = "0x1826654B0")]
	public XmlSchemaAll()
	{
	}
}
