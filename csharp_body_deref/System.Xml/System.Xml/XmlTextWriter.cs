using System.Collections.Generic;
using System.ComponentModel;
using System.IO;
using System.Text;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000066")]
[EditorBrowsable(EditorBrowsableState.Never)]
public class XmlTextWriter : XmlWriter
{
	[Token(Token = "0x2000067")]
	private enum NamespaceState
	{
		[Token(Token = "0x40002BD")]
		Uninitialized,
		[Token(Token = "0x40002BE")]
		NotDeclaredButInScope,
		[Token(Token = "0x40002BF")]
		DeclaredButNotWrittenOut,
		[Token(Token = "0x40002C0")]
		DeclaredAndWrittenOut
	}

	[Token(Token = "0x2000068")]
	private struct TagInfo
	{
		[Token(Token = "0x40002C1")]
		[FieldOffset(Offset = "0x0")]
		internal string name;

		[Token(Token = "0x40002C2")]
		[FieldOffset(Offset = "0x8")]
		internal string prefix;

		[Token(Token = "0x40002C3")]
		[FieldOffset(Offset = "0x10")]
		internal string defaultNs;

		[Token(Token = "0x40002C4")]
		[FieldOffset(Offset = "0x18")]
		internal NamespaceState defaultNsState;

		[Token(Token = "0x40002C5")]
		[FieldOffset(Offset = "0x1C")]
		internal XmlSpace xmlSpace;

		[Token(Token = "0x40002C6")]
		[FieldOffset(Offset = "0x20")]
		internal string xmlLang;

		[Token(Token = "0x40002C7")]
		[FieldOffset(Offset = "0x28")]
		internal int prevNsTop;

		[Token(Token = "0x40002C8")]
		[FieldOffset(Offset = "0x2C")]
		internal int prefixCount;

		[Token(Token = "0x40002C9")]
		[FieldOffset(Offset = "0x30")]
		internal bool mixed;

		[Token(Token = "0x6000581")]
		[Address(RVA = "0x4468BF0", Offset = "0x4468BF0", VA = "0x4468BF0")]
		internal void Init(int nsTop)
		{
		}
	}

	[Token(Token = "0x2000069")]
	private struct Namespace
	{
		[Token(Token = "0x40002CA")]
		[FieldOffset(Offset = "0x0")]
		internal string prefix;

		[Token(Token = "0x40002CB")]
		[FieldOffset(Offset = "0x8")]
		internal string ns;

		[Token(Token = "0x40002CC")]
		[FieldOffset(Offset = "0x10")]
		internal bool declared;

		[Token(Token = "0x40002CD")]
		[FieldOffset(Offset = "0x14")]
		internal int prevNsIndex;

		[Token(Token = "0x6000582")]
		[Address(RVA = "0x446DDF0", Offset = "0x446DDF0", VA = "0x446DDF0")]
		internal void Set(string prefix, string ns, bool declared)
		{
		}
	}

	[Token(Token = "0x200006A")]
	private enum SpecialAttr
	{
		[Token(Token = "0x40002CF")]
		None,
		[Token(Token = "0x40002D0")]
		XmlSpace,
		[Token(Token = "0x40002D1")]
		XmlLang,
		[Token(Token = "0x40002D2")]
		XmlNs
	}

	[Token(Token = "0x200006B")]
	private enum State
	{
		[Token(Token = "0x40002D4")]
		Start,
		[Token(Token = "0x40002D5")]
		Prolog,
		[Token(Token = "0x40002D6")]
		PostDTD,
		[Token(Token = "0x40002D7")]
		Element,
		[Token(Token = "0x40002D8")]
		Attribute,
		[Token(Token = "0x40002D9")]
		Content,
		[Token(Token = "0x40002DA")]
		AttrOnly,
		[Token(Token = "0x40002DB")]
		Epilog,
		[Token(Token = "0x40002DC")]
		Error,
		[Token(Token = "0x40002DD")]
		Closed
	}

	[Token(Token = "0x200006C")]
	private enum Token
	{
		[Token(Token = "0x40002DF")]
		PI,
		[Token(Token = "0x40002E0")]
		Doctype,
		[Token(Token = "0x40002E1")]
		Comment,
		[Token(Token = "0x40002E2")]
		CData,
		[Token(Token = "0x40002E3")]
		StartElement,
		[Token(Token = "0x40002E4")]
		EndElement,
		[Token(Token = "0x40002E5")]
		LongEndElement,
		[Token(Token = "0x40002E6")]
		StartAttribute,
		[Token(Token = "0x40002E7")]
		EndAttribute,
		[Token(Token = "0x40002E8")]
		Content,
		[Token(Token = "0x40002E9")]
		Base64,
		[Token(Token = "0x40002EA")]
		RawData,
		[Token(Token = "0x40002EB")]
		Whitespace,
		[Token(Token = "0x40002EC")]
		Empty
	}

	[Token(Token = "0x40002A0")]
	[FieldOffset(Offset = "0x18")]
	private TextWriter textWriter;

	[Token(Token = "0x40002A1")]
	[FieldOffset(Offset = "0x20")]
	private XmlTextEncoder xmlEncoder;

	[Token(Token = "0x40002A2")]
	[FieldOffset(Offset = "0x28")]
	private Encoding encoding;

	[Token(Token = "0x40002A3")]
	[FieldOffset(Offset = "0x30")]
	private Formatting formatting;

	[Token(Token = "0x40002A4")]
	[FieldOffset(Offset = "0x34")]
	private bool indented;

	[Token(Token = "0x40002A5")]
	[FieldOffset(Offset = "0x38")]
	private int indentation;

	[Token(Token = "0x40002A6")]
	[FieldOffset(Offset = "0x3C")]
	private char indentChar;

	[Token(Token = "0x40002A7")]
	[FieldOffset(Offset = "0x40")]
	private TagInfo[] stack;

	[Token(Token = "0x40002A8")]
	[FieldOffset(Offset = "0x48")]
	private int top;

	[Token(Token = "0x40002A9")]
	[FieldOffset(Offset = "0x50")]
	private State[] stateTable;

	[Token(Token = "0x40002AA")]
	[FieldOffset(Offset = "0x58")]
	private State currentState;

	[Token(Token = "0x40002AB")]
	[FieldOffset(Offset = "0x5C")]
	private Token lastToken;

	[Token(Token = "0x40002AC")]
	[FieldOffset(Offset = "0x60")]
	private XmlTextWriterBase64Encoder base64Encoder;

	[Token(Token = "0x40002AD")]
	[FieldOffset(Offset = "0x68")]
	private char quoteChar;

	[Token(Token = "0x40002AE")]
	[FieldOffset(Offset = "0x6A")]
	private char curQuoteChar;

	[Token(Token = "0x40002AF")]
	[FieldOffset(Offset = "0x6C")]
	private bool namespaces;

	[Token(Token = "0x40002B0")]
	[FieldOffset(Offset = "0x70")]
	private SpecialAttr specialAttr;

	[Token(Token = "0x40002B1")]
	[FieldOffset(Offset = "0x78")]
	private string prefixForXmlNs;

	[Token(Token = "0x40002B2")]
	[FieldOffset(Offset = "0x80")]
	private bool flush;

	[Token(Token = "0x40002B3")]
	[FieldOffset(Offset = "0x88")]
	private Namespace[] nsStack;

	[Token(Token = "0x40002B4")]
	[FieldOffset(Offset = "0x90")]
	private int nsTop;

	[Token(Token = "0x40002B5")]
	[FieldOffset(Offset = "0x98")]
	private Dictionary<string, int> nsHashtable;

	[Token(Token = "0x40002B6")]
	[FieldOffset(Offset = "0xA0")]
	private bool useNsHashtable;

	[Token(Token = "0x40002B7")]
	[FieldOffset(Offset = "0xA8")]
	private XmlCharType xmlCharType;

	[Token(Token = "0x40002B8")]
	[FieldOffset(Offset = "0x0")]
	private static string[] stateName;

	[Token(Token = "0x40002B9")]
	[FieldOffset(Offset = "0x8")]
	private static string[] tokenName;

	[Token(Token = "0x40002BA")]
	[FieldOffset(Offset = "0x10")]
	private static readonly State[] stateTableDefault;

	[Token(Token = "0x40002BB")]
	[FieldOffset(Offset = "0x18")]
	private static readonly State[] stateTableDocument;

	[Token(Token = "0x17000131")]
	public Stream BaseStream
	{
		[Token(Token = "0x600054D")]
		[Address(RVA = "0x4468E90", Offset = "0x4468E90", VA = "0x4468E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000132")]
	public bool Namespaces
	{
		[Token(Token = "0x600054E")]
		[Address(RVA = "0x4468F10", Offset = "0x4468F10", VA = "0x4468F10")]
		set
		{
		}
	}

	[Token(Token = "0x17000133")]
	public Formatting Formatting
	{
		[Token(Token = "0x600054F")]
		[Address(RVA = "0x4468F80", Offset = "0x4468F80", VA = "0x4468F80")]
		set
		{
		}
	}

	[Token(Token = "0x17000134")]
	public char QuoteChar
	{
		[Token(Token = "0x6000550")]
		[Address(RVA = "0x4468F90", Offset = "0x4468F90", VA = "0x4468F90")]
		set
		{
		}
	}

	[Token(Token = "0x17000135")]
	public override WriteState WriteState
	{
		[Token(Token = "0x6000567")]
		[Address(RVA = "0x446D080", Offset = "0x446D080", VA = "0x446D080", Slot = "27")]
		get
		{
			return default(WriteState);
		}
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x4468A40", Offset = "0x4468A40", VA = "0x4468A40")]
	internal XmlTextWriter()
	{
	}

	[Token(Token = "0x600054A")]
	[Address(RVA = "0x4468C60", Offset = "0x4468C60", VA = "0x4468C60")]
	public XmlTextWriter(Stream w, Encoding encoding)
	{
	}

	[Token(Token = "0x600054B")]
	[Address(RVA = "0x4468D50", Offset = "0x4468D50", VA = "0x4468D50")]
	public XmlTextWriter(string filename, Encoding encoding)
	{
	}

	[Token(Token = "0x600054C")]
	[Address(RVA = "0x4468DD0", Offset = "0x4468DD0", VA = "0x4468DD0")]
	public XmlTextWriter(TextWriter w)
	{
	}

	[Token(Token = "0x6000551")]
	[Address(RVA = "0x4469020", Offset = "0x4469020", VA = "0x4469020", Slot = "5")]
	public override void WriteStartDocument()
	{
	}

	[Token(Token = "0x6000552")]
	[Address(RVA = "0x4469480", Offset = "0x4469480", VA = "0x4469480", Slot = "6")]
	public override void WriteStartDocument(bool standalone)
	{
	}

	[Token(Token = "0x6000553")]
	[Address(RVA = "0x44694A0", Offset = "0x44694A0", VA = "0x44694A0", Slot = "7")]
	public override void WriteEndDocument()
	{
	}

	[Token(Token = "0x6000554")]
	[Address(RVA = "0x4469720", Offset = "0x4469720", VA = "0x4469720", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x6000555")]
	[Address(RVA = "0x446A440", Offset = "0x446A440", VA = "0x446A440", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000556")]
	[Address(RVA = "0x446B090", Offset = "0x446B090", VA = "0x446B090", Slot = "10")]
	public override void WriteEndElement()
	{
	}

	[Token(Token = "0x6000557")]
	[Address(RVA = "0x446B440", Offset = "0x446B440", VA = "0x446B440", Slot = "11")]
	public override void WriteFullEndElement()
	{
	}

	[Token(Token = "0x6000558")]
	[Address(RVA = "0x446B450", Offset = "0x446B450", VA = "0x446B450", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000559")]
	[Address(RVA = "0x446BF30", Offset = "0x446BF30", VA = "0x446BF30", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x600055A")]
	[Address(RVA = "0x446BFD0", Offset = "0x446BFD0", VA = "0x446BFD0", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x600055B")]
	[Address(RVA = "0x446C1D0", Offset = "0x446C1D0", VA = "0x446C1D0", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x600055C")]
	[Address(RVA = "0x446C400", Offset = "0x446C400", VA = "0x446C400", Slot = "16")]
	public override void WriteProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x600055D")]
	[Address(RVA = "0x446C750", Offset = "0x446C750", VA = "0x446C750", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x600055E")]
	[Address(RVA = "0x446C820", Offset = "0x446C820", VA = "0x446C820", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x600055F")]
	[Address(RVA = "0x446C8E0", Offset = "0x446C8E0", VA = "0x446C8E0", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x6000560")]
	[Address(RVA = "0x446CA50", Offset = "0x446CA50", VA = "0x446CA50", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x6000561")]
	[Address(RVA = "0x446CB20", Offset = "0x446CB20", VA = "0x446CB20", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x6000562")]
	[Address(RVA = "0x446CBF0", Offset = "0x446CBF0", VA = "0x446CBF0", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000563")]
	[Address(RVA = "0x446CCC0", Offset = "0x446CCC0", VA = "0x446CCC0", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000564")]
	[Address(RVA = "0x446CD90", Offset = "0x446CD90", VA = "0x446CD90", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x6000565")]
	[Address(RVA = "0x446CE50", Offset = "0x446CE50", VA = "0x446CE50", Slot = "25")]
	public override void WriteBase64(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000566")]
	[Address(RVA = "0x446CFB0", Offset = "0x446CFB0", VA = "0x446CFB0", Slot = "26")]
	public override void WriteBinHex(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000568")]
	[Address(RVA = "0x446D0A0", Offset = "0x446D0A0", VA = "0x446D0A0", Slot = "28")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000569")]
	[Address(RVA = "0x446D260", Offset = "0x446D260", VA = "0x446D260", Slot = "29")]
	public override void Flush()
	{
	}

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x446D290", Offset = "0x446D290", VA = "0x446D290", Slot = "30")]
	public override string LookupPrefix(string ns)
	{
		return null;
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x4469030", Offset = "0x4469030", VA = "0x4469030")]
	private void StartDocument(int standalone)
	{
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x4469E20", Offset = "0x4469E20", VA = "0x4469E20")]
	private void AutoComplete(Token token)
	{
	}

	[Token(Token = "0x600056D")]
	[Address(RVA = "0x44696D0", Offset = "0x44696D0", VA = "0x44696D0")]
	private void AutoCompleteAll()
	{
	}

	[Token(Token = "0x600056E")]
	[Address(RVA = "0x446B0A0", Offset = "0x446B0A0", VA = "0x446B0A0")]
	private void InternalWriteEndElement(bool longFormat)
	{
	}

	[Token(Token = "0x600056F")]
	[Address(RVA = "0x446D490", Offset = "0x446D490", VA = "0x446D490")]
	private void WriteEndStartTag(bool empty)
	{
	}

	[Token(Token = "0x6000570")]
	[Address(RVA = "0x446D440", Offset = "0x446D440", VA = "0x446D440")]
	private void WriteEndAttributeQuote()
	{
	}

	[Token(Token = "0x6000571")]
	[Address(RVA = "0x446D370", Offset = "0x446D370", VA = "0x446D370")]
	private void Indent(bool beforeEndElement)
	{
	}

	[Token(Token = "0x6000572")]
	[Address(RVA = "0x446AD30", Offset = "0x446AD30", VA = "0x446AD30")]
	private void PushNamespace(string prefix, string ns, bool declared)
	{
	}

	[Token(Token = "0x6000573")]
	[Address(RVA = "0x446DB50", Offset = "0x446DB50", VA = "0x446DB50")]
	private void AddNamespace(string prefix, string ns, bool declared)
	{
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x446DE30", Offset = "0x446DE30", VA = "0x446DE30")]
	private void AddToNamespaceHashtable(int namespaceIndex)
	{
	}

	[Token(Token = "0x6000575")]
	[Address(RVA = "0x446D860", Offset = "0x446D860", VA = "0x446D860")]
	private void PopNamespaces(int indexFrom, int indexTo)
	{
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0x446BE30", Offset = "0x446BE30", VA = "0x446BE30")]
	private string GeneratePrefix()
	{
		return null;
	}

	[Token(Token = "0x6000577")]
	[Address(RVA = "0x446C660", Offset = "0x446C660", VA = "0x446C660")]
	private void InternalWriteProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x6000578")]
	[Address(RVA = "0x446AB40", Offset = "0x446AB40", VA = "0x446AB40")]
	private int LookupNamespace(string prefix)
	{
		return default(int);
	}

	[Token(Token = "0x6000579")]
	[Address(RVA = "0x446BD10", Offset = "0x446BD10", VA = "0x446BD10")]
	private int LookupNamespaceInCurrentScope(string prefix)
	{
		return default(int);
	}

	[Token(Token = "0x600057A")]
	[Address(RVA = "0x446AC40", Offset = "0x446AC40", VA = "0x446AC40")]
	private string FindPrefix(string ns)
	{
		return null;
	}

	[Token(Token = "0x600057B")]
	[Address(RVA = "0x4469C50", Offset = "0x4469C50", VA = "0x4469C50")]
	private void ValidateName(string name, bool isNCName)
	{
	}

	[Token(Token = "0x600057C")]
	[Address(RVA = "0x446D940", Offset = "0x446D940", VA = "0x446D940")]
	private void HandleSpecialAttribute()
	{
	}

	[Token(Token = "0x600057D")]
	[Address(RVA = "0x446AF60", Offset = "0x446AF60", VA = "0x446AF60")]
	private void VerifyPrefixXml(string prefix, string ns)
	{
	}

	[Token(Token = "0x600057E")]
	[Address(RVA = "0x446AA00", Offset = "0x446AA00", VA = "0x446AA00")]
	private void PushStack()
	{
	}

	[Token(Token = "0x600057F")]
	[Address(RVA = "0x446D840", Offset = "0x446D840", VA = "0x446D840")]
	private void FlushEncoders()
	{
	}
}
