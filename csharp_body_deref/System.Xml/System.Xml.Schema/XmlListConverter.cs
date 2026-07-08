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
	[Address(RVA = "0x441DB60", Offset = "0x441DB60", VA = "0x441DB60")]
	protected XmlListConverter(XmlBaseConverter atomicConverter)
	{
	}

	[Token(Token = "0x600194B")]
	[Address(RVA = "0x4413FB0", Offset = "0x4413FB0", VA = "0x4413FB0")]
	protected XmlListConverter(XmlBaseConverter atomicConverter, Type clrTypeDefault)
	{
	}

	[Token(Token = "0x600194C")]
	[Address(RVA = "0x4413E90", Offset = "0x4413E90", VA = "0x4413E90")]
	protected XmlListConverter(XmlSchemaType schemaType)
	{
	}

	[Token(Token = "0x600194D")]
	[Address(RVA = "0x441E030", Offset = "0x441E030", VA = "0x441E030")]
	public static XmlValueConverter Create(XmlValueConverter atomicConverter)
	{
		return null;
	}

	[Token(Token = "0x600194E")]
	[Address(RVA = "0x441E270", Offset = "0x441E270", VA = "0x441E270", Slot = "61")]
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x600194F")]
	[Address(RVA = "0x4419830", Offset = "0x4419830", VA = "0x4419830", Slot = "62")]
	protected override object ChangeListType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001950")]
	[Address(RVA = "0x441E350", Offset = "0x441E350", VA = "0x441E350")]
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
	[Address(RVA = "0x441EDA0", Offset = "0x441EDA0", VA = "0x441EDA0")]
	private IList ToList(object list, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001953")]
	[Address(RVA = "0x441ED00", Offset = "0x441ED00", VA = "0x441ED00")]
	private List<string> StringAsList(string value)
	{
		return null;
	}

	[Token(Token = "0x6001954")]
	[Address(RVA = "0x441E7A0", Offset = "0x441E7A0", VA = "0x441E7A0")]
	private string ListAsString(IEnumerable list, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001955")]
	[Address(RVA = "0x441E4E0", Offset = "0x441E4E0", VA = "0x441E4E0")]
	private new Exception CreateInvalidClrMappingException(Type sourceType, Type destinationType)
	{
		return null;
	}
}
