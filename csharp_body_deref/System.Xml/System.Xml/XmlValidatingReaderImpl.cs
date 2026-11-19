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
			[Address(RVA = "0x60B6090", Offset = "0x60B5090", VA = "0x60B6090", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000626")]
		[Address(RVA = "0x60B4AB0", Offset = "0x60B3AB0", VA = "0x60B4AB0")]
		internal ValidationEventHandling(XmlValidatingReaderImpl reader)
		{
		}

		[Token(Token = "0x6000628")]
		[Address(RVA = "0x60B60A0", Offset = "0x60B50A0", VA = "0x60B60A0", Slot = "5")]
		private void System_002EXml_002EIValidationEventHandling_002ESendEvent(Exception exception, XmlSeverityType severity)
		{
		}

		[Token(Token = "0x6000629")]
		[Address(RVA = "0x60B4AE0", Offset = "0x60B3AE0", VA = "0x60B4AE0")]
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
		[Address(RVA = "0x60B4CF0", Offset = "0x60B3CF0", VA = "0x60B4CF0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000145")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x60005EA")]
		[Address(RVA = "0x60B4DC0", Offset = "0x60B3DC0", VA = "0x60B4DC0", Slot = "6")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000146")]
	public override string Name
	{
		[Token(Token = "0x60005EB")]
		[Address(RVA = "0x60B4DF0", Offset = "0x60B3DF0", VA = "0x60B4DF0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000147")]
	public override string LocalName
	{
		[Token(Token = "0x60005EC")]
		[Address(RVA = "0x60B4E20", Offset = "0x60B3E20", VA = "0x60B4E20", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000148")]
	public override string NamespaceURI
	{
		[Token(Token = "0x60005ED")]
		[Address(RVA = "0x60B4E50", Offset = "0x60B3E50", VA = "0x60B4E50", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000149")]
	public override string Prefix
	{
		[Token(Token = "0x60005EE")]
		[Address(RVA = "0x60B4E80", Offset = "0x60B3E80", VA = "0x60B4E80", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700014A")]
	public override string Value
	{
		[Token(Token = "0x60005EF")]
		[Address(RVA = "0x60B4EB0", Offset = "0x60B3EB0", VA = "0x60B4EB0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700014B")]
	public override int Depth
	{
		[Token(Token = "0x60005F0")]
		[Address(RVA = "0x60B4EE0", Offset = "0x60B3EE0", VA = "0x60B4EE0", Slot = "12")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700014C")]
	public override string BaseURI
	{
		[Token(Token = "0x60005F1")]
		[Address(RVA = "0x60B4F10", Offset = "0x60B3F10", VA = "0x60B4F10", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700014D")]
	public override bool IsEmptyElement
	{
		[Token(Token = "0x60005F2")]
		[Address(RVA = "0x60B4F40", Offset = "0x60B3F40", VA = "0x60B4F40", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700014E")]
	public override bool IsDefault
	{
		[Token(Token = "0x60005F3")]
		[Address(RVA = "0x60B4F70", Offset = "0x60B3F70", VA = "0x60B4F70", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700014F")]
	public override char QuoteChar
	{
		[Token(Token = "0x60005F4")]
		[Address(RVA = "0x60B4FA0", Offset = "0x60B3FA0", VA = "0x60B4FA0", Slot = "16")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x17000150")]
	public override XmlSpace XmlSpace
	{
		[Token(Token = "0x60005F5")]
		[Address(RVA = "0x60B4FD0", Offset = "0x60B3FD0", VA = "0x60B4FD0", Slot = "17")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x17000151")]
	public override string XmlLang
	{
		[Token(Token = "0x60005F6")]
		[Address(RVA = "0x60B5000", Offset = "0x60B4000", VA = "0x60B5000", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000152")]
	public override ReadState ReadState
	{
		[Token(Token = "0x60005F7")]
		[Address(RVA = "0x60B5030", Offset = "0x60B4030", VA = "0x60B5030", Slot = "34")]
		get
		{
			return default(ReadState);
		}
	}

	[Token(Token = "0x17000153")]
	public override bool EOF
	{
		[Token(Token = "0x60005F8")]
		[Address(RVA = "0x60B5060", Offset = "0x60B4060", VA = "0x60B5060", Slot = "32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000154")]
	public override XmlNameTable NameTable
	{
		[Token(Token = "0x60005F9")]
		[Address(RVA = "0x60B5090", Offset = "0x60B4090", VA = "0x60B5090", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000155")]
	public override int AttributeCount
	{
		[Token(Token = "0x60005FA")]
		[Address(RVA = "0x60B50C0", Offset = "0x60B40C0", VA = "0x60B50C0", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000156")]
	public override bool CanResolveEntity
	{
		[Token(Token = "0x6000607")]
		[Address(RVA = "0x60B57E0", Offset = "0x60B47E0", VA = "0x60B57E0", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000157")]
	public int LineNumber
	{
		[Token(Token = "0x600060C")]
		[Address(RVA = "0x60B5900", Offset = "0x60B4900", VA = "0x60B5900", Slot = "54")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000158")]
	public int LinePosition
	{
		[Token(Token = "0x600060D")]
		[Address(RVA = "0x60B59F0", Offset = "0x60B49F0", VA = "0x60B59F0", Slot = "55")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000159")]
	internal ValidationType ValidationType
	{
		[Token(Token = "0x6000613")]
		[Address(RVA = "0x60B5DC0", Offset = "0x60B4DC0", VA = "0x60B5DC0")]
		get
		{
			return default(ValidationType);
		}
	}

	[Token(Token = "0x1700015A")]
	internal XmlSchemaCollection Schemas
	{
		[Token(Token = "0x6000614")]
		[Address(RVA = "0x60B5DD0", Offset = "0x60B4DD0", VA = "0x60B5DD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015B")]
	internal bool Namespaces
	{
		[Token(Token = "0x6000615")]
		[Address(RVA = "0x60B4520", Offset = "0x60B3520", VA = "0x60B4520")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700015C")]
	internal BaseValidator Validator
	{
		[Token(Token = "0x600061C")]
		[Address(RVA = "0x60B5E50", Offset = "0x60B4E50", VA = "0x60B5E50")]
		get
		{
			return null;
		}
		[Token(Token = "0x600061D")]
		[Address(RVA = "0x60B5E60", Offset = "0x60B4E60", VA = "0x60B5E60")]
		set
		{
		}
	}

	[Token(Token = "0x1700015D")]
	internal override XmlNamespaceManager NamespaceManager
	{
		[Token(Token = "0x600061E")]
		[Address(RVA = "0x60B5E70", Offset = "0x60B4E70", VA = "0x60B5E70", Slot = "51")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015E")]
	internal bool StandAlone
	{
		[Token(Token = "0x600061F")]
		[Address(RVA = "0x60B5EA0", Offset = "0x60B4EA0", VA = "0x60B5EA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700015F")]
	internal object SchemaTypeObject
	{
		[Token(Token = "0x6000620")]
		[Address(RVA = "0x60B5EC0", Offset = "0x60B4EC0", VA = "0x60B5EC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000160")]
	internal object TypedValueObject
	{
		[Token(Token = "0x6000621")]
		[Address(RVA = "0x60B5EE0", Offset = "0x60B4EE0", VA = "0x60B5EE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000622")]
		[Address(RVA = "0x60B5F00", Offset = "0x60B4F00", VA = "0x60B5F00")]
		set
		{
		}
	}

	[Token(Token = "0x17000161")]
	internal override IDtdInfo DtdInfo
	{
		[Token(Token = "0x6000624")]
		[Address(RVA = "0x60B5F40", Offset = "0x60B4F40", VA = "0x60B5F40", Slot = "52")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005E8")]
	[Address(RVA = "0x60B4540", Offset = "0x60B3540", VA = "0x60B4540")]
	internal XmlValidatingReaderImpl(XmlReader reader, ValidationEventHandler settingsEventHandler, bool processIdentityConstraints)
	{
	}

	[Token(Token = "0x60005FB")]
	[Address(RVA = "0x60B50F0", Offset = "0x60B40F0", VA = "0x60B50F0", Slot = "22")]
	public override string GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x60005FC")]
	[Address(RVA = "0x60B5120", Offset = "0x60B4120", VA = "0x60B5120", Slot = "23")]
	public override string GetAttribute(string localName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x60005FD")]
	[Address(RVA = "0x60B5150", Offset = "0x60B4150", VA = "0x60B5150", Slot = "24")]
	public override string GetAttribute(int i)
	{
		return null;
	}

	[Token(Token = "0x60005FE")]
	[Address(RVA = "0x60B5180", Offset = "0x60B4180", VA = "0x60B5180", Slot = "25")]
	public override bool MoveToAttribute(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60005FF")]
	[Address(RVA = "0x60B51B0", Offset = "0x60B41B0", VA = "0x60B51B0", Slot = "26")]
	public override void MoveToAttribute(int i)
	{
	}

	[Token(Token = "0x6000600")]
	[Address(RVA = "0x60B51E0", Offset = "0x60B41E0", VA = "0x60B51E0", Slot = "27")]
	public override bool MoveToFirstAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6000601")]
	[Address(RVA = "0x60B5210", Offset = "0x60B4210", VA = "0x60B5210", Slot = "28")]
	public override bool MoveToNextAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6000602")]
	[Address(RVA = "0x60B5240", Offset = "0x60B4240", VA = "0x60B5240", Slot = "29")]
	public override bool MoveToElement()
	{
		return default(bool);
	}

	[Token(Token = "0x6000603")]
	[Address(RVA = "0x60B5270", Offset = "0x60B4270", VA = "0x60B5270", Slot = "31")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x6000604")]
	[Address(RVA = "0x60B5730", Offset = "0x60B4730", VA = "0x60B5730", Slot = "33")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000605")]
	[Address(RVA = "0x60B5760", Offset = "0x60B4760", VA = "0x60B5760", Slot = "37")]
	public override string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000606")]
	[Address(RVA = "0x60B5790", Offset = "0x60B4790", VA = "0x60B5790", Slot = "30")]
	public override bool ReadAttributeValue()
	{
		return default(bool);
	}

	[Token(Token = "0x6000608")]
	[Address(RVA = "0x60B57F0", Offset = "0x60B47F0", VA = "0x60B57F0", Slot = "39")]
	public override void ResolveEntity()
	{
	}

	[Token(Token = "0x6000609")]
	[Address(RVA = "0x60B5820", Offset = "0x60B4820", VA = "0x60B5820")]
	internal void MoveOffEntityReference()
	{
	}

	[Token(Token = "0x600060A")]
	[Address(RVA = "0x60B58D0", Offset = "0x60B48D0", VA = "0x60B58D0", Slot = "42")]
	public override string ReadString()
	{
		return null;
	}

	[Token(Token = "0x600060B")]
	[Address(RVA = "0x60B58F0", Offset = "0x60B48F0", VA = "0x60B58F0", Slot = "53")]
	public bool HasLineInfo()
	{
		return default(bool);
	}

	[Token(Token = "0x600060E")]
	[Address(RVA = "0x60B5AE0", Offset = "0x60B4AE0", VA = "0x60B5AE0", Slot = "56")]
	private IDictionary<string, string> System_002EXml_002EIXmlNamespaceResolver_002EGetNamespacesInScope(XmlNamespaceScope scope)
	{
		return null;
	}

	[Token(Token = "0x600060F")]
	[Address(RVA = "0x60B5C40", Offset = "0x60B4C40", VA = "0x60B5C40", Slot = "57")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000610")]
	[Address(RVA = "0x60B5C60", Offset = "0x60B4C60", VA = "0x60B5C60", Slot = "58")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupPrefix(string namespaceName)
	{
		return null;
	}

	[Token(Token = "0x6000611")]
	[Address(RVA = "0x60B5B90", Offset = "0x60B4B90", VA = "0x60B5B90")]
	internal IDictionary<string, string> GetNamespacesInScope(XmlNamespaceScope scope)
	{
		return null;
	}

	[Token(Token = "0x6000612")]
	[Address(RVA = "0x60B5D10", Offset = "0x60B4D10", VA = "0x60B5D10")]
	internal string LookupPrefix(string namespaceName)
	{
		return null;
	}

	[Token(Token = "0x6000616")]
	[Address(RVA = "0x60B54B0", Offset = "0x60B44B0", VA = "0x60B54B0")]
	private void ParseDtdFromParserContext()
	{
	}

	[Token(Token = "0x6000617")]
	[Address(RVA = "0x60B5DE0", Offset = "0x60B4DE0", VA = "0x60B5DE0")]
	private void ValidateDtd()
	{
	}

	[Token(Token = "0x6000618")]
	[Address(RVA = "0x60B56A0", Offset = "0x60B46A0", VA = "0x60B56A0")]
	private void ResolveEntityInternally()
	{
	}

	[Token(Token = "0x6000619")]
	[Address(RVA = "0x60B4B60", Offset = "0x60B3B60", VA = "0x60B4B60")]
	private void SetupValidation(ValidationType valType)
	{
	}

	[Token(Token = "0x600061A")]
	[Address(RVA = "0x60B49C0", Offset = "0x60B39C0", VA = "0x60B49C0")]
	private XmlResolver GetResolver()
	{
		return null;
	}

	[Token(Token = "0x600061B")]
	[Address(RVA = "0x60B5340", Offset = "0x60B4340", VA = "0x60B5340")]
	private void ProcessCoreReaderEvent()
	{
	}

	[Token(Token = "0x6000623")]
	[Address(RVA = "0x60B5F20", Offset = "0x60B4F20", VA = "0x60B5F20")]
	internal bool AddDefaultAttribute(SchemaAttDef attdef)
	{
		return default(bool);
	}

	[Token(Token = "0x6000625")]
	[Address(RVA = "0x60B5F70", Offset = "0x60B4F70", VA = "0x60B5F70")]
	internal void ValidateDefaultAttributeOnUse(IDtdDefaultAttributeInfo defaultAttribute, XmlTextReaderImpl coreReader)
	{
	}
}
