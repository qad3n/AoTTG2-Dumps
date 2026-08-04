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
	[Address(RVA = "0x474A3A0", Offset = "0x474A3A0", VA = "0x474A3A0")]
	protected XmlNumeric2Converter(XmlSchemaType schemaType)
	{
	}

	[Token(Token = "0x60018DB")]
	[Address(RVA = "0x474A400", Offset = "0x474A400", VA = "0x474A400")]
	public static XmlValueConverter Create(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60018DC")]
	[Address(RVA = "0x474A490", Offset = "0x474A490", VA = "0x474A490", Slot = "28")]
	public override double ToDouble(string value)
	{
		return default(double);
	}

	[Token(Token = "0x60018DD")]
	[Address(RVA = "0x474A550", Offset = "0x474A550", VA = "0x474A550", Slot = "29")]
	public override double ToDouble(object value)
	{
		return default(double);
	}

	[Token(Token = "0x60018DE")]
	[Address(RVA = "0x474A860", Offset = "0x474A860", VA = "0x474A860", Slot = "30")]
	public override float ToSingle(double value)
	{
		return default(float);
	}

	[Token(Token = "0x60018DF")]
	[Address(RVA = "0x474A870", Offset = "0x474A870", VA = "0x474A870", Slot = "31")]
	public override float ToSingle(string value)
	{
		return default(float);
	}

	[Token(Token = "0x60018E0")]
	[Address(RVA = "0x474A930", Offset = "0x474A930", VA = "0x474A930", Slot = "32")]
	public override float ToSingle(object value)
	{
		return default(float);
	}

	[Token(Token = "0x60018E1")]
	[Address(RVA = "0x474AC60", Offset = "0x474AC60", VA = "0x474AC60", Slot = "48")]
	public override string ToString(double value)
	{
		return null;
	}

	[Token(Token = "0x60018E2")]
	[Address(RVA = "0x474AD30", Offset = "0x474AD30", VA = "0x474AD30", Slot = "47")]
	public override string ToString(float value)
	{
		return null;
	}

	[Token(Token = "0x60018E3")]
	[Address(RVA = "0x474ADB0", Offset = "0x474ADB0", VA = "0x474ADB0", Slot = "52")]
	public override string ToString(object value, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018E4")]
	[Address(RVA = "0x474B0A0", Offset = "0x474B0A0", VA = "0x474B0A0", Slot = "57")]
	public override object ChangeType(double value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x60018E5")]
	[Address(RVA = "0x474B400", Offset = "0x474B400", VA = "0x474B400", Slot = "59")]
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018E6")]
	[Address(RVA = "0x474B760", Offset = "0x474B760", VA = "0x474B760", Slot = "61")]
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}
}
