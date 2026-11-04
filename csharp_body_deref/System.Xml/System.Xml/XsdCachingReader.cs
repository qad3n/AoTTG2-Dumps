// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XsdCachingReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x1C702C0", Offset = "0x1C6E8C0", VA = "0x181C702C0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000184")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x60006CD")]
		[Address(RVA = "0x2717F60", Offset = "0x2716560", VA = "0x182717F60", Slot = "6")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000185")]
	public override string Name
	{
		[Token(Token = "0x60006CE")]
		[Address(RVA = "0x2717F30", Offset = "0x2716530", VA = "0x182717F30", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000186")]
	public override string LocalName
	{
		[Token(Token = "0x60006CF")]
		[Address(RVA = "0x1F79970", Offset = "0x1F77F70", VA = "0x181F79970", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000187")]
	public override string NamespaceURI
	{
		[Token(Token = "0x60006D0")]
		[Address(RVA = "0x1F79990", Offset = "0x1F77F90", VA = "0x181F79990", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000188")]
	public override string Prefix
	{
		[Token(Token = "0x60006D1")]
		[Address(RVA = "0x200CC80", Offset = "0x200B280", VA = "0x18200CC80", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000189")]
	public override string Value
	{
		[Token(Token = "0x60006D2")]
		[Address(RVA = "0x2717F80", Offset = "0x2716580", VA = "0x182717F80", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700018A")]
	public override int Depth
	{
		[Token(Token = "0x60006D3")]
		[Address(RVA = "0x2717ED0", Offset = "0x27164D0", VA = "0x182717ED0", Slot = "12")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700018B")]
	public override string BaseURI
	{
		[Token(Token = "0x60006D4")]
		[Address(RVA = "0x25474E0", Offset = "0x2545AE0", VA = "0x1825474E0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700018C")]
	public override bool IsEmptyElement
	{
		[Token(Token = "0x60006D5")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700018D")]
	public override bool IsDefault
	{
		[Token(Token = "0x60006D6")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700018E")]
	public override char QuoteChar
	{
		[Token(Token = "0x60006D7")]
		[Address(RVA = "0x1A1F300", Offset = "0x1A1D900", VA = "0x181A1F300", Slot = "16")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x1700018F")]
	public override XmlSpace XmlSpace
	{
		[Token(Token = "0x60006D8")]
		[Address(RVA = "0x1A1F390", Offset = "0x1A1D990", VA = "0x181A1F390", Slot = "17")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x17000190")]
	public override string XmlLang
	{
		[Token(Token = "0x60006D9")]
		[Address(RVA = "0x2547660", Offset = "0x2545C60", VA = "0x182547660", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000191")]
	public override int AttributeCount
	{
		[Token(Token = "0x60006DA")]
		[Address(RVA = "0x58A8B0", Offset = "0x588EB0", VA = "0x18058A8B0", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000192")]
	public override bool EOF
	{
		[Token(Token = "0x60006E7")]
		[Address(RVA = "0x2717EF0", Offset = "0x27164F0", VA = "0x182717EF0", Slot = "32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000193")]
	public override ReadState ReadState
	{
		[Token(Token = "0x60006E9")]
		[Address(RVA = "0x2547630", Offset = "0x2545C30", VA = "0x182547630", Slot = "34")]
		get
		{
			return default(ReadState);
		}
	}

	[Token(Token = "0x17000194")]
	public override XmlNameTable NameTable
	{
		[Token(Token = "0x60006EB")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000195")]
	private int System_002EXml_002EIXmlLineInfo_002ELineNumber
	{
		[Token(Token = "0x60006F0")]
		[Address(RVA = "0x2717DB0", Offset = "0x27163B0", VA = "0x182717DB0", Slot = "54")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000196")]
	private int System_002EXml_002EIXmlLineInfo_002ELinePosition
	{
		[Token(Token = "0x60006F1")]
		[Address(RVA = "0x2717DD0", Offset = "0x27163D0", VA = "0x182717DD0", Slot = "55")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60006C9")]
	[Address(RVA = "0x2717DF0", Offset = "0x27163F0", VA = "0x182717DF0")]
	internal XsdCachingReader(XmlReader reader, IXmlLineInfo lineInfo, CachingEventHandler handlerMethod)
	{
	}

	[Token(Token = "0x60006CA")]
	[Address(RVA = "0x2716DE0", Offset = "0x27153E0", VA = "0x182716DE0")]
	private void Init()
	{
	}

	[Token(Token = "0x60006CB")]
	[Address(RVA = "0x2717A90", Offset = "0x2716090", VA = "0x182717A90")]
	internal void Reset(XmlReader reader)
	{
	}

	[Token(Token = "0x60006DB")]
	[Address(RVA = "0x2716D50", Offset = "0x2715350", VA = "0x182716D50", Slot = "22")]
	public override string GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x60006DC")]
	[Address(RVA = "0x2716C60", Offset = "0x2715260", VA = "0x182716C60", Slot = "23")]
	public override string GetAttribute(string name, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x60006DD")]
	[Address(RVA = "0x2716BD0", Offset = "0x27151D0", VA = "0x182716BD0", Slot = "24")]
	public override string GetAttribute(int i)
	{
		return null;
	}

	[Token(Token = "0x60006DE")]
	[Address(RVA = "0x2717000", Offset = "0x2715600", VA = "0x182717000", Slot = "25")]
	public override bool MoveToAttribute(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60006DF")]
	[Address(RVA = "0x2716F60", Offset = "0x2715560", VA = "0x182716F60", Slot = "26")]
	public override void MoveToAttribute(int i)
	{
	}

	[Token(Token = "0x60006E0")]
	[Address(RVA = "0x27170E0", Offset = "0x27156E0", VA = "0x1827170E0", Slot = "27")]
	public override bool MoveToFirstAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x60006E1")]
	[Address(RVA = "0x2717130", Offset = "0x2715730", VA = "0x182717130", Slot = "28")]
	public override bool MoveToNextAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x60006E2")]
	[Address(RVA = "0x2717090", Offset = "0x2715690", VA = "0x182717090", Slot = "29")]
	public override bool MoveToElement()
	{
		return default(bool);
	}

	[Token(Token = "0x60006E3")]
	[Address(RVA = "0x2717280", Offset = "0x2715880", VA = "0x182717280", Slot = "31")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x60006E4")]
	[Address(RVA = "0x2717A20", Offset = "0x2716020", VA = "0x182717A20")]
	internal ValidatingReaderNodeData RecordTextNode(string textValue, string originalStringValue, int depth, int lineNo, int linePos)
	{
		return null;
	}

	[Token(Token = "0x60006E5")]
	[Address(RVA = "0x2717C60", Offset = "0x2716260", VA = "0x182717C60")]
	internal void SwitchTextNodeAndEndElement(string textValue, string originalStringValue)
	{
	}

	[Token(Token = "0x60006E6")]
	[Address(RVA = "0x27178D0", Offset = "0x2715ED0", VA = "0x1827178D0")]
	internal void RecordEndElementNode()
	{
	}

	[Token(Token = "0x60006E8")]
	[Address(RVA = "0x2716970", Offset = "0x2714F70", VA = "0x182716970", Slot = "33")]
	public override void Close()
	{
	}

	[Token(Token = "0x60006EA")]
	[Address(RVA = "0x2717B30", Offset = "0x2716130", VA = "0x182717B30", Slot = "35")]
	public override void Skip()
	{
	}

	[Token(Token = "0x60006EC")]
	[Address(RVA = "0x1AE50F0", Offset = "0x1AE36F0", VA = "0x181AE50F0", Slot = "37")]
	public override string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x60006ED")]
	[Address(RVA = "0x2717AC0", Offset = "0x27160C0", VA = "0x182717AC0", Slot = "39")]
	public override void ResolveEntity()
	{
	}

	[Token(Token = "0x60006EE")]
	[Address(RVA = "0x2717190", Offset = "0x2715790", VA = "0x182717190", Slot = "30")]
	public override bool ReadAttributeValue()
	{
		return default(bool);
	}

	[Token(Token = "0x60006EF")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "53")]
	private bool System_002EXml_002EIXmlLineInfo_002EHasLineInfo()
	{
		return default(bool);
	}

	[Token(Token = "0x60006F2")]
	[Address(RVA = "0x2717B00", Offset = "0x2716100", VA = "0x182717B00")]
	internal void SetToReplayMode()
	{
	}

	[Token(Token = "0x60006F3")]
	[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
	internal XmlReader GetCoreReader()
	{
		return null;
	}

	[Token(Token = "0x60006F4")]
	[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
	internal IXmlLineInfo GetLineInfo()
	{
		return null;
	}

	[Token(Token = "0x60006F5")]
	[Address(RVA = "0x2716960", Offset = "0x2714F60", VA = "0x182716960")]
	private void ClearAttributesInfo()
	{
	}

	[Token(Token = "0x60006F6")]
	[Address(RVA = "0x2716640", Offset = "0x2714C40", VA = "0x182716640")]
	private ValidatingReaderNodeData AddAttribute(int attIndex)
	{
		return null;
	}

	[Token(Token = "0x60006F7")]
	[Address(RVA = "0x27167D0", Offset = "0x2714DD0", VA = "0x1827167D0")]
	private ValidatingReaderNodeData AddContent(XmlNodeType nodeType)
	{
		return null;
	}

	[Token(Token = "0x60006F8")]
	[Address(RVA = "0x27175D0", Offset = "0x2715BD0", VA = "0x1827175D0")]
	private void RecordAttributes()
	{
	}

	[Token(Token = "0x60006F9")]
	[Address(RVA = "0x2716B30", Offset = "0x2715130", VA = "0x182716B30")]
	private int GetAttributeIndexWithoutPrefix(string name)
	{
		return default(int);
	}

	[Token(Token = "0x60006FA")]
	[Address(RVA = "0x2716A70", Offset = "0x2715070", VA = "0x182716A70")]
	private int GetAttributeIndexWithPrefix(string name)
	{
		return default(int);
	}

	[Token(Token = "0x60006FB")]
	[Address(RVA = "0x27169B0", Offset = "0x2714FB0", VA = "0x1827169B0")]
	private ValidatingReaderNodeData CreateDummyTextNode(string attributeValue, int depth)
	{
		return null;
	}
}
