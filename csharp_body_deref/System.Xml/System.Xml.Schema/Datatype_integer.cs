// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Datatype_integer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001B8")]
internal class Datatype_integer : Datatype_decimal
{
	[Token(Token = "0x170004C2")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x6001168")]
		[Address(RVA = "0x4862290", Offset = "0x4862290", VA = "0x4862290", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x6001169")]
	[Address(RVA = "0x48622A0", Offset = "0x48622A0", VA = "0x48622A0", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x600116A")]
	[Address(RVA = "0x4856FE0", Offset = "0x4856FE0", VA = "0x4856FE0")]
	public Datatype_integer()
	{
	}
}
