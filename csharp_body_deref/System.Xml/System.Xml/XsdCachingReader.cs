using System.Reflection;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000086")]
[DefaultMember("Item")]
internal class XsdCachingReader : XmlReader, IXmlLineInfo
{
	[Token(Token = "0x2000087")]
	private enum CachingReaderState
	{
		[Token(Token = "0x40003DE")]
		None,
		[Token(Token = "0x40003DF")]
		Init,
		[Token(Token = "0x40003E0")]
		Record,
		[Token(Token = "0x40003E1")]
		Replay,
		[Token(Token = "0x40003E2")]
		ReaderClosed,
		[Token(Token = "0x40003E3")]
		Error
	}

	[Token(Token = "0x40003CE")]
	[FieldOffset(Offset = "0x10")]
	private XmlReader coreReader;

	[Token(Token = "0x40003CF")]
	[FieldOffset(Offset = "0x18")]
	private XmlNameTable coreReaderNameTable;

	[Token(Token = "0x40003D0")]
	[FieldOffset(Offset = "0x20")]
	private ValidatingReaderNodeData[] contentEvents;

	[Token(Token = "0x40003D1")]
	[FieldOffset(Offset = "0x28")]
	private ValidatingReaderNodeData[] attributeEvents;

	[Token(Token = "0x40003D2")]
	[FieldOffset(Offset = "0x30")]
	private ValidatingReaderNodeData cachedNode;

	[Token(Token = "0x40003D3")]
	[FieldOffset(Offset = "0x38")]
	private CachingReaderState cacheState;

	[Token(Token = "0x40003D4")]
	[FieldOffset(Offset = "0x3C")]
	private int contentIndex;

	[Token(Token = "0x40003D5")]
	[FieldOffset(Offset = "0x40")]
	private int attributeCount;

	[Token(Token = "0x40003D6")]
	[FieldOffset(Offset = "0x44")]
	private bool returnOriginalStringValues;

	[Token(Token = "0x40003D7")]
	[FieldOffset(Offset = "0x48")]
	private CachingEventHandler cacheHandler;

	[Token(Token = "0x40003D8")]
	[FieldOffset(Offset = "0x50")]
	private int currentAttrIndex;

	[Token(Token = "0x40003D9")]
	[FieldOffset(Offset = "0x54")]
	private int currentContentIndex;

	[Token(Token = "0x40003DA")]
	[FieldOffset(Offset = "0x58")]
	private bool readAhead;

	[Token(Token = "0x40003DB")]
	[FieldOffset(Offset = "0x60")]
	private IXmlLineInfo lineInfo;

	[Token(Token = "0x40003DC")]
	[FieldOffset(Offset = "0x68")]
	private ValidatingReaderNodeData textNode;

	[Token(Token = "0x17000183")]
	public override XmlReaderSettings Settings
	{
		[Token(Token = "0x60006CC")]
		[Address(RVA = "0x447EB80", Offset = "0x447EB80", VA = "0x447EB80", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000184")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x60006CD")]
		[Address(RVA = "0x447EBB0", Offset = "0x447EBB0", VA = "0x447EBB0", Slot = "6")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000185")]
	public override string Name
	{
		[Token(Token = "0x60006CE")]
		[Address(RVA = "0x447EBD0", Offset = "0x447EBD0", VA = "0x447EBD0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000186")]
	public override string LocalName
	{
		[Token(Token = "0x60006CF")]
		[Address(RVA = "0x447EBF0", Offset = "0x447EBF0", VA = "0x447EBF0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000187")]
	public override string NamespaceURI
	{
		[Token(Token = "0x60006D0")]
		[Address(RVA = "0x447EC10", Offset = "0x447EC10", VA = "0x447EC10", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000188")]
	public override string Prefix
	{
		[Token(Token = "0x60006D1")]
		[Address(RVA = "0x447EC30", Offset = "0x447EC30", VA = "0x447EC30", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000189")]
	public override string Value
	{
		[Token(Token = "0x60006D2")]
		[Address(RVA = "0x447EC50", Offset = "0x447EC50", VA = "0x447EC50", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700018A")]
	public override int Depth
	{
		[Token(Token = "0x60006D3")]
		[Address(RVA = "0x447EC70", Offset = "0x447EC70", VA = "0x447EC70", Slot = "12")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700018B")]
	public override string BaseURI
	{
		[Token(Token = "0x60006D4")]
		[Address(RVA = "0x447EC90", Offset = "0x447EC90", VA = "0x447EC90", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700018C")]
	public override bool IsEmptyElement
	{
		[Token(Token = "0x60006D5")]
		[Address(RVA = "0x447ECC0", Offset = "0x447ECC0", VA = "0x447ECC0", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700018D")]
	public override bool IsDefault
	{
		[Token(Token = "0x60006D6")]
		[Address(RVA = "0x447ECD0", Offset = "0x447ECD0", VA = "0x447ECD0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700018E")]
	public override char QuoteChar
	{
		[Token(Token = "0x60006D7")]
		[Address(RVA = "0x447ECE0", Offset = "0x447ECE0", VA = "0x447ECE0", Slot = "16")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x1700018F")]
	public override XmlSpace XmlSpace
	{
		[Token(Token = "0x60006D8")]
		[Address(RVA = "0x447ED10", Offset = "0x447ED10", VA = "0x447ED10", Slot = "17")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x17000190")]
	public override string XmlLang
	{
		[Token(Token = "0x60006D9")]
		[Address(RVA = "0x447ED40", Offset = "0x447ED40", VA = "0x447ED40", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000191")]
	public override int AttributeCount
	{
		[Token(Token = "0x60006DA")]
		[Address(RVA = "0x447ED70", Offset = "0x447ED70", VA = "0x447ED70", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000192")]
	public override bool EOF
	{
		[Token(Token = "0x60006E7")]
		[Address(RVA = "0x447F8A0", Offset = "0x447F8A0", VA = "0x447F8A0", Slot = "32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000193")]
	public override ReadState ReadState
	{
		[Token(Token = "0x60006E9")]
		[Address(RVA = "0x447F900", Offset = "0x447F900", VA = "0x447F900", Slot = "34")]
		get
		{
			return default(ReadState);
		}
	}

	[Token(Token = "0x17000194")]
	public override XmlNameTable NameTable
	{
		[Token(Token = "0x60006EB")]
		[Address(RVA = "0x447FA50", Offset = "0x447FA50", VA = "0x447FA50", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000195")]
	private int System_002EXml_002EIXmlLineInfo_002ELineNumber
	{
		[Token(Token = "0x60006F0")]
		[Address(RVA = "0x447FC50", Offset = "0x447FC50", VA = "0x447FC50", Slot = "54")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000196")]
	private int System_002EXml_002EIXmlLineInfo_002ELinePosition
	{
		[Token(Token = "0x60006F1")]
		[Address(RVA = "0x447FC70", Offset = "0x447FC70", VA = "0x447FC70", Slot = "55")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60006C9")]
	[Address(RVA = "0x447E5E0", Offset = "0x447E5E0", VA = "0x447E5E0")]
	internal XsdCachingReader(XmlReader reader, IXmlLineInfo lineInfo, CachingEventHandler handlerMethod)
	{
	}

	[Token(Token = "0x60006CA")]
	[Address(RVA = "0x447E6C0", Offset = "0x447E6C0", VA = "0x447E6C0")]
	private void Init()
	{
	}

	[Token(Token = "0x60006CB")]
	[Address(RVA = "0x447EB60", Offset = "0x447EB60", VA = "0x447EB60")]
	internal void Reset(XmlReader reader)
	{
	}

	[Token(Token = "0x60006DB")]
	[Address(RVA = "0x447ED80", Offset = "0x447ED80", VA = "0x447ED80", Slot = "22")]
	public override string GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x60006DC")]
	[Address(RVA = "0x447EF50", Offset = "0x447EF50", VA = "0x447EF50", Slot = "23")]
	public override string GetAttribute(string name, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x60006DD")]
	[Address(RVA = "0x447F060", Offset = "0x447F060", VA = "0x447F060", Slot = "24")]
	public override string GetAttribute(int i)
	{
		return null;
	}

	[Token(Token = "0x60006DE")]
	[Address(RVA = "0x447F0E0", Offset = "0x447F0E0", VA = "0x447F0E0", Slot = "25")]
	public override bool MoveToAttribute(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60006DF")]
	[Address(RVA = "0x447F170", Offset = "0x447F170", VA = "0x447F170", Slot = "26")]
	public override void MoveToAttribute(int i)
	{
	}

	[Token(Token = "0x60006E0")]
	[Address(RVA = "0x447F200", Offset = "0x447F200", VA = "0x447F200", Slot = "27")]
	public override bool MoveToFirstAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x60006E1")]
	[Address(RVA = "0x447F240", Offset = "0x447F240", VA = "0x447F240", Slot = "28")]
	public override bool MoveToNextAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x60006E2")]
	[Address(RVA = "0x447F290", Offset = "0x447F290", VA = "0x447F290", Slot = "29")]
	public override bool MoveToElement()
	{
		return default(bool);
	}

	[Token(Token = "0x60006E3")]
	[Address(RVA = "0x447F2D0", Offset = "0x447F2D0", VA = "0x447F2D0", Slot = "31")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x60006E4")]
	[Address(RVA = "0x447F5D0", Offset = "0x447F5D0", VA = "0x447F5D0")]
	internal ValidatingReaderNodeData RecordTextNode(string textValue, string originalStringValue, int depth, int lineNo, int linePos)
	{
		return null;
	}

	[Token(Token = "0x60006E5")]
	[Address(RVA = "0x447F640", Offset = "0x447F640", VA = "0x447F640")]
	internal void SwitchTextNodeAndEndElement(string textValue, string originalStringValue)
	{
	}

	[Token(Token = "0x60006E6")]
	[Address(RVA = "0x447F780", Offset = "0x447F780", VA = "0x447F780")]
	internal void RecordEndElementNode()
	{
	}

	[Token(Token = "0x60006E8")]
	[Address(RVA = "0x447F8D0", Offset = "0x447F8D0", VA = "0x447F8D0", Slot = "33")]
	public override void Close()
	{
	}

	[Token(Token = "0x60006EA")]
	[Address(RVA = "0x447F930", Offset = "0x447F930", VA = "0x447F930", Slot = "35")]
	public override void Skip()
	{
	}

	[Token(Token = "0x60006EC")]
	[Address(RVA = "0x447FA60", Offset = "0x447FA60", VA = "0x447FA60", Slot = "37")]
	public override string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x60006ED")]
	[Address(RVA = "0x447FA90", Offset = "0x447FA90", VA = "0x447FA90", Slot = "39")]
	public override void ResolveEntity()
	{
	}

	[Token(Token = "0x60006EE")]
	[Address(RVA = "0x447FAD0", Offset = "0x447FAD0", VA = "0x447FAD0", Slot = "30")]
	public override bool ReadAttributeValue()
	{
		return default(bool);
	}

	[Token(Token = "0x60006EF")]
	[Address(RVA = "0x447FC40", Offset = "0x447FC40", VA = "0x447FC40", Slot = "53")]
	private bool System_002EXml_002EIXmlLineInfo_002EHasLineInfo()
	{
		return default(bool);
	}

	[Token(Token = "0x60006F2")]
	[Address(RVA = "0x447FC90", Offset = "0x447FC90", VA = "0x447FC90")]
	internal void SetToReplayMode()
	{
	}

	[Token(Token = "0x60006F3")]
	[Address(RVA = "0x447FCC0", Offset = "0x447FCC0", VA = "0x447FCC0")]
	internal XmlReader GetCoreReader()
	{
		return null;
	}

	[Token(Token = "0x60006F4")]
	[Address(RVA = "0x447FCD0", Offset = "0x447FCD0", VA = "0x447FCD0")]
	internal IXmlLineInfo GetLineInfo()
	{
		return null;
	}

	[Token(Token = "0x60006F5")]
	[Address(RVA = "0x447F5C0", Offset = "0x447F5C0", VA = "0x447F5C0")]
	private void ClearAttributesInfo()
	{
	}

	[Token(Token = "0x60006F6")]
	[Address(RVA = "0x447FCE0", Offset = "0x447FCE0", VA = "0x447FCE0")]
	private ValidatingReaderNodeData AddAttribute(int attIndex)
	{
		return null;
	}

	[Token(Token = "0x60006F7")]
	[Address(RVA = "0x447E840", Offset = "0x447E840", VA = "0x447E840")]
	private ValidatingReaderNodeData AddContent(XmlNodeType nodeType)
	{
		return null;
	}

	[Token(Token = "0x60006F8")]
	[Address(RVA = "0x447E9B0", Offset = "0x447E9B0", VA = "0x447E9B0")]
	private void RecordAttributes()
	{
	}

	[Token(Token = "0x60006F9")]
	[Address(RVA = "0x447EE00", Offset = "0x447EE00", VA = "0x447EE00")]
	private int GetAttributeIndexWithoutPrefix(string name)
	{
		return default(int);
	}

	[Token(Token = "0x60006FA")]
	[Address(RVA = "0x447EEB0", Offset = "0x447EEB0", VA = "0x447EEB0")]
	private int GetAttributeIndexWithPrefix(string name)
	{
		return default(int);
	}

	[Token(Token = "0x60006FB")]
	[Address(RVA = "0x447FBA0", Offset = "0x447FBA0", VA = "0x447FBA0")]
	private ValidatingReaderNodeData CreateDummyTextNode(string attributeValue, int depth)
	{
		return null;
	}
}
