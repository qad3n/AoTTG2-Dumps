// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlAnyListConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000272")]
internal class XmlAnyListConverter : XmlListConverter
{
	[Token(Token = "0x4000CC7")]
	[FieldOffset(Offset = "0x0")]
	public static readonly XmlValueConverter ItemList;

	[Token(Token = "0x4000CC8")]
	[FieldOffset(Offset = "0x8")]
	public static readonly XmlValueConverter AnyAtomicList;

	[Token(Token = "0x6001947")]
	[Address(RVA = "0x475B250", Offset = "0x475B250", VA = "0x475B250")]
	protected XmlAnyListConverter(XmlBaseConverter atomicConverter)
	{
	}

	[Token(Token = "0x6001948")]
	[Address(RVA = "0x475B330", Offset = "0x475B330", VA = "0x475B330", Slot = "61")]
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}
}
