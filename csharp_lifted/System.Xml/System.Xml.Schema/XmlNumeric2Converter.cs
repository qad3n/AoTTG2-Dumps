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
	[Address(RVA = "0x6050990", Offset = "0x604F990", VA = "0x6050990")]
	protected XmlNumeric2Converter(XmlSchemaType schemaType)
	{
	}

	[Token(Token = "0x60018DB")]
	[Address(RVA = "0x60509F0", Offset = "0x604F9F0", VA = "0x60509F0")]
	public static XmlValueConverter Create(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60018DC")]
	[Address(RVA = "0x6050A80", Offset = "0x604FA80", VA = "0x6050A80", Slot = "28")]
	public override double ToDouble(string value)
	{
		return default(double);
	}

	[Token(Token = "0x60018DD")]
	[Address(RVA = "0x6050B50", Offset = "0x604FB50", VA = "0x6050B50", Slot = "29")]
	public override double ToDouble(object value)
	{
		return default(double);
	}

	[Token(Token = "0x60018DE")]
	[Address(RVA = "0x6050E60", Offset = "0x604FE60", VA = "0x6050E60", Slot = "30")]
	public override float ToSingle(double value)
	{
		return default(float);
	}

	[Token(Token = "0x60018DF")]
	[Address(RVA = "0x6050E70", Offset = "0x604FE70", VA = "0x6050E70", Slot = "31")]
	public override float ToSingle(string value)
	{
		return default(float);
	}

	[Token(Token = "0x60018E0")]
	[Address(RVA = "0x6050F40", Offset = "0x604FF40", VA = "0x6050F40", Slot = "32")]
	public override float ToSingle(object value)
	{
		return default(float);
	}

	[Token(Token = "0x60018E1")]
	[Address(RVA = "0x6051260", Offset = "0x6050260", VA = "0x6051260", Slot = "48")]
	public override string ToString(double value)
	{
		return null;
	}

	[Token(Token = "0x60018E2")]
	[Address(RVA = "0x6051330", Offset = "0x6050330", VA = "0x6051330", Slot = "47")]
	public override string ToString(float value)
	{
		return null;
	}

	[Token(Token = "0x60018E3")]
	[Address(RVA = "0x60513D0", Offset = "0x60503D0", VA = "0x60513D0", Slot = "52")]
	public override string ToString(object value, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018E4")]
	[Address(RVA = "0x60516C0", Offset = "0x60506C0", VA = "0x60516C0", Slot = "57")]
	public override object ChangeType(double value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x60018E5")]
	[Address(RVA = "0x6051A20", Offset = "0x6050A20", VA = "0x6051A20", Slot = "59")]
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018E6")]
	[Address(RVA = "0x6051D80", Offset = "0x6050D80", VA = "0x6051D80", Slot = "61")]
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}
}
