// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XPath.XPathItem
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.Schema;
using Il2CppDummyDll;

namespace System.Xml.XPath;

[Token(Token = "0x20000F9")]
public abstract class XPathItem
{
	[Token(Token = "0x17000311")]
	public abstract XmlSchemaType XmlType
	{
		[Token(Token = "0x6000C4D")]
		get;
	}

	[Token(Token = "0x17000312")]
	public abstract string Value
	{
		[Token(Token = "0x6000C4E")]
		get;
	}

	[Token(Token = "0x17000313")]
	public abstract object TypedValue
	{
		[Token(Token = "0x6000C4F")]
		get;
	}

	[Token(Token = "0x17000314")]
	public abstract Type ValueType
	{
		[Token(Token = "0x6000C50")]
		get;
	}

	[Token(Token = "0x17000315")]
	public abstract bool ValueAsBoolean
	{
		[Token(Token = "0x6000C51")]
		get;
	}

	[Token(Token = "0x17000316")]
	public abstract DateTime ValueAsDateTime
	{
		[Token(Token = "0x6000C52")]
		get;
	}

	[Token(Token = "0x17000317")]
	public abstract double ValueAsDouble
	{
		[Token(Token = "0x6000C53")]
		get;
	}

	[Token(Token = "0x17000318")]
	public abstract int ValueAsInt
	{
		[Token(Token = "0x6000C54")]
		get;
	}

	[Token(Token = "0x17000319")]
	public abstract long ValueAsLong
	{
		[Token(Token = "0x6000C55")]
		get;
	}

	[Token(Token = "0x6000C56")]
	[Address(RVA = "0x4804340", Offset = "0x4804340", VA = "0x4804340", Slot = "13")]
	public virtual object ValueAs(Type returnType)
	{
		return null;
	}

	[Token(Token = "0x6000C57")]
	public abstract object ValueAs(Type returnType, IXmlNamespaceResolver nsResolver);

	[Token(Token = "0x6000C58")]
	[Address(RVA = "0x4804360", Offset = "0x4804360", VA = "0x4804360")]
	protected XPathItem()
	{
	}
}
