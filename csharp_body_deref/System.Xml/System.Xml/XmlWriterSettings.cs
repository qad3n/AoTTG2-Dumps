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
		[Address(RVA = "0x60BF4E0", Offset = "0x60BE4E0", VA = "0x60BF4E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700016B")]
	public Encoding Encoding
	{
		[Token(Token = "0x60006A7")]
		[Address(RVA = "0x60BF4F0", Offset = "0x60BE4F0", VA = "0x60BF4F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016C")]
	public bool OmitXmlDeclaration
	{
		[Token(Token = "0x60006A8")]
		[Address(RVA = "0x60BF500", Offset = "0x60BE500", VA = "0x60BF500")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60006A9")]
		[Address(RVA = "0x60BF510", Offset = "0x60BE510", VA = "0x60BF510")]
		set
		{
		}
	}

	[Token(Token = "0x1700016D")]
	public NewLineHandling NewLineHandling
	{
		[Token(Token = "0x60006AA")]
		[Address(RVA = "0x60BF610", Offset = "0x60BE610", VA = "0x60BF610")]
		get
		{
			return default(NewLineHandling);
		}
	}

	[Token(Token = "0x1700016E")]
	public string NewLineChars
	{
		[Token(Token = "0x60006AB")]
		[Address(RVA = "0x60BF620", Offset = "0x60BE620", VA = "0x60BF620")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016F")]
	public bool Indent
	{
		[Token(Token = "0x60006AC")]
		[Address(RVA = "0x60BF630", Offset = "0x60BE630", VA = "0x60BF630")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60006AD")]
		[Address(RVA = "0x60BF640", Offset = "0x60BE640", VA = "0x60BF640")]
		set
		{
		}
	}

	[Token(Token = "0x17000170")]
	public string IndentChars
	{
		[Token(Token = "0x60006AE")]
		[Address(RVA = "0x60BF690", Offset = "0x60BE690", VA = "0x60BF690")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000171")]
	public bool NewLineOnAttributes
	{
		[Token(Token = "0x60006AF")]
		[Address(RVA = "0x60BF6A0", Offset = "0x60BE6A0", VA = "0x60BF6A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000172")]
	public bool CloseOutput
	{
		[Token(Token = "0x60006B0")]
		[Address(RVA = "0x60BF6B0", Offset = "0x60BE6B0", VA = "0x60BF6B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000173")]
	public ConformanceLevel ConformanceLevel
	{
		[Token(Token = "0x60006B1")]
		[Address(RVA = "0x60BF6C0", Offset = "0x60BE6C0", VA = "0x60BF6C0")]
		get
		{
			return default(ConformanceLevel);
		}
		[Token(Token = "0x60006B2")]
		[Address(RVA = "0x60BF6D0", Offset = "0x60BE6D0", VA = "0x60BF6D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000174")]
	public bool CheckCharacters
	{
		[Token(Token = "0x60006B3")]
		[Address(RVA = "0x60BF760", Offset = "0x60BE760", VA = "0x60BF760")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000175")]
	public NamespaceHandling NamespaceHandling
	{
		[Token(Token = "0x60006B4")]
		[Address(RVA = "0x60BF770", Offset = "0x60BE770", VA = "0x60BF770")]
		get
		{
			return default(NamespaceHandling);
		}
		[Token(Token = "0x60006B5")]
		[Address(RVA = "0x60BF780", Offset = "0x60BE780", VA = "0x60BF780")]
		set
		{
		}
	}

	[Token(Token = "0x17000176")]
	public bool WriteEndDocumentOnClose
	{
		[Token(Token = "0x60006B6")]
		[Address(RVA = "0x60BF810", Offset = "0x60BE810", VA = "0x60BF810")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000177")]
	public XmlOutputMethod OutputMethod
	{
		[Token(Token = "0x60006B7")]
		[Address(RVA = "0x60BF820", Offset = "0x60BE820", VA = "0x60BF820")]
		get
		{
			return default(XmlOutputMethod);
		}
		[Token(Token = "0x60006B8")]
		[Address(RVA = "0x60BF830", Offset = "0x60BE830", VA = "0x60BF830")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000178")]
	internal List<XmlQualifiedName> CDataSectionElements
	{
		[Token(Token = "0x60006BA")]
		[Address(RVA = "0x60BF900", Offset = "0x60BE900", VA = "0x60BF900")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000179")]
	public bool DoNotEscapeUriAttributes
	{
		[Token(Token = "0x60006BB")]
		[Address(RVA = "0x60BF910", Offset = "0x60BE910", VA = "0x60BF910")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700017A")]
	internal bool MergeCDataSections
	{
		[Token(Token = "0x60006BC")]
		[Address(RVA = "0x60BF920", Offset = "0x60BE920", VA = "0x60BF920")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700017B")]
	internal string MediaType
	{
		[Token(Token = "0x60006BD")]
		[Address(RVA = "0x60BF930", Offset = "0x60BE930", VA = "0x60BF930")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017C")]
	internal string DocTypeSystem
	{
		[Token(Token = "0x60006BE")]
		[Address(RVA = "0x60BF940", Offset = "0x60BE940", VA = "0x60BF940")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017D")]
	internal string DocTypePublic
	{
		[Token(Token = "0x60006BF")]
		[Address(RVA = "0x60BF950", Offset = "0x60BE950", VA = "0x60BF950")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017E")]
	internal XmlStandalone Standalone
	{
		[Token(Token = "0x60006C0")]
		[Address(RVA = "0x60BF960", Offset = "0x60BE960", VA = "0x60BF960")]
		get
		{
			return default(XmlStandalone);
		}
	}

	[Token(Token = "0x1700017F")]
	internal bool AutoXmlDeclaration
	{
		[Token(Token = "0x60006C1")]
		[Address(RVA = "0x60BF970", Offset = "0x60BE970", VA = "0x60BF970")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000180")]
	internal TriState IndentInternal
	{
		[Token(Token = "0x60006C2")]
		[Address(RVA = "0x60BF980", Offset = "0x60BE980", VA = "0x60BF980")]
		get
		{
			return default(TriState);
		}
	}

	[Token(Token = "0x17000181")]
	internal bool IsQuerySpecific
	{
		[Token(Token = "0x60006C3")]
		[Address(RVA = "0x60BF990", Offset = "0x60BE990", VA = "0x60BF990")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000182")]
	internal bool ReadOnly
	{
		[Token(Token = "0x60006C6")]
		[Address(RVA = "0x60BF9F0", Offset = "0x60BE9F0", VA = "0x60BF9F0")]
		set
		{
		}
	}

	[Token(Token = "0x60006A5")]
	[Address(RVA = "0x60BEA40", Offset = "0x60BDA40", VA = "0x60BEA40")]
	public XmlWriterSettings()
	{
	}

	[Token(Token = "0x60006B9")]
	[Address(RVA = "0x60BF840", Offset = "0x60BE840", VA = "0x60BF840")]
	public XmlWriterSettings Clone()
	{
		return null;
	}

	[Token(Token = "0x60006C4")]
	[Address(RVA = "0x60BEAC0", Offset = "0x60BDAC0", VA = "0x60BEAC0")]
	internal XmlWriter CreateWriter(Stream output)
	{
		return null;
	}

	[Token(Token = "0x60006C5")]
	[Address(RVA = "0x60BF040", Offset = "0x60BE040", VA = "0x60BF040")]
	internal XmlWriter CreateWriter(TextWriter output)
	{
		return null;
	}

	[Token(Token = "0x60006C7")]
	[Address(RVA = "0x60BF560", Offset = "0x60BE560", VA = "0x60BF560")]
	private void CheckReadOnly(string propertyName)
	{
	}

	[Token(Token = "0x60006C8")]
	[Address(RVA = "0x60BF3B0", Offset = "0x60BE3B0", VA = "0x60BF3B0")]
	private void Initialize()
	{
	}
}
