// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlValidatingReaderImpl
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Xml.Schema;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000070")]
internal sealed class XmlValidatingReaderImpl : XmlReader, IXmlLineInfo, IXmlNamespaceResolver
{
	[Token(Token = "0x2000071")]
	private enum ParsingFunction
	{
		[Token(Token = "0x4000319")]
		Read,
		[Token(Token = "0x400031A")]
		Init,
		[Token(Token = "0x400031B")]
		ParseDtdFromContext,
		[Token(Token = "0x400031C")]
		ResolveEntityInternally,
		[Token(Token = "0x400031D")]
		InReadBinaryContent,
		[Token(Token = "0x400031E")]
		ReaderClosed,
		[Token(Token = "0x400031F")]
		Error,
		[Token(Token = "0x4000320")]
		None
	}

	[Token(Token = "0x2000072")]
	internal class ValidationEventHandling : IValidationEventHandling
	{
		[Token(Token = "0x4000321")]
		[FieldOffset(Offset = "0x10")]
		private XmlValidatingReaderImpl reader;

		[Token(Token = "0x4000322")]
		[FieldOffset(Offset = "0x18")]
		private ValidationEventHandler eventHandler;

		[Token(Token = "0x17000162")]
		private object System_002EXml_002EIValidationEventHandling_002EEventHandler
		{
			[Token(Token = "0x6000627")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000626")]
		[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
		internal ValidationEventHandling(XmlValidatingReaderImpl reader)
		{
		}

		[Token(Token = "0x6000628")]
		[Address(RVA = "0x26F2EC0", Offset = "0x26F14C0", VA = "0x1826F2EC0", Slot = "5")]
		private void System_002EXml_002EIValidationEventHandling_002ESendEvent(Exception exception, XmlSeverityType severity)
		{
		}

		[Token(Token = "0x6000629")]
		[Address(RVA = "0x26F2E20", Offset = "0x26F1420", VA = "0x1826F2E20")]
		internal void AddHandler(ValidationEventHandler handler)
		{
		}
	}

	[Token(Token = "0x400030B")]
	[FieldOffset(Offset = "0x10")]
	private XmlReader coreReader;

	[Token(Token = "0x400030C")]
	[FieldOffset(Offset = "0x18")]
	private XmlTextReaderImpl coreReaderImpl;

	[Token(Token = "0x400030D")]
	[FieldOffset(Offset = "0x20")]
	private IXmlNamespaceResolver coreReaderNSResolver;

	[Token(Token = "0x400030E")]
	[FieldOffset(Offset = "0x28")]
	private ValidationType validationType;

	[Token(Token = "0x400030F")]
	[FieldOffset(Offset = "0x30")]
	private BaseValidator validator;

	[Token(Token = "0x4000310")]
	[FieldOffset(Offset = "0x38")]
	private XmlSchemaCollection schemaCollection;

	[Token(Token = "0x4000311")]
	[FieldOffset(Offset = "0x40")]
	private bool processIdentityConstraints;

	[Token(Token = "0x4000312")]
	[FieldOffset(Offset = "0x44")]
	private ParsingFunction parsingFunction;

	[Token(Token = "0x4000313")]
	[FieldOffset(Offset = "0x48")]
	private ValidationEventHandling eventHandling;

	[Token(Token = "0x4000314")]
	[FieldOffset(Offset = "0x50")]
	private XmlParserContext parserContext;

	[Token(Token = "0x4000315")]
	[FieldOffset(Offset = "0x58")]
	private ReadContentAsBinaryHelper readBinaryHelper;

	[Token(Token = "0x4000316")]
	[FieldOffset(Offset = "0x60")]
	private XmlReader outerReader;

	[Token(Token = "0x4000317")]
	[FieldOffset(Offset = "0x0")]
	private static XmlResolver s_tempResolver;

	[Token(Token = "0x17000144")]
	public override XmlReaderSettings Settings
	{
		[Token(Token = "0x60005E9")]
		[Address(RVA = "0x26FDD70", Offset = "0x26FC370", VA = "0x1826FDD70", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000145")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x60005EA")]
		[Address(RVA = "0x2547600", Offset = "0x2545C00", VA = "0x182547600", Slot = "6")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000146")]
	public override string Name
	{
		[Token(Token = "0x60005EB")]
		[Address(RVA = "0x1CA8960", Offset = "0x1CA6F60", VA = "0x181CA8960", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000147")]
	public override string LocalName
	{
		[Token(Token = "0x60005EC")]
		[Address(RVA = "0x25475D0", Offset = "0x2545BD0", VA = "0x1825475D0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000148")]
	public override string NamespaceURI
	{
		[Token(Token = "0x60005ED")]
		[Address(RVA = "0x1A1F330", Offset = "0x1A1D930", VA = "0x181A1F330", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000149")]
	public override string Prefix
	{
		[Token(Token = "0x60005EE")]
		[Address(RVA = "0x1A1F420", Offset = "0x1A1DA20", VA = "0x181A1F420", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700014A")]
	public override string Value
	{
		[Token(Token = "0x60005EF")]
		[Address(RVA = "0x1A1F3F0", Offset = "0x1A1D9F0", VA = "0x181A1F3F0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700014B")]
	public override int Depth
	{
		[Token(Token = "0x60005F0")]
		[Address(RVA = "0x2547540", Offset = "0x2545B40", VA = "0x182547540", Slot = "12")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700014C")]
	public override string BaseURI
	{
		[Token(Token = "0x60005F1")]
		[Address(RVA = "0x25474E0", Offset = "0x2545AE0", VA = "0x1825474E0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700014D")]
	public override bool IsEmptyElement
	{
		[Token(Token = "0x60005F2")]
		[Address(RVA = "0x25475A0", Offset = "0x2545BA0", VA = "0x1825475A0", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700014E")]
	public override bool IsDefault
	{
		[Token(Token = "0x60005F3")]
		[Address(RVA = "0x1A1F3C0", Offset = "0x1A1D9C0", VA = "0x181A1F3C0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700014F")]
	public override char QuoteChar
	{
		[Token(Token = "0x60005F4")]
		[Address(RVA = "0x1A1F300", Offset = "0x1A1D900", VA = "0x181A1F300", Slot = "16")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x17000150")]
	public override XmlSpace XmlSpace
	{
		[Token(Token = "0x60005F5")]
		[Address(RVA = "0x1A1F390", Offset = "0x1A1D990", VA = "0x181A1F390", Slot = "17")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x17000151")]
	public override string XmlLang
	{
		[Token(Token = "0x60005F6")]
		[Address(RVA = "0x2547660", Offset = "0x2545C60", VA = "0x182547660", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000152")]
	public override ReadState ReadState
	{
		[Token(Token = "0x60005F7")]
		[Address(RVA = "0x26FDD30", Offset = "0x26FC330", VA = "0x1826FDD30", Slot = "34")]
		get
		{
			return default(ReadState);
		}
	}

	[Token(Token = "0x17000153")]
	public override bool EOF
	{
		[Token(Token = "0x60005F8")]
		[Address(RVA = "0x2547570", Offset = "0x2545B70", VA = "0x182547570", Slot = "32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000154")]
	public override XmlNameTable NameTable
	{
		[Token(Token = "0x60005F9")]
		[Address(RVA = "0x1CBA960", Offset = "0x1CB8F60", VA = "0x181CBA960", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000155")]
	public override int AttributeCount
	{
		[Token(Token = "0x60005FA")]
		[Address(RVA = "0x25474B0", Offset = "0x2545AB0", VA = "0x1825474B0", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000156")]
	public override bool CanResolveEntity
	{
		[Token(Token = "0x6000607")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000157")]
	public int LineNumber
	{
		[Token(Token = "0x600060C")]
		[Address(RVA = "0x26FDBA0", Offset = "0x26FC1A0", VA = "0x1826FDBA0", Slot = "54")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000158")]
	public int LinePosition
	{
		[Token(Token = "0x600060D")]
		[Address(RVA = "0x26FDC40", Offset = "0x26FC240", VA = "0x1826FDC40", Slot = "55")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000159")]
	internal ValidationType ValidationType
	{
		[Token(Token = "0x6000613")]
		[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030")]
		get
		{
			return default(ValidationType);
		}
	}

	[Token(Token = "0x1700015A")]
	internal XmlSchemaCollection Schemas
	{
		[Token(Token = "0x6000614")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015B")]
	internal bool Namespaces
	{
		[Token(Token = "0x6000615")]
		[Address(RVA = "0x26FDD10", Offset = "0x26FC310", VA = "0x1826FDD10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700015C")]
	internal BaseValidator Validator
	{
		[Token(Token = "0x600061C")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600061D")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		set
		{
		}
	}

	[Token(Token = "0x1700015D")]
	internal override XmlNamespaceManager NamespaceManager
	{
		[Token(Token = "0x600061E")]
		[Address(RVA = "0x26FDCE0", Offset = "0x26FC2E0", VA = "0x1826FDCE0", Slot = "51")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015E")]
	internal bool StandAlone
	{
		[Token(Token = "0x600061F")]
		[Address(RVA = "0x26FDE40", Offset = "0x26FC440", VA = "0x1826FDE40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700015F")]
	internal object SchemaTypeObject
	{
		[Token(Token = "0x6000620")]
		[Address(RVA = "0x26FDE80", Offset = "0x26FC480", VA = "0x1826FDE80")]
		set
		{
		}
	}

	[Token(Token = "0x17000160")]
	internal object TypedValueObject
	{
		[Token(Token = "0x6000621")]
		[Address(RVA = "0x26FDE60", Offset = "0x26FC460", VA = "0x1826FDE60")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000622")]
		[Address(RVA = "0x26FDEA0", Offset = "0x26FC4A0", VA = "0x1826FDEA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000161")]
	internal override IDtdInfo DtdInfo
	{
		[Token(Token = "0x6000624")]
		[Address(RVA = "0x26FDB70", Offset = "0x26FC170", VA = "0x1826FDB70", Slot = "52")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005E8")]
	[Address(RVA = "0x26FD620", Offset = "0x26FBC20", VA = "0x1826FD620")]
	internal XmlValidatingReaderImpl(XmlReader reader, ValidationEventHandler settingsEventHandler, bool processIdentityConstraints)
	{
	}

	[Token(Token = "0x60005FB")]
	[Address(RVA = "0x24447C0", Offset = "0x2442DC0", VA = "0x1824447C0", Slot = "22")]
	public override string GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x60005FC")]
	[Address(RVA = "0x25472F0", Offset = "0x25458F0", VA = "0x1825472F0", Slot = "23")]
	public override string GetAttribute(string localName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x60005FD")]
	[Address(RVA = "0x2547320", Offset = "0x2545920", VA = "0x182547320", Slot = "24")]
	public override string GetAttribute(int i)
	{
		return null;
	}

	[Token(Token = "0x60005FE")]
	[Address(RVA = "0x26FC9F0", Offset = "0x26FAFF0", VA = "0x1826FC9F0", Slot = "25")]
	public override bool MoveToAttribute(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60005FF")]
	[Address(RVA = "0x26FC9B0", Offset = "0x26FAFB0", VA = "0x1826FC9B0", Slot = "26")]
	public override void MoveToAttribute(int i)
	{
	}

	[Token(Token = "0x6000600")]
	[Address(RVA = "0x26FCA90", Offset = "0x26FB090", VA = "0x1826FCA90", Slot = "27")]
	public override bool MoveToFirstAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6000601")]
	[Address(RVA = "0x26FCAE0", Offset = "0x26FB0E0", VA = "0x1826FCAE0", Slot = "28")]
	public override bool MoveToNextAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6000602")]
	[Address(RVA = "0x26FCA40", Offset = "0x26FB040", VA = "0x1826FCA40", Slot = "29")]
	public override bool MoveToElement()
	{
		return default(bool);
	}

	[Token(Token = "0x6000603")]
	[Address(RVA = "0x26FCF20", Offset = "0x26FB520", VA = "0x1826FCF20", Slot = "31")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x6000604")]
	[Address(RVA = "0x26FC660", Offset = "0x26FAC60", VA = "0x1826FC660", Slot = "33")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000605")]
	[Address(RVA = "0x26FC860", Offset = "0x26FAE60", VA = "0x1826FC860", Slot = "37")]
	public override string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000606")]
	[Address(RVA = "0x26FCE00", Offset = "0x26FB400", VA = "0x1826FCE00", Slot = "30")]
	public override bool ReadAttributeValue()
	{
		return default(bool);
	}

	[Token(Token = "0x6000608")]
	[Address(RVA = "0x26FD2B0", Offset = "0x26FB8B0", VA = "0x1826FD2B0", Slot = "39")]
	public override void ResolveEntity()
	{
	}

	[Token(Token = "0x6000609")]
	[Address(RVA = "0x26FC8F0", Offset = "0x26FAEF0", VA = "0x1826FC8F0")]
	internal void MoveOffEntityReference()
	{
	}

	[Token(Token = "0x600060A")]
	[Address(RVA = "0x26FCE60", Offset = "0x26FB460", VA = "0x1826FCE60", Slot = "42")]
	public override string ReadString()
	{
		return null;
	}

	[Token(Token = "0x600060B")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "53")]
	public bool HasLineInfo()
	{
		return default(bool);
	}

	[Token(Token = "0x600060E")]
	[Address(RVA = "0x26FC6A0", Offset = "0x26FACA0", VA = "0x1826FC6A0", Slot = "56")]
	private IDictionary<string, string> System_002EXml_002EIXmlNamespaceResolver_002EGetNamespacesInScope(XmlNamespaceScope scope)
	{
		return null;
	}

	[Token(Token = "0x600060F")]
	[Address(RVA = "0x24B4C60", Offset = "0x24B3260", VA = "0x1824B4C60", Slot = "57")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000610")]
	[Address(RVA = "0x26FC890", Offset = "0x26FAE90", VA = "0x1826FC890", Slot = "58")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupPrefix(string namespaceName)
	{
		return null;
	}

	[Token(Token = "0x6000611")]
	[Address(RVA = "0x26FC6A0", Offset = "0x26FACA0", VA = "0x1826FC6A0")]
	internal IDictionary<string, string> GetNamespacesInScope(XmlNamespaceScope scope)
	{
		return null;
	}

	[Token(Token = "0x6000612")]
	[Address(RVA = "0x26FC890", Offset = "0x26FAE90", VA = "0x1826FC890")]
	internal string LookupPrefix(string namespaceName)
	{
		return null;
	}

	[Token(Token = "0x6000616")]
	[Address(RVA = "0x26FCB30", Offset = "0x26FB130", VA = "0x1826FCB30")]
	private void ParseDtdFromParserContext()
	{
	}

	[Token(Token = "0x6000617")]
	[Address(RVA = "0x26FD5A0", Offset = "0x26FBBA0", VA = "0x1826FD5A0")]
	private void ValidateDtd()
	{
	}

	[Token(Token = "0x6000618")]
	[Address(RVA = "0x26FD220", Offset = "0x26FB820", VA = "0x1826FD220")]
	private void ResolveEntityInternally()
	{
	}

	[Token(Token = "0x6000619")]
	[Address(RVA = "0x26FD2F0", Offset = "0x26FB8F0", VA = "0x1826FD2F0")]
	private void SetupValidation(ValidationType valType)
	{
	}

	[Token(Token = "0x600061A")]
	[Address(RVA = "0x26FC760", Offset = "0x26FAD60", VA = "0x1826FC760")]
	private XmlResolver GetResolver()
	{
		return null;
	}

	[Token(Token = "0x600061B")]
	[Address(RVA = "0x26FCCF0", Offset = "0x26FB2F0", VA = "0x1826FCCF0")]
	private void ProcessCoreReaderEvent()
	{
	}

	[Token(Token = "0x6000623")]
	[Address(RVA = "0x26FC640", Offset = "0x26FAC40", VA = "0x1826FC640")]
	internal bool AddDefaultAttribute(SchemaAttDef attdef)
	{
		return default(bool);
	}

	[Token(Token = "0x6000625")]
	[Address(RVA = "0x26FD470", Offset = "0x26FBA70", VA = "0x1826FD470")]
	internal void ValidateDefaultAttributeOnUse(IDtdDefaultAttributeInfo defaultAttribute, XmlTextReaderImpl coreReader)
	{
	}
}
