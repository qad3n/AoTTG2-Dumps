// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlWellFormedWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Text;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000073")]
internal class XmlWellFormedWriter : XmlWriter
{
	[Token(Token = "0x2000074")]
	private enum State
	{
		[Token(Token = "0x4000342")]
		Start = 0,
		[Token(Token = "0x4000343")]
		TopLevel = 1,
		[Token(Token = "0x4000344")]
		Document = 2,
		[Token(Token = "0x4000345")]
		Element = 3,
		[Token(Token = "0x4000346")]
		Content = 4,
		[Token(Token = "0x4000347")]
		B64Content = 5,
		[Token(Token = "0x4000348")]
		B64Attribute = 6,
		[Token(Token = "0x4000349")]
		AfterRootEle = 7,
		[Token(Token = "0x400034A")]
		Attribute = 8,
		[Token(Token = "0x400034B")]
		SpecialAttr = 9,
		[Token(Token = "0x400034C")]
		EndDocument = 10,
		[Token(Token = "0x400034D")]
		RootLevelAttr = 11,
		[Token(Token = "0x400034E")]
		RootLevelSpecAttr = 12,
		[Token(Token = "0x400034F")]
		RootLevelB64Attr = 13,
		[Token(Token = "0x4000350")]
		AfterRootLevelAttr = 14,
		[Token(Token = "0x4000351")]
		Closed = 15,
		[Token(Token = "0x4000352")]
		Error = 16,
		[Token(Token = "0x4000353")]
		StartContent = 101,
		[Token(Token = "0x4000354")]
		StartContentEle = 102,
		[Token(Token = "0x4000355")]
		StartContentB64 = 103,
		[Token(Token = "0x4000356")]
		StartDoc = 104,
		[Token(Token = "0x4000357")]
		StartDocEle = 106,
		[Token(Token = "0x4000358")]
		EndAttrSEle = 107,
		[Token(Token = "0x4000359")]
		EndAttrEEle = 108,
		[Token(Token = "0x400035A")]
		EndAttrSCont = 109,
		[Token(Token = "0x400035B")]
		EndAttrSAttr = 111,
		[Token(Token = "0x400035C")]
		PostB64Cont = 112,
		[Token(Token = "0x400035D")]
		PostB64Attr = 113,
		[Token(Token = "0x400035E")]
		PostB64RootAttr = 114,
		[Token(Token = "0x400035F")]
		StartFragEle = 115,
		[Token(Token = "0x4000360")]
		StartFragCont = 116,
		[Token(Token = "0x4000361")]
		StartFragB64 = 117,
		[Token(Token = "0x4000362")]
		StartRootLevelAttr = 118
	}

	[Token(Token = "0x2000075")]
	private enum Token
	{
		[Token(Token = "0x4000364")]
		StartDocument,
		[Token(Token = "0x4000365")]
		EndDocument,
		[Token(Token = "0x4000366")]
		PI,
		[Token(Token = "0x4000367")]
		Comment,
		[Token(Token = "0x4000368")]
		Dtd,
		[Token(Token = "0x4000369")]
		StartElement,
		[Token(Token = "0x400036A")]
		EndElement,
		[Token(Token = "0x400036B")]
		StartAttribute,
		[Token(Token = "0x400036C")]
		EndAttribute,
		[Token(Token = "0x400036D")]
		Text,
		[Token(Token = "0x400036E")]
		CData,
		[Token(Token = "0x400036F")]
		AtomicValue,
		[Token(Token = "0x4000370")]
		Base64,
		[Token(Token = "0x4000371")]
		RawData,
		[Token(Token = "0x4000372")]
		Whitespace
	}

	[Token(Token = "0x2000076")]
	private class NamespaceResolverProxy : IXmlNamespaceResolver
	{
		[Token(Token = "0x4000373")]
		[FieldOffset(Offset = "0x10")]
		private XmlWellFormedWriter wfWriter;

		[Token(Token = "0x6000660")]
		[Address(RVA = "0x47B1D40", Offset = "0x47B1D40", VA = "0x47B1D40")]
		internal NamespaceResolverProxy(XmlWellFormedWriter wfWriter)
		{
		}

		[Token(Token = "0x6000661")]
		[Address(RVA = "0x47B8D90", Offset = "0x47B8D90", VA = "0x47B8D90", Slot = "4")]
		private IDictionary<string, string> System_002EXml_002EIXmlNamespaceResolver_002EGetNamespacesInScope(XmlNamespaceScope scope)
		{
			return null;
		}

		[Token(Token = "0x6000662")]
		[Address(RVA = "0x47B8DD0", Offset = "0x47B8DD0", VA = "0x47B8DD0", Slot = "5")]
		private string System_002EXml_002EIXmlNamespaceResolver_002ELookupNamespace(string prefix)
		{
			return null;
		}

		[Token(Token = "0x6000663")]
		[Address(RVA = "0x47B8DF0", Offset = "0x47B8DF0", VA = "0x47B8DF0", Slot = "6")]
		private string System_002EXml_002EIXmlNamespaceResolver_002ELookupPrefix(string namespaceName)
		{
			return null;
		}
	}

	[Token(Token = "0x2000077")]
	private struct ElementScope
	{
		[Token(Token = "0x4000374")]
		[FieldOffset(Offset = "0x0")]
		internal int prevNSTop;

		[Token(Token = "0x4000375")]
		[FieldOffset(Offset = "0x8")]
		internal string prefix;

		[Token(Token = "0x4000376")]
		[FieldOffset(Offset = "0x10")]
		internal string localName;

		[Token(Token = "0x4000377")]
		[FieldOffset(Offset = "0x18")]
		internal string namespaceUri;

		[Token(Token = "0x4000378")]
		[FieldOffset(Offset = "0x20")]
		internal XmlSpace xmlSpace;

		[Token(Token = "0x4000379")]
		[FieldOffset(Offset = "0x28")]
		internal string xmlLang;

		[Token(Token = "0x6000664")]
		[Address(RVA = "0x47B1DB0", Offset = "0x47B1DB0", VA = "0x47B1DB0")]
		internal void Set(string prefix, string localName, string namespaceUri, int prevNSTop)
		{
		}

		[Token(Token = "0x6000665")]
		[Address(RVA = "0x47B38E0", Offset = "0x47B38E0", VA = "0x47B38E0")]
		internal void WriteEndElement(XmlRawWriter rawWriter)
		{
		}

		[Token(Token = "0x6000666")]
		[Address(RVA = "0x47B3C50", Offset = "0x47B3C50", VA = "0x47B3C50")]
		internal void WriteFullEndElement(XmlRawWriter rawWriter)
		{
		}
	}

	[Token(Token = "0x2000078")]
	private enum NamespaceKind
	{
		[Token(Token = "0x400037B")]
		Written,
		[Token(Token = "0x400037C")]
		NeedToWrite,
		[Token(Token = "0x400037D")]
		Implied,
		[Token(Token = "0x400037E")]
		Special
	}

	[Token(Token = "0x2000079")]
	private struct Namespace
	{
		[Token(Token = "0x400037F")]
		[FieldOffset(Offset = "0x0")]
		internal string prefix;

		[Token(Token = "0x4000380")]
		[FieldOffset(Offset = "0x8")]
		internal string namespaceUri;

		[Token(Token = "0x4000381")]
		[FieldOffset(Offset = "0x10")]
		internal NamespaceKind kind;

		[Token(Token = "0x4000382")]
		[FieldOffset(Offset = "0x14")]
		internal int prevNsIndex;

		[Token(Token = "0x6000667")]
		[Address(RVA = "0x47B1D70", Offset = "0x47B1D70", VA = "0x47B1D70")]
		internal void Set(string prefix, string namespaceUri, NamespaceKind kind)
		{
		}

		[Token(Token = "0x6000668")]
		[Address(RVA = "0x47B82C0", Offset = "0x47B82C0", VA = "0x47B82C0")]
		internal void WriteDecl(XmlWriter writer, XmlRawWriter rawWriter)
		{
		}
	}

	[Token(Token = "0x200007A")]
	private struct AttrName
	{
		[Token(Token = "0x4000383")]
		[FieldOffset(Offset = "0x0")]
		internal string prefix;

		[Token(Token = "0x4000384")]
		[FieldOffset(Offset = "0x8")]
		internal string namespaceUri;

		[Token(Token = "0x4000385")]
		[FieldOffset(Offset = "0x10")]
		internal string localName;

		[Token(Token = "0x4000386")]
		[FieldOffset(Offset = "0x18")]
		internal int prev;

		[Token(Token = "0x6000669")]
		[Address(RVA = "0x47B8E20", Offset = "0x47B8E20", VA = "0x47B8E20")]
		internal void Set(string prefix, string localName, string namespaceUri)
		{
		}

		[Token(Token = "0x600066A")]
		[Address(RVA = "0x47B8E70", Offset = "0x47B8E70", VA = "0x47B8E70")]
		internal bool IsDuplicate(string prefix, string localName, string namespaceUri)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x200007B")]
	private enum SpecialAttribute
	{
		[Token(Token = "0x4000388")]
		No,
		[Token(Token = "0x4000389")]
		DefaultXmlns,
		[Token(Token = "0x400038A")]
		PrefixedXmlns,
		[Token(Token = "0x400038B")]
		XmlSpace,
		[Token(Token = "0x400038C")]
		XmlLang
	}

	[Token(Token = "0x200007C")]
	private class AttributeValueCache
	{
		[Token(Token = "0x200007D")]
		private enum ItemType
		{
			[Token(Token = "0x4000393")]
			EntityRef,
			[Token(Token = "0x4000394")]
			CharEntity,
			[Token(Token = "0x4000395")]
			SurrogateCharEntity,
			[Token(Token = "0x4000396")]
			Whitespace,
			[Token(Token = "0x4000397")]
			String,
			[Token(Token = "0x4000398")]
			StringChars,
			[Token(Token = "0x4000399")]
			Raw,
			[Token(Token = "0x400039A")]
			RawChars,
			[Token(Token = "0x400039B")]
			ValueString
		}

		[Token(Token = "0x200007E")]
		private class Item
		{
			[Token(Token = "0x400039C")]
			[FieldOffset(Offset = "0x10")]
			internal ItemType type;

			[Token(Token = "0x400039D")]
			[FieldOffset(Offset = "0x18")]
			internal object data;

			[Token(Token = "0x600067B")]
			[Address(RVA = "0x47BA1A0", Offset = "0x47BA1A0", VA = "0x47BA1A0")]
			internal Item()
			{
			}

			[Token(Token = "0x600067C")]
			[Address(RVA = "0x47BA1B0", Offset = "0x47BA1B0", VA = "0x47BA1B0")]
			internal void Set(ItemType type, object data)
			{
			}
		}

		[Token(Token = "0x200007F")]
		private class BufferChunk
		{
			[Token(Token = "0x400039E")]
			[FieldOffset(Offset = "0x10")]
			internal char[] buffer;

			[Token(Token = "0x400039F")]
			[FieldOffset(Offset = "0x18")]
			internal int index;

			[Token(Token = "0x40003A0")]
			[FieldOffset(Offset = "0x1C")]
			internal int count;

			[Token(Token = "0x600067D")]
			[Address(RVA = "0x47B9650", Offset = "0x47B9650", VA = "0x47B9650")]
			internal BufferChunk(char[] buffer, int index, int count)
			{
			}
		}

		[Token(Token = "0x400038D")]
		[FieldOffset(Offset = "0x10")]
		private StringBuilder stringValue;

		[Token(Token = "0x400038E")]
		[FieldOffset(Offset = "0x18")]
		private string singleStringValue;

		[Token(Token = "0x400038F")]
		[FieldOffset(Offset = "0x20")]
		private Item[] items;

		[Token(Token = "0x4000390")]
		[FieldOffset(Offset = "0x28")]
		private int firstItem;

		[Token(Token = "0x4000391")]
		[FieldOffset(Offset = "0x2C")]
		private int lastItem;

		[Token(Token = "0x17000168")]
		internal string StringValue
		{
			[Token(Token = "0x600066B")]
			[Address(RVA = "0x47B8EE0", Offset = "0x47B8EE0", VA = "0x47B8EE0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600066C")]
		[Address(RVA = "0x47B8F10", Offset = "0x47B8F10", VA = "0x47B8F10")]
		internal void WriteEntityRef(string name)
		{
		}

		[Token(Token = "0x600066D")]
		[Address(RVA = "0x47B92B0", Offset = "0x47B92B0", VA = "0x47B92B0")]
		internal void WriteCharEntity(char ch)
		{
		}

		[Token(Token = "0x600066E")]
		[Address(RVA = "0x47B9350", Offset = "0x47B9350", VA = "0x47B9350")]
		internal void WriteSurrogateCharEntity(char lowChar, char highChar)
		{
		}

		[Token(Token = "0x600066F")]
		[Address(RVA = "0x47B9440", Offset = "0x47B9440", VA = "0x47B9440")]
		internal void WriteWhitespace(string ws)
		{
		}

		[Token(Token = "0x6000670")]
		[Address(RVA = "0x47B94C0", Offset = "0x47B94C0", VA = "0x47B94C0")]
		internal void WriteString(string text)
		{
		}

		[Token(Token = "0x6000671")]
		[Address(RVA = "0x47B9560", Offset = "0x47B9560", VA = "0x47B9560")]
		internal void WriteChars(char[] buffer, int index, int count)
		{
		}

		[Token(Token = "0x6000672")]
		[Address(RVA = "0x47B9690", Offset = "0x47B9690", VA = "0x47B9690")]
		internal void WriteRaw(char[] buffer, int index, int count)
		{
		}

		[Token(Token = "0x6000673")]
		[Address(RVA = "0x47B9780", Offset = "0x47B9780", VA = "0x47B9780")]
		internal void WriteRaw(string data)
		{
		}

		[Token(Token = "0x6000674")]
		[Address(RVA = "0x47B9800", Offset = "0x47B9800", VA = "0x47B9800")]
		internal void WriteValue(string value)
		{
		}

		[Token(Token = "0x6000675")]
		[Address(RVA = "0x47B9880", Offset = "0x47B9880", VA = "0x47B9880")]
		internal void Replay(XmlWriter writer)
		{
		}

		[Token(Token = "0x6000676")]
		[Address(RVA = "0x47B9C40", Offset = "0x47B9C40", VA = "0x47B9C40")]
		internal void Trim()
		{
		}

		[Token(Token = "0x6000677")]
		[Address(RVA = "0x47BA160", Offset = "0x47BA160", VA = "0x47BA160")]
		internal void Clear()
		{
		}

		[Token(Token = "0x6000678")]
		[Address(RVA = "0x47B90D0", Offset = "0x47B90D0", VA = "0x47B90D0")]
		private void StartComplexValue()
		{
		}

		[Token(Token = "0x6000679")]
		[Address(RVA = "0x47B9120", Offset = "0x47B9120", VA = "0x47B9120")]
		private void AddItem(ItemType type, object data)
		{
		}

		[Token(Token = "0x600067A")]
		[Address(RVA = "0x47BA1D0", Offset = "0x47BA1D0", VA = "0x47BA1D0")]
		public AttributeValueCache()
		{
		}
	}

	[Token(Token = "0x4000323")]
	[FieldOffset(Offset = "0x18")]
	private XmlWriter writer;

	[Token(Token = "0x4000324")]
	[FieldOffset(Offset = "0x20")]
	private XmlRawWriter rawWriter;

	[Token(Token = "0x4000325")]
	[FieldOffset(Offset = "0x28")]
	private IXmlNamespaceResolver predefinedNamespaces;

	[Token(Token = "0x4000326")]
	[FieldOffset(Offset = "0x30")]
	private Namespace[] nsStack;

	[Token(Token = "0x4000327")]
	[FieldOffset(Offset = "0x38")]
	private int nsTop;

	[Token(Token = "0x4000328")]
	[FieldOffset(Offset = "0x40")]
	private Dictionary<string, int> nsHashtable;

	[Token(Token = "0x4000329")]
	[FieldOffset(Offset = "0x48")]
	private bool useNsHashtable;

	[Token(Token = "0x400032A")]
	[FieldOffset(Offset = "0x50")]
	private ElementScope[] elemScopeStack;

	[Token(Token = "0x400032B")]
	[FieldOffset(Offset = "0x58")]
	private int elemTop;

	[Token(Token = "0x400032C")]
	[FieldOffset(Offset = "0x60")]
	private AttrName[] attrStack;

	[Token(Token = "0x400032D")]
	[FieldOffset(Offset = "0x68")]
	private int attrCount;

	[Token(Token = "0x400032E")]
	[FieldOffset(Offset = "0x70")]
	private Dictionary<string, int> attrHashTable;

	[Token(Token = "0x400032F")]
	[FieldOffset(Offset = "0x78")]
	private SpecialAttribute specAttr;

	[Token(Token = "0x4000330")]
	[FieldOffset(Offset = "0x80")]
	private AttributeValueCache attrValueCache;

	[Token(Token = "0x4000331")]
	[FieldOffset(Offset = "0x88")]
	private string curDeclPrefix;

	[Token(Token = "0x4000332")]
	[FieldOffset(Offset = "0x90")]
	private State[] stateTable;

	[Token(Token = "0x4000333")]
	[FieldOffset(Offset = "0x98")]
	private State currentState;

	[Token(Token = "0x4000334")]
	[FieldOffset(Offset = "0x9C")]
	private bool checkCharacters;

	[Token(Token = "0x4000335")]
	[FieldOffset(Offset = "0x9D")]
	private bool omitDuplNamespaces;

	[Token(Token = "0x4000336")]
	[FieldOffset(Offset = "0x9E")]
	private bool writeEndDocumentOnClose;

	[Token(Token = "0x4000337")]
	[FieldOffset(Offset = "0xA0")]
	private ConformanceLevel conformanceLevel;

	[Token(Token = "0x4000338")]
	[FieldOffset(Offset = "0xA4")]
	private bool dtdWritten;

	[Token(Token = "0x4000339")]
	[FieldOffset(Offset = "0xA5")]
	private bool xmlDeclFollows;

	[Token(Token = "0x400033A")]
	[FieldOffset(Offset = "0xA8")]
	private XmlCharType xmlCharType;

	[Token(Token = "0x400033B")]
	[FieldOffset(Offset = "0xB0")]
	private SecureStringHasher hasher;

	[Token(Token = "0x400033C")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly string[] stateName;

	[Token(Token = "0x400033D")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly string[] tokenName;

	[Token(Token = "0x400033E")]
	[FieldOffset(Offset = "0x10")]
	private static WriteState[] state2WriteState;

	[Token(Token = "0x400033F")]
	[FieldOffset(Offset = "0x18")]
	private static readonly State[] StateTableDocument;

	[Token(Token = "0x4000340")]
	[FieldOffset(Offset = "0x20")]
	private static readonly State[] StateTableAuto;

	[Token(Token = "0x17000163")]
	public override WriteState WriteState
	{
		[Token(Token = "0x600062B")]
		[Address(RVA = "0x47B1E10", Offset = "0x47B1E10", VA = "0x47B1E10", Slot = "27")]
		get
		{
			return default(WriteState);
		}
	}

	[Token(Token = "0x17000164")]
	internal XmlRawWriter RawWriter
	{
		[Token(Token = "0x6000646")]
		[Address(RVA = "0x47B7A90", Offset = "0x47B7A90", VA = "0x47B7A90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000165")]
	private bool SaveAttrValue
	{
		[Token(Token = "0x6000647")]
		[Address(RVA = "0x47B6440", Offset = "0x47B6440", VA = "0x47B6440")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000166")]
	private bool InBase64
	{
		[Token(Token = "0x6000648")]
		[Address(RVA = "0x47B74A0", Offset = "0x47B74A0", VA = "0x47B74A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000167")]
	private bool IsClosedOrErrorState
	{
		[Token(Token = "0x600065C")]
		[Address(RVA = "0x47B7A80", Offset = "0x47B7A80", VA = "0x47B7A80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600062A")]
	[Address(RVA = "0x47B1780", Offset = "0x47B1780", VA = "0x47B1780")]
	internal XmlWellFormedWriter(XmlWriter writer, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x600062C")]
	[Address(RVA = "0x47B1EA0", Offset = "0x47B1EA0", VA = "0x47B1EA0", Slot = "5")]
	public override void WriteStartDocument()
	{
	}

	[Token(Token = "0x600062D")]
	[Address(RVA = "0x47B20A0", Offset = "0x47B20A0", VA = "0x47B20A0", Slot = "6")]
	public override void WriteStartDocument(bool standalone)
	{
	}

	[Token(Token = "0x600062E")]
	[Address(RVA = "0x47B20C0", Offset = "0x47B20C0", VA = "0x47B20C0", Slot = "7")]
	public override void WriteEndDocument()
	{
	}

	[Token(Token = "0x600062F")]
	[Address(RVA = "0x47B2560", Offset = "0x47B2560", VA = "0x47B2560", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x6000630")]
	[Address(RVA = "0x47B2B30", Offset = "0x47B2B30", VA = "0x47B2B30", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000631")]
	[Address(RVA = "0x47B3680", Offset = "0x47B3680", VA = "0x47B3680", Slot = "10")]
	public override void WriteEndElement()
	{
	}

	[Token(Token = "0x6000632")]
	[Address(RVA = "0x47B39F0", Offset = "0x47B39F0", VA = "0x47B39F0", Slot = "11")]
	public override void WriteFullEndElement()
	{
	}

	[Token(Token = "0x6000633")]
	[Address(RVA = "0x47B3C90", Offset = "0x47B3C90", VA = "0x47B3C90", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string namespaceName)
	{
	}

	[Token(Token = "0x6000634")]
	[Address(RVA = "0x47B4D00", Offset = "0x47B4D00", VA = "0x47B4D00", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x6000635")]
	[Address(RVA = "0x47B5DF0", Offset = "0x47B5DF0", VA = "0x47B5DF0", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x6000636")]
	[Address(RVA = "0x47B5EE0", Offset = "0x47B5EE0", VA = "0x47B5EE0", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x6000637")]
	[Address(RVA = "0x47B5FD0", Offset = "0x47B5FD0", VA = "0x47B5FD0", Slot = "16")]
	public override void WriteProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x6000638")]
	[Address(RVA = "0x47B62C0", Offset = "0x47B62C0", VA = "0x47B62C0", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x6000639")]
	[Address(RVA = "0x47B6450", Offset = "0x47B6450", VA = "0x47B6450", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x600063A")]
	[Address(RVA = "0x47B6600", Offset = "0x47B6600", VA = "0x47B6600", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x600063B")]
	[Address(RVA = "0x47B67A0", Offset = "0x47B67A0", VA = "0x47B67A0", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x600063C")]
	[Address(RVA = "0x47B6980", Offset = "0x47B6980", VA = "0x47B6980", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x600063D")]
	[Address(RVA = "0x47B6A80", Offset = "0x47B6A80", VA = "0x47B6A80", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x600063E")]
	[Address(RVA = "0x47B6D10", Offset = "0x47B6D10", VA = "0x47B6D10", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x600063F")]
	[Address(RVA = "0x47B6FA0", Offset = "0x47B6FA0", VA = "0x47B6FA0", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x6000640")]
	[Address(RVA = "0x47B70A0", Offset = "0x47B70A0", VA = "0x47B70A0", Slot = "25")]
	public override void WriteBase64(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000641")]
	[Address(RVA = "0x47B72F0", Offset = "0x47B72F0", VA = "0x47B72F0", Slot = "28")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000642")]
	[Address(RVA = "0x47B74C0", Offset = "0x47B74C0", VA = "0x47B74C0", Slot = "29")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6000643")]
	[Address(RVA = "0x47B7570", Offset = "0x47B7570", VA = "0x47B7570", Slot = "30")]
	public override string LookupPrefix(string ns)
	{
		return null;
	}

	[Token(Token = "0x6000644")]
	[Address(RVA = "0x47B7840", Offset = "0x47B7840", VA = "0x47B7840", Slot = "31")]
	public override void WriteValue(string value)
	{
	}

	[Token(Token = "0x6000645")]
	[Address(RVA = "0x47B7950", Offset = "0x47B7950", VA = "0x47B7950", Slot = "26")]
	public override void WriteBinHex(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000649")]
	[Address(RVA = "0x47B47D0", Offset = "0x47B47D0", VA = "0x47B47D0")]
	private void SetSpecialAttribute(SpecialAttribute special)
	{
	}

	[Token(Token = "0x600064A")]
	[Address(RVA = "0x47B1EB0", Offset = "0x47B1EB0", VA = "0x47B1EB0")]
	private void WriteStartDocumentImpl(XmlStandalone standalone)
	{
	}

	[Token(Token = "0x600064B")]
	[Address(RVA = "0x47B7AA0", Offset = "0x47B7AA0", VA = "0x47B7AA0")]
	private void StartFragment()
	{
	}

	[Token(Token = "0x600064C")]
	[Address(RVA = "0x47B3290", Offset = "0x47B3290", VA = "0x47B3290")]
	private void PushNamespaceImplicit(string prefix, string ns)
	{
	}

	[Token(Token = "0x600064D")]
	[Address(RVA = "0x47B5920", Offset = "0x47B5920", VA = "0x47B5920")]
	private bool PushNamespaceExplicit(string prefix, string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x600064E")]
	[Address(RVA = "0x47B7BB0", Offset = "0x47B7BB0", VA = "0x47B7BB0")]
	private void AddNamespace(string prefix, string ns, NamespaceKind kind)
	{
	}

	[Token(Token = "0x600064F")]
	[Address(RVA = "0x47B7E50", Offset = "0x47B7E50", VA = "0x47B7E50")]
	private void AddToNamespaceHashtable(int namespaceIndex)
	{
	}

	[Token(Token = "0x6000650")]
	[Address(RVA = "0x47B7AB0", Offset = "0x47B7AB0", VA = "0x47B7AB0")]
	private int LookupNamespaceIndex(string prefix)
	{
		return default(int);
	}

	[Token(Token = "0x6000651")]
	[Address(RVA = "0x47B3920", Offset = "0x47B3920", VA = "0x47B3920")]
	private void PopNamespaces(int indexFrom, int indexTo)
	{
	}

	[Token(Token = "0x6000652")]
	[Address(RVA = "0x47B7D60", Offset = "0x47B7D60", VA = "0x47B7D60")]
	private static XmlException DupAttrException(string prefix, string localName)
	{
		return null;
	}

	[Token(Token = "0x6000653")]
	[Address(RVA = "0x47B2240", Offset = "0x47B2240", VA = "0x47B2240")]
	private void AdvanceState(Token token)
	{
	}

	[Token(Token = "0x6000654")]
	[Address(RVA = "0x47B81E0", Offset = "0x47B81E0", VA = "0x47B81E0")]
	private void StartElementContent()
	{
	}

	[Token(Token = "0x6000655")]
	[Address(RVA = "0x47B7F20", Offset = "0x47B7F20", VA = "0x47B7F20")]
	private static string GetStateName(State state)
	{
		return null;
	}

	[Token(Token = "0x6000656")]
	[Address(RVA = "0x47B3160", Offset = "0x47B3160", VA = "0x47B3160")]
	internal string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000657")]
	[Address(RVA = "0x47B49B0", Offset = "0x47B49B0", VA = "0x47B49B0")]
	private string LookupLocalNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000658")]
	[Address(RVA = "0x47B4860", Offset = "0x47B4860", VA = "0x47B4860")]
	private string GeneratePrefix()
	{
		return null;
	}

	[Token(Token = "0x6000659")]
	[Address(RVA = "0x47B3070", Offset = "0x47B3070", VA = "0x47B3070")]
	private void CheckNCName(string ncname)
	{
	}

	[Token(Token = "0x600065A")]
	[Address(RVA = "0x47B83E0", Offset = "0x47B83E0", VA = "0x47B83E0")]
	private static Exception InvalidCharsException(string name, int badCharIndex)
	{
		return null;
	}

	[Token(Token = "0x600065B")]
	[Address(RVA = "0x47B7FB0", Offset = "0x47B7FB0", VA = "0x47B7FB0")]
	private void ThrowInvalidStateTransition(Token token, State currentState)
	{
	}

	[Token(Token = "0x600065D")]
	[Address(RVA = "0x47B4A50", Offset = "0x47B4A50", VA = "0x47B4A50")]
	private void AddAttribute(string prefix, string localName, string namespaceName)
	{
	}

	[Token(Token = "0x600065E")]
	[Address(RVA = "0x47B8500", Offset = "0x47B8500", VA = "0x47B8500")]
	private void AddToAttrHashTable(int attributeIndex)
	{
	}
}
