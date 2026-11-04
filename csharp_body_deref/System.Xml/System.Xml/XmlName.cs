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
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700025C")]
	public string NamespaceURI
	{
		[Token(Token = "0x6000937")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700025D")]
	public string Prefix
	{
		[Token(Token = "0x6000938")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700025E")]
	public int HashCode
	{
		[Token(Token = "0x6000939")]
		[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700025F")]
	public XmlDocument OwnerDocument
	{
		[Token(Token = "0x600093A")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000260")]
	public string Name
	{
		[Token(Token = "0x600093B")]
		[Address(RVA = "0x2732400", Offset = "0x2730A00", VA = "0x182732400")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000261")]
	public virtual XmlSchemaValidity Validity
	{
		[Token(Token = "0x600093C")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "11")]
		get
		{
			return default(XmlSchemaValidity);
		}
	}

	[Token(Token = "0x17000262")]
	public virtual bool IsDefault
	{
		[Token(Token = "0x600093D")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000263")]
	public virtual bool IsNil
	{
		[Token(Token = "0x600093E")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000264")]
	public virtual XmlSchemaSimpleType MemberType
	{
		[Token(Token = "0x600093F")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000265")]
	public virtual XmlSchemaType SchemaType
	{
		[Token(Token = "0x6000940")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000266")]
	public virtual XmlSchemaElement SchemaElement
	{
		[Token(Token = "0x6000941")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000267")]
	public virtual XmlSchemaAttribute SchemaAttribute
	{
		[Token(Token = "0x6000942")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000934")]
	[Address(RVA = "0x27321E0", Offset = "0x27307E0", VA = "0x1827321E0")]
	public static XmlName Create(string prefix, string localName, string ns, int hashCode, XmlDocument ownerDoc, XmlName next, IXmlSchemaInfo schemaInfo)
	{
		return null;
	}

	[Token(Token = "0x6000935")]
	[Address(RVA = "0x2732360", Offset = "0x2730960", VA = "0x182732360")]
	internal XmlName(string prefix, string localName, string ns, int hashCode, XmlDocument ownerDoc, XmlName next)
	{
	}

	[Token(Token = "0x6000943")]
	[Address(RVA = "0x8ED100", Offset = "0x8EB700", VA = "0x1808ED100", Slot = "18")]
	public virtual bool Equals(IXmlSchemaInfo schemaInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000944")]
	[Address(RVA = "0x27322F0", Offset = "0x27308F0", VA = "0x1827322F0")]
	public static int GetHashCode(string name)
	{
		return default(int);
	}
}
