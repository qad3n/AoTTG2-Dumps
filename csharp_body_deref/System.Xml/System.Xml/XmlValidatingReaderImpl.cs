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
			[Address(RVA = "0x47B1670", Offset = "0x47B1670", VA = "0x47B1670", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000626")]
		[Address(RVA = "0x47B0030", Offset = "0x47B0030", VA = "0x47B0030")]
		internal ValidationEventHandling(XmlValidatingReaderImpl reader)
		{
		}

		[Token(Token = "0x6000628")]
		[Address(RVA = "0x47B1680", Offset = "0x47B1680", VA = "0x47B1680", Slot = "5")]
		private void System_002EXml_002EIValidationEventHandling_002ESendEvent(Exception exception, XmlSeverityType severity)
		{
		}

		[Token(Token = "0x6000629")]
		[Address(RVA = "0x47B0060", Offset = "0x47B0060", VA = "0x47B0060")]
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
		[Address(RVA = "0x47B0250", Offset = "0x47B0250", VA = "0x47B0250", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000145")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x60005EA")]
		[Address(RVA = "0x47B0320", Offset = "0x47B0320", VA = "0x47B0320", Slot = "6")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000146")]
	public override string Name
	{
		[Token(Token = "0x60005EB")]
		[Address(RVA = "0x47B0350", Offset = "0x47B0350", VA = "0x47B0350", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000147")]
	public override string LocalName
	{
		[Token(Token = "0x60005EC")]
		[Address(RVA = "0x47B0380", Offset = "0x47B0380", VA = "0x47B0380", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000148")]
	public override string NamespaceURI
	{
		[Token(Token = "0x60005ED")]
		[Address(RVA = "0x47B03B0", Offset = "0x47B03B0", VA = "0x47B03B0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000149")]
	public override string Prefix
	{
		[Token(Token = "0x60005EE")]
		[Address(RVA = "0x47B03E0", Offset = "0x47B03E0", VA = "0x47B03E0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700014A")]
	public override string Value
	{
		[Token(Token = "0x60005EF")]
		[Address(RVA = "0x47B0410", Offset = "0x47B0410", VA = "0x47B0410", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700014B")]
	public override int Depth
	{
		[Token(Token = "0x60005F0")]
		[Address(RVA = "0x47B0440", Offset = "0x47B0440", VA = "0x47B0440", Slot = "12")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700014C")]
	public override string BaseURI
	{
		[Token(Token = "0x60005F1")]
		[Address(RVA = "0x47B0470", Offset = "0x47B0470", VA = "0x47B0470", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700014D")]
	public override bool IsEmptyElement
	{
		[Token(Token = "0x60005F2")]
		[Address(RVA = "0x47B04A0", Offset = "0x47B04A0", VA = "0x47B04A0", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700014E")]
	public override bool IsDefault
	{
		[Token(Token = "0x60005F3")]
		[Address(RVA = "0x47B04D0", Offset = "0x47B04D0", VA = "0x47B04D0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700014F")]
	public override char QuoteChar
	{
		[Token(Token = "0x60005F4")]
		[Address(RVA = "0x47B0500", Offset = "0x47B0500", VA = "0x47B0500", Slot = "16")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x17000150")]
	public override XmlSpace XmlSpace
	{
		[Token(Token = "0x60005F5")]
		[Address(RVA = "0x47B0530", Offset = "0x47B0530", VA = "0x47B0530", Slot = "17")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x17000151")]
	public override string XmlLang
	{
		[Token(Token = "0x60005F6")]
		[Address(RVA = "0x47B0560", Offset = "0x47B0560", VA = "0x47B0560", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000152")]
	public override ReadState ReadState
	{
		[Token(Token = "0x60005F7")]
		[Address(RVA = "0x47B0590", Offset = "0x47B0590", VA = "0x47B0590", Slot = "34")]
		get
		{
			return default(ReadState);
		}
	}

	[Token(Token = "0x17000153")]
	public override bool EOF
	{
		[Token(Token = "0x60005F8")]
		[Address(RVA = "0x47B05C0", Offset = "0x47B05C0", VA = "0x47B05C0", Slot = "32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000154")]
	public override XmlNameTable NameTable
	{
		[Token(Token = "0x60005F9")]
		[Address(RVA = "0x47B05F0", Offset = "0x47B05F0", VA = "0x47B05F0", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000155")]
	public override int AttributeCount
	{
		[Token(Token = "0x60005FA")]
		[Address(RVA = "0x47B0620", Offset = "0x47B0620", VA = "0x47B0620", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000156")]
	public override bool CanResolveEntity
	{
		[Token(Token = "0x6000607")]
		[Address(RVA = "0x47B0DB0", Offset = "0x47B0DB0", VA = "0x47B0DB0", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000157")]
	public int LineNumber
	{
		[Token(Token = "0x600060C")]
		[Address(RVA = "0x47B0ED0", Offset = "0x47B0ED0", VA = "0x47B0ED0", Slot = "54")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000158")]
	public int LinePosition
	{
		[Token(Token = "0x600060D")]
		[Address(RVA = "0x47B0FC0", Offset = "0x47B0FC0", VA = "0x47B0FC0", Slot = "55")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000159")]
	internal ValidationType ValidationType
	{
		[Token(Token = "0x6000613")]
		[Address(RVA = "0x47B1390", Offset = "0x47B1390", VA = "0x47B1390")]
		get
		{
			return default(ValidationType);
		}
	}

	[Token(Token = "0x1700015A")]
	internal XmlSchemaCollection Schemas
	{
		[Token(Token = "0x6000614")]
		[Address(RVA = "0x47B13A0", Offset = "0x47B13A0", VA = "0x47B13A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015B")]
	internal bool Namespaces
	{
		[Token(Token = "0x6000615")]
		[Address(RVA = "0x47AFAA0", Offset = "0x47AFAA0", VA = "0x47AFAA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700015C")]
	internal BaseValidator Validator
	{
		[Token(Token = "0x600061C")]
		[Address(RVA = "0x47B1420", Offset = "0x47B1420", VA = "0x47B1420")]
		get
		{
			return null;
		}
		[Token(Token = "0x600061D")]
		[Address(RVA = "0x47B1430", Offset = "0x47B1430", VA = "0x47B1430")]
		set
		{
		}
	}

	[Token(Token = "0x1700015D")]
	internal override XmlNamespaceManager NamespaceManager
	{
		[Token(Token = "0x600061E")]
		[Address(RVA = "0x47B1440", Offset = "0x47B1440", VA = "0x47B1440", Slot = "51")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015E")]
	internal bool StandAlone
	{
		[Token(Token = "0x600061F")]
		[Address(RVA = "0x47B1470", Offset = "0x47B1470", VA = "0x47B1470")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700015F")]
	internal object SchemaTypeObject
	{
		[Token(Token = "0x6000620")]
		[Address(RVA = "0x47B1490", Offset = "0x47B1490", VA = "0x47B1490")]
		set
		{
		}
	}

	[Token(Token = "0x17000160")]
	internal object TypedValueObject
	{
		[Token(Token = "0x6000621")]
		[Address(RVA = "0x47B14B0", Offset = "0x47B14B0", VA = "0x47B14B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000622")]
		[Address(RVA = "0x47B14D0", Offset = "0x47B14D0", VA = "0x47B14D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000161")]
	internal override IDtdInfo DtdInfo
	{
		[Token(Token = "0x6000624")]
		[Address(RVA = "0x47B1510", Offset = "0x47B1510", VA = "0x47B1510", Slot = "52")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005E8")]
	[Address(RVA = "0x47AFAC0", Offset = "0x47AFAC0", VA = "0x47AFAC0")]
	internal XmlValidatingReaderImpl(XmlReader reader, ValidationEventHandler settingsEventHandler, bool processIdentityConstraints)
	{
	}

	[Token(Token = "0x60005FB")]
	[Address(RVA = "0x47B0650", Offset = "0x47B0650", VA = "0x47B0650", Slot = "22")]
	public override string GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x60005FC")]
	[Address(RVA = "0x47B0680", Offset = "0x47B0680", VA = "0x47B0680", Slot = "23")]
	public override string GetAttribute(string localName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x60005FD")]
	[Address(RVA = "0x47B06B0", Offset = "0x47B06B0", VA = "0x47B06B0", Slot = "24")]
	public override string GetAttribute(int i)
	{
		return null;
	}

	[Token(Token = "0x60005FE")]
	[Address(RVA = "0x47B06E0", Offset = "0x47B06E0", VA = "0x47B06E0", Slot = "25")]
	public override bool MoveToAttribute(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60005FF")]
	[Address(RVA = "0x47B0720", Offset = "0x47B0720", VA = "0x47B0720", Slot = "26")]
	public override void MoveToAttribute(int i)
	{
	}

	[Token(Token = "0x6000600")]
	[Address(RVA = "0x47B0750", Offset = "0x47B0750", VA = "0x47B0750", Slot = "27")]
	public override bool MoveToFirstAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6000601")]
	[Address(RVA = "0x47B0790", Offset = "0x47B0790", VA = "0x47B0790", Slot = "28")]
	public override bool MoveToNextAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6000602")]
	[Address(RVA = "0x47B07D0", Offset = "0x47B07D0", VA = "0x47B07D0", Slot = "29")]
	public override bool MoveToElement()
	{
		return default(bool);
	}

	[Token(Token = "0x6000603")]
	[Address(RVA = "0x47B0810", Offset = "0x47B0810", VA = "0x47B0810", Slot = "31")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x6000604")]
	[Address(RVA = "0x47B0CF0", Offset = "0x47B0CF0", VA = "0x47B0CF0", Slot = "33")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000605")]
	[Address(RVA = "0x47B0D20", Offset = "0x47B0D20", VA = "0x47B0D20", Slot = "37")]
	public override string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000606")]
	[Address(RVA = "0x47B0D50", Offset = "0x47B0D50", VA = "0x47B0D50", Slot = "30")]
	public override bool ReadAttributeValue()
	{
		return default(bool);
	}

	[Token(Token = "0x6000608")]
	[Address(RVA = "0x47B0DC0", Offset = "0x47B0DC0", VA = "0x47B0DC0", Slot = "39")]
	public override void ResolveEntity()
	{
	}

	[Token(Token = "0x6000609")]
	[Address(RVA = "0x47B0DF0", Offset = "0x47B0DF0", VA = "0x47B0DF0")]
	internal void MoveOffEntityReference()
	{
	}

	[Token(Token = "0x600060A")]
	[Address(RVA = "0x47B0EA0", Offset = "0x47B0EA0", VA = "0x47B0EA0", Slot = "42")]
	public override string ReadString()
	{
		return null;
	}

	[Token(Token = "0x600060B")]
	[Address(RVA = "0x47B0EC0", Offset = "0x47B0EC0", VA = "0x47B0EC0", Slot = "53")]
	public bool HasLineInfo()
	{
		return default(bool);
	}

	[Token(Token = "0x600060E")]
	[Address(RVA = "0x47B10B0", Offset = "0x47B10B0", VA = "0x47B10B0", Slot = "56")]
	private IDictionary<string, string> System_002EXml_002EIXmlNamespaceResolver_002EGetNamespacesInScope(XmlNamespaceScope scope)
	{
		return null;
	}

	[Token(Token = "0x600060F")]
	[Address(RVA = "0x47B1210", Offset = "0x47B1210", VA = "0x47B1210", Slot = "57")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000610")]
	[Address(RVA = "0x47B1230", Offset = "0x47B1230", VA = "0x47B1230", Slot = "58")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupPrefix(string namespaceName)
	{
		return null;
	}

	[Token(Token = "0x6000611")]
	[Address(RVA = "0x47B1160", Offset = "0x47B1160", VA = "0x47B1160")]
	internal IDictionary<string, string> GetNamespacesInScope(XmlNamespaceScope scope)
	{
		return null;
	}

	[Token(Token = "0x6000612")]
	[Address(RVA = "0x47B12E0", Offset = "0x47B12E0", VA = "0x47B12E0")]
	internal string LookupPrefix(string namespaceName)
	{
		return null;
	}

	[Token(Token = "0x6000616")]
	[Address(RVA = "0x47B0A80", Offset = "0x47B0A80", VA = "0x47B0A80")]
	private void ParseDtdFromParserContext()
	{
	}

	[Token(Token = "0x6000617")]
	[Address(RVA = "0x47B13B0", Offset = "0x47B13B0", VA = "0x47B13B0")]
	private void ValidateDtd()
	{
	}

	[Token(Token = "0x6000618")]
	[Address(RVA = "0x47B0C60", Offset = "0x47B0C60", VA = "0x47B0C60")]
	private void ResolveEntityInternally()
	{
	}

	[Token(Token = "0x6000619")]
	[Address(RVA = "0x47B00E0", Offset = "0x47B00E0", VA = "0x47B00E0")]
	private void SetupValidation(ValidationType valType)
	{
	}

	[Token(Token = "0x600061A")]
	[Address(RVA = "0x47AFF40", Offset = "0x47AFF40", VA = "0x47AFF40")]
	private XmlResolver GetResolver()
	{
		return null;
	}

	[Token(Token = "0x600061B")]
	[Address(RVA = "0x47B0900", Offset = "0x47B0900", VA = "0x47B0900")]
	private void ProcessCoreReaderEvent()
	{
	}

	[Token(Token = "0x6000623")]
	[Address(RVA = "0x47B14F0", Offset = "0x47B14F0", VA = "0x47B14F0")]
	internal bool AddDefaultAttribute(SchemaAttDef attdef)
	{
		return default(bool);
	}

	[Token(Token = "0x6000625")]
	[Address(RVA = "0x47B1540", Offset = "0x47B1540", VA = "0x47B1540")]
	internal void ValidateDefaultAttributeOnUse(IDtdDefaultAttributeInfo defaultAttribute, XmlTextReaderImpl coreReader)
	{
	}
}
