// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlName
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.Schema;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000AA")]
internal class XmlName : IXmlSchemaInfo
{
	[Token(Token = "0x400048A")]
	[FieldOffset(Offset = "0x10")]
	private string prefix;

	[Token(Token = "0x400048B")]
	[FieldOffset(Offset = "0x18")]
	private string localName;

	[Token(Token = "0x400048C")]
	[FieldOffset(Offset = "0x20")]
	private string ns;

	[Token(Token = "0x400048D")]
	[FieldOffset(Offset = "0x28")]
	private string name;

	[Token(Token = "0x400048E")]
	[FieldOffset(Offset = "0x30")]
	private int hashCode;

	[Token(Token = "0x400048F")]
	[FieldOffset(Offset = "0x38")]
	internal XmlDocument ownerDoc;

	[Token(Token = "0x4000490")]
	[FieldOffset(Offset = "0x40")]
	internal XmlName next;

	[Token(Token = "0x1700025B")]
	public string LocalName
	{
		[Token(Token = "0x6000936")]
		[Address(RVA = "0x47DA960", Offset = "0x47DA960", VA = "0x47DA960")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700025C")]
	public string NamespaceURI
	{
		[Token(Token = "0x6000937")]
		[Address(RVA = "0x47DA970", Offset = "0x47DA970", VA = "0x47DA970")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700025D")]
	public string Prefix
	{
		[Token(Token = "0x6000938")]
		[Address(RVA = "0x47DA980", Offset = "0x47DA980", VA = "0x47DA980")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700025E")]
	public int HashCode
	{
		[Token(Token = "0x6000939")]
		[Address(RVA = "0x47DA990", Offset = "0x47DA990", VA = "0x47DA990")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700025F")]
	public XmlDocument OwnerDocument
	{
		[Token(Token = "0x600093A")]
		[Address(RVA = "0x47DA9A0", Offset = "0x47DA9A0", VA = "0x47DA9A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000260")]
	public string Name
	{
		[Token(Token = "0x600093B")]
		[Address(RVA = "0x47D26D0", Offset = "0x47D26D0", VA = "0x47D26D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000261")]
	public virtual XmlSchemaValidity Validity
	{
		[Token(Token = "0x600093C")]
		[Address(RVA = "0x47DA9B0", Offset = "0x47DA9B0", VA = "0x47DA9B0", Slot = "11")]
		get
		{
			return default(XmlSchemaValidity);
		}
	}

	[Token(Token = "0x17000262")]
	public virtual bool IsDefault
	{
		[Token(Token = "0x600093D")]
		[Address(RVA = "0x47DA9C0", Offset = "0x47DA9C0", VA = "0x47DA9C0", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000263")]
	public virtual bool IsNil
	{
		[Token(Token = "0x600093E")]
		[Address(RVA = "0x47DA9D0", Offset = "0x47DA9D0", VA = "0x47DA9D0", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000264")]
	public virtual XmlSchemaSimpleType MemberType
	{
		[Token(Token = "0x600093F")]
		[Address(RVA = "0x47DA9E0", Offset = "0x47DA9E0", VA = "0x47DA9E0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000265")]
	public virtual XmlSchemaType SchemaType
	{
		[Token(Token = "0x6000940")]
		[Address(RVA = "0x47DA9F0", Offset = "0x47DA9F0", VA = "0x47DA9F0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000266")]
	public virtual XmlSchemaElement SchemaElement
	{
		[Token(Token = "0x6000941")]
		[Address(RVA = "0x47DAA00", Offset = "0x47DAA00", VA = "0x47DAA00", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000267")]
	public virtual XmlSchemaAttribute SchemaAttribute
	{
		[Token(Token = "0x6000942")]
		[Address(RVA = "0x47DAA10", Offset = "0x47DAA10", VA = "0x47DAA10", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000934")]
	[Address(RVA = "0x47DA2B0", Offset = "0x47DA2B0", VA = "0x47DA2B0")]
	public static XmlName Create(string prefix, string localName, string ns, int hashCode, XmlDocument ownerDoc, XmlName next, IXmlSchemaInfo schemaInfo)
	{
		return null;
	}

	[Token(Token = "0x6000935")]
	[Address(RVA = "0x47DA3E0", Offset = "0x47DA3E0", VA = "0x47DA3E0")]
	internal XmlName(string prefix, string localName, string ns, int hashCode, XmlDocument ownerDoc, XmlName next)
	{
	}

	[Token(Token = "0x6000943")]
	[Address(RVA = "0x47DAA20", Offset = "0x47DAA20", VA = "0x47DAA20", Slot = "18")]
	public virtual bool Equals(IXmlSchemaInfo schemaInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000944")]
	[Address(RVA = "0x47DAA30", Offset = "0x47DAA30", VA = "0x47DAA30")]
	public static int GetHashCode(string name)
	{
		return default(int);
	}
}
