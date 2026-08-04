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
	[Address(RVA = "0x475B2C0", Offset = "0x475B2C0", VA = "0x475B2C0")]
	protected XmlListConverter(XmlBaseConverter atomicConverter)
	{
	}

	[Token(Token = "0x600194B")]
	[Address(RVA = "0x4751710", Offset = "0x4751710", VA = "0x4751710")]
	protected XmlListConverter(XmlBaseConverter atomicConverter, Type clrTypeDefault)
	{
	}

	[Token(Token = "0x600194C")]
	[Address(RVA = "0x47515F0", Offset = "0x47515F0", VA = "0x47515F0")]
	protected XmlListConverter(XmlSchemaType schemaType)
	{
	}

	[Token(Token = "0x600194D")]
	[Address(RVA = "0x475B790", Offset = "0x475B790", VA = "0x475B790")]
	public static XmlValueConverter Create(XmlValueConverter atomicConverter)
	{
		return null;
	}

	[Token(Token = "0x600194E")]
	[Address(RVA = "0x475B9D0", Offset = "0x475B9D0", VA = "0x475B9D0", Slot = "61")]
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x600194F")]
	[Address(RVA = "0x4756F90", Offset = "0x4756F90", VA = "0x4756F90", Slot = "62")]
	protected override object ChangeListType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001950")]
	[Address(RVA = "0x475BAB0", Offset = "0x475BAB0", VA = "0x475BAB0")]
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
	[Address(RVA = "0x475C500", Offset = "0x475C500", VA = "0x475C500")]
	private IList ToList(object list, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001953")]
	[Address(RVA = "0x475C460", Offset = "0x475C460", VA = "0x475C460")]
	private List<string> StringAsList(string value)
	{
		return null;
	}

	[Token(Token = "0x6001954")]
	[Address(RVA = "0x475BF00", Offset = "0x475BF00", VA = "0x475BF00")]
	private string ListAsString(IEnumerable list, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001955")]
	[Address(RVA = "0x475BC40", Offset = "0x475BC40", VA = "0x475BC40")]
	private new Exception CreateInvalidClrMappingException(Type sourceType, Type destinationType)
	{
		return null;
	}
}
