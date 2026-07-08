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
	[Address(RVA = "0x441DAF0", Offset = "0x441DAF0", VA = "0x441DAF0")]
	protected XmlAnyListConverter(XmlBaseConverter atomicConverter)
	{
	}

	[Token(Token = "0x6001948")]
	[Address(RVA = "0x441DBD0", Offset = "0x441DBD0", VA = "0x441DBD0", Slot = "61")]
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}
}
