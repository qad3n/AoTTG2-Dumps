// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlListConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000273")]
internal class XmlListConverter : XmlBaseConverter
{
	[Token(Token = "0x4000CC9")]
	[FieldOffset(Offset = "0x28")]
	protected XmlValueConverter atomicConverter;

	[Token(Token = "0x600194A")]
	[Address(RVA = "0x2690C90", Offset = "0x268F290", VA = "0x182690C90")]
	protected XmlListConverter(XmlBaseConverter atomicConverter)
	{
	}

	[Token(Token = "0x600194B")]
	[Address(RVA = "0x2696660", Offset = "0x2694C60", VA = "0x182696660")]
	protected XmlListConverter(XmlBaseConverter atomicConverter, Type clrTypeDefault)
	{
	}

	[Token(Token = "0x600194C")]
	[Address(RVA = "0x26966E0", Offset = "0x2694CE0", VA = "0x1826966E0")]
	protected XmlListConverter(XmlSchemaType schemaType)
	{
	}

	[Token(Token = "0x600194D")]
	[Address(RVA = "0x2695AB0", Offset = "0x26940B0", VA = "0x182695AB0")]
	public static XmlValueConverter Create(XmlValueConverter atomicConverter)
	{
		return null;
	}

	[Token(Token = "0x600194E")]
	[Address(RVA = "0x26956B0", Offset = "0x2693CB0", VA = "0x1826956B0", Slot = "61")]
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x600194F")]
	[Address(RVA = "0x2694660", Offset = "0x2692C60", VA = "0x182694660", Slot = "62")]
	protected override object ChangeListType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001950")]
	[Address(RVA = "0x2695C80", Offset = "0x2694280", VA = "0x182695C80")]
	private bool IsListType(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001951")]
	private T[] ToArray<T>(object list, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001952")]
	[Address(RVA = "0x2696150", Offset = "0x2694750", VA = "0x182696150")]
	private IList ToList(object list, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001953")]
	[Address(RVA = "0x26960B0", Offset = "0x26946B0", VA = "0x1826960B0")]
	private List<string> StringAsList(string value)
	{
		return null;
	}

	[Token(Token = "0x6001954")]
	[Address(RVA = "0x2695E20", Offset = "0x2694420", VA = "0x182695E20")]
	private string ListAsString(IEnumerable list, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001955")]
	[Address(RVA = "0x26957B0", Offset = "0x2693DB0", VA = "0x1826957B0")]
	private new Exception CreateInvalidClrMappingException(Type sourceType, Type destinationType)
	{
		return null;
	}
}
