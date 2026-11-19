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
		[Address(RVA = "0x602D8D0", Offset = "0x602C8D0", VA = "0x602D8D0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60016C2")]
		[Address(RVA = "0x602D8E0", Offset = "0x602C8E0", VA = "0x602D8E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700064A")]
	[XmlIgnore]
	public int LinePosition
	{
		[Token(Token = "0x60016C3")]
		[Address(RVA = "0x602D8F0", Offset = "0x602C8F0", VA = "0x602D8F0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60016C4")]
		[Address(RVA = "0x602D900", Offset = "0x602C900", VA = "0x602D900")]
		set
		{
		}
	}

	[Token(Token = "0x1700064B")]
	[XmlIgnore]
	public string SourceUri
	{
		[Token(Token = "0x60016C5")]
		[Address(RVA = "0x602D910", Offset = "0x602C910", VA = "0x602D910")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016C6")]
		[Address(RVA = "0x602D920", Offset = "0x602C920", VA = "0x602D920")]
		set
		{
		}
	}

	[Token(Token = "0x1700064C")]
	[XmlIgnore]
	public XmlSchemaObject Parent
	{
		[Token(Token = "0x60016C7")]
		[Address(RVA = "0x602D930", Offset = "0x602C930", VA = "0x602D930")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016C8")]
		[Address(RVA = "0x602D940", Offset = "0x602C940", VA = "0x602D940")]
		set
		{
		}
	}

	[Token(Token = "0x1700064D")]
	[XmlNamespaceDeclarations]
	public XmlSerializerNamespaces Namespaces
	{
		[Token(Token = "0x60016C9")]
		[Address(RVA = "0x6024A70", Offset = "0x6023A70", VA = "0x6024A70")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016CA")]
		[Address(RVA = "0x602D950", Offset = "0x602C950", VA = "0x602D950")]
		set
		{
		}
	}

	[Token(Token = "0x1700064E")]
	[XmlIgnore]
	internal virtual string IdAttribute
	{
		[Token(Token = "0x60016CE")]
		[Address(RVA = "0x602D990", Offset = "0x602C990", VA = "0x602D990", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016CF")]
		[Address(RVA = "0x602D9A0", Offset = "0x602C9A0", VA = "0x602D9A0", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x1700064F")]
	[XmlIgnore]
	internal virtual string NameAttribute
	{
		[Token(Token = "0x60016D2")]
		[Address(RVA = "0x602D9D0", Offset = "0x602C9D0", VA = "0x602D9D0", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016D3")]
		[Address(RVA = "0x602D9E0", Offset = "0x602C9E0", VA = "0x602D9E0", Slot = "12")]
		set
		{
		}
	}

	[Token(Token = "0x17000650")]
	[XmlIgnore]
	internal bool IsProcessing
	{
		[Token(Token = "0x60016D4")]
		[Address(RVA = "0x602D9F0", Offset = "0x602C9F0", VA = "0x602D9F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60016D5")]
		[Address(RVA = "0x602DA00", Offset = "0x602CA00", VA = "0x602DA00")]
		set
		{
		}
	}

	[Token(Token = "0x60016CB")]
	[Address(RVA = "0x602D960", Offset = "0x602C960", VA = "0x602D960", Slot = "4")]
	internal virtual void OnAdd(XmlSchemaObjectCollection container, object item)
	{
	}

	[Token(Token = "0x60016CC")]
	[Address(RVA = "0x602D970", Offset = "0x602C970", VA = "0x602D970", Slot = "5")]
	internal virtual void OnRemove(XmlSchemaObjectCollection container, object item)
	{
	}

	[Token(Token = "0x60016CD")]
	[Address(RVA = "0x602D980", Offset = "0x602C980", VA = "0x602D980", Slot = "6")]
	internal virtual void OnClear(XmlSchemaObjectCollection container)
	{
	}

	[Token(Token = "0x60016D0")]
	[Address(RVA = "0x602D9B0", Offset = "0x602C9B0", VA = "0x602D9B0", Slot = "9")]
	internal virtual void SetUnhandledAttributes(XmlAttribute[] moreAttributes)
	{
	}

	[Token(Token = "0x60016D1")]
	[Address(RVA = "0x602D9C0", Offset = "0x602C9C0", VA = "0x602D9C0", Slot = "10")]
	internal virtual void AddAnnotation(XmlSchemaAnnotation annotation)
	{
	}

	[Token(Token = "0x60016D6")]
	[Address(RVA = "0x602DA10", Offset = "0x602CA10", VA = "0x602DA10", Slot = "13")]
	internal virtual XmlSchemaObject Clone()
	{
		return null;
	}

	[Token(Token = "0x60016D7")]
	[Address(RVA = "0x6024020", Offset = "0x6023020", VA = "0x6024020")]
	protected XmlSchemaObject()
	{
	}
}
