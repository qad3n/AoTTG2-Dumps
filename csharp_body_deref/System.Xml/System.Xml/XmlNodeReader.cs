// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlNodeReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Xml.Schema;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000B5")]
public class XmlNodeReader : XmlReader, IXmlNamespaceResolver
{
	[Token(Token = "0x40004B4")]
	[FieldOffset(Offset = "0x10")]
	private XmlNodeReaderNavigator readerNav;

	[Token(Token = "0x40004B5")]
	[FieldOffset(Offset = "0x18")]
	private XmlNodeType nodeType;

	[Token(Token = "0x40004B6")]
	[FieldOffset(Offset = "0x1C")]
	private int curDepth;

	[Token(Token = "0x40004B7")]
	[FieldOffset(Offset = "0x20")]
	private ReadState readState;

	[Token(Token = "0x40004B8")]
	[FieldOffset(Offset = "0x24")]
	private bool fEOF;

	[Token(Token = "0x40004B9")]
	[FieldOffset(Offset = "0x25")]
	private bool bResolveEntity;

	[Token(Token = "0x40004BA")]
	[FieldOffset(Offset = "0x26")]
	private bool bStartFromDocument;

	[Token(Token = "0x40004BB")]
	[FieldOffset(Offset = "0x27")]
	private bool bInReadBinary;

	[Token(Token = "0x40004BC")]
	[FieldOffset(Offset = "0x28")]
	private ReadContentAsBinaryHelper readBinaryHelper;

	[Token(Token = "0x170002A4")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x60009F0")]
		[Address(RVA = "0x60E56F0", Offset = "0x60E46F0", VA = "0x60E56F0", Slot = "6")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x170002A5")]
	public override string Name
	{
		[Token(Token = "0x60009F1")]
		[Address(RVA = "0x60E5700", Offset = "0x60E4700", VA = "0x60E5700", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A6")]
	public override string LocalName
	{
		[Token(Token = "0x60009F2")]
		[Address(RVA = "0x60E5740", Offset = "0x60E4740", VA = "0x60E5740", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A7")]
	public override string NamespaceURI
	{
		[Token(Token = "0x60009F3")]
		[Address(RVA = "0x60E57D0", Offset = "0x60E47D0", VA = "0x60E57D0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A8")]
	public override string Prefix
	{
		[Token(Token = "0x60009F4")]
		[Address(RVA = "0x60E5820", Offset = "0x60E4820", VA = "0x60E5820", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A9")]
	public override string Value
	{
		[Token(Token = "0x60009F5")]
		[Address(RVA = "0x60E5870", Offset = "0x60E4870", VA = "0x60E5870", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002AA")]
	public override int Depth
	{
		[Token(Token = "0x60009F6")]
		[Address(RVA = "0x60E58B0", Offset = "0x60E48B0", VA = "0x60E58B0", Slot = "12")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002AB")]
	public override string BaseURI
	{
		[Token(Token = "0x60009F7")]
		[Address(RVA = "0x60E58C0", Offset = "0x60E48C0", VA = "0x60E58C0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002AC")]
	public override bool CanResolveEntity
	{
		[Token(Token = "0x60009F8")]
		[Address(RVA = "0x60E58F0", Offset = "0x60E48F0", VA = "0x60E58F0", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002AD")]
	public override bool IsEmptyElement
	{
		[Token(Token = "0x60009F9")]
		[Address(RVA = "0x60E5900", Offset = "0x60E4900", VA = "0x60E5900", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002AE")]
	public override bool IsDefault
	{
		[Token(Token = "0x60009FA")]
		[Address(RVA = "0x60E59A0", Offset = "0x60E49A0", VA = "0x60E59A0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002AF")]
	public override XmlSpace XmlSpace
	{
		[Token(Token = "0x60009FB")]
		[Address(RVA = "0x60E59C0", Offset = "0x60E49C0", VA = "0x60E59C0", Slot = "17")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x170002B0")]
	public override string XmlLang
	{
		[Token(Token = "0x60009FC")]
		[Address(RVA = "0x60E5A00", Offset = "0x60E4A00", VA = "0x60E5A00", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002B1")]
	public override IXmlSchemaInfo SchemaInfo
	{
		[Token(Token = "0x60009FD")]
		[Address(RVA = "0x60E5A50", Offset = "0x60E4A50", VA = "0x60E5A50", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002B2")]
	public override int AttributeCount
	{
		[Token(Token = "0x60009FE")]
		[Address(RVA = "0x60E5A90", Offset = "0x60E4A90", VA = "0x60E5A90", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002B3")]
	public override bool EOF
	{
		[Token(Token = "0x6000A0E")]
		[Address(RVA = "0x60E6AC0", Offset = "0x60E5AC0", VA = "0x60E6AC0", Slot = "32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002B4")]
	public override ReadState ReadState
	{
		[Token(Token = "0x6000A10")]
		[Address(RVA = "0x60E6AF0", Offset = "0x60E5AF0", VA = "0x60E6AF0", Slot = "34")]
		get
		{
			return default(ReadState);
		}
	}

	[Token(Token = "0x170002B5")]
	public override bool HasAttributes
	{
		[Token(Token = "0x6000A13")]
		[Address(RVA = "0x60E6BB0", Offset = "0x60E5BB0", VA = "0x60E6BB0", Slot = "49")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002B6")]
	public override XmlNameTable NameTable
	{
		[Token(Token = "0x6000A14")]
		[Address(RVA = "0x60E6BD0", Offset = "0x60E5BD0", VA = "0x60E6BD0", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002B7")]
	internal override IDtdInfo DtdInfo
	{
		[Token(Token = "0x6000A1C")]
		[Address(RVA = "0x60E6D70", Offset = "0x60E5D70", VA = "0x60E6D70", Slot = "52")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009EE")]
	[Address(RVA = "0x60E55F0", Offset = "0x60E45F0", VA = "0x60E55F0")]
	public XmlNodeReader(XmlNode node)
	{
	}

	[Token(Token = "0x60009EF")]
	[Address(RVA = "0x60E56E0", Offset = "0x60E46E0", VA = "0x60E56E0")]
	internal bool IsInReadingStates()
	{
		return default(bool);
	}

	[Token(Token = "0x60009FF")]
	[Address(RVA = "0x60E5AC0", Offset = "0x60E4AC0", VA = "0x60E5AC0", Slot = "22")]
	public override string GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x6000A00")]
	[Address(RVA = "0x60E5AE0", Offset = "0x60E4AE0", VA = "0x60E5AE0", Slot = "23")]
	public override string GetAttribute(string name, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x6000A01")]
	[Address(RVA = "0x60E5B20", Offset = "0x60E4B20", VA = "0x60E5B20", Slot = "24")]
	public override string GetAttribute(int attributeIndex)
	{
		return null;
	}

	[Token(Token = "0x6000A02")]
	[Address(RVA = "0x60E5B90", Offset = "0x60E4B90", VA = "0x60E5B90", Slot = "25")]
	public override bool MoveToAttribute(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A03")]
	[Address(RVA = "0x60E5CC0", Offset = "0x60E4CC0", VA = "0x60E5CC0", Slot = "26")]
	public override void MoveToAttribute(int attributeIndex)
	{
	}

	[Token(Token = "0x6000A04")]
	[Address(RVA = "0x60E5EC0", Offset = "0x60E4EC0", VA = "0x60E5EC0", Slot = "27")]
	public override bool MoveToFirstAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A05")]
	[Address(RVA = "0x60E5FC0", Offset = "0x60E4FC0", VA = "0x60E5FC0", Slot = "28")]
	public override bool MoveToNextAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A06")]
	[Address(RVA = "0x60E60E0", Offset = "0x60E50E0", VA = "0x60E60E0", Slot = "29")]
	public override bool MoveToElement()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A07")]
	[Address(RVA = "0x60E6260", Offset = "0x60E5260", VA = "0x60E6260", Slot = "31")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A08")]
	[Address(RVA = "0x60E6270", Offset = "0x60E5270", VA = "0x60E6270")]
	private bool Read(bool fSkipChildren)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A09")]
	[Address(RVA = "0x60E6400", Offset = "0x60E5400", VA = "0x60E6400")]
	private bool ReadNextNode(bool fSkipChildren)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A0A")]
	[Address(RVA = "0x60E6990", Offset = "0x60E5990", VA = "0x60E6990")]
	private void SetEndOfFile()
	{
	}

	[Token(Token = "0x6000A0B")]
	[Address(RVA = "0x60E69B0", Offset = "0x60E59B0", VA = "0x60E69B0")]
	private bool ReadAtZeroLevel(bool fSkipChildren)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A0C")]
	[Address(RVA = "0x60E6800", Offset = "0x60E5800", VA = "0x60E6800")]
	private bool ReadForward(bool fSkipChildren)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A0D")]
	[Address(RVA = "0x60E67E0", Offset = "0x60E57E0", VA = "0x60E67E0")]
	private void ReSetReadingMarks()
	{
	}

	[Token(Token = "0x6000A0F")]
	[Address(RVA = "0x60E6AE0", Offset = "0x60E5AE0", VA = "0x60E6AE0", Slot = "33")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000A11")]
	[Address(RVA = "0x60E6B00", Offset = "0x60E5B00", VA = "0x60E6B00", Slot = "35")]
	public override void Skip()
	{
	}

	[Token(Token = "0x6000A12")]
	[Address(RVA = "0x60E6B10", Offset = "0x60E5B10", VA = "0x60E6B10", Slot = "42")]
	public override string ReadString()
	{
		return null;
	}

	[Token(Token = "0x6000A15")]
	[Address(RVA = "0x60E6BF0", Offset = "0x60E5BF0", VA = "0x60E6BF0", Slot = "37")]
	public override string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000A16")]
	[Address(RVA = "0x60E6C20", Offset = "0x60E5C20", VA = "0x60E6C20", Slot = "39")]
	public override void ResolveEntity()
	{
	}

	[Token(Token = "0x6000A17")]
	[Address(RVA = "0x60E6C90", Offset = "0x60E5C90", VA = "0x60E6C90", Slot = "30")]
	public override bool ReadAttributeValue()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A18")]
	[Address(RVA = "0x60E5CA0", Offset = "0x60E4CA0", VA = "0x60E5CA0")]
	private void FinishReadBinary()
	{
	}

	[Token(Token = "0x6000A19")]
	[Address(RVA = "0x60E6CD0", Offset = "0x60E5CD0", VA = "0x60E6CD0", Slot = "53")]
	private IDictionary<string, string> System_002EXml_002EIXmlNamespaceResolver_002EGetNamespacesInScope(XmlNamespaceScope scope)
	{
		return null;
	}

	[Token(Token = "0x6000A1A")]
	[Address(RVA = "0x60E6CF0", Offset = "0x60E5CF0", VA = "0x60E6CF0", Slot = "55")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupPrefix(string namespaceName)
	{
		return null;
	}

	[Token(Token = "0x6000A1B")]
	[Address(RVA = "0x60E6D10", Offset = "0x60E5D10", VA = "0x60E6D10", Slot = "54")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupNamespace(string prefix)
	{
		return null;
	}
}
