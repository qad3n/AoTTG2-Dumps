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
		[Address(RVA = "0x4725790", Offset = "0x4725790", VA = "0x4725790")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60016C2")]
		[Address(RVA = "0x47257A0", Offset = "0x47257A0", VA = "0x47257A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700064A")]
	[XmlIgnore]
	public int LinePosition
	{
		[Token(Token = "0x60016C3")]
		[Address(RVA = "0x47257B0", Offset = "0x47257B0", VA = "0x47257B0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60016C4")]
		[Address(RVA = "0x47257C0", Offset = "0x47257C0", VA = "0x47257C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700064B")]
	[XmlIgnore]
	public string SourceUri
	{
		[Token(Token = "0x60016C5")]
		[Address(RVA = "0x47257D0", Offset = "0x47257D0", VA = "0x47257D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016C6")]
		[Address(RVA = "0x47257E0", Offset = "0x47257E0", VA = "0x47257E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700064C")]
	[XmlIgnore]
	public XmlSchemaObject Parent
	{
		[Token(Token = "0x60016C7")]
		[Address(RVA = "0x47257F0", Offset = "0x47257F0", VA = "0x47257F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016C8")]
		[Address(RVA = "0x4725800", Offset = "0x4725800", VA = "0x4725800")]
		set
		{
		}
	}

	[Token(Token = "0x1700064D")]
	[XmlNamespaceDeclarations]
	public XmlSerializerNamespaces Namespaces
	{
		[Token(Token = "0x60016C9")]
		[Address(RVA = "0x471C850", Offset = "0x471C850", VA = "0x471C850")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016CA")]
		[Address(RVA = "0x4725810", Offset = "0x4725810", VA = "0x4725810")]
		set
		{
		}
	}

	[Token(Token = "0x1700064E")]
	[XmlIgnore]
	internal virtual string IdAttribute
	{
		[Token(Token = "0x60016CE")]
		[Address(RVA = "0x4725850", Offset = "0x4725850", VA = "0x4725850", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016CF")]
		[Address(RVA = "0x4725860", Offset = "0x4725860", VA = "0x4725860", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x1700064F")]
	[XmlIgnore]
	internal virtual string NameAttribute
	{
		[Token(Token = "0x60016D2")]
		[Address(RVA = "0x4725890", Offset = "0x4725890", VA = "0x4725890", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016D3")]
		[Address(RVA = "0x47258A0", Offset = "0x47258A0", VA = "0x47258A0", Slot = "12")]
		set
		{
		}
	}

	[Token(Token = "0x17000650")]
	[XmlIgnore]
	internal bool IsProcessing
	{
		[Token(Token = "0x60016D4")]
		[Address(RVA = "0x47258B0", Offset = "0x47258B0", VA = "0x47258B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60016D5")]
		[Address(RVA = "0x47258C0", Offset = "0x47258C0", VA = "0x47258C0")]
		set
		{
		}
	}

	[Token(Token = "0x60016CB")]
	[Address(RVA = "0x4725820", Offset = "0x4725820", VA = "0x4725820", Slot = "4")]
	internal virtual void OnAdd(XmlSchemaObjectCollection container, object item)
	{
	}

	[Token(Token = "0x60016CC")]
	[Address(RVA = "0x4725830", Offset = "0x4725830", VA = "0x4725830", Slot = "5")]
	internal virtual void OnRemove(XmlSchemaObjectCollection container, object item)
	{
	}

	[Token(Token = "0x60016CD")]
	[Address(RVA = "0x4725840", Offset = "0x4725840", VA = "0x4725840", Slot = "6")]
	internal virtual void OnClear(XmlSchemaObjectCollection container)
	{
	}

	[Token(Token = "0x60016D0")]
	[Address(RVA = "0x4725870", Offset = "0x4725870", VA = "0x4725870", Slot = "9")]
	internal virtual void SetUnhandledAttributes(XmlAttribute[] moreAttributes)
	{
	}

	[Token(Token = "0x60016D1")]
	[Address(RVA = "0x4725880", Offset = "0x4725880", VA = "0x4725880", Slot = "10")]
	internal virtual void AddAnnotation(XmlSchemaAnnotation annotation)
	{
	}

	[Token(Token = "0x60016D6")]
	[Address(RVA = "0x47258D0", Offset = "0x47258D0", VA = "0x47258D0", Slot = "13")]
	internal virtual XmlSchemaObject Clone()
	{
		return null;
	}

	[Token(Token = "0x60016D7")]
	[Address(RVA = "0x471BD70", Offset = "0x471BD70", VA = "0x471BD70")]
	protected XmlSchemaObject()
	{
	}
}
