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
		[Address(RVA = "0x4683800", Offset = "0x4683800", VA = "0x4683800")]
		public QName(string prefix, string lname, string nsUri)
		{
		}

		[Token(Token = "0x60000C3")]
		[Address(RVA = "0x4682250", Offset = "0x4682250", VA = "0x4682250")]
		public void Set(string prefix, string lname, string nsUri)
		{
		}

		[Token(Token = "0x60000C4")]
		[Address(RVA = "0x467D3F0", Offset = "0x467D3F0", VA = "0x467D3F0")]
		public void Clear()
		{
		}

		[Token(Token = "0x60000C5")]
		[Address(RVA = "0x4682F60", Offset = "0x4682F60", VA = "0x4682F60")]
		public bool MatchNs(string lname, string nsUri)
		{
			return default(bool);
		}

		[Token(Token = "0x60000C6")]
		[Address(RVA = "0x4682FA0", Offset = "0x4682FA0", VA = "0x4682FA0")]
		public bool MatchPrefix(string prefix, string lname)
		{
			return default(bool);
		}

		[Token(Token = "0x60000C7")]
		[Address(RVA = "0x46833D0", Offset = "0x46833D0", VA = "0x46833D0")]
		public void CheckPrefixNS(string prefix, string namespaceUri)
		{
		}

		[Token(Token = "0x60000C8")]
		[Address(RVA = "0x4687680", Offset = "0x4687680", VA = "0x4687680", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x60000C9")]
		[Address(RVA = "0x46876D0", Offset = "0x46876D0", VA = "0x46876D0")]
		public int GetNSHashCode(SecureStringHasher hasher)
		{
			return default(int);
		}

		[Token(Token = "0x60000CA")]
		[Address(RVA = "0x4687710", Offset = "0x4687710", VA = "0x4687710", Slot = "0")]
		public override bool Equals(object other)
		{
			return default(bool);
		}

		[Token(Token = "0x60000CB")]
		[Address(RVA = "0x4684820", Offset = "0x4684820", VA = "0x4684820", Slot = "3")]
		public override string ToString()
		{
			return null;
		}

		[Token(Token = "0x60000CC")]
		[Address(RVA = "0x46877B0", Offset = "0x46877B0", VA = "0x46877B0")]
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
		[Address(RVA = "0x4685C30", Offset = "0x4685C30", VA = "0x4685C30")]
		public void Set(QName name, bool xmlspacePreserve)
		{
		}

		[Token(Token = "0x60000CE")]
		[Address(RVA = "0x4684A70", Offset = "0x4684A70", VA = "0x4684A70")]
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
		[Address(RVA = "0x4683840", Offset = "0x4683840", VA = "0x4683840")]
		public void Set(QName n, string v)
		{
		}

		[Token(Token = "0x60000D0")]
		[Address(RVA = "0x4683ED0", Offset = "0x4683ED0", VA = "0x4683ED0")]
		public void Set(QName n, int pos)
		{
		}

		[Token(Token = "0x60000D1")]
		[Address(RVA = "0x46847A0", Offset = "0x46847A0", VA = "0x46847A0")]
		public void GetLocalnameAndNamespaceUri(out string localname, out string namespaceUri)
		{
		}

		[Token(Token = "0x60000D2")]
		[Address(RVA = "0x4684870", Offset = "0x4684870", VA = "0x4684870")]
		public int GetLocalnameAndNamespaceUriAndHash(SecureStringHasher hasher, out string localname, out string namespaceUri)
		{
			return default(int);
		}

		[Token(Token = "0x60000D3")]
		[Address(RVA = "0x46847E0", Offset = "0x46847E0", VA = "0x46847E0")]
		public bool MatchNS(string localname, string namespaceUri)
		{
			return default(bool);
		}

		[Token(Token = "0x60000D4")]
		[Address(RVA = "0x46848E0", Offset = "0x46848E0", VA = "0x46848E0")]
		public bool MatchHashNS(int hash, string localname, string namespaceUri)
		{
			return default(bool);
		}

		[Token(Token = "0x60000D5")]
		[Address(RVA = "0x4682700", Offset = "0x4682700", VA = "0x4682700")]
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
		[Address(RVA = "0x4681C90", Offset = "0x4681C90", VA = "0x4681C90")]
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
		[Address(RVA = "0x467D330", Offset = "0x467D330", VA = "0x467D330")]
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
		[Address(RVA = "0x4685C80", Offset = "0x4685C80", VA = "0x4685C80")]
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
		[Address(RVA = "0x467E250", Offset = "0x467E250", VA = "0x467E250", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000004")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x600004B")]
		[Address(RVA = "0x467E370", Offset = "0x467E370", VA = "0x467E370", Slot = "6")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000005")]
	public override string LocalName
	{
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x467E380", Offset = "0x467E380", VA = "0x467E380", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000006")]
	public override string NamespaceURI
	{
		[Token(Token = "0x600004D")]
		[Address(RVA = "0x467E390", Offset = "0x467E390", VA = "0x467E390", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000007")]
	public override string Prefix
	{
		[Token(Token = "0x600004E")]
		[Address(RVA = "0x467E3A0", Offset = "0x467E3A0", VA = "0x467E3A0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000008")]
	public override string Value
	{
		[Token(Token = "0x600004F")]
		[Address(RVA = "0x467E3B0", Offset = "0x467E3B0", VA = "0x467E3B0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000009")]
	public override int Depth
	{
		[Token(Token = "0x6000050")]
		[Address(RVA = "0x467F4A0", Offset = "0x467F4A0", VA = "0x467F4A0", Slot = "12")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700000A")]
	public override string BaseURI
	{
		[Token(Token = "0x6000051")]
		[Address(RVA = "0x467F540", Offset = "0x467F540", VA = "0x467F540", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000B")]
	public override bool IsEmptyElement
	{
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x467F550", Offset = "0x467F550", VA = "0x467F550", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000C")]
	public override XmlSpace XmlSpace
	{
		[Token(Token = "0x6000053")]
		[Address(RVA = "0x467F570", Offset = "0x467F570", VA = "0x467F570", Slot = "17")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x1700000D")]
	public override string XmlLang
	{
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x467F600", Offset = "0x467F600", VA = "0x467F600", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000E")]
	public override Type ValueType
	{
		[Token(Token = "0x6000055")]
		[Address(RVA = "0x467F6A0", Offset = "0x467F6A0", VA = "0x467F6A0", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000F")]
	public override int AttributeCount
	{
		[Token(Token = "0x6000056")]
		[Address(RVA = "0x467F6B0", Offset = "0x467F6B0", VA = "0x467F6B0", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000010")]
	public override bool EOF
	{
		[Token(Token = "0x600005F")]
		[Address(RVA = "0x467FF60", Offset = "0x467FF60", VA = "0x467FF60", Slot = "32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000011")]
	public override XmlNameTable NameTable
	{
		[Token(Token = "0x6000062")]
		[Address(RVA = "0x4680490", Offset = "0x4680490", VA = "0x4680490", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000012")]
	public override ReadState ReadState
	{
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x4680590", Offset = "0x4680590", VA = "0x4680590", Slot = "34")]
		get
		{
			return default(ReadState);
		}
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x467CD10", Offset = "0x467CD10", VA = "0x467CD10")]
	public XmlSqlBinaryReader(Stream stream, byte[] data, int len, string baseUri, bool closeInput, XmlReaderSettings settings)
	{
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x467F700", Offset = "0x467F700", VA = "0x467F700", Slot = "23")]
	public override string GetAttribute(string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x467F950", Offset = "0x467F950", VA = "0x467F950", Slot = "22")]
	public override string GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x467FAD0", Offset = "0x467FAD0", VA = "0x467FAD0", Slot = "24")]
	public override string GetAttribute(int i)
	{
		return null;
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x467FB60", Offset = "0x467FB60", VA = "0x467FB60", Slot = "25")]
	public override bool MoveToAttribute(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x467FCF0", Offset = "0x467FCF0", VA = "0x467FCF0", Slot = "26")]
	public override void MoveToAttribute(int i)
	{
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x467FD90", Offset = "0x467FD90", VA = "0x467FD90", Slot = "27")]
	public override bool MoveToFirstAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x467FDF0", Offset = "0x467FDF0", VA = "0x467FDF0", Slot = "28")]
	public override bool MoveToNextAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x467FE70", Offset = "0x467FE70", VA = "0x467FE70", Slot = "29")]
	public override bool MoveToElement()
	{
		return default(bool);
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x467FF70", Offset = "0x467FF70", VA = "0x467FF70", Slot = "30")]
	public override bool ReadAttributeValue()
	{
		return default(bool);
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x46803D0", Offset = "0x46803D0", VA = "0x46803D0", Slot = "33")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x46804A0", Offset = "0x46804A0", VA = "0x46804A0", Slot = "37")]
	public override string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x4680550", Offset = "0x4680550", VA = "0x4680550", Slot = "39")]
	public override void ResolveEntity()
	{
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x4680630", Offset = "0x4680630", VA = "0x4680630", Slot = "31")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x4681530", Offset = "0x4681530", VA = "0x4681530", Slot = "53")]
	private IDictionary<string, string> System_002EXml_002EIXmlNamespaceResolver_002EGetNamespacesInScope(XmlNamespaceScope scope)
	{
		return null;
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x4681A20", Offset = "0x4681A20", VA = "0x4681A20", Slot = "55")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupPrefix(string namespaceName)
	{
		return null;
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x4681BE0", Offset = "0x4681BE0", VA = "0x4681BE0")]
	private void VerifyVersion(int requiredVersion, BinXmlToken token)
	{
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x467D450", Offset = "0x467D450", VA = "0x467D450")]
	private void AddInitNamespace(string prefix, string uri)
	{
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x4681D10", Offset = "0x4681D10", VA = "0x4681D10")]
	private void AddName()
	{
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x4681EF0", Offset = "0x4681EF0", VA = "0x4681EF0")]
	private void AddQName()
	{
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x4682290", Offset = "0x4682290", VA = "0x4682290")]
	private void NameFlush()
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x46822E0", Offset = "0x46822E0", VA = "0x46822E0")]
	private void SkipExtn()
	{
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x4682440", Offset = "0x4682440", VA = "0x4682440")]
	private int ReadQNameRef()
	{
		return default(int);
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x46821C0", Offset = "0x46821C0", VA = "0x46821C0")]
	private int ReadNameRef()
	{
		return default(int);
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x46824D0", Offset = "0x46824D0", VA = "0x46824D0")]
	private bool FillAllowEOF()
	{
		return default(bool);
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x4682710", Offset = "0x4682710", VA = "0x4682710")]
	private void Fill_(int require)
	{
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x46823C0", Offset = "0x46823C0", VA = "0x46823C0")]
	private void Fill(int require)
	{
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x46827E0", Offset = "0x46827E0", VA = "0x46827E0")]
	private byte ReadByte()
	{
		return default(byte);
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x4682870", Offset = "0x4682870", VA = "0x4682870")]
	private ushort ReadUShort()
	{
		return default(ushort);
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x46823A0", Offset = "0x46823A0", VA = "0x46823A0")]
	private int ParseMB32()
	{
		return default(int);
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x4682910", Offset = "0x4682910", VA = "0x4682910")]
	private int ParseMB32_(byte b)
	{
		return default(int);
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x46829C0", Offset = "0x46829C0", VA = "0x46829C0")]
	private int ParseMB32(int pos)
	{
		return default(int);
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x4682AB0", Offset = "0x4682AB0", VA = "0x4682AB0")]
	private int ParseMB64()
	{
		return default(int);
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x4682AD0", Offset = "0x4682AD0", VA = "0x4682AD0")]
	private BinXmlToken PeekToken()
	{
		return default(BinXmlToken);
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x4682B30", Offset = "0x4682B30", VA = "0x4682B30")]
	private BinXmlToken ReadToken()
	{
		return default(BinXmlToken);
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x4682B90", Offset = "0x4682B90", VA = "0x4682B90")]
	private BinXmlToken NextToken2(BinXmlToken token)
	{
		return default(BinXmlToken);
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x4682D00", Offset = "0x4682D00", VA = "0x4682D00")]
	private BinXmlToken NextToken1()
	{
		return default(BinXmlToken);
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x4682DA0", Offset = "0x4682DA0", VA = "0x4682DA0")]
	private BinXmlToken NextToken()
	{
		return default(BinXmlToken);
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x4682DE0", Offset = "0x4682DE0", VA = "0x4682DE0")]
	private BinXmlToken PeekNextToken()
	{
		return default(BinXmlToken);
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x4680160", Offset = "0x4680160", VA = "0x4680160")]
	private BinXmlToken RescanNextToken()
	{
		return default(BinXmlToken);
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x4681E30", Offset = "0x4681E30", VA = "0x4681E30")]
	private string ParseText()
	{
		return null;
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x4682E40", Offset = "0x4682E40", VA = "0x4682E40")]
	private int ScanText(out int start)
	{
		return default(int);
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x467E4D0", Offset = "0x467E4D0", VA = "0x467E4D0")]
	private string GetString(int pos, int cch)
	{
		return null;
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x4682F30", Offset = "0x4682F30", VA = "0x4682F30")]
	private string GetStringAligned(byte[] data, int offset, int cch)
	{
		return null;
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x467F380", Offset = "0x467F380", VA = "0x467F380")]
	private string GetAttributeText(int i)
	{
		return null;
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x467F8A0", Offset = "0x467F8A0", VA = "0x467F8A0")]
	private int LocateAttribute(string name, string ns)
	{
		return default(int);
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x467F9B0", Offset = "0x467F9B0", VA = "0x467F9B0")]
	private int LocateAttribute(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x467FBE0", Offset = "0x467FBE0", VA = "0x467FBE0")]
	private void PositionOnAttribute(int i)
	{
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x4682FE0", Offset = "0x4682FE0", VA = "0x4682FE0")]
	private void GrowElements()
	{
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x4683070", Offset = "0x4683070", VA = "0x4683070")]
	private void GrowAttributes()
	{
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x4683100", Offset = "0x4683100", VA = "0x4683100")]
	private void ClearAttributes()
	{
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x4683120", Offset = "0x4683120", VA = "0x4683120")]
	private void PushNamespace(string prefix, string ns, bool implied)
	{
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x46834C0", Offset = "0x46834C0", VA = "0x46834C0")]
	private void PopNamespaces(NamespaceDecl firstInScopeChain)
	{
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x4683590", Offset = "0x4683590", VA = "0x4683590")]
	private void GenerateImpliedXmlnsAttrs()
	{
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x4680820", Offset = "0x4680820", VA = "0x4680820")]
	private bool ReadInit(bool skipXmlDecl)
	{
		return default(bool);
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x4683890", Offset = "0x4683890", VA = "0x4683890")]
	private void ScanAttributes()
	{
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x4684240", Offset = "0x4684240", VA = "0x4684240")]
	private void SimpleCheckForDuplicateAttributes()
	{
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x4684420", Offset = "0x4684420", VA = "0x4684420")]
	private void HashCheckForDuplicateAttributes()
	{
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x467E7C0", Offset = "0x467E7C0", VA = "0x467E7C0")]
	private string XmlDeclValue()
	{
		return null;
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x467E610", Offset = "0x467E610", VA = "0x467E610")]
	private string CDATAValue()
	{
		return null;
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x4684920", Offset = "0x4684920", VA = "0x4684920")]
	private void FinishCDATA()
	{
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x4684A00", Offset = "0x4684A00", VA = "0x4684A00")]
	private void FinishEndElement()
	{
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x4680F30", Offset = "0x4680F30", VA = "0x4680F30")]
	private bool ReadDoc()
	{
		return default(bool);
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x4685A50", Offset = "0x4685A50", VA = "0x4685A50")]
	private void ImplReadData(BinXmlToken tokenType)
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x4684A90", Offset = "0x4684A90", VA = "0x4684A90")]
	private void ImplReadElement()
	{
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x4684E30", Offset = "0x4684E30", VA = "0x4684E30")]
	private void ImplReadEndElement()
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x4684F10", Offset = "0x4684F10", VA = "0x4684F10")]
	private void ImplReadDoctype()
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x4685350", Offset = "0x4685350", VA = "0x4685350")]
	private void ImplReadPI()
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x46853C0", Offset = "0x46853C0", VA = "0x46853C0")]
	private void ImplReadComment()
	{
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x46853F0", Offset = "0x46853F0", VA = "0x46853F0")]
	private void ImplReadCDATA()
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x4685470", Offset = "0x4685470", VA = "0x4685470")]
	private void ImplReadNest()
	{
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x46855A0", Offset = "0x46855A0", VA = "0x46855A0")]
	private void ImplReadEndNest()
	{
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x4685600", Offset = "0x4685600", VA = "0x4685600")]
	private void ImplReadXmlText()
	{
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x4685CD0", Offset = "0x4685CD0", VA = "0x4685CD0")]
	private void UpdateFromTextReader()
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x467FBD0", Offset = "0x467FBD0", VA = "0x467FBD0")]
	private bool UpdateFromTextReader(bool needUpdate)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x4685BE0", Offset = "0x4685BE0", VA = "0x4685BE0")]
	private void CheckAllowContent()
	{
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x467D570", Offset = "0x467D570", VA = "0x467D570")]
	private void GenerateTokenTypeMap()
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x4680300", Offset = "0x4680300", VA = "0x4680300")]
	private Type GetValueType(BinXmlToken token)
	{
		return null;
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x46802F0", Offset = "0x46802F0", VA = "0x46802F0")]
	private void ReScanOverValue(BinXmlToken token)
	{
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x4683FF0", Offset = "0x4683FF0", VA = "0x4683FF0")]
	private XmlNodeType ScanOverValue(BinXmlToken token, bool attr, bool checkChars)
	{
		return default(XmlNodeType);
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x4686070", Offset = "0x4686070", VA = "0x4686070")]
	private XmlNodeType ScanOverAnyValue(BinXmlToken token, bool attr, bool checkChars)
	{
		return default(XmlNodeType);
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x4685DD0", Offset = "0x4685DD0", VA = "0x4685DD0")]
	private XmlNodeType CheckText(bool attr)
	{
		return default(XmlNodeType);
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x4685FE0", Offset = "0x4685FE0", VA = "0x4685FE0")]
	private XmlNodeType CheckTextIsWS()
	{
		return default(XmlNodeType);
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x46865A0", Offset = "0x46865A0", VA = "0x46865A0")]
	private void CheckValueTokenBounds()
	{
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x4686480", Offset = "0x4686480", VA = "0x4686480")]
	private int GetXsdKatmaiTokenLength(BinXmlToken token)
	{
		return default(int);
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x46865F0", Offset = "0x46865F0", VA = "0x46865F0")]
	private int XsdKatmaiTimeScaleToValueLength(byte scale)
	{
		return default(int);
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x46866B0", Offset = "0x46866B0", VA = "0x46866B0")]
	private long ValueAsLong()
	{
		return default(long);
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x4686FE0", Offset = "0x4686FE0", VA = "0x4686FE0")]
	private ulong ValueAsULong()
	{
		return default(ulong);
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x4686D90", Offset = "0x4686D90", VA = "0x4686D90")]
	private decimal ValueAsDecimal()
	{
		return default(decimal);
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x4686C30", Offset = "0x4686C30", VA = "0x4686C30")]
	private double ValueAsDouble()
	{
		return default(double);
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x46871C0", Offset = "0x46871C0", VA = "0x46871C0")]
	private string ValueAsDateTimeString()
	{
		return null;
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x467E920", Offset = "0x467E920", VA = "0x467E920")]
	private string ValueAsString(BinXmlToken token)
	{
		return null;
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x46868F0", Offset = "0x46868F0", VA = "0x46868F0")]
	private short GetInt16(int pos)
	{
		return default(short);
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x4686A90", Offset = "0x4686A90", VA = "0x4686A90")]
	private ushort GetUInt16(int pos)
	{
		return default(ushort);
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x4686930", Offset = "0x4686930", VA = "0x4686930")]
	private int GetInt32(int pos)
	{
		return default(int);
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x4686AD0", Offset = "0x4686AD0", VA = "0x4686AD0")]
	private uint GetUInt32(int pos)
	{
		return default(uint);
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x46869A0", Offset = "0x46869A0", VA = "0x46869A0")]
	private long GetInt64(int pos)
	{
		return default(long);
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x4686B40", Offset = "0x4686B40", VA = "0x4686B40")]
	private ulong GetUInt64(int pos)
	{
		return default(ulong);
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x4687060", Offset = "0x4687060", VA = "0x4687060")]
	private float GetSingle(int offset)
	{
		return default(float);
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x46870D0", Offset = "0x46870D0", VA = "0x46870D0")]
	private double GetDouble(int offset)
	{
		return default(double);
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x4681C10", Offset = "0x4681C10", VA = "0x4681C10")]
	private Exception ThrowUnexpectedToken(BinXmlToken token)
	{
		return null;
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x4682780", Offset = "0x4682780", VA = "0x4682780")]
	private Exception ThrowXmlException(string res)
	{
		return null;
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x4683F20", Offset = "0x4683F20", VA = "0x4683F20")]
	private Exception ThrowXmlException(string res, string arg1, string arg2)
	{
		return null;
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x46841D0", Offset = "0x46841D0", VA = "0x46841D0")]
	private Exception ThrowNotSupported(string res)
	{
		return null;
	}
}
