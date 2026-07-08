using System.Collections.Generic;
using System.IO;
using System.Text;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000011")]
internal sealed class XmlSqlBinaryReader : XmlReader, IXmlNamespaceResolver
{
	[Token(Token = "0x2000012")]
	private enum ScanState
	{
		[Token(Token = "0x40000A7")]
		Doc,
		[Token(Token = "0x40000A8")]
		XmlText,
		[Token(Token = "0x40000A9")]
		Attr,
		[Token(Token = "0x40000AA")]
		AttrVal,
		[Token(Token = "0x40000AB")]
		AttrValPseudoValue,
		[Token(Token = "0x40000AC")]
		Init,
		[Token(Token = "0x40000AD")]
		Error,
		[Token(Token = "0x40000AE")]
		EOF,
		[Token(Token = "0x40000AF")]
		Closed
	}

	[Token(Token = "0x2000013")]
	internal struct QName
	{
		[Token(Token = "0x40000B0")]
		[FieldOffset(Offset = "0x0")]
		public string prefix;

		[Token(Token = "0x40000B1")]
		[FieldOffset(Offset = "0x8")]
		public string localname;

		[Token(Token = "0x40000B2")]
		[FieldOffset(Offset = "0x10")]
		public string namespaceUri;

		[Token(Token = "0x60000C2")]
		[Address(RVA = "0x4351730", Offset = "0x4351730", VA = "0x4351730")]
		public QName(string prefix, string lname, string nsUri)
		{
		}

		[Token(Token = "0x60000C3")]
		[Address(RVA = "0x4350180", Offset = "0x4350180", VA = "0x4350180")]
		public void Set(string prefix, string lname, string nsUri)
		{
		}

		[Token(Token = "0x60000C4")]
		[Address(RVA = "0x434B320", Offset = "0x434B320", VA = "0x434B320")]
		public void Clear()
		{
		}

		[Token(Token = "0x60000C5")]
		[Address(RVA = "0x4350E90", Offset = "0x4350E90", VA = "0x4350E90")]
		public bool MatchNs(string lname, string nsUri)
		{
			return default(bool);
		}

		[Token(Token = "0x60000C6")]
		[Address(RVA = "0x4350ED0", Offset = "0x4350ED0", VA = "0x4350ED0")]
		public bool MatchPrefix(string prefix, string lname)
		{
			return default(bool);
		}

		[Token(Token = "0x60000C7")]
		[Address(RVA = "0x4351300", Offset = "0x4351300", VA = "0x4351300")]
		public void CheckPrefixNS(string prefix, string namespaceUri)
		{
		}

		[Token(Token = "0x60000C8")]
		[Address(RVA = "0x43555B0", Offset = "0x43555B0", VA = "0x43555B0", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x60000C9")]
		[Address(RVA = "0x4355600", Offset = "0x4355600", VA = "0x4355600")]
		public int GetNSHashCode(SecureStringHasher hasher)
		{
			return default(int);
		}

		[Token(Token = "0x60000CA")]
		[Address(RVA = "0x4355640", Offset = "0x4355640", VA = "0x4355640", Slot = "0")]
		public override bool Equals(object other)
		{
			return default(bool);
		}

		[Token(Token = "0x60000CB")]
		[Address(RVA = "0x4352750", Offset = "0x4352750", VA = "0x4352750", Slot = "3")]
		public override string ToString()
		{
			return null;
		}

		[Token(Token = "0x60000CC")]
		[Address(RVA = "0x43556E0", Offset = "0x43556E0", VA = "0x43556E0")]
		public static bool operator ==(QName a, QName b)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000014")]
	private struct ElemInfo
	{
		[Token(Token = "0x40000B3")]
		[FieldOffset(Offset = "0x0")]
		public QName name;

		[Token(Token = "0x40000B4")]
		[FieldOffset(Offset = "0x18")]
		public string xmlLang;

		[Token(Token = "0x40000B5")]
		[FieldOffset(Offset = "0x20")]
		public XmlSpace xmlSpace;

		[Token(Token = "0x40000B6")]
		[FieldOffset(Offset = "0x24")]
		public bool xmlspacePreserve;

		[Token(Token = "0x40000B7")]
		[FieldOffset(Offset = "0x28")]
		public NamespaceDecl nsdecls;

		[Token(Token = "0x60000CD")]
		[Address(RVA = "0x4353B60", Offset = "0x4353B60", VA = "0x4353B60")]
		public void Set(QName name, bool xmlspacePreserve)
		{
		}

		[Token(Token = "0x60000CE")]
		[Address(RVA = "0x43529A0", Offset = "0x43529A0", VA = "0x43529A0")]
		public NamespaceDecl Clear()
		{
			return null;
		}
	}

	[Token(Token = "0x2000015")]
	private struct AttrInfo
	{
		[Token(Token = "0x40000B8")]
		[FieldOffset(Offset = "0x0")]
		public QName name;

		[Token(Token = "0x40000B9")]
		[FieldOffset(Offset = "0x18")]
		public string val;

		[Token(Token = "0x40000BA")]
		[FieldOffset(Offset = "0x20")]
		public int contentPos;

		[Token(Token = "0x40000BB")]
		[FieldOffset(Offset = "0x24")]
		public int hashCode;

		[Token(Token = "0x40000BC")]
		[FieldOffset(Offset = "0x28")]
		public int prevHash;

		[Token(Token = "0x60000CF")]
		[Address(RVA = "0x4351770", Offset = "0x4351770", VA = "0x4351770")]
		public void Set(QName n, string v)
		{
		}

		[Token(Token = "0x60000D0")]
		[Address(RVA = "0x4351E00", Offset = "0x4351E00", VA = "0x4351E00")]
		public void Set(QName n, int pos)
		{
		}

		[Token(Token = "0x60000D1")]
		[Address(RVA = "0x43526D0", Offset = "0x43526D0", VA = "0x43526D0")]
		public void GetLocalnameAndNamespaceUri(out string localname, out string namespaceUri)
		{
		}

		[Token(Token = "0x60000D2")]
		[Address(RVA = "0x43527A0", Offset = "0x43527A0", VA = "0x43527A0")]
		public int GetLocalnameAndNamespaceUriAndHash(SecureStringHasher hasher, out string localname, out string namespaceUri)
		{
			return default(int);
		}

		[Token(Token = "0x60000D3")]
		[Address(RVA = "0x4352710", Offset = "0x4352710", VA = "0x4352710")]
		public bool MatchNS(string localname, string namespaceUri)
		{
			return default(bool);
		}

		[Token(Token = "0x60000D4")]
		[Address(RVA = "0x4352810", Offset = "0x4352810", VA = "0x4352810")]
		public bool MatchHashNS(int hash, string localname, string namespaceUri)
		{
			return default(bool);
		}

		[Token(Token = "0x60000D5")]
		[Address(RVA = "0x4350630", Offset = "0x4350630", VA = "0x4350630")]
		public void AdjustPosition(int adj)
		{
		}
	}

	[Token(Token = "0x2000016")]
	private class NamespaceDecl
	{
		[Token(Token = "0x40000BD")]
		[FieldOffset(Offset = "0x10")]
		public string prefix;

		[Token(Token = "0x40000BE")]
		[FieldOffset(Offset = "0x18")]
		public string uri;

		[Token(Token = "0x40000BF")]
		[FieldOffset(Offset = "0x20")]
		public NamespaceDecl scopeLink;

		[Token(Token = "0x40000C0")]
		[FieldOffset(Offset = "0x28")]
		public NamespaceDecl prevLink;

		[Token(Token = "0x40000C1")]
		[FieldOffset(Offset = "0x30")]
		public int scope;

		[Token(Token = "0x40000C2")]
		[FieldOffset(Offset = "0x34")]
		public bool implied;

		[Token(Token = "0x60000D6")]
		[Address(RVA = "0x434FBC0", Offset = "0x434FBC0", VA = "0x434FBC0")]
		public NamespaceDecl(string prefix, string nsuri, NamespaceDecl nextInScope, NamespaceDecl prevDecl, int scope, bool implied)
		{
		}
	}

	[Token(Token = "0x2000017")]
	private struct SymbolTables
	{
		[Token(Token = "0x40000C3")]
		[FieldOffset(Offset = "0x0")]
		public string[] symtable;

		[Token(Token = "0x40000C4")]
		[FieldOffset(Offset = "0x8")]
		public int symCount;

		[Token(Token = "0x40000C5")]
		[FieldOffset(Offset = "0x10")]
		public QName[] qnametable;

		[Token(Token = "0x40000C6")]
		[FieldOffset(Offset = "0x18")]
		public int qnameCount;

		[Token(Token = "0x60000D7")]
		[Address(RVA = "0x434B260", Offset = "0x434B260", VA = "0x434B260")]
		public void Init()
		{
		}
	}

	[Token(Token = "0x2000018")]
	private class NestedBinXml
	{
		[Token(Token = "0x40000C7")]
		[FieldOffset(Offset = "0x10")]
		public SymbolTables symbolTables;

		[Token(Token = "0x40000C8")]
		[FieldOffset(Offset = "0x30")]
		public int docState;

		[Token(Token = "0x40000C9")]
		[FieldOffset(Offset = "0x38")]
		public NestedBinXml next;

		[Token(Token = "0x60000D8")]
		[Address(RVA = "0x4353BB0", Offset = "0x4353BB0", VA = "0x4353BB0")]
		public NestedBinXml(SymbolTables symbolTables, int docState, NestedBinXml next)
		{
		}
	}

	[Token(Token = "0x4000070")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly Type TypeOfObject;

	[Token(Token = "0x4000071")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly Type TypeOfString;

	[Token(Token = "0x4000072")]
	[FieldOffset(Offset = "0x10")]
	private static Type[] TokenTypeMap;

	[Token(Token = "0x4000073")]
	[FieldOffset(Offset = "0x18")]
	private static byte[] XsdKatmaiTimeScaleToValueLengthMap;

	[Token(Token = "0x4000074")]
	[FieldOffset(Offset = "0x20")]
	private static ReadState[] ScanState2ReadState;

	[Token(Token = "0x4000075")]
	[FieldOffset(Offset = "0x10")]
	private Stream inStrm;

	[Token(Token = "0x4000076")]
	[FieldOffset(Offset = "0x18")]
	private byte[] data;

	[Token(Token = "0x4000077")]
	[FieldOffset(Offset = "0x20")]
	private int pos;

	[Token(Token = "0x4000078")]
	[FieldOffset(Offset = "0x24")]
	private int mark;

	[Token(Token = "0x4000079")]
	[FieldOffset(Offset = "0x28")]
	private int end;

	[Token(Token = "0x400007A")]
	[FieldOffset(Offset = "0x30")]
	private long offset;

	[Token(Token = "0x400007B")]
	[FieldOffset(Offset = "0x38")]
	private bool eof;

	[Token(Token = "0x400007C")]
	[FieldOffset(Offset = "0x39")]
	private bool sniffed;

	[Token(Token = "0x400007D")]
	[FieldOffset(Offset = "0x3A")]
	private bool isEmpty;

	[Token(Token = "0x400007E")]
	[FieldOffset(Offset = "0x3C")]
	private int docState;

	[Token(Token = "0x400007F")]
	[FieldOffset(Offset = "0x40")]
	private SymbolTables symbolTables;

	[Token(Token = "0x4000080")]
	[FieldOffset(Offset = "0x60")]
	private XmlNameTable xnt;

	[Token(Token = "0x4000081")]
	[FieldOffset(Offset = "0x68")]
	private bool xntFromSettings;

	[Token(Token = "0x4000082")]
	[FieldOffset(Offset = "0x70")]
	private string xml;

	[Token(Token = "0x4000083")]
	[FieldOffset(Offset = "0x78")]
	private string xmlns;

	[Token(Token = "0x4000084")]
	[FieldOffset(Offset = "0x80")]
	private string nsxmlns;

	[Token(Token = "0x4000085")]
	[FieldOffset(Offset = "0x88")]
	private string baseUri;

	[Token(Token = "0x4000086")]
	[FieldOffset(Offset = "0x90")]
	private ScanState state;

	[Token(Token = "0x4000087")]
	[FieldOffset(Offset = "0x94")]
	private XmlNodeType nodetype;

	[Token(Token = "0x4000088")]
	[FieldOffset(Offset = "0x98")]
	private BinXmlToken token;

	[Token(Token = "0x4000089")]
	[FieldOffset(Offset = "0x9C")]
	private int attrIndex;

	[Token(Token = "0x400008A")]
	[FieldOffset(Offset = "0xA0")]
	private QName qnameOther;

	[Token(Token = "0x400008B")]
	[FieldOffset(Offset = "0xB8")]
	private QName qnameElement;

	[Token(Token = "0x400008C")]
	[FieldOffset(Offset = "0xD0")]
	private XmlNodeType parentNodeType;

	[Token(Token = "0x400008D")]
	[FieldOffset(Offset = "0xD8")]
	private ElemInfo[] elementStack;

	[Token(Token = "0x400008E")]
	[FieldOffset(Offset = "0xE0")]
	private int elemDepth;

	[Token(Token = "0x400008F")]
	[FieldOffset(Offset = "0xE8")]
	private AttrInfo[] attributes;

	[Token(Token = "0x4000090")]
	[FieldOffset(Offset = "0xF0")]
	private int[] attrHashTbl;

	[Token(Token = "0x4000091")]
	[FieldOffset(Offset = "0xF8")]
	private int attrCount;

	[Token(Token = "0x4000092")]
	[FieldOffset(Offset = "0xFC")]
	private int posAfterAttrs;

	[Token(Token = "0x4000093")]
	[FieldOffset(Offset = "0x100")]
	private bool xmlspacePreserve;

	[Token(Token = "0x4000094")]
	[FieldOffset(Offset = "0x104")]
	private int tokLen;

	[Token(Token = "0x4000095")]
	[FieldOffset(Offset = "0x108")]
	private int tokDataPos;

	[Token(Token = "0x4000096")]
	[FieldOffset(Offset = "0x10C")]
	private bool hasTypedValue;

	[Token(Token = "0x4000097")]
	[FieldOffset(Offset = "0x110")]
	private Type valueType;

	[Token(Token = "0x4000098")]
	[FieldOffset(Offset = "0x118")]
	private string stringValue;

	[Token(Token = "0x4000099")]
	[FieldOffset(Offset = "0x120")]
	private Dictionary<string, NamespaceDecl> namespaces;

	[Token(Token = "0x400009A")]
	[FieldOffset(Offset = "0x128")]
	private NestedBinXml prevNameInfo;

	[Token(Token = "0x400009B")]
	[FieldOffset(Offset = "0x130")]
	private XmlReader textXmlReader;

	[Token(Token = "0x400009C")]
	[FieldOffset(Offset = "0x138")]
	private bool closeInput;

	[Token(Token = "0x400009D")]
	[FieldOffset(Offset = "0x139")]
	private bool checkCharacters;

	[Token(Token = "0x400009E")]
	[FieldOffset(Offset = "0x13A")]
	private bool ignoreWhitespace;

	[Token(Token = "0x400009F")]
	[FieldOffset(Offset = "0x13B")]
	private bool ignorePIs;

	[Token(Token = "0x40000A0")]
	[FieldOffset(Offset = "0x13C")]
	private bool ignoreComments;

	[Token(Token = "0x40000A1")]
	[FieldOffset(Offset = "0x140")]
	private DtdProcessing dtdProcessing;

	[Token(Token = "0x40000A2")]
	[FieldOffset(Offset = "0x148")]
	private SecureStringHasher hasher;

	[Token(Token = "0x40000A3")]
	[FieldOffset(Offset = "0x150")]
	private XmlCharType xmlCharType;

	[Token(Token = "0x40000A4")]
	[FieldOffset(Offset = "0x158")]
	private Encoding unicode;

	[Token(Token = "0x40000A5")]
	[FieldOffset(Offset = "0x160")]
	private byte version;

	[Token(Token = "0x17000003")]
	public override XmlReaderSettings Settings
	{
		[Token(Token = "0x600004A")]
		[Address(RVA = "0x434C180", Offset = "0x434C180", VA = "0x434C180", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000004")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x600004B")]
		[Address(RVA = "0x434C2A0", Offset = "0x434C2A0", VA = "0x434C2A0", Slot = "6")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000005")]
	public override string LocalName
	{
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x434C2B0", Offset = "0x434C2B0", VA = "0x434C2B0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000006")]
	public override string NamespaceURI
	{
		[Token(Token = "0x600004D")]
		[Address(RVA = "0x434C2C0", Offset = "0x434C2C0", VA = "0x434C2C0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000007")]
	public override string Prefix
	{
		[Token(Token = "0x600004E")]
		[Address(RVA = "0x434C2D0", Offset = "0x434C2D0", VA = "0x434C2D0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000008")]
	public override string Value
	{
		[Token(Token = "0x600004F")]
		[Address(RVA = "0x434C2E0", Offset = "0x434C2E0", VA = "0x434C2E0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000009")]
	public override int Depth
	{
		[Token(Token = "0x6000050")]
		[Address(RVA = "0x434D3D0", Offset = "0x434D3D0", VA = "0x434D3D0", Slot = "12")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700000A")]
	public override string BaseURI
	{
		[Token(Token = "0x6000051")]
		[Address(RVA = "0x434D470", Offset = "0x434D470", VA = "0x434D470", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000B")]
	public override bool IsEmptyElement
	{
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x434D480", Offset = "0x434D480", VA = "0x434D480", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000C")]
	public override XmlSpace XmlSpace
	{
		[Token(Token = "0x6000053")]
		[Address(RVA = "0x434D4A0", Offset = "0x434D4A0", VA = "0x434D4A0", Slot = "17")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x1700000D")]
	public override string XmlLang
	{
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x434D530", Offset = "0x434D530", VA = "0x434D530", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000E")]
	public override Type ValueType
	{
		[Token(Token = "0x6000055")]
		[Address(RVA = "0x434D5D0", Offset = "0x434D5D0", VA = "0x434D5D0", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000F")]
	public override int AttributeCount
	{
		[Token(Token = "0x6000056")]
		[Address(RVA = "0x434D5E0", Offset = "0x434D5E0", VA = "0x434D5E0", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000010")]
	public override bool EOF
	{
		[Token(Token = "0x600005F")]
		[Address(RVA = "0x434DE90", Offset = "0x434DE90", VA = "0x434DE90", Slot = "32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000011")]
	public override XmlNameTable NameTable
	{
		[Token(Token = "0x6000062")]
		[Address(RVA = "0x434E3C0", Offset = "0x434E3C0", VA = "0x434E3C0", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000012")]
	public override ReadState ReadState
	{
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x434E4C0", Offset = "0x434E4C0", VA = "0x434E4C0", Slot = "34")]
		get
		{
			return default(ReadState);
		}
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x434AC40", Offset = "0x434AC40", VA = "0x434AC40")]
	public XmlSqlBinaryReader(Stream stream, byte[] data, int len, string baseUri, bool closeInput, XmlReaderSettings settings)
	{
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x434D630", Offset = "0x434D630", VA = "0x434D630", Slot = "23")]
	public override string GetAttribute(string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x434D880", Offset = "0x434D880", VA = "0x434D880", Slot = "22")]
	public override string GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x434DA00", Offset = "0x434DA00", VA = "0x434DA00", Slot = "24")]
	public override string GetAttribute(int i)
	{
		return null;
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x434DA90", Offset = "0x434DA90", VA = "0x434DA90", Slot = "25")]
	public override bool MoveToAttribute(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x434DC20", Offset = "0x434DC20", VA = "0x434DC20", Slot = "26")]
	public override void MoveToAttribute(int i)
	{
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x434DCC0", Offset = "0x434DCC0", VA = "0x434DCC0", Slot = "27")]
	public override bool MoveToFirstAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x434DD20", Offset = "0x434DD20", VA = "0x434DD20", Slot = "28")]
	public override bool MoveToNextAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x434DDA0", Offset = "0x434DDA0", VA = "0x434DDA0", Slot = "29")]
	public override bool MoveToElement()
	{
		return default(bool);
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x434DEA0", Offset = "0x434DEA0", VA = "0x434DEA0", Slot = "30")]
	public override bool ReadAttributeValue()
	{
		return default(bool);
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x434E300", Offset = "0x434E300", VA = "0x434E300", Slot = "33")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x434E3D0", Offset = "0x434E3D0", VA = "0x434E3D0", Slot = "37")]
	public override string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x434E480", Offset = "0x434E480", VA = "0x434E480", Slot = "39")]
	public override void ResolveEntity()
	{
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x434E560", Offset = "0x434E560", VA = "0x434E560", Slot = "31")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x434F460", Offset = "0x434F460", VA = "0x434F460", Slot = "53")]
	private IDictionary<string, string> System_002EXml_002EIXmlNamespaceResolver_002EGetNamespacesInScope(XmlNamespaceScope scope)
	{
		return null;
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x434F950", Offset = "0x434F950", VA = "0x434F950", Slot = "55")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupPrefix(string namespaceName)
	{
		return null;
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x434FB10", Offset = "0x434FB10", VA = "0x434FB10")]
	private void VerifyVersion(int requiredVersion, BinXmlToken token)
	{
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x434B380", Offset = "0x434B380", VA = "0x434B380")]
	private void AddInitNamespace(string prefix, string uri)
	{
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x434FC40", Offset = "0x434FC40", VA = "0x434FC40")]
	private void AddName()
	{
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x434FE20", Offset = "0x434FE20", VA = "0x434FE20")]
	private void AddQName()
	{
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x43501C0", Offset = "0x43501C0", VA = "0x43501C0")]
	private void NameFlush()
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x4350210", Offset = "0x4350210", VA = "0x4350210")]
	private void SkipExtn()
	{
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x4350370", Offset = "0x4350370", VA = "0x4350370")]
	private int ReadQNameRef()
	{
		return default(int);
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x43500F0", Offset = "0x43500F0", VA = "0x43500F0")]
	private int ReadNameRef()
	{
		return default(int);
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x4350400", Offset = "0x4350400", VA = "0x4350400")]
	private bool FillAllowEOF()
	{
		return default(bool);
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x4350640", Offset = "0x4350640", VA = "0x4350640")]
	private void Fill_(int require)
	{
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x43502F0", Offset = "0x43502F0", VA = "0x43502F0")]
	private void Fill(int require)
	{
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x4350710", Offset = "0x4350710", VA = "0x4350710")]
	private byte ReadByte()
	{
		return default(byte);
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x43507A0", Offset = "0x43507A0", VA = "0x43507A0")]
	private ushort ReadUShort()
	{
		return default(ushort);
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x43502D0", Offset = "0x43502D0", VA = "0x43502D0")]
	private int ParseMB32()
	{
		return default(int);
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x4350840", Offset = "0x4350840", VA = "0x4350840")]
	private int ParseMB32_(byte b)
	{
		return default(int);
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x43508F0", Offset = "0x43508F0", VA = "0x43508F0")]
	private int ParseMB32(int pos)
	{
		return default(int);
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x43509E0", Offset = "0x43509E0", VA = "0x43509E0")]
	private int ParseMB64()
	{
		return default(int);
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x4350A00", Offset = "0x4350A00", VA = "0x4350A00")]
	private BinXmlToken PeekToken()
	{
		return default(BinXmlToken);
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x4350A60", Offset = "0x4350A60", VA = "0x4350A60")]
	private BinXmlToken ReadToken()
	{
		return default(BinXmlToken);
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x4350AC0", Offset = "0x4350AC0", VA = "0x4350AC0")]
	private BinXmlToken NextToken2(BinXmlToken token)
	{
		return default(BinXmlToken);
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x4350C30", Offset = "0x4350C30", VA = "0x4350C30")]
	private BinXmlToken NextToken1()
	{
		return default(BinXmlToken);
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x4350CD0", Offset = "0x4350CD0", VA = "0x4350CD0")]
	private BinXmlToken NextToken()
	{
		return default(BinXmlToken);
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x4350D10", Offset = "0x4350D10", VA = "0x4350D10")]
	private BinXmlToken PeekNextToken()
	{
		return default(BinXmlToken);
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x434E090", Offset = "0x434E090", VA = "0x434E090")]
	private BinXmlToken RescanNextToken()
	{
		return default(BinXmlToken);
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x434FD60", Offset = "0x434FD60", VA = "0x434FD60")]
	private string ParseText()
	{
		return null;
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x4350D70", Offset = "0x4350D70", VA = "0x4350D70")]
	private int ScanText(out int start)
	{
		return default(int);
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x434C400", Offset = "0x434C400", VA = "0x434C400")]
	private string GetString(int pos, int cch)
	{
		return null;
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x4350E60", Offset = "0x4350E60", VA = "0x4350E60")]
	private string GetStringAligned(byte[] data, int offset, int cch)
	{
		return null;
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x434D2B0", Offset = "0x434D2B0", VA = "0x434D2B0")]
	private string GetAttributeText(int i)
	{
		return null;
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x434D7D0", Offset = "0x434D7D0", VA = "0x434D7D0")]
	private int LocateAttribute(string name, string ns)
	{
		return default(int);
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x434D8E0", Offset = "0x434D8E0", VA = "0x434D8E0")]
	private int LocateAttribute(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x434DB10", Offset = "0x434DB10", VA = "0x434DB10")]
	private void PositionOnAttribute(int i)
	{
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x4350F10", Offset = "0x4350F10", VA = "0x4350F10")]
	private void GrowElements()
	{
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x4350FA0", Offset = "0x4350FA0", VA = "0x4350FA0")]
	private void GrowAttributes()
	{
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x4351030", Offset = "0x4351030", VA = "0x4351030")]
	private void ClearAttributes()
	{
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x4351050", Offset = "0x4351050", VA = "0x4351050")]
	private void PushNamespace(string prefix, string ns, bool implied)
	{
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x43513F0", Offset = "0x43513F0", VA = "0x43513F0")]
	private void PopNamespaces(NamespaceDecl firstInScopeChain)
	{
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x43514C0", Offset = "0x43514C0", VA = "0x43514C0")]
	private void GenerateImpliedXmlnsAttrs()
	{
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x434E750", Offset = "0x434E750", VA = "0x434E750")]
	private bool ReadInit(bool skipXmlDecl)
	{
		return default(bool);
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x43517C0", Offset = "0x43517C0", VA = "0x43517C0")]
	private void ScanAttributes()
	{
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x4352170", Offset = "0x4352170", VA = "0x4352170")]
	private void SimpleCheckForDuplicateAttributes()
	{
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x4352350", Offset = "0x4352350", VA = "0x4352350")]
	private void HashCheckForDuplicateAttributes()
	{
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x434C6F0", Offset = "0x434C6F0", VA = "0x434C6F0")]
	private string XmlDeclValue()
	{
		return null;
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x434C540", Offset = "0x434C540", VA = "0x434C540")]
	private string CDATAValue()
	{
		return null;
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x4352850", Offset = "0x4352850", VA = "0x4352850")]
	private void FinishCDATA()
	{
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x4352930", Offset = "0x4352930", VA = "0x4352930")]
	private void FinishEndElement()
	{
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x434EE60", Offset = "0x434EE60", VA = "0x434EE60")]
	private bool ReadDoc()
	{
		return default(bool);
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x4353980", Offset = "0x4353980", VA = "0x4353980")]
	private void ImplReadData(BinXmlToken tokenType)
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x43529C0", Offset = "0x43529C0", VA = "0x43529C0")]
	private void ImplReadElement()
	{
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x4352D60", Offset = "0x4352D60", VA = "0x4352D60")]
	private void ImplReadEndElement()
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x4352E40", Offset = "0x4352E40", VA = "0x4352E40")]
	private void ImplReadDoctype()
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x4353280", Offset = "0x4353280", VA = "0x4353280")]
	private void ImplReadPI()
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x43532F0", Offset = "0x43532F0", VA = "0x43532F0")]
	private void ImplReadComment()
	{
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x4353320", Offset = "0x4353320", VA = "0x4353320")]
	private void ImplReadCDATA()
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x43533A0", Offset = "0x43533A0", VA = "0x43533A0")]
	private void ImplReadNest()
	{
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x43534D0", Offset = "0x43534D0", VA = "0x43534D0")]
	private void ImplReadEndNest()
	{
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x4353530", Offset = "0x4353530", VA = "0x4353530")]
	private void ImplReadXmlText()
	{
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x4353C00", Offset = "0x4353C00", VA = "0x4353C00")]
	private void UpdateFromTextReader()
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x434DB00", Offset = "0x434DB00", VA = "0x434DB00")]
	private bool UpdateFromTextReader(bool needUpdate)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x4353B10", Offset = "0x4353B10", VA = "0x4353B10")]
	private void CheckAllowContent()
	{
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x434B4A0", Offset = "0x434B4A0", VA = "0x434B4A0")]
	private void GenerateTokenTypeMap()
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x434E230", Offset = "0x434E230", VA = "0x434E230")]
	private Type GetValueType(BinXmlToken token)
	{
		return null;
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x434E220", Offset = "0x434E220", VA = "0x434E220")]
	private void ReScanOverValue(BinXmlToken token)
	{
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x4351F20", Offset = "0x4351F20", VA = "0x4351F20")]
	private XmlNodeType ScanOverValue(BinXmlToken token, bool attr, bool checkChars)
	{
		return default(XmlNodeType);
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x4353FA0", Offset = "0x4353FA0", VA = "0x4353FA0")]
	private XmlNodeType ScanOverAnyValue(BinXmlToken token, bool attr, bool checkChars)
	{
		return default(XmlNodeType);
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x4353D00", Offset = "0x4353D00", VA = "0x4353D00")]
	private XmlNodeType CheckText(bool attr)
	{
		return default(XmlNodeType);
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x4353F10", Offset = "0x4353F10", VA = "0x4353F10")]
	private XmlNodeType CheckTextIsWS()
	{
		return default(XmlNodeType);
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x43544D0", Offset = "0x43544D0", VA = "0x43544D0")]
	private void CheckValueTokenBounds()
	{
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x43543B0", Offset = "0x43543B0", VA = "0x43543B0")]
	private int GetXsdKatmaiTokenLength(BinXmlToken token)
	{
		return default(int);
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x4354520", Offset = "0x4354520", VA = "0x4354520")]
	private int XsdKatmaiTimeScaleToValueLength(byte scale)
	{
		return default(int);
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x43545E0", Offset = "0x43545E0", VA = "0x43545E0")]
	private long ValueAsLong()
	{
		return default(long);
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x4354F10", Offset = "0x4354F10", VA = "0x4354F10")]
	private ulong ValueAsULong()
	{
		return default(ulong);
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x4354CC0", Offset = "0x4354CC0", VA = "0x4354CC0")]
	private decimal ValueAsDecimal()
	{
		return default(decimal);
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x4354B60", Offset = "0x4354B60", VA = "0x4354B60")]
	private double ValueAsDouble()
	{
		return default(double);
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x43550F0", Offset = "0x43550F0", VA = "0x43550F0")]
	private string ValueAsDateTimeString()
	{
		return null;
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x434C850", Offset = "0x434C850", VA = "0x434C850")]
	private string ValueAsString(BinXmlToken token)
	{
		return null;
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x4354820", Offset = "0x4354820", VA = "0x4354820")]
	private short GetInt16(int pos)
	{
		return default(short);
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x43549C0", Offset = "0x43549C0", VA = "0x43549C0")]
	private ushort GetUInt16(int pos)
	{
		return default(ushort);
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x4354860", Offset = "0x4354860", VA = "0x4354860")]
	private int GetInt32(int pos)
	{
		return default(int);
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x4354A00", Offset = "0x4354A00", VA = "0x4354A00")]
	private uint GetUInt32(int pos)
	{
		return default(uint);
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x43548D0", Offset = "0x43548D0", VA = "0x43548D0")]
	private long GetInt64(int pos)
	{
		return default(long);
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x4354A70", Offset = "0x4354A70", VA = "0x4354A70")]
	private ulong GetUInt64(int pos)
	{
		return default(ulong);
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x4354F90", Offset = "0x4354F90", VA = "0x4354F90")]
	private float GetSingle(int offset)
	{
		return default(float);
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x4355000", Offset = "0x4355000", VA = "0x4355000")]
	private double GetDouble(int offset)
	{
		return default(double);
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x434FB40", Offset = "0x434FB40", VA = "0x434FB40")]
	private Exception ThrowUnexpectedToken(BinXmlToken token)
	{
		return null;
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x43506B0", Offset = "0x43506B0", VA = "0x43506B0")]
	private Exception ThrowXmlException(string res)
	{
		return null;
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x4351E50", Offset = "0x4351E50", VA = "0x4351E50")]
	private Exception ThrowXmlException(string res, string arg1, string arg2)
	{
		return null;
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x4352100", Offset = "0x4352100", VA = "0x4352100")]
	private Exception ThrowNotSupported(string res)
	{
		return null;
	}
}
