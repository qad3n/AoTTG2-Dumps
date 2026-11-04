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
		[Address(RVA = "0x2738290", Offset = "0x2736890", VA = "0x182738290", Slot = "6")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x170002A5")]
	public override string Name
	{
		[Token(Token = "0x60009F1")]
		[Address(RVA = "0x2738200", Offset = "0x2736800", VA = "0x182738200", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A6")]
	public override string LocalName
	{
		[Token(Token = "0x60009F2")]
		[Address(RVA = "0x27380F0", Offset = "0x27366F0", VA = "0x1827380F0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A7")]
	public override string NamespaceURI
	{
		[Token(Token = "0x60009F3")]
		[Address(RVA = "0x2738240", Offset = "0x2736840", VA = "0x182738240", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A8")]
	public override string Prefix
	{
		[Token(Token = "0x60009F4")]
		[Address(RVA = "0x27382A0", Offset = "0x27368A0", VA = "0x1827382A0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A9")]
	public override string Value
	{
		[Token(Token = "0x60009F5")]
		[Address(RVA = "0x2738330", Offset = "0x2736930", VA = "0x182738330", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002AA")]
	public override int Depth
	{
		[Token(Token = "0x60009F6")]
		[Address(RVA = "0xD23EC0", Offset = "0xD224C0", VA = "0x180D23EC0", Slot = "12")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002AB")]
	public override string BaseURI
	{
		[Token(Token = "0x60009F7")]
		[Address(RVA = "0x2737F60", Offset = "0x2736560", VA = "0x182737F60", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002AC")]
	public override bool CanResolveEntity
	{
		[Token(Token = "0x60009F8")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002AD")]
	public override bool IsEmptyElement
	{
		[Token(Token = "0x60009F9")]
		[Address(RVA = "0x27380C0", Offset = "0x27366C0", VA = "0x1827380C0", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002AE")]
	public override bool IsDefault
	{
		[Token(Token = "0x60009FA")]
		[Address(RVA = "0x2737FE0", Offset = "0x27365E0", VA = "0x182737FE0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002AF")]
	public override XmlSpace XmlSpace
	{
		[Token(Token = "0x60009FB")]
		[Address(RVA = "0x27383C0", Offset = "0x27369C0", VA = "0x1827383C0", Slot = "17")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x170002B0")]
	public override string XmlLang
	{
		[Token(Token = "0x60009FC")]
		[Address(RVA = "0x2738370", Offset = "0x2736970", VA = "0x182738370", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002B1")]
	public override IXmlSchemaInfo SchemaInfo
	{
		[Token(Token = "0x60009FD")]
		[Address(RVA = "0x27382F0", Offset = "0x27368F0", VA = "0x1827382F0", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002B2")]
	public override int AttributeCount
	{
		[Token(Token = "0x60009FE")]
		[Address(RVA = "0x2737F20", Offset = "0x2736520", VA = "0x182737F20", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002B3")]
	public override bool EOF
	{
		[Token(Token = "0x6000A0E")]
		[Address(RVA = "0x2737FD0", Offset = "0x27365D0", VA = "0x182737FD0", Slot = "32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002B4")]
	public override ReadState ReadState
	{
		[Token(Token = "0x6000A10")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170", Slot = "34")]
		get
		{
			return default(ReadState);
		}
	}

	[Token(Token = "0x170002B5")]
	public override bool HasAttributes
	{
		[Token(Token = "0x6000A13")]
		[Address(RVA = "0x26F0470", Offset = "0x26EEA70", VA = "0x1826F0470", Slot = "49")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002B6")]
	public override XmlNameTable NameTable
	{
		[Token(Token = "0x6000A14")]
		[Address(RVA = "0x27381E0", Offset = "0x27367E0", VA = "0x1827381E0", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002B7")]
	internal override IDtdInfo DtdInfo
	{
		[Token(Token = "0x6000A1C")]
		[Address(RVA = "0x2737FA0", Offset = "0x27365A0", VA = "0x182737FA0", Slot = "52")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009EE")]
	[Address(RVA = "0x2737E20", Offset = "0x2736420", VA = "0x182737E20")]
	public XmlNodeReader(XmlNode node)
	{
	}

	[Token(Token = "0x60009EF")]
	[Address(RVA = "0x2736BA0", Offset = "0x27351A0", VA = "0x182736BA0")]
	internal bool IsInReadingStates()
	{
		return default(bool);
	}

	[Token(Token = "0x60009FF")]
	[Address(RVA = "0x2736B20", Offset = "0x2735120", VA = "0x182736B20", Slot = "22")]
	public override string GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x6000A00")]
	[Address(RVA = "0x2736B50", Offset = "0x2735150", VA = "0x182736B50", Slot = "23")]
	public override string GetAttribute(string name, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x6000A01")]
	[Address(RVA = "0x2736AA0", Offset = "0x27350A0", VA = "0x182736AA0", Slot = "24")]
	public override string GetAttribute(int attributeIndex)
	{
		return null;
	}

	[Token(Token = "0x6000A02")]
	[Address(RVA = "0x2736DB0", Offset = "0x27353B0", VA = "0x182736DB0", Slot = "25")]
	public override bool MoveToAttribute(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A03")]
	[Address(RVA = "0x2736BF0", Offset = "0x27351F0", VA = "0x182736BF0", Slot = "26")]
	public override void MoveToAttribute(int attributeIndex)
	{
	}

	[Token(Token = "0x6000A04")]
	[Address(RVA = "0x2737070", Offset = "0x2735670", VA = "0x182737070", Slot = "27")]
	public override bool MoveToFirstAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A05")]
	[Address(RVA = "0x2737180", Offset = "0x2735780", VA = "0x182737180", Slot = "28")]
	public override bool MoveToNextAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A06")]
	[Address(RVA = "0x2736EC0", Offset = "0x27354C0", VA = "0x182736EC0", Slot = "29")]
	public override bool MoveToElement()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A07")]
	[Address(RVA = "0x2737980", Offset = "0x2735F80", VA = "0x182737980", Slot = "31")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A08")]
	[Address(RVA = "0x2737990", Offset = "0x2735F90", VA = "0x182737990")]
	private bool Read(bool fSkipChildren)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A09")]
	[Address(RVA = "0x2737600", Offset = "0x2735C00", VA = "0x182737600")]
	private bool ReadNextNode(bool fSkipChildren)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A0A")]
	[Address(RVA = "0x2737BF0", Offset = "0x27361F0", VA = "0x182737BF0")]
	private void SetEndOfFile()
	{
	}

	[Token(Token = "0x6000A0B")]
	[Address(RVA = "0x2737300", Offset = "0x2735900", VA = "0x182737300")]
	private bool ReadAtZeroLevel(bool fSkipChildren)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A0C")]
	[Address(RVA = "0x27373F0", Offset = "0x27359F0", VA = "0x1827373F0")]
	private bool ReadForward(bool fSkipChildren)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A0D")]
	[Address(RVA = "0x27372D0", Offset = "0x27358D0", VA = "0x1827372D0")]
	private void ReSetReadingMarks()
	{
	}

	[Token(Token = "0x6000A0F")]
	[Address(RVA = "0x2736A60", Offset = "0x2735060", VA = "0x182736A60", Slot = "33")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000A11")]
	[Address(RVA = "0x2737C10", Offset = "0x2736210", VA = "0x182737C10", Slot = "35")]
	public override void Skip()
	{
	}

	[Token(Token = "0x6000A12")]
	[Address(RVA = "0x27378D0", Offset = "0x2735ED0", VA = "0x1827378D0", Slot = "42")]
	public override string ReadString()
	{
		return null;
	}

	[Token(Token = "0x6000A15")]
	[Address(RVA = "0x2736BB0", Offset = "0x27351B0", VA = "0x182736BB0", Slot = "37")]
	public override string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000A16")]
	[Address(RVA = "0x2737B60", Offset = "0x2736160", VA = "0x182737B60", Slot = "39")]
	public override void ResolveEntity()
	{
	}

	[Token(Token = "0x6000A17")]
	[Address(RVA = "0x27373A0", Offset = "0x27359A0", VA = "0x1827373A0", Slot = "30")]
	public override bool ReadAttributeValue()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A18")]
	[Address(RVA = "0x2736A70", Offset = "0x2735070", VA = "0x182736A70")]
	private void FinishReadBinary()
	{
	}

	[Token(Token = "0x6000A19")]
	[Address(RVA = "0x2737C20", Offset = "0x2736220", VA = "0x182737C20", Slot = "53")]
	private IDictionary<string, string> System_002EXml_002EIXmlNamespaceResolver_002EGetNamespacesInScope(XmlNamespaceScope scope)
	{
		return null;
	}

	[Token(Token = "0x6000A1A")]
	[Address(RVA = "0x2737E00", Offset = "0x2736400", VA = "0x182737E00", Slot = "55")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupPrefix(string namespaceName)
	{
		return null;
	}

	[Token(Token = "0x6000A1B")]
	[Address(RVA = "0x2737C40", Offset = "0x2736240", VA = "0x182737C40", Slot = "54")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupNamespace(string prefix)
	{
		return null;
	}
}
