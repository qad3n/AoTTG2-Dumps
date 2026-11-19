// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Datatype_dayTimeDuration
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200019A")]
internal class Datatype_dayTimeDuration : Datatype_duration
{
	[Token(Token = "0x17000480")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x60010F0")]
		[Address(RVA = "0x615DFA0", Offset = "0x615CFA0", VA = "0x615DFA0", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x60010EF")]
	[Address(RVA = "0x615DD90", Offset = "0x615CD90", VA = "0x615DD90", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60010F1")]
	[Address(RVA = "0x6156F40", Offset = "0x6155F40", VA = "0x6156F40")]
	public Datatype_dayTimeDuration()
	{
	}
}
