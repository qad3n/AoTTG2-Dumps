// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlDateTimeConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200026C")]
internal class XmlDateTimeConverter : XmlBaseConverter
{
	[Token(Token = "0x60018E7")]
	[Address(RVA = "0x2694600", Offset = "0x2692C00", VA = "0x182694600")]
	protected XmlDateTimeConverter(XmlSchemaType schemaType)
	{
	}

	[Token(Token = "0x60018E8")]
	[Address(RVA = "0x26931E0", Offset = "0x26917E0", VA = "0x1826931E0")]
	public static XmlValueConverter Create(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60018E9")]
	[Address(RVA = "0x26938A0", Offset = "0x2691EA0", VA = "0x1826938A0", Slot = "37")]
	public override DateTime ToDateTime(DateTimeOffset value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60018EA")]
	[Address(RVA = "0x2693900", Offset = "0x2691F00", VA = "0x182693900", Slot = "38")]
	public override DateTime ToDateTime(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60018EB")]
	[Address(RVA = "0x2693B10", Offset = "0x2692110", VA = "0x182693B10", Slot = "39")]
	public override DateTime ToDateTime(object value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60018EC")]
	[Address(RVA = "0x2693640", Offset = "0x2691C40", VA = "0x182693640", Slot = "40")]
	public override DateTimeOffset ToDateTimeOffset(DateTime value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x60018ED")]
	[Address(RVA = "0x2693670", Offset = "0x2691C70", VA = "0x182693670", Slot = "41")]
	public override DateTimeOffset ToDateTimeOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x60018EE")]
	[Address(RVA = "0x2693270", Offset = "0x2691870", VA = "0x182693270", Slot = "42")]
	public override DateTimeOffset ToDateTimeOffset(object value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x60018EF")]
	[Address(RVA = "0x26940B0", Offset = "0x26926B0", VA = "0x1826940B0", Slot = "49")]
	public override string ToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x60018F0")]
	[Address(RVA = "0x2693EA0", Offset = "0x26924A0", VA = "0x182693EA0", Slot = "50")]
	public override string ToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x60018F1")]
	[Address(RVA = "0x2694270", Offset = "0x2692870", VA = "0x182694270", Slot = "52")]
	public override string ToString(object value, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018F2")]
	[Address(RVA = "0x2692E30", Offset = "0x2691430", VA = "0x182692E30", Slot = "58")]
	public override object ChangeType(DateTime value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x60018F3")]
	[Address(RVA = "0x26921C0", Offset = "0x26907C0", VA = "0x1826921C0", Slot = "59")]
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018F4")]
	[Address(RVA = "0x26925A0", Offset = "0x2690BA0", VA = "0x1826925A0", Slot = "61")]
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}
}
