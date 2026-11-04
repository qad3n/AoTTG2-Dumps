// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlTextWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x26F2DB0", Offset = "0x26F13B0", VA = "0x1826F2DB0")]
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
		[Address(RVA = "0x26F2C40", Offset = "0x26F1240", VA = "0x1826F2C40")]
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
		[Address(RVA = "0x26F7F80", Offset = "0x26F6580", VA = "0x1826F7F80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000132")]
	public bool Namespaces
	{
		[Token(Token = "0x600054E")]
		[Address(RVA = "0x26F8080", Offset = "0x26F6680", VA = "0x1826F8080")]
		set
		{
		}
	}

	[Token(Token = "0x17000133")]
	public Formatting Formatting
	{
		[Token(Token = "0x600054F")]
		[Address(RVA = "0x26F8070", Offset = "0x26F6670", VA = "0x1826F8070")]
		set
		{
		}
	}

	[Token(Token = "0x17000134")]
	public char QuoteChar
	{
		[Token(Token = "0x6000550")]
		[Address(RVA = "0x26F8100", Offset = "0x26F6700", VA = "0x1826F8100")]
		set
		{
		}
	}

	[Token(Token = "0x17000135")]
	public override WriteState WriteState
	{
		[Token(Token = "0x6000567")]
		[Address(RVA = "0x26F8000", Offset = "0x26F6600", VA = "0x1826F8000", Slot = "27")]
		get
		{
			return default(WriteState);
		}
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x26F7AE0", Offset = "0x26F60E0", VA = "0x1826F7AE0")]
	internal XmlTextWriter()
	{
	}

	[Token(Token = "0x600054A")]
	[Address(RVA = "0x26F7E90", Offset = "0x26F6490", VA = "0x1826F7E90")]
	public XmlTextWriter(Stream w, Encoding encoding)
	{
	}

	[Token(Token = "0x600054B")]
	[Address(RVA = "0x26F7D50", Offset = "0x26F6350", VA = "0x1826F7D50")]
	public XmlTextWriter(string filename, Encoding encoding)
	{
	}

	[Token(Token = "0x600054C")]
	[Address(RVA = "0x26F7C80", Offset = "0x26F6280", VA = "0x1826F7C80")]
	public XmlTextWriter(TextWriter w)
	{
	}

	[Token(Token = "0x6000551")]
	[Address(RVA = "0x26F6D60", Offset = "0x26F5360", VA = "0x1826F6D60", Slot = "5")]
	public override void WriteStartDocument()
	{
	}

	[Token(Token = "0x6000552")]
	[Address(RVA = "0x26F6D40", Offset = "0x26F5340", VA = "0x1826F6D40", Slot = "6")]
	public override void WriteStartDocument(bool standalone)
	{
	}

	[Token(Token = "0x6000553")]
	[Address(RVA = "0x26F5C70", Offset = "0x26F4270", VA = "0x1826F5C70", Slot = "7")]
	public override void WriteEndDocument()
	{
	}

	[Token(Token = "0x6000554")]
	[Address(RVA = "0x26F5830", Offset = "0x26F3E30", VA = "0x1826F5830", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x6000555")]
	[Address(RVA = "0x26F6D70", Offset = "0x26F5370", VA = "0x1826F6D70", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000556")]
	[Address(RVA = "0x26F5E10", Offset = "0x26F4410", VA = "0x1826F5E10", Slot = "10")]
	public override void WriteEndElement()
	{
	}

	[Token(Token = "0x6000557")]
	[Address(RVA = "0x26F6260", Offset = "0x26F4860", VA = "0x1826F6260", Slot = "11")]
	public override void WriteFullEndElement()
	{
	}

	[Token(Token = "0x6000558")]
	[Address(RVA = "0x26F6530", Offset = "0x26F4B30", VA = "0x1826F6530", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000559")]
	[Address(RVA = "0x26F5C20", Offset = "0x26F4220", VA = "0x1826F5C20", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x600055A")]
	[Address(RVA = "0x26F5420", Offset = "0x26F3A20", VA = "0x1826F5420", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x600055B")]
	[Address(RVA = "0x26F5690", Offset = "0x26F3C90", VA = "0x1826F5690", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x600055C")]
	[Address(RVA = "0x26F6270", Offset = "0x26F4870", VA = "0x1826F6270", Slot = "16")]
	public override void WriteProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x600055D")]
	[Address(RVA = "0x26F61E0", Offset = "0x26F47E0", VA = "0x1826F61E0", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x600055E")]
	[Address(RVA = "0x26F5590", Offset = "0x26F3B90", VA = "0x1826F5590", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x600055F")]
	[Address(RVA = "0x26F7450", Offset = "0x26F5A50", VA = "0x1826F7450", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x6000560")]
	[Address(RVA = "0x26F7340", Offset = "0x26F5940", VA = "0x1826F7340", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x6000561")]
	[Address(RVA = "0x26F73C0", Offset = "0x26F59C0", VA = "0x1826F73C0", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x6000562")]
	[Address(RVA = "0x26F5600", Offset = "0x26F3C00", VA = "0x1826F5600", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000563")]
	[Address(RVA = "0x26F6430", Offset = "0x26F4A30", VA = "0x1826F6430", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000564")]
	[Address(RVA = "0x26F64C0", Offset = "0x26F4AC0", VA = "0x1826F64C0", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x6000565")]
	[Address(RVA = "0x26F52A0", Offset = "0x26F38A0", VA = "0x1826F52A0", Slot = "25")]
	public override void WriteBase64(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000566")]
	[Address(RVA = "0x26F53A0", Offset = "0x26F39A0", VA = "0x1826F53A0", Slot = "26")]
	public override void WriteBinHex(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000568")]
	[Address(RVA = "0x26F3920", Offset = "0x26F1F20", VA = "0x1826F3920", Slot = "28")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000569")]
	[Address(RVA = "0x1AFAD30", Offset = "0x1AF9330", VA = "0x181AFAD30", Slot = "29")]
	public override void Flush()
	{
	}

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x26F4640", Offset = "0x26F2C40", VA = "0x1826F4640", Slot = "30")]
	public override string LookupPrefix(string ns)
	{
		return null;
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x26F4C70", Offset = "0x26F3270", VA = "0x1826F4C70")]
	private void StartDocument(int standalone)
	{
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x26F3310", Offset = "0x26F1910", VA = "0x1826F3310")]
	private void AutoComplete(Token token)
	{
	}

	[Token(Token = "0x600056D")]
	[Address(RVA = "0x26F32C0", Offset = "0x26F18C0", VA = "0x1826F32C0")]
	private void AutoCompleteAll()
	{
	}

	[Token(Token = "0x600056E")]
	[Address(RVA = "0x26F3F10", Offset = "0x26F2510", VA = "0x1826F3F10")]
	private void InternalWriteEndElement(bool longFormat)
	{
	}

	[Token(Token = "0x600056F")]
	[Address(RVA = "0x26F5E20", Offset = "0x26F4420", VA = "0x1826F5E20")]
	private void WriteEndStartTag(bool empty)
	{
	}

	[Token(Token = "0x6000570")]
	[Address(RVA = "0x26F5BD0", Offset = "0x26F41D0", VA = "0x1826F5BD0")]
	private void WriteEndAttributeQuote()
	{
	}

	[Token(Token = "0x6000571")]
	[Address(RVA = "0x26F3E40", Offset = "0x26F2440", VA = "0x1826F3E40")]
	private void Indent(bool beforeEndElement)
	{
	}

	[Token(Token = "0x6000572")]
	[Address(RVA = "0x26F4840", Offset = "0x26F2E40", VA = "0x1826F4840")]
	private void PushNamespace(string prefix, string ns, bool declared)
	{
	}

	[Token(Token = "0x6000573")]
	[Address(RVA = "0x26F2FE0", Offset = "0x26F15E0", VA = "0x1826F2FE0")]
	private void AddNamespace(string prefix, string ns, bool declared)
	{
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x26F31D0", Offset = "0x26F17D0", VA = "0x1826F31D0")]
	private void AddToNamespaceHashtable(int namespaceIndex)
	{
	}

	[Token(Token = "0x6000575")]
	[Address(RVA = "0x26F4730", Offset = "0x26F2D30", VA = "0x1826F4730")]
	private void PopNamespaces(int indexFrom, int indexTo)
	{
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0x26F3B00", Offset = "0x26F2100", VA = "0x1826F3B00")]
	private string GeneratePrefix()
	{
		return null;
	}

	[Token(Token = "0x6000577")]
	[Address(RVA = "0x26F42F0", Offset = "0x26F28F0", VA = "0x1826F42F0")]
	private void InternalWriteProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x6000578")]
	[Address(RVA = "0x26F4530", Offset = "0x26F2B30", VA = "0x1826F4530")]
	private int LookupNamespace(string prefix)
	{
		return default(int);
	}

	[Token(Token = "0x6000579")]
	[Address(RVA = "0x26F43F0", Offset = "0x26F29F0", VA = "0x1826F43F0")]
	private int LookupNamespaceInCurrentScope(string prefix)
	{
		return default(int);
	}

	[Token(Token = "0x600057A")]
	[Address(RVA = "0x26F39F0", Offset = "0x26F1FF0", VA = "0x1826F39F0")]
	private string FindPrefix(string ns)
	{
		return null;
	}

	[Token(Token = "0x600057B")]
	[Address(RVA = "0x26F4F40", Offset = "0x26F3540", VA = "0x1826F4F40")]
	private void ValidateName(string name, bool isNCName)
	{
	}

	[Token(Token = "0x600057C")]
	[Address(RVA = "0x26F3C00", Offset = "0x26F2200", VA = "0x1826F3C00")]
	private void HandleSpecialAttribute()
	{
	}

	[Token(Token = "0x600057D")]
	[Address(RVA = "0x26F5160", Offset = "0x26F3760", VA = "0x1826F5160")]
	private void VerifyPrefixXml(string prefix, string ns)
	{
	}

	[Token(Token = "0x600057E")]
	[Address(RVA = "0x26F4B30", Offset = "0x26F3130", VA = "0x1826F4B30")]
	private void PushStack()
	{
	}

	[Token(Token = "0x600057F")]
	[Address(RVA = "0x26F3AC0", Offset = "0x26F20C0", VA = "0x1826F3AC0")]
	private void FlushEncoders()
	{
	}
}
