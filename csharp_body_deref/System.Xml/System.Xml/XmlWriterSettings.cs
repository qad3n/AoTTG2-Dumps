// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlWriterSettings
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

[Token(Token = "0x2000085")]
public sealed class XmlWriterSettings
{
	[Token(Token = "0x40003B7")]
	[FieldOffset(Offset = "0x10")]
	private bool useAsync;

	[Token(Token = "0x40003B8")]
	[FieldOffset(Offset = "0x18")]
	private Encoding encoding;

	[Token(Token = "0x40003B9")]
	[FieldOffset(Offset = "0x20")]
	private bool omitXmlDecl;

	[Token(Token = "0x40003BA")]
	[FieldOffset(Offset = "0x24")]
	private NewLineHandling newLineHandling;

	[Token(Token = "0x40003BB")]
	[FieldOffset(Offset = "0x28")]
	private string newLineChars;

	[Token(Token = "0x40003BC")]
	[FieldOffset(Offset = "0x30")]
	private TriState indent;

	[Token(Token = "0x40003BD")]
	[FieldOffset(Offset = "0x38")]
	private string indentChars;

	[Token(Token = "0x40003BE")]
	[FieldOffset(Offset = "0x40")]
	private bool newLineOnAttributes;

	[Token(Token = "0x40003BF")]
	[FieldOffset(Offset = "0x41")]
	private bool closeOutput;

	[Token(Token = "0x40003C0")]
	[FieldOffset(Offset = "0x44")]
	private NamespaceHandling namespaceHandling;

	[Token(Token = "0x40003C1")]
	[FieldOffset(Offset = "0x48")]
	private ConformanceLevel conformanceLevel;

	[Token(Token = "0x40003C2")]
	[FieldOffset(Offset = "0x4C")]
	private bool checkCharacters;

	[Token(Token = "0x40003C3")]
	[FieldOffset(Offset = "0x4D")]
	private bool writeEndDocumentOnClose;

	[Token(Token = "0x40003C4")]
	[FieldOffset(Offset = "0x50")]
	private XmlOutputMethod outputMethod;

	[Token(Token = "0x40003C5")]
	[FieldOffset(Offset = "0x58")]
	private List<XmlQualifiedName> cdataSections;

	[Token(Token = "0x40003C6")]
	[FieldOffset(Offset = "0x60")]
	private bool doNotEscapeUriAttributes;

	[Token(Token = "0x40003C7")]
	[FieldOffset(Offset = "0x61")]
	private bool mergeCDataSections;

	[Token(Token = "0x40003C8")]
	[FieldOffset(Offset = "0x68")]
	private string mediaType;

	[Token(Token = "0x40003C9")]
	[FieldOffset(Offset = "0x70")]
	private string docTypeSystem;

	[Token(Token = "0x40003CA")]
	[FieldOffset(Offset = "0x78")]
	private string docTypePublic;

	[Token(Token = "0x40003CB")]
	[FieldOffset(Offset = "0x80")]
	private XmlStandalone standalone;

	[Token(Token = "0x40003CC")]
	[FieldOffset(Offset = "0x84")]
	private bool autoXmlDecl;

	[Token(Token = "0x40003CD")]
	[FieldOffset(Offset = "0x85")]
	private bool isReadOnly;

	[Token(Token = "0x1700016A")]
	public bool Async
	{
		[Token(Token = "0x60006A6")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700016B")]
	public Encoding Encoding
	{
		[Token(Token = "0x60006A7")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016C")]
	public bool OmitXmlDeclaration
	{
		[Token(Token = "0x60006A8")]
		[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60006A9")]
		[Address(RVA = "0x2715A60", Offset = "0x2714060", VA = "0x182715A60")]
		set
		{
		}
	}

	[Token(Token = "0x1700016D")]
	public NewLineHandling NewLineHandling
	{
		[Token(Token = "0x60006AA")]
		[Address(RVA = "0xBDB280", Offset = "0xBD9880", VA = "0x180BDB280")]
		get
		{
			return default(NewLineHandling);
		}
	}

	[Token(Token = "0x1700016E")]
	public string NewLineChars
	{
		[Token(Token = "0x60006AB")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016F")]
	public bool Indent
	{
		[Token(Token = "0x60006AC")]
		[Address(RVA = "0x2715850", Offset = "0x2713E50", VA = "0x182715850")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60006AD")]
		[Address(RVA = "0x2715960", Offset = "0x2713F60", VA = "0x182715960")]
		set
		{
		}
	}

	[Token(Token = "0x17000170")]
	public string IndentChars
	{
		[Token(Token = "0x60006AE")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000171")]
	public bool NewLineOnAttributes
	{
		[Token(Token = "0x60006AF")]
		[Address(RVA = "0xA374E0", Offset = "0xA35AE0", VA = "0x180A374E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000172")]
	public bool CloseOutput
	{
		[Token(Token = "0x60006B0")]
		[Address(RVA = "0x1AD8270", Offset = "0x1AD6870", VA = "0x181AD8270")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000173")]
	public ConformanceLevel ConformanceLevel
	{
		[Token(Token = "0x60006B1")]
		[Address(RVA = "0xB3DFC0", Offset = "0xB3C5C0", VA = "0x180B3DFC0")]
		get
		{
			return default(ConformanceLevel);
		}
		[Token(Token = "0x60006B2")]
		[Address(RVA = "0x27158C0", Offset = "0x2713EC0", VA = "0x1827158C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000174")]
	public bool CheckCharacters
	{
		[Token(Token = "0x60006B3")]
		[Address(RVA = "0x1CFDD60", Offset = "0x1CFC360", VA = "0x181CFDD60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000175")]
	public NamespaceHandling NamespaceHandling
	{
		[Token(Token = "0x60006B4")]
		[Address(RVA = "0x58A870", Offset = "0x588E70", VA = "0x18058A870")]
		get
		{
			return default(NamespaceHandling);
		}
		[Token(Token = "0x60006B5")]
		[Address(RVA = "0x27159C0", Offset = "0x2713FC0", VA = "0x1827159C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000176")]
	public bool WriteEndDocumentOnClose
	{
		[Token(Token = "0x60006B6")]
		[Address(RVA = "0x21F2DE0", Offset = "0x21F13E0", VA = "0x1821F2DE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000177")]
	public XmlOutputMethod OutputMethod
	{
		[Token(Token = "0x60006B7")]
		[Address(RVA = "0x58A540", Offset = "0x588B40", VA = "0x18058A540")]
		get
		{
			return default(XmlOutputMethod);
		}
		[Token(Token = "0x60006B8")]
		[Address(RVA = "0x58A8D0", Offset = "0x588ED0", VA = "0x18058A8D0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000178")]
	internal List<XmlQualifiedName> CDataSectionElements
	{
		[Token(Token = "0x60006BA")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000179")]
	public bool DoNotEscapeUriAttributes
	{
		[Token(Token = "0x60006BB")]
		[Address(RVA = "0x198C740", Offset = "0x198AD40", VA = "0x18198C740")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700017A")]
	internal bool MergeCDataSections
	{
		[Token(Token = "0x60006BC")]
		[Address(RVA = "0x198C750", Offset = "0x198AD50", VA = "0x18198C750")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700017B")]
	internal string MediaType
	{
		[Token(Token = "0x60006BD")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017C")]
	internal string DocTypeSystem
	{
		[Token(Token = "0x60006BE")]
		[Address(RVA = "0xB48770", Offset = "0xB46D70", VA = "0x180B48770")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017D")]
	internal string DocTypePublic
	{
		[Token(Token = "0x60006BF")]
		[Address(RVA = "0xCDB5A0", Offset = "0xCD9BA0", VA = "0x180CDB5A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017E")]
	internal XmlStandalone Standalone
	{
		[Token(Token = "0x60006C0")]
		[Address(RVA = "0xB5B9B0", Offset = "0xB59FB0", VA = "0x180B5B9B0")]
		get
		{
			return default(XmlStandalone);
		}
	}

	[Token(Token = "0x1700017F")]
	internal bool AutoXmlDeclaration
	{
		[Token(Token = "0x60006C1")]
		[Address(RVA = "0x2715840", Offset = "0x2713E40", VA = "0x182715840")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000180")]
	internal TriState IndentInternal
	{
		[Token(Token = "0x60006C2")]
		[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60")]
		get
		{
			return default(TriState);
		}
	}

	[Token(Token = "0x17000181")]
	internal bool IsQuerySpecific
	{
		[Token(Token = "0x60006C3")]
		[Address(RVA = "0x2715860", Offset = "0x2713E60", VA = "0x182715860")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000182")]
	internal bool ReadOnly
	{
		[Token(Token = "0x60006C6")]
		[Address(RVA = "0x2715AB0", Offset = "0x27140B0", VA = "0x182715AB0")]
		set
		{
		}
	}

	[Token(Token = "0x60006A5")]
	[Address(RVA = "0x27156C0", Offset = "0x2713CC0", VA = "0x1827156C0")]
	public XmlWriterSettings()
	{
	}

	[Token(Token = "0x60006B9")]
	[Address(RVA = "0x2714D70", Offset = "0x2713370", VA = "0x182714D70")]
	public XmlWriterSettings Clone()
	{
		return null;
	}

	[Token(Token = "0x60006C4")]
	[Address(RVA = "0x2714E60", Offset = "0x2713460", VA = "0x182714E60")]
	internal XmlWriter CreateWriter(Stream output)
	{
		return null;
	}

	[Token(Token = "0x60006C5")]
	[Address(RVA = "0x27152B0", Offset = "0x27138B0", VA = "0x1827152B0")]
	internal XmlWriter CreateWriter(TextWriter output)
	{
		return null;
	}

	[Token(Token = "0x60006C7")]
	[Address(RVA = "0x2714CC0", Offset = "0x27132C0", VA = "0x182714CC0")]
	private void CheckReadOnly(string propertyName)
	{
	}

	[Token(Token = "0x60006C8")]
	[Address(RVA = "0x2715590", Offset = "0x2713B90", VA = "0x182715590")]
	private void Initialize()
	{
	}
}
