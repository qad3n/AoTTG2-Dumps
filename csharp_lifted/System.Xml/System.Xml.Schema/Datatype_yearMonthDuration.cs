// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Datatype_yearMonthDuration
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000199")]
internal class Datatype_yearMonthDuration : Datatype_duration
{
	[Token(Token = "0x1700047F")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x60010ED")]
		[Address(RVA = "0x615DD80", Offset = "0x615CD80", VA = "0x615DD80", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x60010EC")]
	[Address(RVA = "0x615DB70", Offset = "0x615CB70", VA = "0x615DB70", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60010EE")]
	[Address(RVA = "0x6157120", Offset = "0x6156120", VA = "0x6157120")]
	public Datatype_yearMonthDuration()
	{
	}
}
