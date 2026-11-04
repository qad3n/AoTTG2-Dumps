// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaObject
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000244")]
public abstract class XmlSchemaObject
{
	[Token(Token = "0x4000BBF")]
	[FieldOffset(Offset = "0x10")]
	private int lineNum;

	[Token(Token = "0x4000BC0")]
	[FieldOffset(Offset = "0x14")]
	private int linePos;

	[Token(Token = "0x4000BC1")]
	[FieldOffset(Offset = "0x18")]
	private string sourceUri;

	[Token(Token = "0x4000BC2")]
	[FieldOffset(Offset = "0x20")]
	private XmlSerializerNamespaces namespaces;

	[Token(Token = "0x4000BC3")]
	[FieldOffset(Offset = "0x28")]
	private XmlSchemaObject parent;

	[Token(Token = "0x4000BC4")]
	[FieldOffset(Offset = "0x30")]
	private bool isProcessing;

	[Token(Token = "0x17000649")]
	[XmlIgnore]
	public int LineNumber
	{
		[Token(Token = "0x60016C1")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60016C2")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
		set
		{
		}
	}

	[Token(Token = "0x1700064A")]
	[XmlIgnore]
	public int LinePosition
	{
		[Token(Token = "0x60016C3")]
		[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60016C4")]
		[Address(RVA = "0xD23EE0", Offset = "0xD224E0", VA = "0x180D23EE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700064B")]
	[XmlIgnore]
	public string SourceUri
	{
		[Token(Token = "0x60016C5")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016C6")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		set
		{
		}
	}

	[Token(Token = "0x1700064C")]
	[XmlIgnore]
	public XmlSchemaObject Parent
	{
		[Token(Token = "0x60016C7")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016C8")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700064D")]
	[XmlNamespaceDeclarations]
	public XmlSerializerNamespaces Namespaces
	{
		[Token(Token = "0x60016C9")]
		[Address(RVA = "0x266D310", Offset = "0x266B910", VA = "0x18266D310")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016CA")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700064E")]
	[XmlIgnore]
	internal virtual string IdAttribute
	{
		[Token(Token = "0x60016CE")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016CF")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x1700064F")]
	[XmlIgnore]
	internal virtual string NameAttribute
	{
		[Token(Token = "0x60016D2")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016D3")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "12")]
		set
		{
		}
	}

	[Token(Token = "0x17000650")]
	[XmlIgnore]
	internal bool IsProcessing
	{
		[Token(Token = "0x60016D4")]
		[Address(RVA = "0xACDD00", Offset = "0xACC300", VA = "0x180ACDD00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60016D5")]
		[Address(RVA = "0xACE1A0", Offset = "0xACC7A0", VA = "0x180ACE1A0")]
		set
		{
		}
	}

	[Token(Token = "0x60016CB")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
	internal virtual void OnAdd(XmlSchemaObjectCollection container, object item)
	{
	}

	[Token(Token = "0x60016CC")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	internal virtual void OnRemove(XmlSchemaObjectCollection container, object item)
	{
	}

	[Token(Token = "0x60016CD")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "6")]
	internal virtual void OnClear(XmlSchemaObjectCollection container)
	{
	}

	[Token(Token = "0x60016D0")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
	internal virtual void SetUnhandledAttributes(XmlAttribute[] moreAttributes)
	{
	}

	[Token(Token = "0x60016D1")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "10")]
	internal virtual void AddAnnotation(XmlSchemaAnnotation annotation)
	{
	}

	[Token(Token = "0x60016D6")]
	[Address(RVA = "0x266D290", Offset = "0x266B890", VA = "0x18266D290", Slot = "13")]
	internal virtual XmlSchemaObject Clone()
	{
		return null;
	}

	[Token(Token = "0x60016D7")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected XmlSchemaObject()
	{
	}
}
