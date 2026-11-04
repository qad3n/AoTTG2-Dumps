// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlSqlBinaryReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x1046250", Offset = "0x1044850", VA = "0x181046250")]
		public QName(string prefix, string lname, string nsUri)
		{
		}

		[Token(Token = "0x60000C3")]
		[Address(RVA = "0x1046250", Offset = "0x1044850", VA = "0x181046250")]
		public void Set(string prefix, string lname, string nsUri)
		{
		}

		[Token(Token = "0x60000C4")]
		[Address(RVA = "0x25D5680", Offset = "0x25D3C80", VA = "0x1825D5680")]
		public void Clear()
		{
		}

		[Token(Token = "0x60000C5")]
		[Address(RVA = "0x25CBFE0", Offset = "0x25CA5E0", VA = "0x1825CBFE0")]
		public bool MatchNs(string lname, string nsUri)
		{
			return default(bool);
		}

		[Token(Token = "0x60000C6")]
		[Address(RVA = "0x25D58B0", Offset = "0x25D3EB0", VA = "0x1825D58B0")]
		public bool MatchPrefix(string prefix, string lname)
		{
			return default(bool);
		}

		[Token(Token = "0x60000C7")]
		[Address(RVA = "0x25D5570", Offset = "0x25D3B70", VA = "0x1825D5570")]
		public void CheckPrefixNS(string prefix, string namespaceUri)
		{
		}

		[Token(Token = "0x60000C8")]
		[Address(RVA = "0x25D57F0", Offset = "0x25D3DF0", VA = "0x1825D57F0", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x60000C9")]
		[Address(RVA = "0x25D5850", Offset = "0x25D3E50", VA = "0x1825D5850")]
		public int GetNSHashCode(SecureStringHasher hasher)
		{
			return default(int);
		}

		[Token(Token = "0x60000CA")]
		[Address(RVA = "0x25D56E0", Offset = "0x25D3CE0", VA = "0x1825D56E0", Slot = "0")]
		public override bool Equals(object other)
		{
			return default(bool);
		}

		[Token(Token = "0x60000CB")]
		[Address(RVA = "0x25D5900", Offset = "0x25D3F00", VA = "0x1825D5900", Slot = "3")]
		public override string ToString()
		{
			return null;
		}

		[Token(Token = "0x60000CC")]
		[Address(RVA = "0x25D5960", Offset = "0x25D3F60", VA = "0x1825D5960")]
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
		[Address(RVA = "0x25D1DB0", Offset = "0x25D03B0", VA = "0x1825D1DB0")]
		public void Set(QName name, bool xmlspacePreserve)
		{
		}

		[Token(Token = "0x60000CE")]
		[Address(RVA = "0x25D1D80", Offset = "0x25D0380", VA = "0x1825D1D80")]
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
		[Address(RVA = "0x25CC080", Offset = "0x25CA680", VA = "0x1825CC080")]
		public void Set(QName n, string v)
		{
		}

		[Token(Token = "0x60000D0")]
		[Address(RVA = "0x25CC030", Offset = "0x25CA630", VA = "0x1825CC030")]
		public void Set(QName n, int pos)
		{
		}

		[Token(Token = "0x60000D1")]
		[Address(RVA = "0x25CBF40", Offset = "0x25CA540", VA = "0x1825CBF40")]
		public void GetLocalnameAndNamespaceUri(out string localname, out string namespaceUri)
		{
		}

		[Token(Token = "0x60000D2")]
		[Address(RVA = "0x25CBEC0", Offset = "0x25CA4C0", VA = "0x1825CBEC0")]
		public int GetLocalnameAndNamespaceUriAndHash(SecureStringHasher hasher, out string localname, out string namespaceUri)
		{
			return default(int);
		}

		[Token(Token = "0x60000D3")]
		[Address(RVA = "0x25CBFE0", Offset = "0x25CA5E0", VA = "0x1825CBFE0")]
		public bool MatchNS(string localname, string namespaceUri)
		{
			return default(bool);
		}

		[Token(Token = "0x60000D4")]
		[Address(RVA = "0x25CBF80", Offset = "0x25CA580", VA = "0x1825CBF80")]
		public bool MatchHashNS(int hash, string localname, string namespaceUri)
		{
			return default(bool);
		}

		[Token(Token = "0x60000D5")]
		[Address(RVA = "0x25CBEB0", Offset = "0x25CA4B0", VA = "0x1825CBEB0")]
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
		[Address(RVA = "0x25D5490", Offset = "0x25D3A90", VA = "0x1825D5490")]
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
		[Address(RVA = "0x25D5AA0", Offset = "0x25D40A0", VA = "0x1825D5AA0")]
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
		[Address(RVA = "0x25D5510", Offset = "0x25D3B10", VA = "0x1825D5510")]
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
		[Address(RVA = "0x25E19C0", Offset = "0x25DFFC0", VA = "0x1825E19C0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000004")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x600004B")]
		[Address(RVA = "0xB5B910", Offset = "0xB59F10", VA = "0x180B5B910", Slot = "6")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000005")]
	public override string LocalName
	{
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x58A890", Offset = "0x588E90", VA = "0x18058A890", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000006")]
	public override string NamespaceURI
	{
		[Token(Token = "0x600004D")]
		[Address(RVA = "0x1537220", Offset = "0x1535820", VA = "0x181537220", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000007")]
	public override string Prefix
	{
		[Token(Token = "0x600004E")]
		[Address(RVA = "0x187BC20", Offset = "0x187A220", VA = "0x18187BC20", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000008")]
	public override string Value
	{
		[Token(Token = "0x600004F")]
		[Address(RVA = "0x25E1AD0", Offset = "0x25E00D0", VA = "0x1825E1AD0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000009")]
	public override int Depth
	{
		[Token(Token = "0x6000050")]
		[Address(RVA = "0x25E1850", Offset = "0x25DFE50", VA = "0x1825E1850", Slot = "12")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700000A")]
	public override string BaseURI
	{
		[Token(Token = "0x6000051")]
		[Address(RVA = "0xB5B9C0", Offset = "0xB59FC0", VA = "0x180B5B9C0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000B")]
	public override bool IsEmptyElement
	{
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x25E1920", Offset = "0x25DFF20", VA = "0x1825E1920", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000C")]
	public override XmlSpace XmlSpace
	{
		[Token(Token = "0x6000053")]
		[Address(RVA = "0x25E1F50", Offset = "0x25E0550", VA = "0x1825E1F50", Slot = "17")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x1700000D")]
	public override string XmlLang
	{
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x25E1EC0", Offset = "0x25E04C0", VA = "0x1825E1EC0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000E")]
	public override Type ValueType
	{
		[Token(Token = "0x6000055")]
		[Address(RVA = "0x1C41CF0", Offset = "0x1C402F0", VA = "0x181C41CF0", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000F")]
	public override int AttributeCount
	{
		[Token(Token = "0x6000056")]
		[Address(RVA = "0x25E17F0", Offset = "0x25DFDF0", VA = "0x1825E17F0", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000010")]
	public override bool EOF
	{
		[Token(Token = "0x600005F")]
		[Address(RVA = "0x25E1910", Offset = "0x25DFF10", VA = "0x1825E1910", Slot = "32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000011")]
	public override XmlNameTable NameTable
	{
		[Token(Token = "0x6000062")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000012")]
	public override ReadState ReadState
	{
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x25E1940", Offset = "0x25DFF40", VA = "0x1825E1940", Slot = "34")]
		get
		{
			return default(ReadState);
		}
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x25E11D0", Offset = "0x25DF7D0", VA = "0x1825E11D0")]
	public XmlSqlBinaryReader(Stream stream, byte[] data, int len, string baseUri, bool closeInput, XmlReaderSettings settings)
	{
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x25D7FE0", Offset = "0x25D65E0", VA = "0x1825D7FE0", Slot = "23")]
	public override string GetAttribute(string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x25D8140", Offset = "0x25D6740", VA = "0x1825D8140", Slot = "22")]
	public override string GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x25D7F40", Offset = "0x25D6540", VA = "0x1825D7F40", Slot = "24")]
	public override string GetAttribute(int i)
	{
		return null;
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x25DA340", Offset = "0x25D8940", VA = "0x1825DA340", Slot = "25")]
	public override bool MoveToAttribute(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x25DA290", Offset = "0x25D8890", VA = "0x1825DA290", Slot = "26")]
	public override void MoveToAttribute(int i)
	{
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x25DA500", Offset = "0x25D8B00", VA = "0x1825DA500", Slot = "27")]
	public override bool MoveToFirstAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x25DA580", Offset = "0x25D8B80", VA = "0x1825DA580", Slot = "28")]
	public override bool MoveToNextAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x25DA3D0", Offset = "0x25D89D0", VA = "0x1825DA3D0", Slot = "29")]
	public override bool MoveToElement()
	{
		return default(bool);
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x25DB430", Offset = "0x25D9A30", VA = "0x1825DB430", Slot = "30")]
	public override bool ReadAttributeValue()
	{
		return default(bool);
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x25D6680", Offset = "0x25D4C80", VA = "0x1825D6680", Slot = "33")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x25DA1D0", Offset = "0x25D87D0", VA = "0x1825DA1D0", Slot = "37")]
	public override string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x25DCE20", Offset = "0x25DB420", VA = "0x1825DCE20", Slot = "39")]
	public override void ResolveEntity()
	{
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x25DC9C0", Offset = "0x25DAFC0", VA = "0x1825DC9C0", Slot = "31")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x25DE280", Offset = "0x25DC880", VA = "0x1825DE280", Slot = "53")]
	private IDictionary<string, string> System_002EXml_002EIXmlNamespaceResolver_002EGetNamespacesInScope(XmlNamespaceScope scope)
	{
		return null;
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x25DE610", Offset = "0x25DCC10", VA = "0x1825DE610", Slot = "55")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupPrefix(string namespaceName)
	{
		return null;
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x25E0DA0", Offset = "0x25DF3A0", VA = "0x1825E0DA0")]
	private void VerifyVersion(int requiredVersion, BinXmlToken token)
	{
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x25D5C10", Offset = "0x25D4210", VA = "0x1825D5C10")]
	private void AddInitNamespace(string prefix, string uri)
	{
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x25D5D30", Offset = "0x25D4330", VA = "0x1825D5D30")]
	private void AddName()
	{
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x25D5E60", Offset = "0x25D4460", VA = "0x1825D5E60")]
	private void AddQName()
	{
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x25DA630", Offset = "0x25D8C30", VA = "0x1825DA630")]
	private void NameFlush()
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x25DE150", Offset = "0x25DC750", VA = "0x1825DE150")]
	private void SkipExtn()
	{
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x25DC820", Offset = "0x25DAE20", VA = "0x1825DC820")]
	private int ReadQNameRef()
	{
		return default(int);
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x25DC750", Offset = "0x25DAD50", VA = "0x1825DC750")]
	private int ReadNameRef()
	{
		return default(int);
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x25D6730", Offset = "0x25D4D30", VA = "0x1825D6730")]
	private bool FillAllowEOF()
	{
		return default(bool);
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x25D69A0", Offset = "0x25D4FA0", VA = "0x1825D69A0")]
	private void Fill_(int require)
	{
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x25D6A20", Offset = "0x25D5020", VA = "0x1825D6A20")]
	private void Fill(int require)
	{
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x25DB610", Offset = "0x25D9C10", VA = "0x1825DB610")]
	private byte ReadByte()
	{
		return default(byte);
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x25DC960", Offset = "0x25DAF60", VA = "0x1825DC960")]
	private ushort ReadUShort()
	{
		return default(ushort);
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x25DAC90", Offset = "0x25D9290", VA = "0x1825DAC90")]
	private int ParseMB32()
	{
		return default(int);
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x25DAB10", Offset = "0x25D9110", VA = "0x1825DAB10")]
	private int ParseMB32_(byte b)
	{
		return default(int);
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x25DACF0", Offset = "0x25D92F0", VA = "0x1825DACF0")]
	private int ParseMB32(int pos)
	{
		return default(int);
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x25DAC90", Offset = "0x25D9290", VA = "0x1825DAC90")]
	private int ParseMB64()
	{
		return default(int);
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x25DAF00", Offset = "0x25D9500", VA = "0x1825DAF00")]
	private BinXmlToken PeekToken()
	{
		return default(BinXmlToken);
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x25DC8F0", Offset = "0x25DAEF0", VA = "0x1825DC8F0")]
	private BinXmlToken ReadToken()
	{
		return default(BinXmlToken);
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x25DA700", Offset = "0x25D8D00", VA = "0x1825DA700")]
	private BinXmlToken NextToken2(BinXmlToken token)
	{
		return default(BinXmlToken);
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x25DA690", Offset = "0x25D8C90", VA = "0x1825DA690")]
	private BinXmlToken NextToken1()
	{
		return default(BinXmlToken);
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x25DAA70", Offset = "0x25D9070", VA = "0x1825DAA70")]
	private BinXmlToken NextToken()
	{
		return default(BinXmlToken);
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x25DAEE0", Offset = "0x25D94E0", VA = "0x1825DAEE0")]
	private BinXmlToken PeekNextToken()
	{
		return default(BinXmlToken);
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x25DCB40", Offset = "0x25DB140", VA = "0x1825DCB40")]
	private BinXmlToken RescanNextToken()
	{
		return default(BinXmlToken);
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x25DAE20", Offset = "0x25D9420", VA = "0x1825DAE20")]
	private string ParseText()
	{
		return null;
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x25DDE70", Offset = "0x25DC470", VA = "0x1825DDE70")]
	private int ScanText(out int start)
	{
		return default(int);
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x25D85E0", Offset = "0x25D6BE0", VA = "0x1825D85E0")]
	private string GetString(int pos, int cch)
	{
		return null;
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x25D85A0", Offset = "0x25D6BA0", VA = "0x1825D85A0")]
	private string GetStringAligned(byte[] data, int offset, int cch)
	{
		return null;
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x25D7DC0", Offset = "0x25D63C0", VA = "0x1825D7DC0")]
	private string GetAttributeText(int i)
	{
		return null;
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x25DA030", Offset = "0x25D8630", VA = "0x1825DA030")]
	private int LocateAttribute(string name, string ns)
	{
		return default(int);
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x25DA0D0", Offset = "0x25D86D0", VA = "0x1825DA0D0")]
	private int LocateAttribute(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x25DB040", Offset = "0x25D9640", VA = "0x1825DB040")]
	private void PositionOnAttribute(int i)
	{
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x25D8AB0", Offset = "0x25D70B0", VA = "0x1825D8AB0")]
	private void GrowElements()
	{
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x25D8A10", Offset = "0x25D7010", VA = "0x1825D8A10")]
	private void GrowAttributes()
	{
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x25D6660", Offset = "0x25D4C60", VA = "0x1825D6660")]
	private void ClearAttributes()
	{
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x25DB160", Offset = "0x25D9760", VA = "0x1825DB160")]
	private void PushNamespace(string prefix, string ns, bool implied)
	{
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x25DAF70", Offset = "0x25D9570", VA = "0x1825DAF70")]
	private void PopNamespaces(NamespaceDecl firstInScopeChain)
	{
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x25D6C80", Offset = "0x25D5280", VA = "0x1825D6C80")]
	private void GenerateImpliedXmlnsAttrs()
	{
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x25DC050", Offset = "0x25DA650", VA = "0x1825DC050")]
	private bool ReadInit(bool skipXmlDecl)
	{
		return default(bool);
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x25DCE60", Offset = "0x25DB460", VA = "0x1825DCE60")]
	private void ScanAttributes()
	{
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x25DDFD0", Offset = "0x25DC5D0", VA = "0x1825DDFD0")]
	private void SimpleCheckForDuplicateAttributes()
	{
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x25D8B50", Offset = "0x25D7150", VA = "0x1825D8B50")]
	private void HashCheckForDuplicateAttributes()
	{
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x25E0DF0", Offset = "0x25DF3F0", VA = "0x1825E0DF0")]
	private string XmlDeclValue()
	{
		return null;
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x25D6150", Offset = "0x25D4750", VA = "0x1825D6150")]
	private string CDATAValue()
	{
		return null;
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x25D6AB0", Offset = "0x25D50B0", VA = "0x1825D6AB0")]
	private void FinishCDATA()
	{
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x25D6B80", Offset = "0x25D5180", VA = "0x1825D6B80")]
	private void FinishEndElement()
	{
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x25DB660", Offset = "0x25D9C60", VA = "0x1825DB660")]
	private bool ReadDoc()
	{
		return default(bool);
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x25D8F70", Offset = "0x25D7570", VA = "0x1825D8F70")]
	private void ImplReadData(BinXmlToken tokenType)
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x25D9530", Offset = "0x25D7B30", VA = "0x1825D9530")]
	private void ImplReadElement()
	{
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x25D9920", Offset = "0x25D7F20", VA = "0x1825D9920")]
	private void ImplReadEndElement()
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x25D9120", Offset = "0x25D7720", VA = "0x1825D9120")]
	private void ImplReadDoctype()
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x25D9BC0", Offset = "0x25D81C0", VA = "0x1825D9BC0")]
	private void ImplReadPI()
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x25D8F30", Offset = "0x25D7530", VA = "0x1825D8F30")]
	private void ImplReadComment()
	{
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x25D8EA0", Offset = "0x25D74A0", VA = "0x1825D8EA0")]
	private void ImplReadCDATA()
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x25D9A90", Offset = "0x25D8090", VA = "0x1825D9A90")]
	private void ImplReadNest()
	{
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x25D9A20", Offset = "0x25D8020", VA = "0x1825D9A20")]
	private void ImplReadEndNest()
	{
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x25D9C40", Offset = "0x25D8240", VA = "0x1825D9C40")]
	private void ImplReadXmlText()
	{
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x25DEA20", Offset = "0x25DD020", VA = "0x1825DEA20")]
	private void UpdateFromTextReader()
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x25DEB30", Offset = "0x25DD130", VA = "0x1825DEB30")]
	private bool UpdateFromTextReader(bool needUpdate)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x25D62C0", Offset = "0x25D48C0", VA = "0x1825D62C0")]
	private void CheckAllowContent()
	{
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x25D6E50", Offset = "0x25D5450", VA = "0x1825D6E50")]
	private void GenerateTokenTypeMap()
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x25D87D0", Offset = "0x25D6DD0", VA = "0x1825D87D0")]
	private Type GetValueType(BinXmlToken token)
	{
		return null;
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x25DB410", Offset = "0x25D9A10", VA = "0x1825DB410")]
	private void ReScanOverValue(BinXmlToken token)
	{
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x25DDC60", Offset = "0x25DC260", VA = "0x1825DDC60")]
	private XmlNodeType ScanOverValue(BinXmlToken token, bool attr, bool checkChars)
	{
		return default(XmlNodeType);
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x25DD5F0", Offset = "0x25DBBF0", VA = "0x1825DD5F0")]
	private XmlNodeType ScanOverAnyValue(BinXmlToken token, bool attr, bool checkChars)
	{
		return default(XmlNodeType);
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x25D63C0", Offset = "0x25D49C0", VA = "0x1825D63C0")]
	private XmlNodeType CheckText(bool attr)
	{
		return default(XmlNodeType);
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x25D6320", Offset = "0x25D4920", VA = "0x1825D6320")]
	private XmlNodeType CheckTextIsWS()
	{
		return default(XmlNodeType);
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x25D6600", Offset = "0x25D4C00", VA = "0x1825D6600")]
	private void CheckValueTokenBounds()
	{
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x25D88B0", Offset = "0x25D6EB0", VA = "0x1825D88B0")]
	private int GetXsdKatmaiTokenLength(BinXmlToken token)
	{
		return default(int);
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x25E0F40", Offset = "0x25DF540", VA = "0x1825E0F40")]
	private int XsdKatmaiTimeScaleToValueLength(byte scale)
	{
		return default(int);
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x25DFE30", Offset = "0x25DE430", VA = "0x1825DFE30")]
	private long ValueAsLong()
	{
		return default(long);
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x25E0D00", Offset = "0x25DF300", VA = "0x1825E0D00")]
	private ulong ValueAsULong()
	{
		return default(ulong);
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x25DF900", Offset = "0x25DDF00", VA = "0x1825DF900")]
	private decimal ValueAsDecimal()
	{
		return 0m;
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x25DFC30", Offset = "0x25DE230", VA = "0x1825DFC30")]
	private double ValueAsDouble()
	{
		return default(double);
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x25DEB50", Offset = "0x25DD150", VA = "0x1825DEB50")]
	private string ValueAsDateTimeString()
	{
		return null;
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x25E0370", Offset = "0x25DE970", VA = "0x1825E0370")]
	private string ValueAsString(BinXmlToken token)
	{
		return null;
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x25D8330", Offset = "0x25D6930", VA = "0x1825D8330")]
	private short GetInt16(int pos)
	{
		return default(short);
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x25D8330", Offset = "0x25D6930", VA = "0x1825D8330")]
	private ushort GetUInt16(int pos)
	{
		return default(ushort);
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x25D8380", Offset = "0x25D6980", VA = "0x1825D8380")]
	private int GetInt32(int pos)
	{
		return default(int);
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x25D8380", Offset = "0x25D6980", VA = "0x1825D8380")]
	private uint GetUInt32(int pos)
	{
		return default(uint);
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x25D8400", Offset = "0x25D6A00", VA = "0x1825D8400")]
	private long GetInt64(int pos)
	{
		return default(long);
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x25D8400", Offset = "0x25D6A00", VA = "0x1825D8400")]
	private ulong GetUInt64(int pos)
	{
		return default(ulong);
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x25D8520", Offset = "0x25D6B20", VA = "0x1825D8520")]
	private float GetSingle(int offset)
	{
		return default(float);
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x25D81B0", Offset = "0x25D67B0", VA = "0x1825D81B0")]
	private double GetDouble(int offset)
	{
		return default(double);
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x25DE850", Offset = "0x25DCE50", VA = "0x1825DE850")]
	private Exception ThrowUnexpectedToken(BinXmlToken token)
	{
		return null;
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x25DE9B0", Offset = "0x25DCFB0", VA = "0x1825DE9B0")]
	private Exception ThrowXmlException(string res)
	{
		return null;
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x25DE8E0", Offset = "0x25DCEE0", VA = "0x1825DE8E0")]
	private Exception ThrowXmlException(string res, string arg1, string arg2)
	{
		return null;
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x25DE7E0", Offset = "0x25DCDE0", VA = "0x1825DE7E0")]
	private Exception ThrowNotSupported(string res)
	{
		return null;
	}
}
