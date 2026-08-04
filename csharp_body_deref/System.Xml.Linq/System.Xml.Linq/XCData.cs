// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Linq.XCData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Linq;

[Token(Token = "0x2000007")]
public class XCData : XText
{
	[Token(Token = "0x17000005")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x468CAF0", Offset = "0x468CAF0", VA = "0x468CAF0", Slot = "7")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x468C9D0", Offset = "0x468C9D0", VA = "0x468C9D0")]
	public XCData(string value)
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x468CA60", Offset = "0x468CA60", VA = "0x468CA60")]
	public XCData(XCData other)
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x468CB00", Offset = "0x468CB00", VA = "0x468CB00", Slot = "8")]
	public override void WriteTo(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x468CB70", Offset = "0x468CB70", VA = "0x468CB70", Slot = "10")]
	internal override XNode CloneNode()
	{
		return null;
	}
}
