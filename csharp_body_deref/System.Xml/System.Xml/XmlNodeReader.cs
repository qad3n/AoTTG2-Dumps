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
		[Address(RVA = "0x44A5530", Offset = "0x44A5530", VA = "0x44A5530", Slot = "6")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x170002A5")]
	public override string Name
	{
		[Token(Token = "0x60009F1")]
		[Address(RVA = "0x44A5540", Offset = "0x44A5540", VA = "0x44A5540", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A6")]
	public override string LocalName
	{
		[Token(Token = "0x60009F2")]
		[Address(RVA = "0x44A5580", Offset = "0x44A5580", VA = "0x44A5580", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A7")]
	public override string NamespaceURI
	{
		[Token(Token = "0x60009F3")]
		[Address(RVA = "0x44A5610", Offset = "0x44A5610", VA = "0x44A5610", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A8")]
	public override string Prefix
	{
		[Token(Token = "0x60009F4")]
		[Address(RVA = "0x44A5660", Offset = "0x44A5660", VA = "0x44A5660", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A9")]
	public override string Value
	{
		[Token(Token = "0x60009F5")]
		[Address(RVA = "0x44A56B0", Offset = "0x44A56B0", VA = "0x44A56B0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002AA")]
	public override int Depth
	{
		[Token(Token = "0x60009F6")]
		[Address(RVA = "0x44A56F0", Offset = "0x44A56F0", VA = "0x44A56F0", Slot = "12")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002AB")]
	public override string BaseURI
	{
		[Token(Token = "0x60009F7")]
		[Address(RVA = "0x44A5700", Offset = "0x44A5700", VA = "0x44A5700", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002AC")]
	public override bool CanResolveEntity
	{
		[Token(Token = "0x60009F8")]
		[Address(RVA = "0x44A5730", Offset = "0x44A5730", VA = "0x44A5730", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002AD")]
	public override bool IsEmptyElement
	{
		[Token(Token = "0x60009F9")]
		[Address(RVA = "0x44A5740", Offset = "0x44A5740", VA = "0x44A5740", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002AE")]
	public override bool IsDefault
	{
		[Token(Token = "0x60009FA")]
		[Address(RVA = "0x44A57E0", Offset = "0x44A57E0", VA = "0x44A57E0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002AF")]
	public override XmlSpace XmlSpace
	{
		[Token(Token = "0x60009FB")]
		[Address(RVA = "0x44A5800", Offset = "0x44A5800", VA = "0x44A5800", Slot = "17")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x170002B0")]
	public override string XmlLang
	{
		[Token(Token = "0x60009FC")]
		[Address(RVA = "0x44A5840", Offset = "0x44A5840", VA = "0x44A5840", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002B1")]
	public override IXmlSchemaInfo SchemaInfo
	{
		[Token(Token = "0x60009FD")]
		[Address(RVA = "0x44A5890", Offset = "0x44A5890", VA = "0x44A5890", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002B2")]
	public override int AttributeCount
	{
		[Token(Token = "0x60009FE")]
		[Address(RVA = "0x44A58D0", Offset = "0x44A58D0", VA = "0x44A58D0", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002B3")]
	public override bool EOF
	{
		[Token(Token = "0x6000A0E")]
		[Address(RVA = "0x44A6900", Offset = "0x44A6900", VA = "0x44A6900", Slot = "32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002B4")]
	public override ReadState ReadState
	{
		[Token(Token = "0x6000A10")]
		[Address(RVA = "0x44A6930", Offset = "0x44A6930", VA = "0x44A6930", Slot = "34")]
		get
		{
			return default(ReadState);
		}
	}

	[Token(Token = "0x170002B5")]
	public override bool HasAttributes
	{
		[Token(Token = "0x6000A13")]
		[Address(RVA = "0x44A69F0", Offset = "0x44A69F0", VA = "0x44A69F0", Slot = "49")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002B6")]
	public override XmlNameTable NameTable
	{
		[Token(Token = "0x6000A14")]
		[Address(RVA = "0x44A6A10", Offset = "0x44A6A10", VA = "0x44A6A10", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002B7")]
	internal override IDtdInfo DtdInfo
	{
		[Token(Token = "0x6000A1C")]
		[Address(RVA = "0x44A6BB0", Offset = "0x44A6BB0", VA = "0x44A6BB0", Slot = "52")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009EE")]
	[Address(RVA = "0x44A5430", Offset = "0x44A5430", VA = "0x44A5430")]
	public XmlNodeReader(XmlNode node)
	{
	}

	[Token(Token = "0x60009EF")]
	[Address(RVA = "0x44A5520", Offset = "0x44A5520", VA = "0x44A5520")]
	internal bool IsInReadingStates()
	{
		return default(bool);
	}

	[Token(Token = "0x60009FF")]
	[Address(RVA = "0x44A5900", Offset = "0x44A5900", VA = "0x44A5900", Slot = "22")]
	public override string GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x6000A00")]
	[Address(RVA = "0x44A5920", Offset = "0x44A5920", VA = "0x44A5920", Slot = "23")]
	public override string GetAttribute(string name, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x6000A01")]
	[Address(RVA = "0x44A5960", Offset = "0x44A5960", VA = "0x44A5960", Slot = "24")]
	public override string GetAttribute(int attributeIndex)
	{
		return null;
	}

	[Token(Token = "0x6000A02")]
	[Address(RVA = "0x44A59D0", Offset = "0x44A59D0", VA = "0x44A59D0", Slot = "25")]
	public override bool MoveToAttribute(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A03")]
	[Address(RVA = "0x44A5AF0", Offset = "0x44A5AF0", VA = "0x44A5AF0", Slot = "26")]
	public override void MoveToAttribute(int attributeIndex)
	{
	}

	[Token(Token = "0x6000A04")]
	[Address(RVA = "0x44A5D10", Offset = "0x44A5D10", VA = "0x44A5D10", Slot = "27")]
	public override bool MoveToFirstAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A05")]
	[Address(RVA = "0x44A5E00", Offset = "0x44A5E00", VA = "0x44A5E00", Slot = "28")]
	public override bool MoveToNextAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A06")]
	[Address(RVA = "0x44A5F20", Offset = "0x44A5F20", VA = "0x44A5F20", Slot = "29")]
	public override bool MoveToElement()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A07")]
	[Address(RVA = "0x44A60A0", Offset = "0x44A60A0", VA = "0x44A60A0", Slot = "31")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A08")]
	[Address(RVA = "0x44A60B0", Offset = "0x44A60B0", VA = "0x44A60B0")]
	private bool Read(bool fSkipChildren)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A09")]
	[Address(RVA = "0x44A6240", Offset = "0x44A6240", VA = "0x44A6240")]
	private bool ReadNextNode(bool fSkipChildren)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A0A")]
	[Address(RVA = "0x44A67D0", Offset = "0x44A67D0", VA = "0x44A67D0")]
	private void SetEndOfFile()
	{
	}

	[Token(Token = "0x6000A0B")]
	[Address(RVA = "0x44A67F0", Offset = "0x44A67F0", VA = "0x44A67F0")]
	private bool ReadAtZeroLevel(bool fSkipChildren)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A0C")]
	[Address(RVA = "0x44A6640", Offset = "0x44A6640", VA = "0x44A6640")]
	private bool ReadForward(bool fSkipChildren)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A0D")]
	[Address(RVA = "0x44A6620", Offset = "0x44A6620", VA = "0x44A6620")]
	private void ReSetReadingMarks()
	{
	}

	[Token(Token = "0x6000A0F")]
	[Address(RVA = "0x44A6920", Offset = "0x44A6920", VA = "0x44A6920", Slot = "33")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000A11")]
	[Address(RVA = "0x44A6940", Offset = "0x44A6940", VA = "0x44A6940", Slot = "35")]
	public override void Skip()
	{
	}

	[Token(Token = "0x6000A12")]
	[Address(RVA = "0x44A6950", Offset = "0x44A6950", VA = "0x44A6950", Slot = "42")]
	public override string ReadString()
	{
		return null;
	}

	[Token(Token = "0x6000A15")]
	[Address(RVA = "0x44A6A30", Offset = "0x44A6A30", VA = "0x44A6A30", Slot = "37")]
	public override string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000A16")]
	[Address(RVA = "0x44A6A60", Offset = "0x44A6A60", VA = "0x44A6A60", Slot = "39")]
	public override void ResolveEntity()
	{
	}

	[Token(Token = "0x6000A17")]
	[Address(RVA = "0x44A6AD0", Offset = "0x44A6AD0", VA = "0x44A6AD0", Slot = "30")]
	public override bool ReadAttributeValue()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A18")]
	[Address(RVA = "0x44A5AD0", Offset = "0x44A5AD0", VA = "0x44A5AD0")]
	private void FinishReadBinary()
	{
	}

	[Token(Token = "0x6000A19")]
	[Address(RVA = "0x44A6B10", Offset = "0x44A6B10", VA = "0x44A6B10", Slot = "53")]
	private IDictionary<string, string> System_002EXml_002EIXmlNamespaceResolver_002EGetNamespacesInScope(XmlNamespaceScope scope)
	{
		return null;
	}

	[Token(Token = "0x6000A1A")]
	[Address(RVA = "0x44A6B30", Offset = "0x44A6B30", VA = "0x44A6B30", Slot = "55")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupPrefix(string namespaceName)
	{
		return null;
	}

	[Token(Token = "0x6000A1B")]
	[Address(RVA = "0x44A6B50", Offset = "0x44A6B50", VA = "0x44A6B50", Slot = "54")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupNamespace(string prefix)
	{
		return null;
	}
}
