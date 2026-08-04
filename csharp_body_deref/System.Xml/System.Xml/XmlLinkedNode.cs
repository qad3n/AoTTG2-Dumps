// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlLinkedNode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000A8")]
public abstract class XmlLinkedNode : XmlNode
{
	[Token(Token = "0x4000486")]
	[FieldOffset(Offset = "0x18")]
	internal XmlLinkedNode next;

	[Token(Token = "0x17000259")]
	public override XmlNode PreviousSibling
	{
		[Token(Token = "0x6000917")]
		[Address(RVA = "0x47D5420", Offset = "0x47D5420", VA = "0x47D5420", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700025A")]
	public override XmlNode NextSibling
	{
		[Token(Token = "0x6000918")]
		[Address(RVA = "0x47D5480", Offset = "0x47D5480", VA = "0x47D5480", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000916")]
	[Address(RVA = "0x47D1A20", Offset = "0x47D1A20", VA = "0x47D1A20")]
	internal XmlLinkedNode(XmlDocument doc)
	{
	}
}
