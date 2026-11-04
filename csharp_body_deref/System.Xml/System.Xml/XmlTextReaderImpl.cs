// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlTextReaderImpl
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Schema;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000056")]
internal class XmlTextReaderImpl : XmlReader, IXmlLineInfo, IXmlNamespaceResolver
{
	[Token(Token = "0x2000057")]
	private enum ParsingFunction
	{
		[Token(Token = "0x4000224")]
		ElementContent,
		[Token(Token = "0x4000225")]
		NoData,
		[Token(Token = "0x4000226")]
		OpenUrl,
		[Token(Token = "0x4000227")]
		SwitchToInteractive,
		[Token(Token = "0x4000228")]
		SwitchToInteractiveXmlDecl,
		[Token(Token = "0x4000229")]
		DocumentContent,
		[Token(Token = "0x400022A")]
		MoveToElementContent,
		[Token(Token = "0x400022B")]
		PopElementContext,
		[Token(Token = "0x400022C")]
		PopEmptyElementContext,
		[Token(Token = "0x400022D")]
		ResetAttributesRootLevel,
		[Token(Token = "0x400022E")]
		Error,
		[Token(Token = "0x400022F")]
		Eof,
		[Token(Token = "0x4000230")]
		ReaderClosed,
		[Token(Token = "0x4000231")]
		EntityReference,
		[Token(Token = "0x4000232")]
		InIncrementalRead,
		[Token(Token = "0x4000233")]
		FragmentAttribute,
		[Token(Token = "0x4000234")]
		ReportEndEntity,
		[Token(Token = "0x4000235")]
		AfterResolveEntityInContent,
		[Token(Token = "0x4000236")]
		AfterResolveEmptyEntityInContent,
		[Token(Token = "0x4000237")]
		XmlDeclarationFragment,
		[Token(Token = "0x4000238")]
		GoToEof,
		[Token(Token = "0x4000239")]
		PartialTextValue,
		[Token(Token = "0x400023A")]
		InReadAttributeValue,
		[Token(Token = "0x400023B")]
		InReadValueChunk,
		[Token(Token = "0x400023C")]
		InReadContentAsBinary,
		[Token(Token = "0x400023D")]
		InReadElementContentAsBinary
	}

	[Token(Token = "0x2000058")]
	private enum ParsingMode
	{
		[Token(Token = "0x400023F")]
		Full,
		[Token(Token = "0x4000240")]
		SkipNode,
		[Token(Token = "0x4000241")]
		SkipContent
	}

	[Token(Token = "0x2000059")]
	private enum EntityType
	{
		[Token(Token = "0x4000243")]
		CharacterDec,
		[Token(Token = "0x4000244")]
		CharacterHex,
		[Token(Token = "0x4000245")]
		CharacterNamed,
		[Token(Token = "0x4000246")]
		Expanded,
		[Token(Token = "0x4000247")]
		Skipped,
		[Token(Token = "0x4000248")]
		FakeExpanded,
		[Token(Token = "0x4000249")]
		Unexpanded,
		[Token(Token = "0x400024A")]
		ExpandedInAttribute
	}

	[Token(Token = "0x200005A")]
	private enum EntityExpandType
	{
		[Token(Token = "0x400024C")]
		All,
		[Token(Token = "0x400024D")]
		OnlyGeneral,
		[Token(Token = "0x400024E")]
		OnlyCharacter
	}

	[Token(Token = "0x200005B")]
	private enum IncrementalReadState
	{
		[Token(Token = "0x4000250")]
		Text,
		[Token(Token = "0x4000251")]
		StartTag,
		[Token(Token = "0x4000252")]
		PI,
		[Token(Token = "0x4000253")]
		CDATA,
		[Token(Token = "0x4000254")]
		Comment,
		[Token(Token = "0x4000255")]
		Attributes,
		[Token(Token = "0x4000256")]
		AttributeValue,
		[Token(Token = "0x4000257")]
		ReadData,
		[Token(Token = "0x4000258")]
		EndElement,
		[Token(Token = "0x4000259")]
		End,
		[Token(Token = "0x400025A")]
		ReadValueChunk_OnCachedValue,
		[Token(Token = "0x400025B")]
		ReadValueChunk_OnPartialValue,
		[Token(Token = "0x400025C")]
		ReadContentAsBinary_OnCachedValue,
		[Token(Token = "0x400025D")]
		ReadContentAsBinary_OnPartialValue,
		[Token(Token = "0x400025E")]
		ReadContentAsBinary_End
	}

	[Token(Token = "0x200005C")]
	private class LaterInitParam
	{
		[Token(Token = "0x400025F")]
		[FieldOffset(Offset = "0x10")]
		public bool useAsync;

		[Token(Token = "0x4000260")]
		[FieldOffset(Offset = "0x18")]
		public Stream inputStream;

		[Token(Token = "0x4000261")]
		[FieldOffset(Offset = "0x20")]
		public byte[] inputBytes;

		[Token(Token = "0x4000262")]
		[FieldOffset(Offset = "0x28")]
		public int inputByteCount;

		[Token(Token = "0x4000263")]
		[FieldOffset(Offset = "0x30")]
		public Uri inputbaseUri;

		[Token(Token = "0x4000264")]
		[FieldOffset(Offset = "0x38")]
		public string inputUriStr;

		[Token(Token = "0x4000265")]
		[FieldOffset(Offset = "0x40")]
		public XmlResolver inputUriResolver;

		[Token(Token = "0x4000266")]
		[FieldOffset(Offset = "0x48")]
		public XmlParserContext inputContext;

		[Token(Token = "0x4000267")]
		[FieldOffset(Offset = "0x50")]
		public TextReader inputTextReader;

		[Token(Token = "0x4000268")]
		[FieldOffset(Offset = "0x58")]
		public InitInputType initType;

		[Token(Token = "0x60004F8")]
		[Address(RVA = "0x26E02F0", Offset = "0x26DE8F0", VA = "0x1826E02F0")]
		public LaterInitParam()
		{
		}
	}

	[Token(Token = "0x200005D")]
	private enum InitInputType
	{
		[Token(Token = "0x400026A")]
		UriString,
		[Token(Token = "0x400026B")]
		Stream,
		[Token(Token = "0x400026C")]
		TextReader,
		[Token(Token = "0x400026D")]
		Invalid
	}

	[Token(Token = "0x200005E")]
	private struct ParsingState
	{
		[Token(Token = "0x400026E")]
		[FieldOffset(Offset = "0x0")]
		internal char[] chars;

		[Token(Token = "0x400026F")]
		[FieldOffset(Offset = "0x8")]
		internal int charPos;

		[Token(Token = "0x4000270")]
		[FieldOffset(Offset = "0xC")]
		internal int charsUsed;

		[Token(Token = "0x4000271")]
		[FieldOffset(Offset = "0x10")]
		internal Encoding encoding;

		[Token(Token = "0x4000272")]
		[FieldOffset(Offset = "0x18")]
		internal bool appendMode;

		[Token(Token = "0x4000273")]
		[FieldOffset(Offset = "0x20")]
		internal Stream stream;

		[Token(Token = "0x4000274")]
		[FieldOffset(Offset = "0x28")]
		internal Decoder decoder;

		[Token(Token = "0x4000275")]
		[FieldOffset(Offset = "0x30")]
		internal byte[] bytes;

		[Token(Token = "0x4000276")]
		[FieldOffset(Offset = "0x38")]
		internal int bytePos;

		[Token(Token = "0x4000277")]
		[FieldOffset(Offset = "0x3C")]
		internal int bytesUsed;

		[Token(Token = "0x4000278")]
		[FieldOffset(Offset = "0x40")]
		internal TextReader textReader;

		[Token(Token = "0x4000279")]
		[FieldOffset(Offset = "0x48")]
		internal int lineNo;

		[Token(Token = "0x400027A")]
		[FieldOffset(Offset = "0x4C")]
		internal int lineStartPos;

		[Token(Token = "0x400027B")]
		[FieldOffset(Offset = "0x50")]
		internal string baseUriStr;

		[Token(Token = "0x400027C")]
		[FieldOffset(Offset = "0x58")]
		internal Uri baseUri;

		[Token(Token = "0x400027D")]
		[FieldOffset(Offset = "0x60")]
		internal bool isEof;

		[Token(Token = "0x400027E")]
		[FieldOffset(Offset = "0x61")]
		internal bool isStreamEof;

		[Token(Token = "0x400027F")]
		[FieldOffset(Offset = "0x68")]
		internal IDtdEntityInfo entity;

		[Token(Token = "0x4000280")]
		[FieldOffset(Offset = "0x70")]
		internal int entityId;

		[Token(Token = "0x4000281")]
		[FieldOffset(Offset = "0x74")]
		internal bool eolNormalized;

		[Token(Token = "0x4000282")]
		[FieldOffset(Offset = "0x75")]
		internal bool entityResolvedManually;

		[Token(Token = "0x17000116")]
		internal int LineNo
		{
			[Token(Token = "0x60004FB")]
			[Address(RVA = "0xB3DFC0", Offset = "0xB3C5C0", VA = "0x180B3DFC0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000117")]
		internal int LinePos
		{
			[Token(Token = "0x60004FC")]
			[Address(RVA = "0x26E0DE0", Offset = "0x26DF3E0", VA = "0x1826E0DE0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x60004F9")]
		[Address(RVA = "0x26E0CC0", Offset = "0x26DF2C0", VA = "0x1826E0CC0")]
		internal void Clear()
		{
		}

		[Token(Token = "0x60004FA")]
		[Address(RVA = "0x26E0D80", Offset = "0x26DF380", VA = "0x1826E0D80")]
		internal void Close(bool closeInput)
		{
		}
	}

	[Token(Token = "0x200005F")]
	private class XmlContext
	{
		[Token(Token = "0x4000283")]
		[FieldOffset(Offset = "0x10")]
		internal XmlSpace xmlSpace;

		[Token(Token = "0x4000284")]
		[FieldOffset(Offset = "0x18")]
		internal string xmlLang;

		[Token(Token = "0x4000285")]
		[FieldOffset(Offset = "0x20")]
		internal string defaultNamespace;

		[Token(Token = "0x4000286")]
		[FieldOffset(Offset = "0x28")]
		internal XmlContext previousContext;

		[Token(Token = "0x60004FD")]
		[Address(RVA = "0x26E5CC0", Offset = "0x26E42C0", VA = "0x1826E5CC0")]
		internal XmlContext()
		{
		}

		[Token(Token = "0x60004FE")]
		[Address(RVA = "0x26E5D30", Offset = "0x26E4330", VA = "0x1826E5D30")]
		internal XmlContext(XmlContext previousContext)
		{
		}
	}

	[Token(Token = "0x2000060")]
	private class NoNamespaceManager : XmlNamespaceManager
	{
		[Token(Token = "0x17000118")]
		public override string DefaultNamespace
		{
			[Token(Token = "0x6000500")]
			[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60004FF")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public NoNamespaceManager()
		{
		}

		[Token(Token = "0x6000501")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "10")]
		public override void PushScope()
		{
		}

		[Token(Token = "0x6000502")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "11")]
		public override bool PopScope()
		{
			return default(bool);
		}

		[Token(Token = "0x6000503")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "12")]
		public override void AddNamespace(string prefix, string uri)
		{
		}

		[Token(Token = "0x6000504")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "13")]
		public override void RemoveNamespace(string prefix, string uri)
		{
		}

		[Token(Token = "0x6000505")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "14")]
		public override IEnumerator GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000506")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "15")]
		public override IDictionary<string, string> GetNamespacesInScope(XmlNamespaceScope scope)
		{
			return null;
		}

		[Token(Token = "0x6000507")]
		[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010", Slot = "16")]
		public override string LookupNamespace(string prefix)
		{
			return null;
		}

		[Token(Token = "0x6000508")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "17")]
		public override string LookupPrefix(string uri)
		{
			return null;
		}
	}

	[Token(Token = "0x2000061")]
	internal class DtdParserProxy : IDtdParserAdapterV1, IDtdParserAdapterWithValidation, IDtdParserAdapter
	{
		[Token(Token = "0x4000287")]
		[FieldOffset(Offset = "0x10")]
		private XmlTextReaderImpl reader;

		[Token(Token = "0x17000119")]
		private XmlNameTable System_002EXml_002EIDtdParserAdapter_002ENameTable
		{
			[Token(Token = "0x600050A")]
			[Address(RVA = "0x26DFB00", Offset = "0x26DE100", VA = "0x1826DFB00", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700011A")]
		private IXmlNamespaceResolver System_002EXml_002EIDtdParserAdapter_002ENamespaceResolver
		{
			[Token(Token = "0x600050B")]
			[Address(RVA = "0x26DFB20", Offset = "0x26DE120", VA = "0x1826DFB20", Slot = "10")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700011B")]
		private Uri System_002EXml_002EIDtdParserAdapter_002EBaseUri
		{
			[Token(Token = "0x600050C")]
			[Address(RVA = "0x26DFA20", Offset = "0x26DE020", VA = "0x1826DFA20", Slot = "11")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700011C")]
		private bool System_002EXml_002EIDtdParserAdapter_002EIsEof
		{
			[Token(Token = "0x600050D")]
			[Address(RVA = "0x26DFAA0", Offset = "0x26DE0A0", VA = "0x1826DFAA0", Slot = "18")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700011D")]
		private char[] System_002EXml_002EIDtdParserAdapter_002EParsingBuffer
		{
			[Token(Token = "0x600050E")]
			[Address(RVA = "0x26DFB60", Offset = "0x26DE160", VA = "0x1826DFB60", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700011E")]
		private int System_002EXml_002EIDtdParserAdapter_002EParsingBufferLength
		{
			[Token(Token = "0x600050F")]
			[Address(RVA = "0x26DFB40", Offset = "0x26DE140", VA = "0x1826DFB40", Slot = "13")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700011F")]
		private int System_002EXml_002EIDtdParserAdapter_002ECurrentPosition
		{
			[Token(Token = "0x6000510")]
			[Address(RVA = "0x26DFA40", Offset = "0x26DE040", VA = "0x1826DFA40", Slot = "14")]
			get
			{
				return default(int);
			}
			[Token(Token = "0x6000511")]
			[Address(RVA = "0x26DFB80", Offset = "0x26DE180", VA = "0x1826DFB80", Slot = "15")]
			set
			{
			}
		}

		[Token(Token = "0x17000120")]
		private int System_002EXml_002EIDtdParserAdapter_002EEntityStackLength
		{
			[Token(Token = "0x6000512")]
			[Address(RVA = "0x26DFA60", Offset = "0x26DE060", VA = "0x1826DFA60", Slot = "19")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000121")]
		private bool System_002EXml_002EIDtdParserAdapter_002EIsEntityEolNormalized
		{
			[Token(Token = "0x6000513")]
			[Address(RVA = "0x26DFA80", Offset = "0x26DE080", VA = "0x1826DFA80", Slot = "20")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000122")]
		private int System_002EXml_002EIDtdParserAdapter_002ELineNo
		{
			[Token(Token = "0x6000515")]
			[Address(RVA = "0x26DFAC0", Offset = "0x26DE0C0", VA = "0x1826DFAC0", Slot = "16")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000123")]
		private int System_002EXml_002EIDtdParserAdapter_002ELineStartPosition
		{
			[Token(Token = "0x6000516")]
			[Address(RVA = "0x26DFAE0", Offset = "0x26DE0E0", VA = "0x1826DFAE0", Slot = "17")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000124")]
		private bool System_002EXml_002EIDtdParserAdapterWithValidation_002EDtdValidation
		{
			[Token(Token = "0x6000523")]
			[Address(RVA = "0x26DF820", Offset = "0x26DDE20", VA = "0x1826DF820", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000125")]
		private IValidationEventHandling System_002EXml_002EIDtdParserAdapterWithValidation_002EValidationEventHandling
		{
			[Token(Token = "0x6000524")]
			[Address(RVA = "0x26DF840", Offset = "0x26DDE40", VA = "0x1826DF840", Slot = "8")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000126")]
		private bool System_002EXml_002EIDtdParserAdapterV1_002ENormalization
		{
			[Token(Token = "0x6000525")]
			[Address(RVA = "0x26DF7E0", Offset = "0x26DDDE0", VA = "0x1826DF7E0", Slot = "5")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000127")]
		private bool System_002EXml_002EIDtdParserAdapterV1_002ENamespaces
		{
			[Token(Token = "0x6000526")]
			[Address(RVA = "0x26DF7C0", Offset = "0x26DDDC0", VA = "0x1826DF7C0", Slot = "6")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000128")]
		private bool System_002EXml_002EIDtdParserAdapterV1_002EV1CompatibilityMode
		{
			[Token(Token = "0x6000527")]
			[Address(RVA = "0x26DF800", Offset = "0x26DDE00", VA = "0x1826DF800", Slot = "4")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000509")]
		[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
		internal DtdParserProxy(XmlTextReaderImpl reader)
		{
		}

		[Token(Token = "0x6000514")]
		[Address(RVA = "0x26DF860", Offset = "0x26DDE60", VA = "0x1826DF860", Slot = "22")]
		private void System_002EXml_002EIDtdParserAdapter_002EOnNewLine(int pos)
		{
		}

		[Token(Token = "0x6000517")]
		[Address(RVA = "0x26DF9E0", Offset = "0x26DDFE0", VA = "0x1826DF9E0", Slot = "21")]
		private int System_002EXml_002EIDtdParserAdapter_002EReadData()
		{
			return default(int);
		}

		[Token(Token = "0x6000518")]
		[Address(RVA = "0x26DF920", Offset = "0x26DDF20", VA = "0x1826DF920", Slot = "23")]
		private int System_002EXml_002EIDtdParserAdapter_002EParseNumericCharRef(StringBuilder internalSubsetBuilder)
		{
			return default(int);
		}

		[Token(Token = "0x6000519")]
		[Address(RVA = "0x26DF900", Offset = "0x26DDF00", VA = "0x1826DF900", Slot = "24")]
		private int System_002EXml_002EIDtdParserAdapter_002EParseNamedCharRef(bool expand, StringBuilder internalSubsetBuilder)
		{
			return default(int);
		}

		[Token(Token = "0x600051A")]
		[Address(RVA = "0x26DF940", Offset = "0x26DDF40", VA = "0x1826DF940", Slot = "25")]
		private void System_002EXml_002EIDtdParserAdapter_002EParsePI(StringBuilder sb)
		{
		}

		[Token(Token = "0x600051B")]
		[Address(RVA = "0x26DF8E0", Offset = "0x26DDEE0", VA = "0x1826DF8E0", Slot = "26")]
		private void System_002EXml_002EIDtdParserAdapter_002EParseComment(StringBuilder sb)
		{
		}

		[Token(Token = "0x600051C")]
		[Address(RVA = "0x26DF980", Offset = "0x26DDF80", VA = "0x1826DF980", Slot = "27")]
		private bool System_002EXml_002EIDtdParserAdapter_002EPushEntity(IDtdEntityInfo entity, out int entityId)
		{
			return default(bool);
		}

		[Token(Token = "0x600051D")]
		[Address(RVA = "0x26DF960", Offset = "0x26DDF60", VA = "0x1826DF960", Slot = "28")]
		private bool System_002EXml_002EIDtdParserAdapter_002EPopEntity(out IDtdEntityInfo oldEntity, out int newEntityId)
		{
			return default(bool);
		}

		[Token(Token = "0x600051E")]
		[Address(RVA = "0x26DF9A0", Offset = "0x26DDFA0", VA = "0x1826DF9A0", Slot = "29")]
		private bool System_002EXml_002EIDtdParserAdapter_002EPushExternalSubset(string systemId, string publicId)
		{
			return default(bool);
		}

		[Token(Token = "0x600051F")]
		[Address(RVA = "0x26DF9C0", Offset = "0x26DDFC0", VA = "0x1826DF9C0", Slot = "30")]
		private void System_002EXml_002EIDtdParserAdapter_002EPushInternalDtd(string baseUri, string internalDtd)
		{
		}

		[Token(Token = "0x6000520")]
		[Address(RVA = "0x26DFA00", Offset = "0x26DE000", VA = "0x1826DFA00", Slot = "33")]
		private void System_002EXml_002EIDtdParserAdapter_002EThrow(Exception e)
		{
		}

		[Token(Token = "0x6000521")]
		[Address(RVA = "0x26DF8B0", Offset = "0x26DDEB0", VA = "0x1826DF8B0", Slot = "31")]
		private void System_002EXml_002EIDtdParserAdapter_002EOnSystemId(string systemId, LineInfo keywordLineInfo, LineInfo systemLiteralLineInfo)
		{
		}

		[Token(Token = "0x6000522")]
		[Address(RVA = "0x26DF880", Offset = "0x26DDE80", VA = "0x1826DF880", Slot = "32")]
		private void System_002EXml_002EIDtdParserAdapter_002EOnPublicId(string publicId, LineInfo keywordLineInfo, LineInfo publicLiteralLineInfo)
		{
		}
	}

	[Token(Token = "0x2000062")]
	private class NodeData : IComparable
	{
		[Token(Token = "0x4000288")]
		[FieldOffset(Offset = "0x0")]
		private static NodeData s_None;

		[Token(Token = "0x4000289")]
		[FieldOffset(Offset = "0x10")]
		internal XmlNodeType type;

		[Token(Token = "0x400028A")]
		[FieldOffset(Offset = "0x18")]
		internal string localName;

		[Token(Token = "0x400028B")]
		[FieldOffset(Offset = "0x20")]
		internal string prefix;

		[Token(Token = "0x400028C")]
		[FieldOffset(Offset = "0x28")]
		internal string ns;

		[Token(Token = "0x400028D")]
		[FieldOffset(Offset = "0x30")]
		internal string nameWPrefix;

		[Token(Token = "0x400028E")]
		[FieldOffset(Offset = "0x38")]
		private string value;

		[Token(Token = "0x400028F")]
		[FieldOffset(Offset = "0x40")]
		private char[] chars;

		[Token(Token = "0x4000290")]
		[FieldOffset(Offset = "0x48")]
		private int valueStartPos;

		[Token(Token = "0x4000291")]
		[FieldOffset(Offset = "0x4C")]
		private int valueLength;

		[Token(Token = "0x4000292")]
		[FieldOffset(Offset = "0x50")]
		internal LineInfo lineInfo;

		[Token(Token = "0x4000293")]
		[FieldOffset(Offset = "0x58")]
		internal LineInfo lineInfo2;

		[Token(Token = "0x4000294")]
		[FieldOffset(Offset = "0x60")]
		internal char quoteChar;

		[Token(Token = "0x4000295")]
		[FieldOffset(Offset = "0x64")]
		internal int depth;

		[Token(Token = "0x4000296")]
		[FieldOffset(Offset = "0x68")]
		private bool isEmptyOrDefault;

		[Token(Token = "0x4000297")]
		[FieldOffset(Offset = "0x6C")]
		internal int entityId;

		[Token(Token = "0x4000298")]
		[FieldOffset(Offset = "0x70")]
		internal bool xmlContextPushed;

		[Token(Token = "0x4000299")]
		[FieldOffset(Offset = "0x78")]
		internal NodeData nextAttrValueChunk;

		[Token(Token = "0x400029A")]
		[FieldOffset(Offset = "0x80")]
		internal object schemaType;

		[Token(Token = "0x400029B")]
		[FieldOffset(Offset = "0x88")]
		internal object typedValue;

		[Token(Token = "0x17000129")]
		internal static NodeData None
		{
			[Token(Token = "0x6000528")]
			[Address(RVA = "0x26E0B30", Offset = "0x26DF130", VA = "0x1826E0B30")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700012A")]
		internal int LineNo
		{
			[Token(Token = "0x600052A")]
			[Address(RVA = "0x58A540", Offset = "0x588B40", VA = "0x18058A540")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700012B")]
		internal int LinePos
		{
			[Token(Token = "0x600052B")]
			[Address(RVA = "0xB57820", Offset = "0xB55E20", VA = "0x180B57820")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700012C")]
		internal bool IsEmptyElement
		{
			[Token(Token = "0x600052C")]
			[Address(RVA = "0x26E0B20", Offset = "0x26DF120", VA = "0x1826E0B20")]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x600052D")]
			[Address(RVA = "0x12BF400", Offset = "0x12BDA00", VA = "0x1812BF400")]
			set
			{
			}
		}

		[Token(Token = "0x1700012D")]
		internal bool IsDefaultAttribute
		{
			[Token(Token = "0x600052E")]
			[Address(RVA = "0x26E0B10", Offset = "0x26DF110", VA = "0x1826E0B10")]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x600052F")]
			[Address(RVA = "0x12BF400", Offset = "0x12BDA00", VA = "0x1812BF400")]
			set
			{
			}
		}

		[Token(Token = "0x1700012E")]
		internal bool ValueBuffered
		{
			[Token(Token = "0x6000530")]
			[Address(RVA = "0x26E0CB0", Offset = "0x26DF2B0", VA = "0x1826E0CB0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700012F")]
		internal string StringValue
		{
			[Token(Token = "0x6000531")]
			[Address(RVA = "0x26E0C60", Offset = "0x26DF260", VA = "0x1826E0C60")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000529")]
		[Address(RVA = "0x26E0A70", Offset = "0x26DF070", VA = "0x1826E0A70")]
		internal NodeData()
		{
		}

		[Token(Token = "0x6000532")]
		[Address(RVA = "0x26E0A20", Offset = "0x26DF020", VA = "0x1826E0A20")]
		internal void TrimSpacesInValue()
		{
		}

		[Token(Token = "0x6000533")]
		[Address(RVA = "0x26E0390", Offset = "0x26DE990", VA = "0x1826E0390")]
		internal void Clear(XmlNodeType type)
		{
		}

		[Token(Token = "0x6000534")]
		[Address(RVA = "0x26E0300", Offset = "0x26DE900", VA = "0x1826E0300")]
		internal void ClearName()
		{
		}

		[Token(Token = "0x6000535")]
		[Address(RVA = "0x26E06D0", Offset = "0x26DECD0", VA = "0x1826E06D0")]
		internal void SetLineInfo(int lineNo, int linePos)
		{
		}

		[Token(Token = "0x6000536")]
		[Address(RVA = "0x26E06C0", Offset = "0x26DECC0", VA = "0x1826E06C0")]
		internal void SetLineInfo2(int lineNo, int linePos)
		{
		}

		[Token(Token = "0x6000537")]
		[Address(RVA = "0x26E0830", Offset = "0x26DEE30", VA = "0x1826E0830")]
		internal void SetValueNode(XmlNodeType type, string value)
		{
		}

		[Token(Token = "0x6000538")]
		[Address(RVA = "0x26E0870", Offset = "0x26DEE70", VA = "0x1826E0870")]
		internal void SetValueNode(XmlNodeType type, char[] chars, int startPos, int len)
		{
		}

		[Token(Token = "0x6000539")]
		[Address(RVA = "0x26E06E0", Offset = "0x26DECE0", VA = "0x1826E06E0")]
		internal void SetNamedNode(XmlNodeType type, string localName)
		{
		}

		[Token(Token = "0x600053A")]
		[Address(RVA = "0x26E0790", Offset = "0x26DED90", VA = "0x1826E0790")]
		internal void SetNamedNode(XmlNodeType type, string localName, string prefix, string nameWPrefix)
		{
		}

		[Token(Token = "0x600053B")]
		[Address(RVA = "0x26E08D0", Offset = "0x26DEED0", VA = "0x1826E08D0")]
		internal void SetValue(string value)
		{
		}

		[Token(Token = "0x600053C")]
		[Address(RVA = "0x26E08F0", Offset = "0x26DEEF0", VA = "0x1826E08F0")]
		internal void SetValue(char[] chars, int startPos, int len)
		{
		}

		[Token(Token = "0x600053D")]
		[Address(RVA = "0x26E0660", Offset = "0x26DEC60", VA = "0x1826E0660")]
		internal void OnBufferInvalidated()
		{
		}

		[Token(Token = "0x600053E")]
		[Address(RVA = "0x26E0490", Offset = "0x26DEA90", VA = "0x1826E0490")]
		internal void CopyTo(int valueOffset, StringBuilder sb)
		{
		}

		[Token(Token = "0x600053F")]
		[Address(RVA = "0x26E0420", Offset = "0x26DEA20", VA = "0x1826E0420")]
		internal int CopyTo(int valueOffset, char[] buffer, int offset, int length)
		{
			return default(int);
		}

		[Token(Token = "0x6000540")]
		[Address(RVA = "0x26E05B0", Offset = "0x26DEBB0", VA = "0x1826E05B0")]
		internal string GetNameWPrefix(XmlNameTable nt)
		{
			return null;
		}

		[Token(Token = "0x6000541")]
		[Address(RVA = "0x26E0510", Offset = "0x26DEB10", VA = "0x1826E0510")]
		internal string CreateNameWPrefix(XmlNameTable nt)
		{
			return null;
		}

		[Token(Token = "0x6000542")]
		[Address(RVA = "0x26E0940", Offset = "0x26DEF40", VA = "0x1826E0940", Slot = "4")]
		private int System_002EIComparable_002ECompareTo(object obj)
		{
			return default(int);
		}
	}

	[Token(Token = "0x2000063")]
	private class DtdDefaultAttributeInfoToNodeDataComparer : IComparer<object>
	{
		[Token(Token = "0x400029C")]
		[FieldOffset(Offset = "0x0")]
		private static IComparer<object> s_instance;

		[Token(Token = "0x17000130")]
		internal static IComparer<object> Instance
		{
			[Token(Token = "0x6000543")]
			[Address(RVA = "0x26F2A10", Offset = "0x26F1010", VA = "0x1826F2A10")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000544")]
		[Address(RVA = "0x26F2730", Offset = "0x26F0D30", VA = "0x1826F2730", Slot = "4")]
		public int Compare(object x, object y)
		{
			return default(int);
		}

		[Token(Token = "0x6000545")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public DtdDefaultAttributeInfoToNodeDataComparer()
		{
		}
	}

	[Token(Token = "0x2000064")]
	internal delegate void OnDefaultAttributeUseDelegate(IDtdDefaultAttributeInfo defaultAttribute, XmlTextReaderImpl coreReader);

	[Token(Token = "0x40001D6")]
	[FieldOffset(Offset = "0x10")]
	private readonly bool useAsync;

	[Token(Token = "0x40001D7")]
	[FieldOffset(Offset = "0x18")]
	private LaterInitParam laterInitParam;

	[Token(Token = "0x40001D8")]
	[FieldOffset(Offset = "0x20")]
	private XmlCharType xmlCharType;

	[Token(Token = "0x40001D9")]
	[FieldOffset(Offset = "0x28")]
	private ParsingState ps;

	[Token(Token = "0x40001DA")]
	[FieldOffset(Offset = "0xA0")]
	private ParsingFunction parsingFunction;

	[Token(Token = "0x40001DB")]
	[FieldOffset(Offset = "0xA4")]
	private ParsingFunction nextParsingFunction;

	[Token(Token = "0x40001DC")]
	[FieldOffset(Offset = "0xA8")]
	private ParsingFunction nextNextParsingFunction;

	[Token(Token = "0x40001DD")]
	[FieldOffset(Offset = "0xB0")]
	private NodeData[] nodes;

	[Token(Token = "0x40001DE")]
	[FieldOffset(Offset = "0xB8")]
	private NodeData curNode;

	[Token(Token = "0x40001DF")]
	[FieldOffset(Offset = "0xC0")]
	private int index;

	[Token(Token = "0x40001E0")]
	[FieldOffset(Offset = "0xC4")]
	private int curAttrIndex;

	[Token(Token = "0x40001E1")]
	[FieldOffset(Offset = "0xC8")]
	private int attrCount;

	[Token(Token = "0x40001E2")]
	[FieldOffset(Offset = "0xCC")]
	private int attrHashtable;

	[Token(Token = "0x40001E3")]
	[FieldOffset(Offset = "0xD0")]
	private int attrDuplWalkCount;

	[Token(Token = "0x40001E4")]
	[FieldOffset(Offset = "0xD4")]
	private bool attrNeedNamespaceLookup;

	[Token(Token = "0x40001E5")]
	[FieldOffset(Offset = "0xD5")]
	private bool fullAttrCleanup;

	[Token(Token = "0x40001E6")]
	[FieldOffset(Offset = "0xD8")]
	private NodeData[] attrDuplSortingArray;

	[Token(Token = "0x40001E7")]
	[FieldOffset(Offset = "0xE0")]
	private XmlNameTable nameTable;

	[Token(Token = "0x40001E8")]
	[FieldOffset(Offset = "0xE8")]
	private bool nameTableFromSettings;

	[Token(Token = "0x40001E9")]
	[FieldOffset(Offset = "0xF0")]
	private XmlResolver xmlResolver;

	[Token(Token = "0x40001EA")]
	[FieldOffset(Offset = "0xF8")]
	private string url;

	[Token(Token = "0x40001EB")]
	[FieldOffset(Offset = "0x100")]
	private bool normalize;

	[Token(Token = "0x40001EC")]
	[FieldOffset(Offset = "0x101")]
	private bool supportNamespaces;

	[Token(Token = "0x40001ED")]
	[FieldOffset(Offset = "0x104")]
	private WhitespaceHandling whitespaceHandling;

	[Token(Token = "0x40001EE")]
	[FieldOffset(Offset = "0x108")]
	private DtdProcessing dtdProcessing;

	[Token(Token = "0x40001EF")]
	[FieldOffset(Offset = "0x10C")]
	private EntityHandling entityHandling;

	[Token(Token = "0x40001F0")]
	[FieldOffset(Offset = "0x110")]
	private bool ignorePIs;

	[Token(Token = "0x40001F1")]
	[FieldOffset(Offset = "0x111")]
	private bool ignoreComments;

	[Token(Token = "0x40001F2")]
	[FieldOffset(Offset = "0x112")]
	private bool checkCharacters;

	[Token(Token = "0x40001F3")]
	[FieldOffset(Offset = "0x114")]
	private int lineNumberOffset;

	[Token(Token = "0x40001F4")]
	[FieldOffset(Offset = "0x118")]
	private int linePositionOffset;

	[Token(Token = "0x40001F5")]
	[FieldOffset(Offset = "0x11C")]
	private bool closeInput;

	[Token(Token = "0x40001F6")]
	[FieldOffset(Offset = "0x120")]
	private long maxCharactersInDocument;

	[Token(Token = "0x40001F7")]
	[FieldOffset(Offset = "0x128")]
	private long maxCharactersFromEntities;

	[Token(Token = "0x40001F8")]
	[FieldOffset(Offset = "0x130")]
	private bool v1Compat;

	[Token(Token = "0x40001F9")]
	[FieldOffset(Offset = "0x138")]
	private XmlNamespaceManager namespaceManager;

	[Token(Token = "0x40001FA")]
	[FieldOffset(Offset = "0x140")]
	private string lastPrefix;

	[Token(Token = "0x40001FB")]
	[FieldOffset(Offset = "0x148")]
	private XmlContext xmlContext;

	[Token(Token = "0x40001FC")]
	[FieldOffset(Offset = "0x150")]
	private ParsingState[] parsingStatesStack;

	[Token(Token = "0x40001FD")]
	[FieldOffset(Offset = "0x158")]
	private int parsingStatesStackTop;

	[Token(Token = "0x40001FE")]
	[FieldOffset(Offset = "0x160")]
	private string reportedBaseUri;

	[Token(Token = "0x40001FF")]
	[FieldOffset(Offset = "0x168")]
	private Encoding reportedEncoding;

	[Token(Token = "0x4000200")]
	[FieldOffset(Offset = "0x170")]
	private IDtdInfo dtdInfo;

	[Token(Token = "0x4000201")]
	[FieldOffset(Offset = "0x178")]
	private XmlNodeType fragmentType;

	[Token(Token = "0x4000202")]
	[FieldOffset(Offset = "0x180")]
	private XmlParserContext fragmentParserContext;

	[Token(Token = "0x4000203")]
	[FieldOffset(Offset = "0x188")]
	private bool fragment;

	[Token(Token = "0x4000204")]
	[FieldOffset(Offset = "0x190")]
	private IncrementalReadDecoder incReadDecoder;

	[Token(Token = "0x4000205")]
	[FieldOffset(Offset = "0x198")]
	private IncrementalReadState incReadState;

	[Token(Token = "0x4000206")]
	[FieldOffset(Offset = "0x19C")]
	private LineInfo incReadLineInfo;

	[Token(Token = "0x4000207")]
	[FieldOffset(Offset = "0x1A4")]
	private int incReadDepth;

	[Token(Token = "0x4000208")]
	[FieldOffset(Offset = "0x1A8")]
	private int incReadLeftStartPos;

	[Token(Token = "0x4000209")]
	[FieldOffset(Offset = "0x1AC")]
	private int incReadLeftEndPos;

	[Token(Token = "0x400020A")]
	[FieldOffset(Offset = "0x1B0")]
	private int attributeValueBaseEntityId;

	[Token(Token = "0x400020B")]
	[FieldOffset(Offset = "0x1B4")]
	private bool emptyEntityInAttributeResolved;

	[Token(Token = "0x400020C")]
	[FieldOffset(Offset = "0x1B8")]
	private IValidationEventHandling validationEventHandling;

	[Token(Token = "0x400020D")]
	[FieldOffset(Offset = "0x1C0")]
	private OnDefaultAttributeUseDelegate onDefaultAttributeUse;

	[Token(Token = "0x400020E")]
	[FieldOffset(Offset = "0x1C8")]
	private bool validatingReaderCompatFlag;

	[Token(Token = "0x400020F")]
	[FieldOffset(Offset = "0x1C9")]
	private bool addDefaultAttributesAndNormalize;

	[Token(Token = "0x4000210")]
	[FieldOffset(Offset = "0x1D0")]
	private StringBuilder stringBuilder;

	[Token(Token = "0x4000211")]
	[FieldOffset(Offset = "0x1D8")]
	private bool rootElementParsed;

	[Token(Token = "0x4000212")]
	[FieldOffset(Offset = "0x1D9")]
	private bool standalone;

	[Token(Token = "0x4000213")]
	[FieldOffset(Offset = "0x1DC")]
	private int nextEntityId;

	[Token(Token = "0x4000214")]
	[FieldOffset(Offset = "0x1E0")]
	private ParsingMode parsingMode;

	[Token(Token = "0x4000215")]
	[FieldOffset(Offset = "0x1E4")]
	private ReadState readState;

	[Token(Token = "0x4000216")]
	[FieldOffset(Offset = "0x1E8")]
	private IDtdEntityInfo lastEntity;

	[Token(Token = "0x4000217")]
	[FieldOffset(Offset = "0x1F0")]
	private bool afterResetState;

	[Token(Token = "0x4000218")]
	[FieldOffset(Offset = "0x1F4")]
	private int documentStartBytePos;

	[Token(Token = "0x4000219")]
	[FieldOffset(Offset = "0x1F8")]
	private int readValueOffset;

	[Token(Token = "0x400021A")]
	[FieldOffset(Offset = "0x200")]
	private long charactersInDocument;

	[Token(Token = "0x400021B")]
	[FieldOffset(Offset = "0x208")]
	private long charactersFromEntities;

	[Token(Token = "0x400021C")]
	[FieldOffset(Offset = "0x210")]
	private Dictionary<IDtdEntityInfo, IDtdEntityInfo> currentEntities;

	[Token(Token = "0x400021D")]
	[FieldOffset(Offset = "0x218")]
	private bool disableUndeclaredEntityCheck;

	[Token(Token = "0x400021E")]
	[FieldOffset(Offset = "0x220")]
	private XmlReader outerReader;

	[Token(Token = "0x400021F")]
	[FieldOffset(Offset = "0x228")]
	private bool xmlResolverIsSet;

	[Token(Token = "0x4000220")]
	[FieldOffset(Offset = "0x230")]
	private string Xml;

	[Token(Token = "0x4000221")]
	[FieldOffset(Offset = "0x238")]
	private string XmlNs;

	[Token(Token = "0x4000222")]
	[FieldOffset(Offset = "0x240")]
	private Task<Tuple<int, int, int, bool>> parseText_dummyTask;

	[Token(Token = "0x170000DA")]
	public override XmlReaderSettings Settings
	{
		[Token(Token = "0x60003F9")]
		[Address(RVA = "0x2602EB0", Offset = "0x26014B0", VA = "0x182602EB0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DB")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x60003FA")]
		[Address(RVA = "0x2602E30", Offset = "0x2601430", VA = "0x182602E30", Slot = "6")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x170000DC")]
	public override string Name
	{
		[Token(Token = "0x60003FB")]
		[Address(RVA = "0x2602DE0", Offset = "0x26013E0", VA = "0x182602DE0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DD")]
	public override string LocalName
	{
		[Token(Token = "0x60003FC")]
		[Address(RVA = "0x2602DC0", Offset = "0x26013C0", VA = "0x182602DC0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DE")]
	public override string NamespaceURI
	{
		[Token(Token = "0x60003FD")]
		[Address(RVA = "0x2602E10", Offset = "0x2601410", VA = "0x182602E10", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DF")]
	public override string Prefix
	{
		[Token(Token = "0x60003FE")]
		[Address(RVA = "0x2602E50", Offset = "0x2601450", VA = "0x182602E50", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E0")]
	public override string Value
	{
		[Token(Token = "0x60003FF")]
		[Address(RVA = "0x2603050", Offset = "0x2601650", VA = "0x182603050", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E1")]
	public override int Depth
	{
		[Token(Token = "0x6000400")]
		[Address(RVA = "0x2602AE0", Offset = "0x26010E0", VA = "0x182602AE0", Slot = "12")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000E2")]
	public override string BaseURI
	{
		[Token(Token = "0x6000401")]
		[Address(RVA = "0x2602AD0", Offset = "0x26010D0", VA = "0x182602AD0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E3")]
	public override bool IsEmptyElement
	{
		[Token(Token = "0x6000402")]
		[Address(RVA = "0x2602CE0", Offset = "0x26012E0", VA = "0x182602CE0", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E4")]
	public override bool IsDefault
	{
		[Token(Token = "0x6000403")]
		[Address(RVA = "0x2602CB0", Offset = "0x26012B0", VA = "0x182602CB0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E5")]
	public override char QuoteChar
	{
		[Token(Token = "0x6000404")]
		[Address(RVA = "0x2602E70", Offset = "0x2601470", VA = "0x182602E70", Slot = "16")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x170000E6")]
	public override XmlSpace XmlSpace
	{
		[Token(Token = "0x6000405")]
		[Address(RVA = "0x26031C0", Offset = "0x26017C0", VA = "0x1826031C0", Slot = "17")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x170000E7")]
	public override string XmlLang
	{
		[Token(Token = "0x6000406")]
		[Address(RVA = "0x26031A0", Offset = "0x26017A0", VA = "0x1826031A0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E8")]
	public override ReadState ReadState
	{
		[Token(Token = "0x6000407")]
		[Address(RVA = "0x2602EA0", Offset = "0x26014A0", VA = "0x182602EA0", Slot = "34")]
		get
		{
			return default(ReadState);
		}
	}

	[Token(Token = "0x170000E9")]
	public override bool EOF
	{
		[Token(Token = "0x6000408")]
		[Address(RVA = "0x2602C30", Offset = "0x2601230", VA = "0x182602C30", Slot = "32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EA")]
	public override XmlNameTable NameTable
	{
		[Token(Token = "0x6000409")]
		[Address(RVA = "0x187BC50", Offset = "0x187A250", VA = "0x18187BC50", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000EB")]
	public override bool CanResolveEntity
	{
		[Token(Token = "0x600040A")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EC")]
	public override int AttributeCount
	{
		[Token(Token = "0x600040B")]
		[Address(RVA = "0x1AAAE10", Offset = "0x1AA9410", VA = "0x181AAAE10", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000ED")]
	internal XmlReader OuterReader
	{
		[Token(Token = "0x600041B")]
		[Address(RVA = "0x2603620", Offset = "0x2601C20", VA = "0x182603620")]
		set
		{
		}
	}

	[Token(Token = "0x170000EE")]
	public override bool CanReadValueChunk
	{
		[Token(Token = "0x600041E")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EF")]
	public int LineNumber
	{
		[Token(Token = "0x6000421")]
		[Address(RVA = "0x2602D60", Offset = "0x2601360", VA = "0x182602D60", Slot = "54")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000F0")]
	public int LinePosition
	{
		[Token(Token = "0x6000422")]
		[Address(RVA = "0x2602D90", Offset = "0x2601390", VA = "0x182602D90", Slot = "55")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000F1")]
	internal bool Namespaces
	{
		[Token(Token = "0x6000428")]
		[Address(RVA = "0x2602C00", Offset = "0x2601200", VA = "0x182602C00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000429")]
		[Address(RVA = "0x26032E0", Offset = "0x26018E0", VA = "0x1826032E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F2")]
	internal bool Normalization
	{
		[Token(Token = "0x600042A")]
		[Address(RVA = "0x1C41DE0", Offset = "0x1C403E0", VA = "0x181C41DE0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600042B")]
		[Address(RVA = "0x2603530", Offset = "0x2601B30", VA = "0x182603530")]
		set
		{
		}
	}

	[Token(Token = "0x170000F3")]
	internal WhitespaceHandling WhitespaceHandling
	{
		[Token(Token = "0x600042C")]
		[Address(RVA = "0x2603660", Offset = "0x2601C60", VA = "0x182603660")]
		set
		{
		}
	}

	[Token(Token = "0x170000F4")]
	internal EntityHandling EntityHandling
	{
		[Token(Token = "0x600042D")]
		[Address(RVA = "0x26031F0", Offset = "0x26017F0", VA = "0x1826031F0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F5")]
	internal bool IsResolverSet
	{
		[Token(Token = "0x600042E")]
		[Address(RVA = "0x2602D50", Offset = "0x2601350", VA = "0x182602D50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F6")]
	internal XmlResolver XmlResolver
	{
		[Token(Token = "0x600042F")]
		[Address(RVA = "0x2603740", Offset = "0x2601D40", VA = "0x182603740")]
		set
		{
		}
	}

	[Token(Token = "0x170000F7")]
	internal XmlNameTable DtdParserProxy_NameTable
	{
		[Token(Token = "0x6000430")]
		[Address(RVA = "0x187BC50", Offset = "0x187A250", VA = "0x18187BC50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F8")]
	internal IXmlNamespaceResolver DtdParserProxy_NamespaceResolver
	{
		[Token(Token = "0x6000431")]
		[Address(RVA = "0xA29AC0", Offset = "0xA280C0", VA = "0x180A29AC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F9")]
	internal bool DtdParserProxy_DtdValidation
	{
		[Token(Token = "0x6000432")]
		[Address(RVA = "0x2602BD0", Offset = "0x26011D0", VA = "0x182602BD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FA")]
	internal bool DtdParserProxy_Normalization
	{
		[Token(Token = "0x6000433")]
		[Address(RVA = "0x1C41DE0", Offset = "0x1C403E0", VA = "0x181C41DE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FB")]
	internal bool DtdParserProxy_Namespaces
	{
		[Token(Token = "0x6000434")]
		[Address(RVA = "0x2602C00", Offset = "0x2601200", VA = "0x182602C00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FC")]
	internal bool DtdParserProxy_V1CompatibilityMode
	{
		[Token(Token = "0x6000435")]
		[Address(RVA = "0x2602C10", Offset = "0x2601210", VA = "0x182602C10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FD")]
	internal Uri DtdParserProxy_BaseUri
	{
		[Token(Token = "0x6000436")]
		[Address(RVA = "0x2602B10", Offset = "0x2601110", VA = "0x182602B10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FE")]
	internal bool DtdParserProxy_IsEof
	{
		[Token(Token = "0x6000437")]
		[Address(RVA = "0x1C40680", Offset = "0x1C3EC80", VA = "0x181C40680")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FF")]
	internal char[] DtdParserProxy_ParsingBuffer
	{
		[Token(Token = "0x6000438")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000100")]
	internal int DtdParserProxy_ParsingBufferLength
	{
		[Token(Token = "0x6000439")]
		[Address(RVA = "0x16EF8A0", Offset = "0x16EDEA0", VA = "0x1816EF8A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000101")]
	internal int DtdParserProxy_CurrentPosition
	{
		[Token(Token = "0x600043A")]
		[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600043B")]
		[Address(RVA = "0x1826560", Offset = "0x1824B60", VA = "0x181826560")]
		set
		{
		}
	}

	[Token(Token = "0x17000102")]
	internal int DtdParserProxy_EntityStackLength
	{
		[Token(Token = "0x600043C")]
		[Address(RVA = "0x2602BE0", Offset = "0x26011E0", VA = "0x182602BE0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000103")]
	internal bool DtdParserProxy_IsEntityEolNormalized
	{
		[Token(Token = "0x600043D")]
		[Address(RVA = "0x2602BF0", Offset = "0x26011F0", VA = "0x182602BF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000104")]
	internal IValidationEventHandling DtdParserProxy_ValidationEventHandling
	{
		[Token(Token = "0x600043E")]
		[Address(RVA = "0x2602C20", Offset = "0x2601220", VA = "0x182602C20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000105")]
	internal int DtdParserProxy_LineNo
	{
		[Token(Token = "0x6000440")]
		[Address(RVA = "0x58A560", Offset = "0x588B60", VA = "0x18058A560")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000106")]
	internal int DtdParserProxy_LineStartPosition
	{
		[Token(Token = "0x6000441")]
		[Address(RVA = "0x187BA40", Offset = "0x187A040", VA = "0x18187BA40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000107")]
	private bool IsResolverNull
	{
		[Token(Token = "0x6000447")]
		[Address(RVA = "0x2602D10", Offset = "0x2601310", VA = "0x182602D10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000108")]
	private bool InAttributeValueIterator
	{
		[Token(Token = "0x6000463")]
		[Address(RVA = "0x2602C50", Offset = "0x2601250", VA = "0x182602C50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000109")]
	private bool DtdValidation
	{
		[Token(Token = "0x6000465")]
		[Address(RVA = "0x2602BD0", Offset = "0x26011D0", VA = "0x182602BD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700010A")]
	private bool InEntity
	{
		[Token(Token = "0x600049A")]
		[Address(RVA = "0x2602C70", Offset = "0x2601270", VA = "0x182602C70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700010B")]
	internal override IDtdInfo DtdInfo
	{
		[Token(Token = "0x60004E0")]
		[Address(RVA = "0x2602B00", Offset = "0x2601100", VA = "0x182602B00", Slot = "52")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700010C")]
	internal IValidationEventHandling ValidationEventHandling
	{
		[Token(Token = "0x60004E2")]
		[Address(RVA = "0x2603640", Offset = "0x2601C40", VA = "0x182603640")]
		set
		{
		}
	}

	[Token(Token = "0x1700010D")]
	internal OnDefaultAttributeUseDelegate OnDefaultAttributeUse
	{
		[Token(Token = "0x60004E3")]
		[Address(RVA = "0x2603600", Offset = "0x2601C00", VA = "0x182603600")]
		set
		{
		}
	}

	[Token(Token = "0x1700010E")]
	internal bool XmlValidatingReaderCompatibilityMode
	{
		[Token(Token = "0x60004E4")]
		[Address(RVA = "0x26037F0", Offset = "0x2601DF0", VA = "0x1826037F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700010F")]
	internal XmlNodeType FragmentType
	{
		[Token(Token = "0x60004E5")]
		[Address(RVA = "0x2602C40", Offset = "0x2601240", VA = "0x182602C40")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000110")]
	internal object InternalSchemaType
	{
		[Token(Token = "0x60004E8")]
		[Address(RVA = "0x2603280", Offset = "0x2601880", VA = "0x182603280")]
		set
		{
		}
	}

	[Token(Token = "0x17000111")]
	internal object InternalTypedValue
	{
		[Token(Token = "0x60004E9")]
		[Address(RVA = "0x2602C80", Offset = "0x2601280", VA = "0x182602C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004EA")]
		[Address(RVA = "0x26032B0", Offset = "0x26018B0", VA = "0x1826032B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000112")]
	internal bool StandAlone
	{
		[Token(Token = "0x60004EB")]
		[Address(RVA = "0x2603040", Offset = "0x2601640", VA = "0x182603040")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000113")]
	internal override XmlNamespaceManager NamespaceManager
	{
		[Token(Token = "0x60004EC")]
		[Address(RVA = "0xA29AC0", Offset = "0xA280C0", VA = "0x180A29AC0", Slot = "51")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000114")]
	internal bool V1Compat
	{
		[Token(Token = "0x60004ED")]
		[Address(RVA = "0x2602C10", Offset = "0x2601210", VA = "0x182602C10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000115")]
	internal bool DisableUndeclaredEntityCheck
	{
		[Token(Token = "0x60004F1")]
		[Address(RVA = "0x26031E0", Offset = "0x26017E0", VA = "0x1826031E0")]
		set
		{
		}
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x26017A0", Offset = "0x25FFDA0", VA = "0x1826017A0")]
	internal XmlTextReaderImpl(XmlNameTable nt)
	{
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x2601D60", Offset = "0x2600360", VA = "0x182601D60")]
	private XmlTextReaderImpl(XmlResolver resolver, XmlReaderSettings settings, XmlParserContext context)
	{
	}

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x26014A0", Offset = "0x25FFAA0", VA = "0x1826014A0")]
	internal XmlTextReaderImpl(Stream input)
	{
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x2602440", Offset = "0x2600A40", VA = "0x182602440")]
	internal XmlTextReaderImpl(string url, Stream input, XmlNameTable nt)
	{
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x2602320", Offset = "0x2600920", VA = "0x182602320")]
	internal XmlTextReaderImpl(TextReader input)
	{
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x26015D0", Offset = "0x25FFBD0", VA = "0x1826015D0")]
	internal XmlTextReaderImpl(TextReader input, XmlNameTable nt)
	{
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x26016C0", Offset = "0x25FFCC0", VA = "0x1826016C0")]
	internal XmlTextReaderImpl(string url, TextReader input, XmlNameTable nt)
	{
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x2601250", Offset = "0x25FF850", VA = "0x182601250")]
	internal XmlTextReaderImpl(string xmlFragment, XmlNodeType fragType, XmlParserContext context)
	{
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x2601C40", Offset = "0x2600240", VA = "0x182601C40")]
	internal XmlTextReaderImpl(string xmlFragment, XmlParserContext context)
	{
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x2602530", Offset = "0x2600B30", VA = "0x182602530")]
	public XmlTextReaderImpl(string url, XmlNameTable nt)
	{
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x25F12E0", Offset = "0x25EF8E0", VA = "0x1825F12E0")]
	private void FinishInitUriString()
	{
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x26027D0", Offset = "0x2600DD0", VA = "0x1826027D0")]
	internal XmlTextReaderImpl(Stream stream, byte[] bytes, int byteCount, XmlReaderSettings settings, Uri baseUri, string baseUriStr, XmlParserContext context, bool closeInput)
	{
	}

	[Token(Token = "0x60003F5")]
	[Address(RVA = "0x25F1160", Offset = "0x25EF760", VA = "0x1825F1160")]
	private void FinishInitStream()
	{
	}

	[Token(Token = "0x60003F6")]
	[Address(RVA = "0x2601360", Offset = "0x25FF960", VA = "0x182601360")]
	internal XmlTextReaderImpl(TextReader input, XmlReaderSettings settings, string baseUriStr, XmlParserContext context)
	{
	}

	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x25F1240", Offset = "0x25EF840", VA = "0x1825F1240")]
	private void FinishInitTextReader()
	{
	}

	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x2602730", Offset = "0x2600D30", VA = "0x182602730")]
	internal XmlTextReaderImpl(string xmlFragment, XmlParserContext context, XmlReaderSettings settings)
	{
	}

	[Token(Token = "0x600040C")]
	[Address(RVA = "0x25F1C60", Offset = "0x25F0260", VA = "0x1825F1C60", Slot = "22")]
	public override string GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x600040D")]
	[Address(RVA = "0x25F1CF0", Offset = "0x25F02F0", VA = "0x1825F1CF0", Slot = "23")]
	public override string GetAttribute(string localName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x600040E")]
	[Address(RVA = "0x25F1BB0", Offset = "0x25F01B0", VA = "0x1825F1BB0", Slot = "24")]
	public override string GetAttribute(int i)
	{
		return null;
	}

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x25F41A0", Offset = "0x25F27A0", VA = "0x1825F41A0", Slot = "25")]
	public override bool MoveToAttribute(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x25F4270", Offset = "0x25F2870", VA = "0x1825F4270", Slot = "26")]
	public override void MoveToAttribute(int i)
	{
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x25F43E0", Offset = "0x25F29E0", VA = "0x1825F43E0", Slot = "27")]
	public override bool MoveToFirstAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x25F4460", Offset = "0x25F2A60", VA = "0x1825F4460", Slot = "28")]
	public override bool MoveToNextAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6000413")]
	[Address(RVA = "0x25F4350", Offset = "0x25F2950", VA = "0x1825F4350", Slot = "29")]
	public override bool MoveToElement()
	{
		return default(bool);
	}

	[Token(Token = "0x6000414")]
	[Address(RVA = "0x25F1620", Offset = "0x25EFC20", VA = "0x1825F1620")]
	private void FinishInit()
	{
	}

	[Token(Token = "0x6000415")]
	[Address(RVA = "0x25FDC60", Offset = "0x25FC260", VA = "0x1825FDC60", Slot = "31")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x6000416")]
	[Address(RVA = "0x25EFF20", Offset = "0x25EE520", VA = "0x1825EFF20", Slot = "33")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000417")]
	[Address(RVA = "0x25FFCC0", Offset = "0x25FE2C0", VA = "0x1825FFCC0", Slot = "35")]
	public override void Skip()
	{
	}

	[Token(Token = "0x6000418")]
	[Address(RVA = "0x25F3F80", Offset = "0x25F2580", VA = "0x1825F3F80", Slot = "37")]
	public override string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x25FCE20", Offset = "0x25FB420", VA = "0x1825FCE20", Slot = "30")]
	public override bool ReadAttributeValue()
	{
		return default(bool);
	}

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x25FE780", Offset = "0x25FCD80", VA = "0x1825FE780", Slot = "39")]
	public override void ResolveEntity()
	{
	}

	[Token(Token = "0x600041C")]
	[Address(RVA = "0x25F40D0", Offset = "0x25F26D0", VA = "0x1825F40D0")]
	internal void MoveOffEntityReference()
	{
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x25FD650", Offset = "0x25FBC50", VA = "0x1825FD650", Slot = "42")]
	public override string ReadString()
	{
		return null;
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x25FD720", Offset = "0x25FBD20", VA = "0x1825FD720", Slot = "41")]
	public override int ReadValueChunk(char[] buffer, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "53")]
	public bool HasLineInfo()
	{
		return default(bool);
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x25F2130", Offset = "0x25F0730", VA = "0x1825F2130", Slot = "56")]
	private IDictionary<string, string> System_002EXml_002EIXmlNamespaceResolver_002EGetNamespacesInScope(XmlNamespaceScope scope)
	{
		return null;
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x24B4C60", Offset = "0x24B3260", VA = "0x1824B4C60", Slot = "57")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000425")]
	[Address(RVA = "0x25F40A0", Offset = "0x25F26A0", VA = "0x1825F40A0", Slot = "58")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupPrefix(string namespaceName)
	{
		return null;
	}

	[Token(Token = "0x6000426")]
	[Address(RVA = "0x25F2130", Offset = "0x25F0730", VA = "0x1825F2130")]
	internal IDictionary<string, string> GetNamespacesInScope(XmlNamespaceScope scope)
	{
		return null;
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x25F40A0", Offset = "0x25F26A0", VA = "0x1825F40A0")]
	internal string LookupPrefix(string namespaceName)
	{
		return null;
	}

	[Token(Token = "0x600043F")]
	[Address(RVA = "0x25F0230", Offset = "0x25EE830", VA = "0x1825F0230")]
	internal void DtdParserProxy_OnNewLine(int pos)
	{
	}

	[Token(Token = "0x6000442")]
	[Address(RVA = "0x25F0C60", Offset = "0x25EF260", VA = "0x1825F0C60")]
	internal int DtdParserProxy_ReadData()
	{
		return default(int);
	}

	[Token(Token = "0x6000443")]
	[Address(RVA = "0x25F0800", Offset = "0x25EEE00", VA = "0x1825F0800")]
	internal int DtdParserProxy_ParseNumericCharRef(StringBuilder internalSubsetBuilder)
	{
		return default(int);
	}

	[Token(Token = "0x6000444")]
	[Address(RVA = "0x25F0780", Offset = "0x25EED80", VA = "0x1825F0780")]
	internal int DtdParserProxy_ParseNamedCharRef(bool expand, StringBuilder internalSubsetBuilder)
	{
		return default(int);
	}

	[Token(Token = "0x6000445")]
	[Address(RVA = "0x25F08B0", Offset = "0x25EEEB0", VA = "0x1825F08B0")]
	internal void DtdParserProxy_ParsePI(StringBuilder sb)
	{
	}

	[Token(Token = "0x6000446")]
	[Address(RVA = "0x25F03E0", Offset = "0x25EE9E0", VA = "0x1825F03E0")]
	internal void DtdParserProxy_ParseComment(StringBuilder sb)
	{
	}

	[Token(Token = "0x6000448")]
	[Address(RVA = "0x25F21A0", Offset = "0x25F07A0", VA = "0x1825F21A0")]
	private XmlResolver GetTempResolver()
	{
		return null;
	}

	[Token(Token = "0x6000449")]
	[Address(RVA = "0x25F0980", Offset = "0x25EEF80", VA = "0x1825F0980")]
	internal bool DtdParserProxy_PushEntity(IDtdEntityInfo entity, out int entityId)
	{
		return default(bool);
	}

	[Token(Token = "0x600044A")]
	[Address(RVA = "0x25F0900", Offset = "0x25EEF00", VA = "0x1825F0900")]
	internal bool DtdParserProxy_PopEntity(out IDtdEntityInfo oldEntity, out int newEntityId)
	{
		return default(bool);
	}

	[Token(Token = "0x600044B")]
	[Address(RVA = "0x25F0A50", Offset = "0x25EF050", VA = "0x1825F0A50")]
	internal bool DtdParserProxy_PushExternalSubset(string systemId, string publicId)
	{
		return default(bool);
	}

	[Token(Token = "0x600044C")]
	[Address(RVA = "0x25F0BC0", Offset = "0x25EF1C0", VA = "0x1825F0BC0")]
	internal void DtdParserProxy_PushInternalDtd(string baseUri, string internalDtd)
	{
	}

	[Token(Token = "0x600044D")]
	[Address(RVA = "0x25F0C70", Offset = "0x25EF270", VA = "0x1825F0C70")]
	internal void DtdParserProxy_Throw(Exception e)
	{
	}

	[Token(Token = "0x600044E")]
	[Address(RVA = "0x25F0310", Offset = "0x25EE910", VA = "0x1825F0310")]
	internal void DtdParserProxy_OnSystemId(string systemId, LineInfo keywordLineInfo, LineInfo systemLiteralLineInfo)
	{
	}

	[Token(Token = "0x600044F")]
	[Address(RVA = "0x25F0240", Offset = "0x25EE840", VA = "0x1825F0240")]
	internal void DtdParserProxy_OnPublicId(string publicId, LineInfo keywordLineInfo, LineInfo publicLiteralLineInfo)
	{
	}

	[Token(Token = "0x6000450")]
	[Address(RVA = "0x2600E50", Offset = "0x25FF450", VA = "0x182600E50")]
	private void Throw(int pos, string res, string arg)
	{
	}

	[Token(Token = "0x6000451")]
	[Address(RVA = "0x2600F30", Offset = "0x25FF530", VA = "0x182600F30")]
	private void Throw(int pos, string res, string[] args)
	{
	}

	[Token(Token = "0x6000452")]
	[Address(RVA = "0x2600CC0", Offset = "0x25FF2C0", VA = "0x182600CC0")]
	private void Throw(int pos, string res)
	{
	}

	[Token(Token = "0x6000453")]
	[Address(RVA = "0x2600E70", Offset = "0x25FF470", VA = "0x182600E70")]
	private void Throw(string res)
	{
	}

	[Token(Token = "0x6000454")]
	[Address(RVA = "0x2600C30", Offset = "0x25FF230", VA = "0x182600C30")]
	private void Throw(string res, int lineNo, int linePos)
	{
	}

	[Token(Token = "0x6000455")]
	[Address(RVA = "0x2600D00", Offset = "0x25FF300", VA = "0x182600D00")]
	private void Throw(string res, string arg)
	{
	}

	[Token(Token = "0x6000456")]
	[Address(RVA = "0x2600EA0", Offset = "0x25FF4A0", VA = "0x182600EA0")]
	private void Throw(string res, string arg, int lineNo, int linePos)
	{
	}

	[Token(Token = "0x6000457")]
	[Address(RVA = "0x2600B90", Offset = "0x25FF190", VA = "0x182600B90")]
	private void Throw(string res, string[] args)
	{
	}

	[Token(Token = "0x6000458")]
	[Address(RVA = "0x2600B10", Offset = "0x25FF110", VA = "0x182600B10")]
	private void Throw(string res, string arg, Exception innerException)
	{
	}

	[Token(Token = "0x6000459")]
	[Address(RVA = "0x2600F50", Offset = "0x25FF550", VA = "0x182600F50")]
	private void Throw(string res, string[] args, Exception innerException)
	{
	}

	[Token(Token = "0x600045A")]
	[Address(RVA = "0x2600DA0", Offset = "0x25FF3A0", VA = "0x182600DA0")]
	private void Throw(Exception e)
	{
	}

	[Token(Token = "0x600045B")]
	[Address(RVA = "0x25FCD80", Offset = "0x25FB380", VA = "0x1825FCD80")]
	private void ReThrow(Exception e, int lineNo, int linePos)
	{
	}

	[Token(Token = "0x600045C")]
	[Address(RVA = "0x2600A90", Offset = "0x25FF090", VA = "0x182600A90")]
	private void ThrowWithoutLineInfo(string res)
	{
	}

	[Token(Token = "0x600045D")]
	[Address(RVA = "0x26009A0", Offset = "0x25FEFA0", VA = "0x1826009A0")]
	private void ThrowWithoutLineInfo(string res, string arg)
	{
	}

	[Token(Token = "0x600045E")]
	[Address(RVA = "0x2600A10", Offset = "0x25FF010", VA = "0x182600A10")]
	private void ThrowWithoutLineInfo(string res, string[] args, Exception innerException)
	{
	}

	[Token(Token = "0x600045F")]
	[Address(RVA = "0x26003F0", Offset = "0x25FE9F0", VA = "0x1826003F0")]
	private void ThrowInvalidChar(char[] data, int length, int invCharPos)
	{
	}

	[Token(Token = "0x6000460")]
	[Address(RVA = "0x25FED00", Offset = "0x25FD300", VA = "0x1825FED00")]
	private void SetErrorState()
	{
	}

	[Token(Token = "0x6000461")]
	[Address(RVA = "0x25FEB10", Offset = "0x25FD110", VA = "0x1825FEB10")]
	private void SendValidationEvent(XmlSeverityType severity, string code, string arg, int lineNo, int linePos)
	{
	}

	[Token(Token = "0x6000462")]
	[Address(RVA = "0x25FEA30", Offset = "0x25FD030", VA = "0x1825FEA30")]
	private void SendValidationEvent(XmlSeverityType severity, XmlSchemaException exception)
	{
	}

	[Token(Token = "0x6000464")]
	[Address(RVA = "0x25F0F40", Offset = "0x25EF540", VA = "0x1825F0F40")]
	private void FinishAttributeValueIterator()
	{
	}

	[Token(Token = "0x6000466")]
	[Address(RVA = "0x25F3AE0", Offset = "0x25F20E0", VA = "0x1825F3AE0")]
	private void InitStreamInput(Stream stream, Encoding encoding)
	{
	}

	[Token(Token = "0x6000467")]
	[Address(RVA = "0x25F3B90", Offset = "0x25F2190", VA = "0x1825F3B90")]
	private void InitStreamInput(string baseUriStr, Stream stream, Encoding encoding)
	{
	}

	[Token(Token = "0x6000468")]
	[Address(RVA = "0x25F3B20", Offset = "0x25F2120", VA = "0x1825F3B20")]
	private void InitStreamInput(Uri baseUri, Stream stream, Encoding encoding)
	{
	}

	[Token(Token = "0x6000469")]
	[Address(RVA = "0x25F3BC0", Offset = "0x25F21C0", VA = "0x1825F3BC0")]
	private void InitStreamInput(Uri baseUri, string baseUriStr, Stream stream, Encoding encoding)
	{
	}

	[Token(Token = "0x600046A")]
	[Address(RVA = "0x25F3850", Offset = "0x25F1E50", VA = "0x1825F3850")]
	private void InitStreamInput(Uri baseUri, string baseUriStr, Stream stream, byte[] bytes, int byteCount, Encoding encoding)
	{
	}

	[Token(Token = "0x600046B")]
	[Address(RVA = "0x25F3D00", Offset = "0x25F2300", VA = "0x1825F3D00")]
	private void InitTextReaderInput(string baseUriStr, TextReader input)
	{
	}

	[Token(Token = "0x600046C")]
	[Address(RVA = "0x25F3D20", Offset = "0x25F2320", VA = "0x1825F3D20")]
	private void InitTextReaderInput(string baseUriStr, Uri baseUri, TextReader input)
	{
	}

	[Token(Token = "0x600046D")]
	[Address(RVA = "0x25F3BF0", Offset = "0x25F21F0", VA = "0x1825F3BF0")]
	private void InitStringInput(string baseUriStr, Encoding originalEncoding, string str)
	{
	}

	[Token(Token = "0x600046E")]
	[Address(RVA = "0x25F3590", Offset = "0x25F1B90", VA = "0x1825F3590")]
	private void InitFragmentReader(XmlNodeType fragmentType, XmlParserContext parserContext, bool allowXmlDeclFragment)
	{
	}

	[Token(Token = "0x600046F")]
	[Address(RVA = "0x25FC450", Offset = "0x25FAA50", VA = "0x1825FC450")]
	private void ProcessDtdFromParserContext(XmlParserContext context)
	{
	}

	[Token(Token = "0x6000470")]
	[Address(RVA = "0x25F4F20", Offset = "0x25F3520", VA = "0x1825F4F20")]
	private void OpenUrl()
	{
	}

	[Token(Token = "0x6000471")]
	[Address(RVA = "0x25F4DB0", Offset = "0x25F33B0", VA = "0x1825F4DB0")]
	private void OpenUrlDelegate(object xmlResolver)
	{
	}

	[Token(Token = "0x6000472")]
	[Address(RVA = "0x25F0020", Offset = "0x25EE620", VA = "0x1825F0020")]
	private Encoding DetectEncoding()
	{
		return null;
	}

	[Token(Token = "0x6000473")]
	[Address(RVA = "0x25FED20", Offset = "0x25FD320", VA = "0x1825FED20")]
	private void SetupEncoding(Encoding encoding)
	{
	}

	[Token(Token = "0x6000474")]
	[Address(RVA = "0x26001E0", Offset = "0x25FE7E0", VA = "0x1826001E0")]
	private void SwitchEncoding(Encoding newEncoding)
	{
	}

	[Token(Token = "0x6000475")]
	[Address(RVA = "0x25EFAE0", Offset = "0x25EE0E0", VA = "0x1825EFAE0")]
	private Encoding CheckEncoding(string newEncodingName)
	{
		return null;
	}

	[Token(Token = "0x6000476")]
	[Address(RVA = "0x2600FF0", Offset = "0x25FF5F0", VA = "0x182600FF0")]
	private void UnDecodeChars()
	{
	}

	[Token(Token = "0x6000477")]
	[Address(RVA = "0x2600170", Offset = "0x25FE770", VA = "0x182600170")]
	private void SwitchEncodingToUTF8()
	{
	}

	[Token(Token = "0x6000478")]
	[Address(RVA = "0x25FD1C0", Offset = "0x25FB7C0", VA = "0x1825FD1C0")]
	private int ReadData()
	{
		return default(int);
	}

	[Token(Token = "0x6000479")]
	[Address(RVA = "0x25F1E60", Offset = "0x25F0460", VA = "0x1825F1E60")]
	private int GetChars(int maxCharsCount)
	{
		return default(int);
	}

	[Token(Token = "0x600047A")]
	[Address(RVA = "0x25F3E10", Offset = "0x25F2410", VA = "0x1825F3E10")]
	private void InvalidCharRecovery(ref int bytesCount, out int charsCount)
	{
	}

	[Token(Token = "0x600047B")]
	[Address(RVA = "0x25EFE30", Offset = "0x25EE430", VA = "0x1825EFE30")]
	internal void Close(bool closeInput)
	{
	}

	[Token(Token = "0x600047C")]
	[Address(RVA = "0x25FF330", Offset = "0x25FD930", VA = "0x1825FF330")]
	private void ShiftBuffer(int sourcePos, int destPos, int count)
	{
	}

	[Token(Token = "0x600047D")]
	[Address(RVA = "0x25FB2A0", Offset = "0x25F98A0", VA = "0x1825FB2A0")]
	private bool ParseXmlDeclaration(bool isTextDecl)
	{
		return default(bool);
	}

	[Token(Token = "0x600047E")]
	[Address(RVA = "0x25F74F0", Offset = "0x25F5AF0", VA = "0x1825F74F0")]
	private bool ParseDocumentContent()
	{
		return default(bool);
	}

	[Token(Token = "0x600047F")]
	[Address(RVA = "0x25F7EE0", Offset = "0x25F64E0", VA = "0x1825F7EE0")]
	private bool ParseElementContent()
	{
		return default(bool);
	}

	[Token(Token = "0x6000480")]
	[Address(RVA = "0x2600620", Offset = "0x25FEC20", VA = "0x182600620")]
	private void ThrowUnclosedElements()
	{
	}

	[Token(Token = "0x6000481")]
	[Address(RVA = "0x25F8220", Offset = "0x25F6820", VA = "0x1825F8220")]
	private void ParseElement()
	{
	}

	[Token(Token = "0x6000482")]
	[Address(RVA = "0x25EEA40", Offset = "0x25ED040", VA = "0x1825EEA40")]
	private void AddDefaultAttributesAndNormalize()
	{
	}

	[Token(Token = "0x6000483")]
	[Address(RVA = "0x25F8730", Offset = "0x25F6D30", VA = "0x1825F8730")]
	private void ParseEndElement()
	{
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x2600450", Offset = "0x25FEA50", VA = "0x182600450")]
	private void ThrowTagMismatch(NodeData startTag)
	{
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x25F6330", Offset = "0x25F4930", VA = "0x1825F6330")]
	private void ParseAttributes()
	{
	}

	[Token(Token = "0x6000486")]
	[Address(RVA = "0x25F0ED0", Offset = "0x25EF4D0", VA = "0x1825F0ED0")]
	private void ElementNamespaceLookup()
	{
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x25EF9F0", Offset = "0x25EDFF0", VA = "0x1825EF9F0")]
	private void AttributeNamespaceLookup()
	{
	}

	[Token(Token = "0x6000488")]
	[Address(RVA = "0x25EF5F0", Offset = "0x25EDBF0", VA = "0x1825EF5F0")]
	private void AttributeDuplCheck()
	{
	}

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x25F4600", Offset = "0x25F2C00", VA = "0x1825F4600")]
	private void OnDefaultNamespaceDecl(NodeData attr)
	{
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x25F4800", Offset = "0x25F2E00", VA = "0x1825F4800")]
	private void OnNamespaceDecl(NodeData attr)
	{
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x25F48F0", Offset = "0x25F2EF0", VA = "0x1825F48F0")]
	private void OnXmlReservedAttribute(NodeData attr)
	{
	}

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x25F5850", Offset = "0x25F3E50", VA = "0x1825F5850")]
	private void ParseAttributeValueSlow(int curPos, char quoteChar, NodeData attr)
	{
	}

	[Token(Token = "0x600048D")]
	[Address(RVA = "0x25EDB40", Offset = "0x25EC140", VA = "0x1825EDB40")]
	private void AddAttributeChunkToList(NodeData attr, NodeData chunk, ref NodeData lastChunk)
	{
	}

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x25FA580", Offset = "0x25F8B80", VA = "0x1825FA580")]
	private bool ParseText()
	{
		return default(bool);
	}

	[Token(Token = "0x600048F")]
	[Address(RVA = "0x25FA9F0", Offset = "0x25F8FF0", VA = "0x1825FA9F0")]
	private bool ParseText(out int startPos, out int endPos, ref int outOrChars)
	{
		return default(bool);
	}

	[Token(Token = "0x6000490")]
	[Address(RVA = "0x25F17A0", Offset = "0x25EFDA0", VA = "0x1825F17A0")]
	private void FinishPartialValue()
	{
	}

	[Token(Token = "0x6000491")]
	[Address(RVA = "0x25F1670", Offset = "0x25EFC70", VA = "0x1825F1670")]
	private void FinishOtherValueIterator()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000492")]
	[Address(RVA = "0x25FF700", Offset = "0x25FDD00", VA = "0x1825FF700")]
	private void SkipPartialTextValue()
	{
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x25F1AD0", Offset = "0x25F00D0", VA = "0x1825F1AD0")]
	private void FinishReadValueChunk()
	{
	}

	[Token(Token = "0x6000494")]
	[Address(RVA = "0x25F18D0", Offset = "0x25EFED0", VA = "0x1825F18D0")]
	private void FinishReadContentAsBinary()
	{
	}

	[Token(Token = "0x6000495")]
	[Address(RVA = "0x25F1A10", Offset = "0x25F0010", VA = "0x1825F1A10")]
	private void FinishReadElementContentAsBinary()
	{
	}

	[Token(Token = "0x6000496")]
	[Address(RVA = "0x25FA350", Offset = "0x25F8950", VA = "0x1825FA350")]
	private bool ParseRootLevelWhitespace()
	{
		return default(bool);
	}

	[Token(Token = "0x6000497")]
	[Address(RVA = "0x25F8C00", Offset = "0x25F7200", VA = "0x1825F8C00")]
	private void ParseEntityReference()
	{
	}

	[Token(Token = "0x6000498")]
	[Address(RVA = "0x25F2440", Offset = "0x25F0A40", VA = "0x1825F2440")]
	private EntityType HandleEntityReference(bool isInAttributeValue, EntityExpandType expandType, out int charRefEndPos)
	{
		return default(EntityType);
	}

	[Token(Token = "0x6000499")]
	[Address(RVA = "0x25F26D0", Offset = "0x25F0CD0", VA = "0x1825F26D0")]
	private EntityType HandleGeneralEntityReference(string name, bool isInAttributeValue, bool pushFakeEntityIfNullResolver, int entityStartLinePos)
	{
		return default(EntityType);
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x25F22B0", Offset = "0x25F08B0", VA = "0x1825F22B0")]
	private bool HandleEntityEnd(bool checkEntityNesting)
	{
		return default(bool);
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x25FEF40", Offset = "0x25FD540", VA = "0x1825FEF40")]
	private void SetupEndEntityNodeInContent()
	{
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x25FEEB0", Offset = "0x25FD4B0", VA = "0x1825FEEB0")]
	private void SetupEndEntityNodeInAttribute()
	{
	}

	[Token(Token = "0x600049E")]
	[Address(RVA = "0x25FA0C0", Offset = "0x25F86C0", VA = "0x1825FA0C0")]
	private bool ParsePI()
	{
		return default(bool);
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x25F9CC0", Offset = "0x25F82C0", VA = "0x1825F9CC0")]
	private bool ParsePI(StringBuilder piInDtdStringBuilder)
	{
		return default(bool);
	}

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x25F9920", Offset = "0x25F7F20", VA = "0x1825F9920")]
	private bool ParsePIValue(out int outStartPos, out int outEndPos)
	{
		return default(bool);
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x25F6FF0", Offset = "0x25F55F0", VA = "0x1825F6FF0")]
	private bool ParseComment()
	{
		return default(bool);
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x25F6F60", Offset = "0x25F5560", VA = "0x1825F6F60")]
	private void ParseCData()
	{
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x25F6DA0", Offset = "0x25F53A0", VA = "0x1825F6DA0")]
	private void ParseCDataOrComment(XmlNodeType type)
	{
	}

	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x25F6930", Offset = "0x25F4F30", VA = "0x1825F6930")]
	private bool ParseCDataOrComment(XmlNodeType type, out int outStartPos, out int outEndPos)
	{
		return default(bool);
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x25F7220", Offset = "0x25F5820", VA = "0x1825F7220")]
	private bool ParseDoctypeDecl()
	{
		return default(bool);
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x25F7C40", Offset = "0x25F6240", VA = "0x1825F7C40")]
	private void ParseDtd()
	{
	}

	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x25FF360", Offset = "0x25FD960", VA = "0x1825FF360")]
	private void SkipDtd()
	{
	}

	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x25FF760", Offset = "0x25FDD60", VA = "0x1825FF760")]
	private void SkipPublicOrSystemIdLiteral()
	{
	}

	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x25FF7F0", Offset = "0x25FDDF0", VA = "0x1825FF7F0")]
	private void SkipUntil(char stopChar, bool recognizeLiterals)
	{
	}

	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x25F0C80", Offset = "0x25EF280", VA = "0x1825F0C80")]
	private int EatWhitespaces(StringBuilder sb)
	{
		return default(int);
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x25F6F70", Offset = "0x25F5570", VA = "0x1825F6F70")]
	private int ParseCharRefInline(int startPos, out int charCount, out EntityType entityType)
	{
		return default(int);
	}

	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x25F9850", Offset = "0x25F7E50", VA = "0x1825F9850")]
	private int ParseNumericCharRef(bool expand, StringBuilder internalSubsetBuilder, out EntityType entityType)
	{
		return default(int);
	}

	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x25F90C0", Offset = "0x25F76C0", VA = "0x1825F90C0")]
	private int ParseNumericCharRefInline(int startPos, bool expand, StringBuilder internalSubsetBuilder, out int charCount, out EntityType entityType)
	{
		return default(int);
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x25F9040", Offset = "0x25F7640", VA = "0x1825F9040")]
	private int ParseNamedCharRef(bool expand, StringBuilder internalSubsetBuilder)
	{
		return default(int);
	}

	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x25F8D50", Offset = "0x25F7350", VA = "0x1825F8D50")]
	private int ParseNamedCharRefInline(int startPos, bool expand, StringBuilder internalSubsetBuilder)
	{
		return default(int);
	}

	[Token(Token = "0x60004B0")]
	[Address(RVA = "0x25F8D20", Offset = "0x25F7320", VA = "0x1825F8D20")]
	private int ParseName()
	{
		return default(int);
	}

	[Token(Token = "0x60004B1")]
	[Address(RVA = "0x25FA330", Offset = "0x25F8930", VA = "0x1825FA330")]
	private int ParseQName(out int colonPos)
	{
		return default(int);
	}

	[Token(Token = "0x60004B2")]
	[Address(RVA = "0x25FA0D0", Offset = "0x25F86D0", VA = "0x1825FA0D0")]
	private int ParseQName(bool isQName, int startOffset, out int colonPos)
	{
		return default(int);
	}

	[Token(Token = "0x60004B3")]
	[Address(RVA = "0x25FD180", Offset = "0x25FB780", VA = "0x1825FD180")]
	private bool ReadDataInName(ref int pos)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x25F8B10", Offset = "0x25F7110", VA = "0x1825F8B10")]
	private string ParseEntityName()
	{
		return null;
	}

	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x25EF2D0", Offset = "0x25ED8D0", VA = "0x1825EF2D0")]
	private NodeData AddNode(int nodeIndex, int nodeDepth)
	{
		return null;
	}

	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x25EF470", Offset = "0x25EDA70", VA = "0x1825EF470")]
	private NodeData AllocNode(int nodeIndex, int nodeDepth)
	{
		return null;
	}

	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x25EDBC0", Offset = "0x25EC1C0", VA = "0x1825EDBC0")]
	private NodeData AddAttributeNoChecks(string name, int attrDepth)
	{
		return null;
	}

	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x25EDC50", Offset = "0x25EC250", VA = "0x1825EDC50")]
	private NodeData AddAttribute(int endNamePos, int colonPos)
	{
		return null;
	}

	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x25EDE60", Offset = "0x25EC460", VA = "0x1825EDE60")]
	private NodeData AddAttribute(string localName, string prefix, string nameWPrefix)
	{
		return null;
	}

	[Token(Token = "0x60004BA")]
	[Address(RVA = "0x25FC210", Offset = "0x25FA810", VA = "0x1825FC210")]
	private void PopElementContext()
	{
	}

	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x25F0230", Offset = "0x25EE830", VA = "0x1825F0230")]
	private void OnNewLine(int pos)
	{
	}

	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x25F4730", Offset = "0x25F2D30", VA = "0x1825F4730")]
	private void OnEof()
	{
	}

	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x25F3FC0", Offset = "0x25F25C0", VA = "0x1825F3FC0")]
	private string LookupNamespace(NodeData node)
	{
		return null;
	}

	[Token(Token = "0x60004BE")]
	[Address(RVA = "0x25EF060", Offset = "0x25ED660", VA = "0x1825EF060")]
	private void AddNamespace(string prefix, string uri, NodeData attr)
	{
	}

	[Token(Token = "0x60004BF")]
	[Address(RVA = "0x25FE6D0", Offset = "0x25FCCD0", VA = "0x1825FE6D0")]
	private void ResetAttributes()
	{
	}

	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x25F1B10", Offset = "0x25F0110", VA = "0x1825F1B10")]
	private void FullAttributeCleanup()
	{
	}

	[Token(Token = "0x60004C1")]
	[Address(RVA = "0x25FCCF0", Offset = "0x25FB2F0", VA = "0x1825FCCF0")]
	private void PushXmlContext()
	{
	}

	[Token(Token = "0x60004C2")]
	[Address(RVA = "0x25FC400", Offset = "0x25FAA00", VA = "0x1825FC400")]
	private void PopXmlContext()
	{
	}

	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x25F2260", Offset = "0x25F0860", VA = "0x1825F2260")]
	private XmlNodeType GetWhitespaceType()
	{
		return default(XmlNodeType);
	}

	[Token(Token = "0x60004C4")]
	[Address(RVA = "0x25F2200", Offset = "0x25F0800", VA = "0x1825F2200")]
	private XmlNodeType GetTextNodeType(int orChars)
	{
		return default(XmlNodeType);
	}

	[Token(Token = "0x60004C5")]
	[Address(RVA = "0x25FC4C0", Offset = "0x25FAAC0", VA = "0x1825FC4C0")]
	private void PushExternalEntityOrSubset(string publicId, string systemId, Uri baseUri, string entityName)
	{
	}

	[Token(Token = "0x60004C6")]
	[Address(RVA = "0x25F4B20", Offset = "0x25F3120", VA = "0x1825F4B20")]
	private bool OpenAndPush(Uri uri)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C7")]
	[Address(RVA = "0x25FC7F0", Offset = "0x25FADF0", VA = "0x1825FC7F0")]
	private bool PushExternalEntity(IDtdEntityInfo entity)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C8")]
	[Address(RVA = "0x25FC9F0", Offset = "0x25FAFF0", VA = "0x1825FC9F0")]
	private void PushInternalEntity(IDtdEntityInfo entity)
	{
	}

	[Token(Token = "0x60004C9")]
	[Address(RVA = "0x25FC290", Offset = "0x25FA890", VA = "0x1825FC290")]
	private void PopEntity()
	{
	}

	[Token(Token = "0x60004CA")]
	[Address(RVA = "0x25FE4A0", Offset = "0x25FCAA0", VA = "0x1825FE4A0")]
	private void RegisterEntity(IDtdEntityInfo entity)
	{
	}

	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x26010A0", Offset = "0x25FF6A0", VA = "0x1826010A0")]
	private void UnregisterEntity()
	{
	}

	[Token(Token = "0x60004CC")]
	[Address(RVA = "0x25FCB50", Offset = "0x25FB150", VA = "0x1825FCB50")]
	private void PushParsingState()
	{
	}

	[Token(Token = "0x60004CD")]
	[Address(RVA = "0x25FC330", Offset = "0x25FA930", VA = "0x1825FC330")]
	private void PopParsingState()
	{
	}

	[Token(Token = "0x60004CE")]
	[Address(RVA = "0x25F2B50", Offset = "0x25F1150", VA = "0x1825F2B50")]
	private int IncrementalRead()
	{
		return default(int);
	}

	[Token(Token = "0x60004CF")]
	[Address(RVA = "0x25F10D0", Offset = "0x25EF6D0", VA = "0x1825F10D0")]
	private void FinishIncrementalRead()
	{
	}

	[Token(Token = "0x60004D0")]
	[Address(RVA = "0x25F8C80", Offset = "0x25F7280", VA = "0x1825F8C80")]
	private bool ParseFragmentAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x60004D1")]
	[Address(RVA = "0x25F5250", Offset = "0x25F3850", VA = "0x1825F5250")]
	private bool ParseAttributeValueChunk()
	{
		return default(bool);
	}

	[Token(Token = "0x60004D2")]
	[Address(RVA = "0x25FB210", Offset = "0x25F9810", VA = "0x1825FB210")]
	private void ParseXmlDeclarationFragment()
	{
	}

	[Token(Token = "0x60004D3")]
	[Address(RVA = "0x2600830", Offset = "0x25FEE30", VA = "0x182600830")]
	private void ThrowUnexpectedToken(int pos, string expectedToken)
	{
	}

	[Token(Token = "0x60004D4")]
	[Address(RVA = "0x2600820", Offset = "0x25FEE20", VA = "0x182600820")]
	private void ThrowUnexpectedToken(string expectedToken1)
	{
	}

	[Token(Token = "0x60004D5")]
	[Address(RVA = "0x2600800", Offset = "0x25FEE00", VA = "0x182600800")]
	private void ThrowUnexpectedToken(int pos, string expectedToken1, string expectedToken2)
	{
	}

	[Token(Token = "0x60004D6")]
	[Address(RVA = "0x2600850", Offset = "0x25FEE50", VA = "0x182600850")]
	private void ThrowUnexpectedToken(string expectedToken1, string expectedToken2)
	{
	}

	[Token(Token = "0x60004D7")]
	[Address(RVA = "0x25FB110", Offset = "0x25F9710", VA = "0x1825FB110")]
	private string ParseUnexpectedToken(int pos)
	{
		return null;
	}

	[Token(Token = "0x60004D8")]
	[Address(RVA = "0x25FB120", Offset = "0x25F9720", VA = "0x1825FB120")]
	private string ParseUnexpectedToken()
	{
		return null;
	}

	[Token(Token = "0x60004D9")]
	[Address(RVA = "0x2600370", Offset = "0x25FE970", VA = "0x182600370")]
	private void ThrowExpectingWhitespace(int pos)
	{
	}

	[Token(Token = "0x60004DA")]
	[Address(RVA = "0x25F2020", Offset = "0x25F0620", VA = "0x1825F2020")]
	private int GetIndexOfAttributeWithoutPrefix(string name)
	{
		return default(int);
	}

	[Token(Token = "0x60004DB")]
	[Address(RVA = "0x25F1F40", Offset = "0x25F0540", VA = "0x1825F1F40")]
	private int GetIndexOfAttributeWithPrefix(string name)
	{
		return default(int);
	}

	[Token(Token = "0x60004DC")]
	[Address(RVA = "0x26011E0", Offset = "0x25FF7E0", VA = "0x1826011E0")]
	private bool ZeroEndingStream(int pos)
	{
		return default(bool);
	}

	[Token(Token = "0x60004DD")]
	[Address(RVA = "0x25F7A40", Offset = "0x25F6040", VA = "0x1825F7A40")]
	private void ParseDtdFromParserContext()
	{
	}

	[Token(Token = "0x60004DE")]
	[Address(RVA = "0x25F4500", Offset = "0x25F2B00", VA = "0x1825F4500")]
	private bool MoveToNextContentNode(bool moveIfOnContentNode)
	{
		return default(bool);
	}

	[Token(Token = "0x60004DF")]
	[Address(RVA = "0x25FF080", Offset = "0x25FD680", VA = "0x1825FF080")]
	private void SetupFromParserContext(XmlParserContext context, XmlReaderSettings settings)
	{
	}

	[Token(Token = "0x60004E1")]
	[Address(RVA = "0x25FEC40", Offset = "0x25FD240", VA = "0x1825FEC40")]
	internal void SetDtdInfo(IDtdInfo newDtdInfo)
	{
	}

	[Token(Token = "0x60004E6")]
	[Address(RVA = "0x25EFAC0", Offset = "0x25EE0C0", VA = "0x1825EFAC0")]
	internal void ChangeCurrentNodeType(XmlNodeType newNodeType)
	{
	}

	[Token(Token = "0x60004E7")]
	[Address(RVA = "0x25F2160", Offset = "0x25F0760", VA = "0x1825F2160")]
	internal XmlResolver GetResolver()
	{
		return null;
	}

	[Token(Token = "0x60004EE")]
	[Address(RVA = "0x25EDFB0", Offset = "0x25EC5B0", VA = "0x1825EDFB0")]
	private bool AddDefaultAttributeDtd(IDtdDefaultAttributeInfo defAttrInfo, bool definedInDtd, NodeData[] nameSortedNodeData)
	{
		return default(bool);
	}

	[Token(Token = "0x60004EF")]
	[Address(RVA = "0x25EE7E0", Offset = "0x25ECDE0", VA = "0x1825EE7E0")]
	internal bool AddDefaultAttributeNonDtd(SchemaAttDef attrDef)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F0")]
	[Address(RVA = "0x25EE530", Offset = "0x25ECB30", VA = "0x1825EE530")]
	private NodeData AddDefaultAttributeInternal(string localName, string ns, string prefix, string value, int lineNo, int linePos, int valueLineNo, int valueLinePos, bool isXmlAttribute)
	{
		return null;
	}

	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x2601100", Offset = "0x25FF700", VA = "0x182601100")]
	private bool UriEqual(Uri uri1, string uri1Str, string uri2Str, XmlResolver resolver)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x25FE370", Offset = "0x25FC970", VA = "0x1825FE370")]
	private void RegisterConsumedCharacters(long characters, bool inEntityReference)
	{
	}

	[Token(Token = "0x60004F4")]
	[Address(RVA = "0x25FFE80", Offset = "0x25FE480", VA = "0x1825FFE80")]
	internal static string StripSpaces(string value)
	{
		return null;
	}

	[Token(Token = "0x60004F5")]
	[Address(RVA = "0x2600060", Offset = "0x25FE660", VA = "0x182600060")]
	internal static void StripSpaces(char[] value, int index, ref int len)
	{
	}

	[Token(Token = "0x60004F6")]
	[Address(RVA = "0x1BD9530", Offset = "0x1BD7B30", VA = "0x181BD9530")]
	internal static void BlockCopyChars(char[] src, int srcOffset, char[] dst, int dstOffset, int count)
	{
	}

	[Token(Token = "0x60004F7")]
	[Address(RVA = "0x25EFAB0", Offset = "0x25EE0B0", VA = "0x1825EFAB0")]
	internal static void BlockCopy(byte[] src, int srcOffset, byte[] dst, int dstOffset, int count)
	{
	}
}
