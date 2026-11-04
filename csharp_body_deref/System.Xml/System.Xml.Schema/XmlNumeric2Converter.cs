// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlNumeric2Converter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200026B")]
internal class XmlNumeric2Converter : XmlBaseConverter
{
	[Token(Token = "0x60018DA")]
	[Address(RVA = "0x269E710", Offset = "0x269CD10", VA = "0x18269E710")]
	protected XmlNumeric2Converter(XmlSchemaType schemaType)
	{
	}

	[Token(Token = "0x60018DB")]
	[Address(RVA = "0x269D910", Offset = "0x269BF10", VA = "0x18269D910")]
	public static XmlValueConverter Create(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60018DC")]
	[Address(RVA = "0x269DD00", Offset = "0x269C300", VA = "0x18269DD00", Slot = "28")]
	public override double ToDouble(string value)
	{
		return default(double);
	}

	[Token(Token = "0x60018DD")]
	[Address(RVA = "0x269D9A0", Offset = "0x269BFA0", VA = "0x18269D9A0", Slot = "29")]
	public override double ToDouble(object value)
	{
		return default(double);
	}

	[Token(Token = "0x60018DE")]
	[Address(RVA = "0x269DEA0", Offset = "0x269C4A0", VA = "0x18269DEA0", Slot = "30")]
	public override float ToSingle(double value)
	{
		return default(float);
	}

	[Token(Token = "0x60018DF")]
	[Address(RVA = "0x269DDD0", Offset = "0x269C3D0", VA = "0x18269DDD0", Slot = "31")]
	public override float ToSingle(string value)
	{
		return default(float);
	}

	[Token(Token = "0x60018E0")]
	[Address(RVA = "0x269DEB0", Offset = "0x269C4B0", VA = "0x18269DEB0", Slot = "32")]
	public override float ToSingle(object value)
	{
		return default(float);
	}

	[Token(Token = "0x60018E1")]
	[Address(RVA = "0x269E270", Offset = "0x269C870", VA = "0x18269E270", Slot = "48")]
	public override string ToString(double value)
	{
		return null;
	}

	[Token(Token = "0x60018E2")]
	[Address(RVA = "0x269E680", Offset = "0x269CC80", VA = "0x18269E680", Slot = "47")]
	public override string ToString(float value)
	{
		return null;
	}

	[Token(Token = "0x60018E3")]
	[Address(RVA = "0x269E310", Offset = "0x269C910", VA = "0x18269E310", Slot = "52")]
	public override string ToString(object value, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018E4")]
	[Address(RVA = "0x269D590", Offset = "0x269BB90", VA = "0x18269D590", Slot = "57")]
	public override object ChangeType(double value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x60018E5")]
	[Address(RVA = "0x269C9D0", Offset = "0x269AFD0", VA = "0x18269C9D0", Slot = "59")]
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018E6")]
	[Address(RVA = "0x269CD90", Offset = "0x269B390", VA = "0x18269CD90", Slot = "61")]
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}
}
