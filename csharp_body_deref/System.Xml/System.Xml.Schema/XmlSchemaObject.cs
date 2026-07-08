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
		[Address(RVA = "0x43E8030", Offset = "0x43E8030", VA = "0x43E8030")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60016C2")]
		[Address(RVA = "0x43E8040", Offset = "0x43E8040", VA = "0x43E8040")]
		set
		{
		}
	}

	[Token(Token = "0x1700064A")]
	[XmlIgnore]
	public int LinePosition
	{
		[Token(Token = "0x60016C3")]
		[Address(RVA = "0x43E8050", Offset = "0x43E8050", VA = "0x43E8050")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60016C4")]
		[Address(RVA = "0x43E8060", Offset = "0x43E8060", VA = "0x43E8060")]
		set
		{
		}
	}

	[Token(Token = "0x1700064B")]
	[XmlIgnore]
	public string SourceUri
	{
		[Token(Token = "0x60016C5")]
		[Address(RVA = "0x43E8070", Offset = "0x43E8070", VA = "0x43E8070")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016C6")]
		[Address(RVA = "0x43E8080", Offset = "0x43E8080", VA = "0x43E8080")]
		set
		{
		}
	}

	[Token(Token = "0x1700064C")]
	[XmlIgnore]
	public XmlSchemaObject Parent
	{
		[Token(Token = "0x60016C7")]
		[Address(RVA = "0x43E8090", Offset = "0x43E8090", VA = "0x43E8090")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016C8")]
		[Address(RVA = "0x43E80A0", Offset = "0x43E80A0", VA = "0x43E80A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700064D")]
	[XmlNamespaceDeclarations]
	public XmlSerializerNamespaces Namespaces
	{
		[Token(Token = "0x60016C9")]
		[Address(RVA = "0x43DF0F0", Offset = "0x43DF0F0", VA = "0x43DF0F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016CA")]
		[Address(RVA = "0x43E80B0", Offset = "0x43E80B0", VA = "0x43E80B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700064E")]
	[XmlIgnore]
	internal virtual string IdAttribute
	{
		[Token(Token = "0x60016CE")]
		[Address(RVA = "0x43E80F0", Offset = "0x43E80F0", VA = "0x43E80F0", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016CF")]
		[Address(RVA = "0x43E8100", Offset = "0x43E8100", VA = "0x43E8100", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x1700064F")]
	[XmlIgnore]
	internal virtual string NameAttribute
	{
		[Token(Token = "0x60016D2")]
		[Address(RVA = "0x43E8130", Offset = "0x43E8130", VA = "0x43E8130", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016D3")]
		[Address(RVA = "0x43E8140", Offset = "0x43E8140", VA = "0x43E8140", Slot = "12")]
		set
		{
		}
	}

	[Token(Token = "0x17000650")]
	[XmlIgnore]
	internal bool IsProcessing
	{
		[Token(Token = "0x60016D4")]
		[Address(RVA = "0x43E8150", Offset = "0x43E8150", VA = "0x43E8150")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60016D5")]
		[Address(RVA = "0x43E8160", Offset = "0x43E8160", VA = "0x43E8160")]
		set
		{
		}
	}

	[Token(Token = "0x60016CB")]
	[Address(RVA = "0x43E80C0", Offset = "0x43E80C0", VA = "0x43E80C0", Slot = "4")]
	internal virtual void OnAdd(XmlSchemaObjectCollection container, object item)
	{
	}

	[Token(Token = "0x60016CC")]
	[Address(RVA = "0x43E80D0", Offset = "0x43E80D0", VA = "0x43E80D0", Slot = "5")]
	internal virtual void OnRemove(XmlSchemaObjectCollection container, object item)
	{
	}

	[Token(Token = "0x60016CD")]
	[Address(RVA = "0x43E80E0", Offset = "0x43E80E0", VA = "0x43E80E0", Slot = "6")]
	internal virtual void OnClear(XmlSchemaObjectCollection container)
	{
	}

	[Token(Token = "0x60016D0")]
	[Address(RVA = "0x43E8110", Offset = "0x43E8110", VA = "0x43E8110", Slot = "9")]
	internal virtual void SetUnhandledAttributes(XmlAttribute[] moreAttributes)
	{
	}

	[Token(Token = "0x60016D1")]
	[Address(RVA = "0x43E8120", Offset = "0x43E8120", VA = "0x43E8120", Slot = "10")]
	internal virtual void AddAnnotation(XmlSchemaAnnotation annotation)
	{
	}

	[Token(Token = "0x60016D6")]
	[Address(RVA = "0x43E8170", Offset = "0x43E8170", VA = "0x43E8170", Slot = "13")]
	internal virtual XmlSchemaObject Clone()
	{
		return null;
	}

	[Token(Token = "0x60016D7")]
	[Address(RVA = "0x43DE610", Offset = "0x43DE610", VA = "0x43DE610")]
	protected XmlSchemaObject()
	{
	}
}
