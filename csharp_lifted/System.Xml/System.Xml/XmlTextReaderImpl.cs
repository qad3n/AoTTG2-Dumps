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
		[Address(RVA = "0x60A9DB0", Offset = "0x60A8DB0", VA = "0x60A9DB0")]
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
			[Address(RVA = "0x60A9ED0", Offset = "0x60A8ED0", VA = "0x60A9ED0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000117")]
		internal int LinePos
		{
			[Token(Token = "0x60004FC")]
			[Address(RVA = "0x60A9EE0", Offset = "0x60A8EE0", VA = "0x60A9EE0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x60004F9")]
		[Address(RVA = "0x60A9DC0", Offset = "0x60A8DC0", VA = "0x60A9DC0")]
		internal void Clear()
		{
		}

		[Token(Token = "0x60004FA")]
		[Address(RVA = "0x60A9E90", Offset = "0x60A8E90", VA = "0x60A9E90")]
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
		[Address(RVA = "0x60A9EF0", Offset = "0x60A8EF0", VA = "0x60A9EF0")]
		internal XmlContext()
		{
		}

		[Token(Token = "0x60004FE")]
		[Address(RVA = "0x60A9F70", Offset = "0x60A8F70", VA = "0x60A9F70")]
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
			[Address(RVA = "0x60A9FE0", Offset = "0x60A8FE0", VA = "0x60A9FE0", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60004FF")]
		[Address(RVA = "0x60A9FD0", Offset = "0x60A8FD0", VA = "0x60A9FD0")]
		public NoNamespaceManager()
		{
		}

		[Token(Token = "0x6000501")]
		[Address(RVA = "0x60AA000", Offset = "0x60A9000", VA = "0x60AA000", Slot = "10")]
		public override void PushScope()
		{
		}

		[Token(Token = "0x6000502")]
		[Address(RVA = "0x60AA010", Offset = "0x60A9010", VA = "0x60AA010", Slot = "11")]
		public override bool PopScope()
		{
			return default(bool);
		}

		[Token(Token = "0x6000503")]
		[Address(RVA = "0x60AA020", Offset = "0x60A9020", VA = "0x60AA020", Slot = "12")]
		public override void AddNamespace(string prefix, string uri)
		{
		}

		[Token(Token = "0x6000504")]
		[Address(RVA = "0x60AA030", Offset = "0x60A9030", VA = "0x60AA030", Slot = "13")]
		public override void RemoveNamespace(string prefix, string uri)
		{
		}

		[Token(Token = "0x6000505")]
		[Address(RVA = "0x60AA040", Offset = "0x60A9040", VA = "0x60AA040", Slot = "14")]
		public override IEnumerator GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000506")]
		[Address(RVA = "0x60AA050", Offset = "0x60A9050", VA = "0x60AA050", Slot = "15")]
		public override IDictionary<string, string> GetNamespacesInScope(XmlNamespaceScope scope)
		{
			return null;
		}

		[Token(Token = "0x6000507")]
		[Address(RVA = "0x60AA060", Offset = "0x60A9060", VA = "0x60AA060", Slot = "16")]
		public override string LookupNamespace(string prefix)
		{
			return null;
		}

		[Token(Token = "0x6000508")]
		[Address(RVA = "0x60AA080", Offset = "0x60A9080", VA = "0x60AA080", Slot = "17")]
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
			[Address(RVA = "0x60AA0C0", Offset = "0x60A90C0", VA = "0x60AA0C0", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700011A")]
		private IXmlNamespaceResolver System_002EXml_002EIDtdParserAdapter_002ENamespaceResolver
		{
			[Token(Token = "0x600050B")]
			[Address(RVA = "0x60AA0E0", Offset = "0x60A90E0", VA = "0x60AA0E0", Slot = "10")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700011B")]
		private Uri System_002EXml_002EIDtdParserAdapter_002EBaseUri
		{
			[Token(Token = "0x600050C")]
			[Address(RVA = "0x60AA100", Offset = "0x60A9100", VA = "0x60AA100", Slot = "11")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700011C")]
		private bool System_002EXml_002EIDtdParserAdapter_002EIsEof
		{
			[Token(Token = "0x600050D")]
			[Address(RVA = "0x60AA120", Offset = "0x60A9120", VA = "0x60AA120", Slot = "18")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700011D")]
		private char[] System_002EXml_002EIDtdParserAdapter_002EParsingBuffer
		{
			[Token(Token = "0x600050E")]
			[Address(RVA = "0x60AA140", Offset = "0x60A9140", VA = "0x60AA140", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700011E")]
		private int System_002EXml_002EIDtdParserAdapter_002EParsingBufferLength
		{
			[Token(Token = "0x600050F")]
			[Address(RVA = "0x60AA160", Offset = "0x60A9160", VA = "0x60AA160", Slot = "13")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700011F")]
		private int System_002EXml_002EIDtdParserAdapter_002ECurrentPosition
		{
			[Token(Token = "0x6000510")]
			[Address(RVA = "0x60AA180", Offset = "0x60A9180", VA = "0x60AA180", Slot = "14")]
			get
			{
				return default(int);
			}
			[Token(Token = "0x6000511")]
			[Address(RVA = "0x60AA1A0", Offset = "0x60A91A0", VA = "0x60AA1A0", Slot = "15")]
			set
			{
			}
		}

		[Token(Token = "0x17000120")]
		private int System_002EXml_002EIDtdParserAdapter_002EEntityStackLength
		{
			[Token(Token = "0x6000512")]
			[Address(RVA = "0x60AA1C0", Offset = "0x60A91C0", VA = "0x60AA1C0", Slot = "19")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000121")]
		private bool System_002EXml_002EIDtdParserAdapter_002EIsEntityEolNormalized
		{
			[Token(Token = "0x6000513")]
			[Address(RVA = "0x60AA1E0", Offset = "0x60A91E0", VA = "0x60AA1E0", Slot = "20")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000122")]
		private int System_002EXml_002EIDtdParserAdapter_002ELineNo
		{
			[Token(Token = "0x6000515")]
			[Address(RVA = "0x60AA220", Offset = "0x60A9220", VA = "0x60AA220", Slot = "16")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000123")]
		private int System_002EXml_002EIDtdParserAdapter_002ELineStartPosition
		{
			[Token(Token = "0x6000516")]
			[Address(RVA = "0x60AA240", Offset = "0x60A9240", VA = "0x60AA240", Slot = "17")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000124")]
		private bool System_002EXml_002EIDtdParserAdapterWithValidation_002EDtdValidation
		{
			[Token(Token = "0x6000523")]
			[Address(RVA = "0x60AA3E0", Offset = "0x60A93E0", VA = "0x60AA3E0", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000125")]
		private IValidationEventHandling System_002EXml_002EIDtdParserAdapterWithValidation_002EValidationEventHandling
		{
			[Token(Token = "0x6000524")]
			[Address(RVA = "0x60AA400", Offset = "0x60A9400", VA = "0x60AA400", Slot = "8")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000126")]
		private bool System_002EXml_002EIDtdParserAdapterV1_002ENormalization
		{
			[Token(Token = "0x6000525")]
			[Address(RVA = "0x60AA420", Offset = "0x60A9420", VA = "0x60AA420", Slot = "5")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000127")]
		private bool System_002EXml_002EIDtdParserAdapterV1_002ENamespaces
		{
			[Token(Token = "0x6000526")]
			[Address(RVA = "0x60AA440", Offset = "0x60A9440", VA = "0x60AA440", Slot = "6")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000128")]
		private bool System_002EXml_002EIDtdParserAdapterV1_002EV1CompatibilityMode
		{
			[Token(Token = "0x6000527")]
			[Address(RVA = "0x60AA460", Offset = "0x60A9460", VA = "0x60AA460", Slot = "4")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000509")]
		[Address(RVA = "0x60AA090", Offset = "0x60A9090", VA = "0x60AA090")]
		internal DtdParserProxy(XmlTextReaderImpl reader)
		{
		}

		[Token(Token = "0x6000514")]
		[Address(RVA = "0x60AA200", Offset = "0x60A9200", VA = "0x60AA200", Slot = "22")]
		private void System_002EXml_002EIDtdParserAdapter_002EOnNewLine(int pos)
		{
		}

		[Token(Token = "0x6000517")]
		[Address(RVA = "0x60AA260", Offset = "0x60A9260", VA = "0x60AA260", Slot = "21")]
		private int System_002EXml_002EIDtdParserAdapter_002EReadData()
		{
			return default(int);
		}

		[Token(Token = "0x6000518")]
		[Address(RVA = "0x60AA280", Offset = "0x60A9280", VA = "0x60AA280", Slot = "23")]
		private int System_002EXml_002EIDtdParserAdapter_002EParseNumericCharRef(StringBuilder internalSubsetBuilder)
		{
			return default(int);
		}

		[Token(Token = "0x6000519")]
		[Address(RVA = "0x60AA2A0", Offset = "0x60A92A0", VA = "0x60AA2A0", Slot = "24")]
		private int System_002EXml_002EIDtdParserAdapter_002EParseNamedCharRef(bool expand, StringBuilder internalSubsetBuilder)
		{
			return default(int);
		}

		[Token(Token = "0x600051A")]
		[Address(RVA = "0x60AA2C0", Offset = "0x60A92C0", VA = "0x60AA2C0", Slot = "25")]
		private void System_002EXml_002EIDtdParserAdapter_002EParsePI(StringBuilder sb)
		{
		}

		[Token(Token = "0x600051B")]
		[Address(RVA = "0x60AA2E0", Offset = "0x60A92E0", VA = "0x60AA2E0", Slot = "26")]
		private void System_002EXml_002EIDtdParserAdapter_002EParseComment(StringBuilder sb)
		{
		}

		[Token(Token = "0x600051C")]
		[Address(RVA = "0x60AA300", Offset = "0x60A9300", VA = "0x60AA300", Slot = "27")]
		private bool System_002EXml_002EIDtdParserAdapter_002EPushEntity(IDtdEntityInfo entity, out int entityId)
		{
			return default(bool);
		}

		[Token(Token = "0x600051D")]
		[Address(RVA = "0x60AA320", Offset = "0x60A9320", VA = "0x60AA320", Slot = "28")]
		private bool System_002EXml_002EIDtdParserAdapter_002EPopEntity(out IDtdEntityInfo oldEntity, out int newEntityId)
		{
			return default(bool);
		}

		[Token(Token = "0x600051E")]
		[Address(RVA = "0x60AA340", Offset = "0x60A9340", VA = "0x60AA340", Slot = "29")]
		private bool System_002EXml_002EIDtdParserAdapter_002EPushExternalSubset(string systemId, string publicId)
		{
			return default(bool);
		}

		[Token(Token = "0x600051F")]
		[Address(RVA = "0x60AA360", Offset = "0x60A9360", VA = "0x60AA360", Slot = "30")]
		private void System_002EXml_002EIDtdParserAdapter_002EPushInternalDtd(string baseUri, string internalDtd)
		{
		}

		[Token(Token = "0x6000520")]
		[Address(RVA = "0x60AA380", Offset = "0x60A9380", VA = "0x60AA380", Slot = "33")]
		private void System_002EXml_002EIDtdParserAdapter_002EThrow(Exception e)
		{
		}

		[Token(Token = "0x6000521")]
		[Address(RVA = "0x60AA3A0", Offset = "0x60A93A0", VA = "0x60AA3A0", Slot = "31")]
		private void System_002EXml_002EIDtdParserAdapter_002EOnSystemId(string systemId, LineInfo keywordLineInfo, LineInfo systemLiteralLineInfo)
		{
		}

		[Token(Token = "0x6000522")]
		[Address(RVA = "0x60AA3C0", Offset = "0x60A93C0", VA = "0x60AA3C0", Slot = "32")]
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
			[Address(RVA = "0x60AA480", Offset = "0x60A9480", VA = "0x60AA480")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700012A")]
		internal int LineNo
		{
			[Token(Token = "0x600052A")]
			[Address(RVA = "0x60AA660", Offset = "0x60A9660", VA = "0x60AA660")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700012B")]
		internal int LinePos
		{
			[Token(Token = "0x600052B")]
			[Address(RVA = "0x60AA670", Offset = "0x60A9670", VA = "0x60AA670")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700012C")]
		internal bool IsEmptyElement
		{
			[Token(Token = "0x600052C")]
			[Address(RVA = "0x60AA680", Offset = "0x60A9680", VA = "0x60AA680")]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x600052D")]
			[Address(RVA = "0x60AA6A0", Offset = "0x60A96A0", VA = "0x60AA6A0")]
			set
			{
			}
		}

		[Token(Token = "0x1700012D")]
		internal bool IsDefaultAttribute
		{
			[Token(Token = "0x600052E")]
			[Address(RVA = "0x60AA6B0", Offset = "0x60A96B0", VA = "0x60AA6B0")]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x600052F")]
			[Address(RVA = "0x60AA6D0", Offset = "0x60A96D0", VA = "0x60AA6D0")]
			set
			{
			}
		}

		[Token(Token = "0x1700012E")]
		internal bool ValueBuffered
		{
			[Token(Token = "0x6000530")]
			[Address(RVA = "0x60AA6E0", Offset = "0x60A96E0", VA = "0x60AA6E0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700012F")]
		internal string StringValue
		{
			[Token(Token = "0x6000531")]
			[Address(RVA = "0x60AA6F0", Offset = "0x60A96F0", VA = "0x60AA6F0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000529")]
		[Address(RVA = "0x60AA530", Offset = "0x60A9530", VA = "0x60AA530")]
		internal NodeData()
		{
		}

		[Token(Token = "0x6000532")]
		[Address(RVA = "0x60AA740", Offset = "0x60A9740", VA = "0x60AA740")]
		internal void TrimSpacesInValue()
		{
		}

		[Token(Token = "0x6000533")]
		[Address(RVA = "0x60AA550", Offset = "0x60A9550", VA = "0x60AA550")]
		internal void Clear(XmlNodeType type)
		{
		}

		[Token(Token = "0x6000534")]
		[Address(RVA = "0x60AA780", Offset = "0x60A9780", VA = "0x60AA780")]
		internal void ClearName()
		{
		}

		[Token(Token = "0x6000535")]
		[Address(RVA = "0x60AA810", Offset = "0x60A9810", VA = "0x60AA810")]
		internal void SetLineInfo(int lineNo, int linePos)
		{
		}

		[Token(Token = "0x6000536")]
		[Address(RVA = "0x60AA820", Offset = "0x60A9820", VA = "0x60AA820")]
		internal void SetLineInfo2(int lineNo, int linePos)
		{
		}

		[Token(Token = "0x6000537")]
		[Address(RVA = "0x60AA830", Offset = "0x60A9830", VA = "0x60AA830")]
		internal void SetValueNode(XmlNodeType type, string value)
		{
		}

		[Token(Token = "0x6000538")]
		[Address(RVA = "0x60AA8E0", Offset = "0x60A98E0", VA = "0x60AA8E0")]
		internal void SetValueNode(XmlNodeType type, char[] chars, int startPos, int len)
		{
		}

		[Token(Token = "0x6000539")]
		[Address(RVA = "0x60AA9B0", Offset = "0x60A99B0", VA = "0x60AA9B0")]
		internal void SetNamedNode(XmlNodeType type, string localName)
		{
		}

		[Token(Token = "0x600053A")]
		[Address(RVA = "0x60AAA60", Offset = "0x60A9A60", VA = "0x60AAA60")]
		internal void SetNamedNode(XmlNodeType type, string localName, string prefix, string nameWPrefix)
		{
		}

		[Token(Token = "0x600053B")]
		[Address(RVA = "0x60AAB00", Offset = "0x60A9B00", VA = "0x60AAB00")]
		internal void SetValue(string value)
		{
		}

		[Token(Token = "0x600053C")]
		[Address(RVA = "0x60AAB20", Offset = "0x60A9B20", VA = "0x60AAB20")]
		internal void SetValue(char[] chars, int startPos, int len)
		{
		}

		[Token(Token = "0x600053D")]
		[Address(RVA = "0x60AAB70", Offset = "0x60A9B70", VA = "0x60AAB70")]
		internal void OnBufferInvalidated()
		{
		}

		[Token(Token = "0x600053E")]
		[Address(RVA = "0x60AABC0", Offset = "0x60A9BC0", VA = "0x60AABC0")]
		internal void CopyTo(int valueOffset, StringBuilder sb)
		{
		}

		[Token(Token = "0x600053F")]
		[Address(RVA = "0x60AAC20", Offset = "0x60A9C20", VA = "0x60AAC20")]
		internal int CopyTo(int valueOffset, char[] buffer, int offset, int length)
		{
			return default(int);
		}

		[Token(Token = "0x6000540")]
		[Address(RVA = "0x60AAC70", Offset = "0x60A9C70", VA = "0x60AAC70")]
		internal string GetNameWPrefix(XmlNameTable nt)
		{
			return null;
		}

		[Token(Token = "0x6000541")]
		[Address(RVA = "0x60AAC80", Offset = "0x60A9C80", VA = "0x60AAC80")]
		internal string CreateNameWPrefix(XmlNameTable nt)
		{
			return null;
		}

		[Token(Token = "0x6000542")]
		[Address(RVA = "0x60AAD20", Offset = "0x60A9D20", VA = "0x60AAD20", Slot = "4")]
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
			[Address(RVA = "0x60AADE0", Offset = "0x60A9DE0", VA = "0x60AADE0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000544")]
		[Address(RVA = "0x60AAE50", Offset = "0x60A9E50", VA = "0x60AAE50", Slot = "4")]
		public int Compare(object x, object y)
		{
			return default(int);
		}

		[Token(Token = "0x6000545")]
		[Address(RVA = "0x60AB1D0", Offset = "0x60AA1D0", VA = "0x60AB1D0")]
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
		[Address(RVA = "0x5FAAEC0", Offset = "0x5FA9EC0", VA = "0x5FAAEC0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DB")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x60003FA")]
		[Address(RVA = "0x5FAB030", Offset = "0x5FAA030", VA = "0x5FAB030", Slot = "6")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x170000DC")]
	public override string Name
	{
		[Token(Token = "0x60003FB")]
		[Address(RVA = "0x5FAB050", Offset = "0x5FAA050", VA = "0x5FAB050", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DD")]
	public override string LocalName
	{
		[Token(Token = "0x60003FC")]
		[Address(RVA = "0x5FAB080", Offset = "0x5FAA080", VA = "0x5FAB080", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DE")]
	public override string NamespaceURI
	{
		[Token(Token = "0x60003FD")]
		[Address(RVA = "0x5FAB0A0", Offset = "0x5FAA0A0", VA = "0x5FAB0A0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DF")]
	public override string Prefix
	{
		[Token(Token = "0x60003FE")]
		[Address(RVA = "0x5FAB0C0", Offset = "0x5FAA0C0", VA = "0x5FAB0C0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E0")]
	public override string Value
	{
		[Token(Token = "0x60003FF")]
		[Address(RVA = "0x5FAB0E0", Offset = "0x5FAA0E0", VA = "0x5FAB0E0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E1")]
	public override int Depth
	{
		[Token(Token = "0x6000400")]
		[Address(RVA = "0x5FAB370", Offset = "0x5FAA370", VA = "0x5FAB370", Slot = "12")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000E2")]
	public override string BaseURI
	{
		[Token(Token = "0x6000401")]
		[Address(RVA = "0x5FAB390", Offset = "0x5FAA390", VA = "0x5FAB390", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E3")]
	public override bool IsEmptyElement
	{
		[Token(Token = "0x6000402")]
		[Address(RVA = "0x5FAB3A0", Offset = "0x5FAA3A0", VA = "0x5FAB3A0", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E4")]
	public override bool IsDefault
	{
		[Token(Token = "0x6000403")]
		[Address(RVA = "0x5FAB3C0", Offset = "0x5FAA3C0", VA = "0x5FAB3C0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E5")]
	public override char QuoteChar
	{
		[Token(Token = "0x6000404")]
		[Address(RVA = "0x5FAB3E0", Offset = "0x5FAA3E0", VA = "0x5FAB3E0", Slot = "16")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x170000E6")]
	public override XmlSpace XmlSpace
	{
		[Token(Token = "0x6000405")]
		[Address(RVA = "0x5FAB410", Offset = "0x5FAA410", VA = "0x5FAB410", Slot = "17")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x170000E7")]
	public override string XmlLang
	{
		[Token(Token = "0x6000406")]
		[Address(RVA = "0x5FAB430", Offset = "0x5FAA430", VA = "0x5FAB430", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E8")]
	public override ReadState ReadState
	{
		[Token(Token = "0x6000407")]
		[Address(RVA = "0x5FAB450", Offset = "0x5FAA450", VA = "0x5FAB450", Slot = "34")]
		get
		{
			return default(ReadState);
		}
	}

	[Token(Token = "0x170000E9")]
	public override bool EOF
	{
		[Token(Token = "0x6000408")]
		[Address(RVA = "0x5FAB460", Offset = "0x5FAA460", VA = "0x5FAB460", Slot = "32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EA")]
	public override XmlNameTable NameTable
	{
		[Token(Token = "0x6000409")]
		[Address(RVA = "0x5FAB470", Offset = "0x5FAA470", VA = "0x5FAB470", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000EB")]
	public override bool CanResolveEntity
	{
		[Token(Token = "0x600040A")]
		[Address(RVA = "0x5FAB480", Offset = "0x5FAA480", VA = "0x5FAB480", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EC")]
	public override int AttributeCount
	{
		[Token(Token = "0x600040B")]
		[Address(RVA = "0x5FAB490", Offset = "0x5FAA490", VA = "0x5FAB490", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000ED")]
	internal XmlReader OuterReader
	{
		[Token(Token = "0x600041B")]
		[Address(RVA = "0x5FAFA20", Offset = "0x5FAEA20", VA = "0x5FAFA20")]
		set
		{
		}
	}

	[Token(Token = "0x170000EE")]
	public override bool CanReadValueChunk
	{
		[Token(Token = "0x600041E")]
		[Address(RVA = "0x5FAFB20", Offset = "0x5FAEB20", VA = "0x5FAFB20", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EF")]
	public int LineNumber
	{
		[Token(Token = "0x6000421")]
		[Address(RVA = "0x5FB0800", Offset = "0x5FAF800", VA = "0x5FB0800", Slot = "54")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000F0")]
	public int LinePosition
	{
		[Token(Token = "0x6000422")]
		[Address(RVA = "0x5FB0820", Offset = "0x5FAF820", VA = "0x5FB0820", Slot = "55")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000F1")]
	internal bool Namespaces
	{
		[Token(Token = "0x6000428")]
		[Address(RVA = "0x5FB0920", Offset = "0x5FAF920", VA = "0x5FB0920")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000429")]
		[Address(RVA = "0x5FB0930", Offset = "0x5FAF930", VA = "0x5FB0930")]
		set
		{
		}
	}

	[Token(Token = "0x170000F2")]
	internal bool Normalization
	{
		[Token(Token = "0x600042A")]
		[Address(RVA = "0x5FB0B70", Offset = "0x5FAFB70", VA = "0x5FB0B70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600042B")]
		[Address(RVA = "0x5FB0B80", Offset = "0x5FAFB80", VA = "0x5FB0B80")]
		set
		{
		}
	}

	[Token(Token = "0x170000F3")]
	internal WhitespaceHandling WhitespaceHandling
	{
		[Token(Token = "0x600042C")]
		[Address(RVA = "0x5FB0CA0", Offset = "0x5FAFCA0", VA = "0x5FB0CA0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F4")]
	internal EntityHandling EntityHandling
	{
		[Token(Token = "0x600042D")]
		[Address(RVA = "0x5FB0D70", Offset = "0x5FAFD70", VA = "0x5FB0D70")]
		set
		{
		}
	}

	[Token(Token = "0x170000F5")]
	internal bool IsResolverSet
	{
		[Token(Token = "0x600042E")]
		[Address(RVA = "0x5FB0DF0", Offset = "0x5FAFDF0", VA = "0x5FB0DF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F6")]
	internal XmlResolver XmlResolver
	{
		[Token(Token = "0x600042F")]
		[Address(RVA = "0x5FB0E00", Offset = "0x5FAFE00", VA = "0x5FB0E00")]
		set
		{
		}
	}

	[Token(Token = "0x170000F7")]
	internal XmlNameTable DtdParserProxy_NameTable
	{
		[Token(Token = "0x6000430")]
		[Address(RVA = "0x5FB0EA0", Offset = "0x5FAFEA0", VA = "0x5FB0EA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F8")]
	internal IXmlNamespaceResolver DtdParserProxy_NamespaceResolver
	{
		[Token(Token = "0x6000431")]
		[Address(RVA = "0x5FB0EB0", Offset = "0x5FAFEB0", VA = "0x5FB0EB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F9")]
	internal bool DtdParserProxy_DtdValidation
	{
		[Token(Token = "0x6000432")]
		[Address(RVA = "0x5FB0EC0", Offset = "0x5FAFEC0", VA = "0x5FB0EC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FA")]
	internal bool DtdParserProxy_Normalization
	{
		[Token(Token = "0x6000433")]
		[Address(RVA = "0x5FB0EE0", Offset = "0x5FAFEE0", VA = "0x5FB0EE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FB")]
	internal bool DtdParserProxy_Namespaces
	{
		[Token(Token = "0x6000434")]
		[Address(RVA = "0x5FB0EF0", Offset = "0x5FAFEF0", VA = "0x5FB0EF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FC")]
	internal bool DtdParserProxy_V1CompatibilityMode
	{
		[Token(Token = "0x6000435")]
		[Address(RVA = "0x5FB0F00", Offset = "0x5FAFF00", VA = "0x5FB0F00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FD")]
	internal Uri DtdParserProxy_BaseUri
	{
		[Token(Token = "0x6000436")]
		[Address(RVA = "0x5FB0F10", Offset = "0x5FAFF10", VA = "0x5FB0F10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FE")]
	internal bool DtdParserProxy_IsEof
	{
		[Token(Token = "0x6000437")]
		[Address(RVA = "0x5FB0FC0", Offset = "0x5FAFFC0", VA = "0x5FB0FC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FF")]
	internal char[] DtdParserProxy_ParsingBuffer
	{
		[Token(Token = "0x6000438")]
		[Address(RVA = "0x5FB0FD0", Offset = "0x5FAFFD0", VA = "0x5FB0FD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000100")]
	internal int DtdParserProxy_ParsingBufferLength
	{
		[Token(Token = "0x6000439")]
		[Address(RVA = "0x5FB0FE0", Offset = "0x5FAFFE0", VA = "0x5FB0FE0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000101")]
	internal int DtdParserProxy_CurrentPosition
	{
		[Token(Token = "0x600043A")]
		[Address(RVA = "0x5FB0FF0", Offset = "0x5FAFFF0", VA = "0x5FB0FF0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600043B")]
		[Address(RVA = "0x5FB1000", Offset = "0x5FB0000", VA = "0x5FB1000")]
		set
		{
		}
	}

	[Token(Token = "0x17000102")]
	internal int DtdParserProxy_EntityStackLength
	{
		[Token(Token = "0x600043C")]
		[Address(RVA = "0x5FB1010", Offset = "0x5FB0010", VA = "0x5FB1010")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000103")]
	internal bool DtdParserProxy_IsEntityEolNormalized
	{
		[Token(Token = "0x600043D")]
		[Address(RVA = "0x5FB1020", Offset = "0x5FB0020", VA = "0x5FB1020")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000104")]
	internal IValidationEventHandling DtdParserProxy_ValidationEventHandling
	{
		[Token(Token = "0x600043E")]
		[Address(RVA = "0x5FB1030", Offset = "0x5FB0030", VA = "0x5FB1030")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000105")]
	internal int DtdParserProxy_LineNo
	{
		[Token(Token = "0x6000440")]
		[Address(RVA = "0x5FB1060", Offset = "0x5FB0060", VA = "0x5FB1060")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000106")]
	internal int DtdParserProxy_LineStartPosition
	{
		[Token(Token = "0x6000441")]
		[Address(RVA = "0x5FB1070", Offset = "0x5FB0070", VA = "0x5FB1070")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000107")]
	private bool IsResolverNull
	{
		[Token(Token = "0x6000447")]
		[Address(RVA = "0x5FB2050", Offset = "0x5FB1050", VA = "0x5FB2050")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000108")]
	private bool InAttributeValueIterator
	{
		[Token(Token = "0x6000463")]
		[Address(RVA = "0x5FAB990", Offset = "0x5FAA990", VA = "0x5FAB990")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000109")]
	private bool DtdValidation
	{
		[Token(Token = "0x6000465")]
		[Address(RVA = "0x5FB0ED0", Offset = "0x5FAFED0", VA = "0x5FB0ED0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700010A")]
	private bool InEntity
	{
		[Token(Token = "0x600049A")]
		[Address(RVA = "0x5FB5120", Offset = "0x5FB4120", VA = "0x5FB5120")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700010B")]
	internal override IDtdInfo DtdInfo
	{
		[Token(Token = "0x60004E0")]
		[Address(RVA = "0x5FBE0F0", Offset = "0x5FBD0F0", VA = "0x5FBE0F0", Slot = "52")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700010C")]
	internal IValidationEventHandling ValidationEventHandling
	{
		[Token(Token = "0x60004E2")]
		[Address(RVA = "0x5FBE280", Offset = "0x5FBD280", VA = "0x5FBE280")]
		set
		{
		}
	}

	[Token(Token = "0x1700010D")]
	internal OnDefaultAttributeUseDelegate OnDefaultAttributeUse
	{
		[Token(Token = "0x60004E3")]
		[Address(RVA = "0x5FBE2A0", Offset = "0x5FBD2A0", VA = "0x5FBE2A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700010E")]
	internal bool XmlValidatingReaderCompatibilityMode
	{
		[Token(Token = "0x60004E4")]
		[Address(RVA = "0x5FBE2C0", Offset = "0x5FBD2C0", VA = "0x5FBE2C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700010F")]
	internal XmlNodeType FragmentType
	{
		[Token(Token = "0x60004E5")]
		[Address(RVA = "0x5FBE390", Offset = "0x5FBD390", VA = "0x5FBE390")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000110")]
	internal object InternalSchemaType
	{
		[Token(Token = "0x60004E8")]
		[Address(RVA = "0x5FBE3F0", Offset = "0x5FBD3F0", VA = "0x5FBE3F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000111")]
	internal object InternalTypedValue
	{
		[Token(Token = "0x60004E9")]
		[Address(RVA = "0x5FBE420", Offset = "0x5FBD420", VA = "0x5FBE420")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004EA")]
		[Address(RVA = "0x5FBE440", Offset = "0x5FBD440", VA = "0x5FBE440")]
		set
		{
		}
	}

	[Token(Token = "0x17000112")]
	internal bool StandAlone
	{
		[Token(Token = "0x60004EB")]
		[Address(RVA = "0x5FBE470", Offset = "0x5FBD470", VA = "0x5FBE470")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000113")]
	internal override XmlNamespaceManager NamespaceManager
	{
		[Token(Token = "0x60004EC")]
		[Address(RVA = "0x5FBE480", Offset = "0x5FBD480", VA = "0x5FBE480", Slot = "51")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000114")]
	internal bool V1Compat
	{
		[Token(Token = "0x60004ED")]
		[Address(RVA = "0x5FBE490", Offset = "0x5FBD490", VA = "0x5FBE490")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000115")]
	internal bool DisableUndeclaredEntityCheck
	{
		[Token(Token = "0x60004F1")]
		[Address(RVA = "0x5FBEA00", Offset = "0x5FBDA00", VA = "0x5FBEA00")]
		set
		{
		}
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x5FA8820", Offset = "0x5FA7820", VA = "0x5FA8820")]
	internal XmlTextReaderImpl(XmlNameTable nt)
	{
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x5FA8CD0", Offset = "0x5FA7CD0", VA = "0x5FA8CD0")]
	private XmlTextReaderImpl(XmlResolver resolver, XmlReaderSettings settings, XmlParserContext context)
	{
	}

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x5FA9540", Offset = "0x5FA8540", VA = "0x5FA9540")]
	internal XmlTextReaderImpl(Stream input)
	{
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x5FA95C0", Offset = "0x5FA85C0", VA = "0x5FA95C0")]
	internal XmlTextReaderImpl(string url, Stream input, XmlNameTable nt)
	{
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x5FA9740", Offset = "0x5FA8740", VA = "0x5FA9740")]
	internal XmlTextReaderImpl(TextReader input)
	{
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x5FA98A0", Offset = "0x5FA88A0", VA = "0x5FA98A0")]
	internal XmlTextReaderImpl(TextReader input, XmlNameTable nt)
	{
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x5FA97C0", Offset = "0x5FA87C0", VA = "0x5FA97C0")]
	internal XmlTextReaderImpl(string url, TextReader input, XmlNameTable nt)
	{
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x5FA98E0", Offset = "0x5FA88E0", VA = "0x5FA98E0")]
	internal XmlTextReaderImpl(string xmlFragment, XmlNodeType fragType, XmlParserContext context)
	{
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x5FA9DC0", Offset = "0x5FA8DC0", VA = "0x5FA9DC0")]
	internal XmlTextReaderImpl(string xmlFragment, XmlParserContext context)
	{
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x5FA9EF0", Offset = "0x5FA8EF0", VA = "0x5FA9EF0")]
	public XmlTextReaderImpl(string url, XmlNameTable nt)
	{
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x5FAA170", Offset = "0x5FA9170", VA = "0x5FAA170")]
	private void FinishInitUriString()
	{
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x5FAA840", Offset = "0x5FA9840", VA = "0x5FAA840")]
	internal XmlTextReaderImpl(Stream stream, byte[] bytes, int byteCount, XmlReaderSettings settings, Uri baseUri, string baseUriStr, XmlParserContext context, bool closeInput)
	{
	}

	[Token(Token = "0x60003F5")]
	[Address(RVA = "0x5FAAB30", Offset = "0x5FA9B30", VA = "0x5FAAB30")]
	private void FinishInitStream()
	{
	}

	[Token(Token = "0x60003F6")]
	[Address(RVA = "0x5FAAC20", Offset = "0x5FA9C20", VA = "0x5FAAC20")]
	internal XmlTextReaderImpl(TextReader input, XmlReaderSettings settings, string baseUriStr, XmlParserContext context)
	{
	}

	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x5FAAD60", Offset = "0x5FA9D60", VA = "0x5FAAD60")]
	private void FinishInitTextReader()
	{
	}

	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x5FAAE30", Offset = "0x5FA9E30", VA = "0x5FAAE30")]
	internal XmlTextReaderImpl(string xmlFragment, XmlParserContext context, XmlReaderSettings settings)
	{
	}

	[Token(Token = "0x600040C")]
	[Address(RVA = "0x5FAB4A0", Offset = "0x5FAA4A0", VA = "0x5FAB4A0", Slot = "22")]
	public override string GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x600040D")]
	[Address(RVA = "0x5FAB6C0", Offset = "0x5FAA6C0", VA = "0x5FAB6C0", Slot = "23")]
	public override string GetAttribute(string localName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x600040E")]
	[Address(RVA = "0x5FAB840", Offset = "0x5FAA840", VA = "0x5FAB840", Slot = "24")]
	public override string GetAttribute(int i)
	{
		return null;
	}

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x5FAB8D0", Offset = "0x5FAA8D0", VA = "0x5FAB8D0", Slot = "25")]
	public override bool MoveToAttribute(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x5FABAB0", Offset = "0x5FAAAB0", VA = "0x5FABAB0", Slot = "26")]
	public override void MoveToAttribute(int i)
	{
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x5FABB80", Offset = "0x5FAAB80", VA = "0x5FABB80", Slot = "27")]
	public override bool MoveToFirstAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x5FABC00", Offset = "0x5FAAC00", VA = "0x5FABC00", Slot = "28")]
	public override bool MoveToNextAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6000413")]
	[Address(RVA = "0x5FABC90", Offset = "0x5FAAC90", VA = "0x5FABC90", Slot = "29")]
	public override bool MoveToElement()
	{
		return default(bool);
	}

	[Token(Token = "0x6000414")]
	[Address(RVA = "0x5FABD20", Offset = "0x5FAAD20", VA = "0x5FABD20")]
	private void FinishInit()
	{
	}

	[Token(Token = "0x6000415")]
	[Address(RVA = "0x5FABD60", Offset = "0x5FAAD60", VA = "0x5FABD60", Slot = "31")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x6000416")]
	[Address(RVA = "0x5FAE580", Offset = "0x5FAD580", VA = "0x5FAE580", Slot = "33")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000417")]
	[Address(RVA = "0x5FAE720", Offset = "0x5FAD720", VA = "0x5FAE720", Slot = "35")]
	public override void Skip()
	{
	}

	[Token(Token = "0x6000418")]
	[Address(RVA = "0x5FAE990", Offset = "0x5FAD990", VA = "0x5FAE990", Slot = "37")]
	public override string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x5FAE9D0", Offset = "0x5FAD9D0", VA = "0x5FAE9D0", Slot = "30")]
	public override bool ReadAttributeValue()
	{
		return default(bool);
	}

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x5FAF270", Offset = "0x5FAE270", VA = "0x5FAF270", Slot = "39")]
	public override void ResolveEntity()
	{
	}

	[Token(Token = "0x600041C")]
	[Address(RVA = "0x5FAFA40", Offset = "0x5FAEA40", VA = "0x5FAFA40")]
	internal void MoveOffEntityReference()
	{
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x5FAFB00", Offset = "0x5FAEB00", VA = "0x5FAFB00", Slot = "42")]
	public override string ReadString()
	{
		return null;
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x5FAFB30", Offset = "0x5FAEB30", VA = "0x5FAFB30", Slot = "41")]
	public override int ReadValueChunk(char[] buffer, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x5FB07F0", Offset = "0x5FAF7F0", VA = "0x5FB07F0", Slot = "53")]
	public bool HasLineInfo()
	{
		return default(bool);
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x5FB0840", Offset = "0x5FAF840", VA = "0x5FB0840", Slot = "56")]
	private IDictionary<string, string> System_002EXml_002EIXmlNamespaceResolver_002EGetNamespacesInScope(XmlNamespaceScope scope)
	{
		return null;
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x5FB08A0", Offset = "0x5FAF8A0", VA = "0x5FB08A0", Slot = "57")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000425")]
	[Address(RVA = "0x5FB08C0", Offset = "0x5FAF8C0", VA = "0x5FB08C0", Slot = "58")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupPrefix(string namespaceName)
	{
		return null;
	}

	[Token(Token = "0x6000426")]
	[Address(RVA = "0x5FB0870", Offset = "0x5FAF870", VA = "0x5FB0870")]
	internal IDictionary<string, string> GetNamespacesInScope(XmlNamespaceScope scope)
	{
		return null;
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x5FB08F0", Offset = "0x5FAF8F0", VA = "0x5FB08F0")]
	internal string LookupPrefix(string namespaceName)
	{
		return null;
	}

	[Token(Token = "0x600043F")]
	[Address(RVA = "0x5FB1040", Offset = "0x5FB0040", VA = "0x5FB1040")]
	internal void DtdParserProxy_OnNewLine(int pos)
	{
	}

	[Token(Token = "0x6000442")]
	[Address(RVA = "0x5FB1080", Offset = "0x5FB0080", VA = "0x5FB1080")]
	internal int DtdParserProxy_ReadData()
	{
		return default(int);
	}

	[Token(Token = "0x6000443")]
	[Address(RVA = "0x5FB14F0", Offset = "0x5FB04F0", VA = "0x5FB14F0")]
	internal int DtdParserProxy_ParseNumericCharRef(StringBuilder internalSubsetBuilder)
	{
		return default(int);
	}

	[Token(Token = "0x6000444")]
	[Address(RVA = "0x5FB1660", Offset = "0x5FB0660", VA = "0x5FB1660")]
	internal int DtdParserProxy_ParseNamedCharRef(bool expand, StringBuilder internalSubsetBuilder)
	{
		return default(int);
	}

	[Token(Token = "0x6000445")]
	[Address(RVA = "0x5FB1740", Offset = "0x5FB0740", VA = "0x5FB1740")]
	internal void DtdParserProxy_ParsePI(StringBuilder sb)
	{
	}

	[Token(Token = "0x6000446")]
	[Address(RVA = "0x5FB1B60", Offset = "0x5FB0B60", VA = "0x5FB1B60")]
	internal void DtdParserProxy_ParseComment(StringBuilder sb)
	{
	}

	[Token(Token = "0x6000448")]
	[Address(RVA = "0x5FAA110", Offset = "0x5FA9110", VA = "0x5FAA110")]
	private XmlResolver GetTempResolver()
	{
		return null;
	}

	[Token(Token = "0x6000449")]
	[Address(RVA = "0x5FB2090", Offset = "0x5FB1090", VA = "0x5FB2090")]
	internal bool DtdParserProxy_PushEntity(IDtdEntityInfo entity, out int entityId)
	{
		return default(bool);
	}

	[Token(Token = "0x600044A")]
	[Address(RVA = "0x5FB2900", Offset = "0x5FB1900", VA = "0x5FB2900")]
	internal bool DtdParserProxy_PopEntity(out IDtdEntityInfo oldEntity, out int newEntityId)
	{
		return default(bool);
	}

	[Token(Token = "0x600044B")]
	[Address(RVA = "0x5FB2A80", Offset = "0x5FB1A80", VA = "0x5FB2A80")]
	internal bool DtdParserProxy_PushExternalSubset(string systemId, string publicId)
	{
		return default(bool);
	}

	[Token(Token = "0x600044C")]
	[Address(RVA = "0x5FB3210", Offset = "0x5FB2210", VA = "0x5FB3210")]
	internal void DtdParserProxy_PushInternalDtd(string baseUri, string internalDtd)
	{
	}

	[Token(Token = "0x600044D")]
	[Address(RVA = "0x5FB34B0", Offset = "0x5FB24B0", VA = "0x5FB34B0")]
	internal void DtdParserProxy_Throw(Exception e)
	{
	}

	[Token(Token = "0x600044E")]
	[Address(RVA = "0x5FB35D0", Offset = "0x5FB25D0", VA = "0x5FB35D0")]
	internal void DtdParserProxy_OnSystemId(string systemId, LineInfo keywordLineInfo, LineInfo systemLiteralLineInfo)
	{
	}

	[Token(Token = "0x600044F")]
	[Address(RVA = "0x5FB3700", Offset = "0x5FB2700", VA = "0x5FB3700")]
	internal void DtdParserProxy_OnPublicId(string publicId, LineInfo keywordLineInfo, LineInfo publicLiteralLineInfo)
	{
	}

	[Token(Token = "0x6000450")]
	[Address(RVA = "0x5FB3780", Offset = "0x5FB2780", VA = "0x5FB3780")]
	private void Throw(int pos, string res, string arg)
	{
	}

	[Token(Token = "0x6000451")]
	[Address(RVA = "0x5FB3890", Offset = "0x5FB2890", VA = "0x5FB3890")]
	private void Throw(int pos, string res, string[] args)
	{
	}

	[Token(Token = "0x6000452")]
	[Address(RVA = "0x5FB39A0", Offset = "0x5FB29A0", VA = "0x5FB39A0")]
	private void Throw(int pos, string res)
	{
	}

	[Token(Token = "0x6000453")]
	[Address(RVA = "0x5FAAB10", Offset = "0x5FA9B10", VA = "0x5FAAB10")]
	private void Throw(string res)
	{
	}

	[Token(Token = "0x6000454")]
	[Address(RVA = "0x5FB39D0", Offset = "0x5FB29D0", VA = "0x5FB39D0")]
	private void Throw(string res, int lineNo, int linePos)
	{
	}

	[Token(Token = "0x6000455")]
	[Address(RVA = "0x5FB3790", Offset = "0x5FB2790", VA = "0x5FB3790")]
	private void Throw(string res, string arg)
	{
	}

	[Token(Token = "0x6000456")]
	[Address(RVA = "0x5FB3AE0", Offset = "0x5FB2AE0", VA = "0x5FB3AE0")]
	private void Throw(string res, string arg, int lineNo, int linePos)
	{
	}

	[Token(Token = "0x6000457")]
	[Address(RVA = "0x5FB38A0", Offset = "0x5FB28A0", VA = "0x5FB38A0")]
	private void Throw(string res, string[] args)
	{
	}

	[Token(Token = "0x6000458")]
	[Address(RVA = "0x5FB3BE0", Offset = "0x5FB2BE0", VA = "0x5FB3BE0")]
	private void Throw(string res, string arg, Exception innerException)
	{
	}

	[Token(Token = "0x6000459")]
	[Address(RVA = "0x5FB3C70", Offset = "0x5FB2C70", VA = "0x5FB3C70")]
	private void Throw(string res, string[] args, Exception innerException)
	{
	}

	[Token(Token = "0x600045A")]
	[Address(RVA = "0x5FB3540", Offset = "0x5FB2540", VA = "0x5FB3540")]
	private void Throw(Exception e)
	{
	}

	[Token(Token = "0x600045B")]
	[Address(RVA = "0x5FB3DA0", Offset = "0x5FB2DA0", VA = "0x5FB3DA0")]
	private void ReThrow(Exception e, int lineNo, int linePos)
	{
	}

	[Token(Token = "0x600045C")]
	[Address(RVA = "0x5FAE280", Offset = "0x5FAD280", VA = "0x5FAE280")]
	private void ThrowWithoutLineInfo(string res)
	{
	}

	[Token(Token = "0x600045D")]
	[Address(RVA = "0x5FB3EB0", Offset = "0x5FB2EB0", VA = "0x5FB3EB0")]
	private void ThrowWithoutLineInfo(string res, string arg)
	{
	}

	[Token(Token = "0x600045E")]
	[Address(RVA = "0x5FB3F90", Offset = "0x5FB2F90", VA = "0x5FB3F90")]
	private void ThrowWithoutLineInfo(string res, string[] args, Exception innerException)
	{
	}

	[Token(Token = "0x600045F")]
	[Address(RVA = "0x5FB4080", Offset = "0x5FB3080", VA = "0x5FB4080")]
	private void ThrowInvalidChar(char[] data, int length, int invCharPos)
	{
	}

	[Token(Token = "0x6000460")]
	[Address(RVA = "0x5FB3D80", Offset = "0x5FB2D80", VA = "0x5FB3D80")]
	private void SetErrorState()
	{
	}

	[Token(Token = "0x6000461")]
	[Address(RVA = "0x5FB1F10", Offset = "0x5FB0F10", VA = "0x5FB1F10")]
	private void SendValidationEvent(XmlSeverityType severity, string code, string arg, int lineNo, int linePos)
	{
	}

	[Token(Token = "0x6000462")]
	[Address(RVA = "0x5FB40E0", Offset = "0x5FB30E0", VA = "0x5FB40E0")]
	private void SendValidationEvent(XmlSeverityType severity, XmlSchemaException exception)
	{
	}

	[Token(Token = "0x6000464")]
	[Address(RVA = "0x5FAB9B0", Offset = "0x5FAA9B0", VA = "0x5FAB9B0")]
	private void FinishAttributeValueIterator()
	{
	}

	[Token(Token = "0x6000466")]
	[Address(RVA = "0x5FA96D0", Offset = "0x5FA86D0", VA = "0x5FA96D0")]
	private void InitStreamInput(Stream stream, Encoding encoding)
	{
	}

	[Token(Token = "0x6000467")]
	[Address(RVA = "0x5FA9710", Offset = "0x5FA8710", VA = "0x5FA9710")]
	private void InitStreamInput(string baseUriStr, Stream stream, Encoding encoding)
	{
	}

	[Token(Token = "0x6000468")]
	[Address(RVA = "0x5FB4300", Offset = "0x5FB3300", VA = "0x5FB4300")]
	private void InitStreamInput(Uri baseUri, Stream stream, Encoding encoding)
	{
	}

	[Token(Token = "0x6000469")]
	[Address(RVA = "0x5FB4360", Offset = "0x5FB3360", VA = "0x5FB4360")]
	private void InitStreamInput(Uri baseUri, string baseUriStr, Stream stream, Encoding encoding)
	{
	}

	[Token(Token = "0x600046A")]
	[Address(RVA = "0x5FAA4E0", Offset = "0x5FA94E0", VA = "0x5FAA4E0")]
	private void InitStreamInput(Uri baseUri, string baseUriStr, Stream stream, byte[] bytes, int byteCount, Encoding encoding)
	{
	}

	[Token(Token = "0x600046B")]
	[Address(RVA = "0x5FA98D0", Offset = "0x5FA88D0", VA = "0x5FA98D0")]
	private void InitTextReaderInput(string baseUriStr, TextReader input)
	{
	}

	[Token(Token = "0x600046C")]
	[Address(RVA = "0x5FB46B0", Offset = "0x5FB36B0", VA = "0x5FB46B0")]
	private void InitTextReaderInput(string baseUriStr, Uri baseUri, TextReader input)
	{
	}

	[Token(Token = "0x600046D")]
	[Address(RVA = "0x5FA99F0", Offset = "0x5FA89F0", VA = "0x5FA99F0")]
	private void InitStringInput(string baseUriStr, Encoding originalEncoding, string str)
	{
	}

	[Token(Token = "0x600046E")]
	[Address(RVA = "0x5FA9AF0", Offset = "0x5FA8AF0", VA = "0x5FA9AF0")]
	private void InitFragmentReader(XmlNodeType fragmentType, XmlParserContext parserContext, bool allowXmlDeclFragment)
	{
	}

	[Token(Token = "0x600046F")]
	[Address(RVA = "0x5FAA7F0", Offset = "0x5FA97F0", VA = "0x5FAA7F0")]
	private void ProcessDtdFromParserContext(XmlParserContext context)
	{
	}

	[Token(Token = "0x6000470")]
	[Address(RVA = "0x5FACC70", Offset = "0x5FABC70", VA = "0x5FACC70")]
	private void OpenUrl()
	{
	}

	[Token(Token = "0x6000471")]
	[Address(RVA = "0x5FB4A20", Offset = "0x5FB3A20", VA = "0x5FB4A20")]
	private void OpenUrlDelegate(object xmlResolver)
	{
	}

	[Token(Token = "0x6000472")]
	[Address(RVA = "0x5FB4380", Offset = "0x5FB3380", VA = "0x5FB4380")]
	private Encoding DetectEncoding()
	{
		return null;
	}

	[Token(Token = "0x6000473")]
	[Address(RVA = "0x5FB4540", Offset = "0x5FB3540", VA = "0x5FB4540")]
	private void SetupEncoding(Encoding encoding)
	{
	}

	[Token(Token = "0x6000474")]
	[Address(RVA = "0x5FB4BB0", Offset = "0x5FB3BB0", VA = "0x5FB4BB0")]
	private void SwitchEncoding(Encoding newEncoding)
	{
	}

	[Token(Token = "0x6000475")]
	[Address(RVA = "0x5FB4DC0", Offset = "0x5FB3DC0", VA = "0x5FB4DC0")]
	private Encoding CheckEncoding(string newEncodingName)
	{
		return null;
	}

	[Token(Token = "0x6000476")]
	[Address(RVA = "0x5FB4D30", Offset = "0x5FB3D30", VA = "0x5FB4D30")]
	private void UnDecodeChars()
	{
	}

	[Token(Token = "0x6000477")]
	[Address(RVA = "0x5FB5130", Offset = "0x5FB4130", VA = "0x5FB5130")]
	private void SwitchEncodingToUTF8()
	{
	}

	[Token(Token = "0x6000478")]
	[Address(RVA = "0x5FB1090", Offset = "0x5FB0090", VA = "0x5FB1090")]
	private int ReadData()
	{
		return default(int);
	}

	[Token(Token = "0x6000479")]
	[Address(RVA = "0x5FB51A0", Offset = "0x5FB41A0", VA = "0x5FB51A0")]
	private int GetChars(int maxCharsCount)
	{
		return default(int);
	}

	[Token(Token = "0x600047A")]
	[Address(RVA = "0x5FB52C0", Offset = "0x5FB42C0", VA = "0x5FB52C0")]
	private void InvalidCharRecovery(ref int bytesCount, out int charsCount)
	{
	}

	[Token(Token = "0x600047B")]
	[Address(RVA = "0x5FAE590", Offset = "0x5FAD590", VA = "0x5FAE590")]
	internal void Close(bool closeInput)
	{
	}

	[Token(Token = "0x600047C")]
	[Address(RVA = "0x5FB5510", Offset = "0x5FB4510", VA = "0x5FB5510")]
	private void ShiftBuffer(int sourcePos, int destPos, int count)
	{
	}

	[Token(Token = "0x600047D")]
	[Address(RVA = "0x5FACEC0", Offset = "0x5FABEC0", VA = "0x5FACEC0")]
	private bool ParseXmlDeclaration(bool isTextDecl)
	{
		return default(bool);
	}

	[Token(Token = "0x600047E")]
	[Address(RVA = "0x5FAC710", Offset = "0x5FAB710", VA = "0x5FAC710")]
	private bool ParseDocumentContent()
	{
		return default(bool);
	}

	[Token(Token = "0x600047F")]
	[Address(RVA = "0x5FAC390", Offset = "0x5FAB390", VA = "0x5FAC390")]
	private bool ParseElementContent()
	{
		return default(bool);
	}

	[Token(Token = "0x6000480")]
	[Address(RVA = "0x5FB6F40", Offset = "0x5FB5F40", VA = "0x5FB6F40")]
	private void ThrowUnclosedElements()
	{
	}

	[Token(Token = "0x6000481")]
	[Address(RVA = "0x5FB5A60", Offset = "0x5FB4A60", VA = "0x5FB5A60")]
	private void ParseElement()
	{
	}

	[Token(Token = "0x6000482")]
	[Address(RVA = "0x5FB7810", Offset = "0x5FB6810", VA = "0x5FB7810")]
	private void AddDefaultAttributesAndNormalize()
	{
	}

	[Token(Token = "0x6000483")]
	[Address(RVA = "0x5FB6B10", Offset = "0x5FB5B10", VA = "0x5FB6B10")]
	private void ParseEndElement()
	{
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x5FB8BA0", Offset = "0x5FB7BA0", VA = "0x5FB8BA0")]
	private void ThrowTagMismatch(NodeData startTag)
	{
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x5FB7120", Offset = "0x5FB6120", VA = "0x5FB7120")]
	private void ParseAttributes()
	{
	}

	[Token(Token = "0x6000486")]
	[Address(RVA = "0x5FB8370", Offset = "0x5FB7370", VA = "0x5FB8370")]
	private void ElementNamespaceLookup()
	{
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x5FB8AF0", Offset = "0x5FB7AF0", VA = "0x5FB8AF0")]
	private void AttributeNamespaceLookup()
	{
	}

	[Token(Token = "0x6000488")]
	[Address(RVA = "0x5FBA050", Offset = "0x5FB9050", VA = "0x5FBA050")]
	private void AttributeDuplCheck()
	{
	}

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x5FB9B50", Offset = "0x5FB8B50", VA = "0x5FB9B50")]
	private void OnDefaultNamespaceDecl(NodeData attr)
	{
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x5FB9CF0", Offset = "0x5FB8CF0", VA = "0x5FB9CF0")]
	private void OnNamespaceDecl(NodeData attr)
	{
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x5FB9DA0", Offset = "0x5FB8DA0", VA = "0x5FB9DA0")]
	private void OnXmlReservedAttribute(NodeData attr)
	{
	}

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x5FB8FC0", Offset = "0x5FB7FC0", VA = "0x5FB8FC0")]
	private void ParseAttributeValueSlow(int curPos, char quoteChar, NodeData attr)
	{
	}

	[Token(Token = "0x600048D")]
	[Address(RVA = "0x5FBA850", Offset = "0x5FB9850", VA = "0x5FBA850")]
	private void AddAttributeChunkToList(NodeData attr, NodeData chunk, ref NodeData lastChunk)
	{
	}

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x5FB6380", Offset = "0x5FB5380", VA = "0x5FB6380")]
	private bool ParseText()
	{
		return default(bool);
	}

	[Token(Token = "0x600048F")]
	[Address(RVA = "0x5FAFFF0", Offset = "0x5FAEFF0", VA = "0x5FAFFF0")]
	private bool ParseText(out int startPos, out int endPos, ref int outOrChars)
	{
		return default(bool);
	}

	[Token(Token = "0x6000490")]
	[Address(RVA = "0x5FAB130", Offset = "0x5FAA130", VA = "0x5FAB130")]
	private void FinishPartialValue()
	{
	}

	[Token(Token = "0x6000491")]
	[Address(RVA = "0x5FAB270", Offset = "0x5FAA270", VA = "0x5FAB270")]
	private void FinishOtherValueIterator()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000492")]
	[Address(RVA = "0x5FAE370", Offset = "0x5FAD370", VA = "0x5FAE370")]
	private void SkipPartialTextValue()
	{
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x5FAE3E0", Offset = "0x5FAD3E0", VA = "0x5FAE3E0")]
	private void FinishReadValueChunk()
	{
	}

	[Token(Token = "0x6000494")]
	[Address(RVA = "0x5FAE410", Offset = "0x5FAD410", VA = "0x5FAE410")]
	private void FinishReadContentAsBinary()
	{
	}

	[Token(Token = "0x6000495")]
	[Address(RVA = "0x5FAE480", Offset = "0x5FAD480", VA = "0x5FAE480")]
	private void FinishReadElementContentAsBinary()
	{
	}

	[Token(Token = "0x6000496")]
	[Address(RVA = "0x5FB6860", Offset = "0x5FB5860", VA = "0x5FB6860")]
	private bool ParseRootLevelWhitespace()
	{
		return default(bool);
	}

	[Token(Token = "0x6000497")]
	[Address(RVA = "0x5FADDF0", Offset = "0x5FACDF0", VA = "0x5FADDF0")]
	private void ParseEntityReference()
	{
	}

	[Token(Token = "0x6000498")]
	[Address(RVA = "0x5FB6020", Offset = "0x5FB5020", VA = "0x5FB6020")]
	private EntityType HandleEntityReference(bool isInAttributeValue, EntityExpandType expandType, out int charRefEndPos)
	{
		return default(EntityType);
	}

	[Token(Token = "0x6000499")]
	[Address(RVA = "0x5FAF4C0", Offset = "0x5FAE4C0", VA = "0x5FAF4C0")]
	private EntityType HandleGeneralEntityReference(string name, bool isInAttributeValue, bool pushFakeEntityIfNullResolver, int entityStartLinePos)
	{
		return default(EntityType);
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x5FB4190", Offset = "0x5FB3190", VA = "0x5FB4190")]
	private bool HandleEntityEnd(bool checkEntityNesting)
	{
		return default(bool);
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x5FADE60", Offset = "0x5FACE60", VA = "0x5FADE60")]
	private void SetupEndEntityNodeInContent()
	{
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x5FBAC10", Offset = "0x5FB9C10", VA = "0x5FBAC10")]
	private void SetupEndEntityNodeInAttribute()
	{
	}

	[Token(Token = "0x600049E")]
	[Address(RVA = "0x5FB56E0", Offset = "0x5FB46E0", VA = "0x5FB56E0")]
	private bool ParsePI()
	{
		return default(bool);
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x5FB1780", Offset = "0x5FB0780", VA = "0x5FB1780")]
	private bool ParsePI(StringBuilder piInDtdStringBuilder)
	{
		return default(bool);
	}

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x5FBAC80", Offset = "0x5FB9C80", VA = "0x5FBAC80")]
	private bool ParsePIValue(out int outStartPos, out int outEndPos)
	{
		return default(bool);
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x5FB56F0", Offset = "0x5FB46F0", VA = "0x5FB56F0")]
	private bool ParseComment()
	{
		return default(bool);
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x5FB5760", Offset = "0x5FB4760", VA = "0x5FB5760")]
	private void ParseCData()
	{
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x5FB1D50", Offset = "0x5FB0D50", VA = "0x5FB1D50")]
	private void ParseCDataOrComment(XmlNodeType type)
	{
	}

	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x5FBB020", Offset = "0x5FBA020", VA = "0x5FBB020")]
	private bool ParseCDataOrComment(XmlNodeType type, out int outStartPos, out int outEndPos)
	{
		return default(bool);
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x5FB5770", Offset = "0x5FB4770", VA = "0x5FB5770")]
	private bool ParseDoctypeDecl()
	{
		return default(bool);
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x5FBB480", Offset = "0x5FBA480", VA = "0x5FBB480")]
	private void ParseDtd()
	{
	}

	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x5FBB820", Offset = "0x5FBA820", VA = "0x5FBB820")]
	private void SkipDtd()
	{
	}

	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x5FBBB80", Offset = "0x5FBAB80", VA = "0x5FBBB80")]
	private void SkipPublicOrSystemIdLiteral()
	{
	}

	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x5FBBC20", Offset = "0x5FBAC20", VA = "0x5FBBC20")]
	private void SkipUntil(char stopChar, bool recognizeLiterals)
	{
	}

	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x5FB2F70", Offset = "0x5FB1F70", VA = "0x5FB2F70")]
	private int EatWhitespaces(StringBuilder sb)
	{
		return default(int);
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x5FBAA60", Offset = "0x5FB9A60", VA = "0x5FBAA60")]
	private int ParseCharRefInline(int startPos, out int charCount, out EntityType entityType)
	{
		return default(int);
	}

	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x5FB15A0", Offset = "0x5FB05A0", VA = "0x5FB15A0")]
	private int ParseNumericCharRef(bool expand, StringBuilder internalSubsetBuilder, out EntityType entityType)
	{
		return default(int);
	}

	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x5FBC0E0", Offset = "0x5FBB0E0", VA = "0x5FBC0E0")]
	private int ParseNumericCharRefInline(int startPos, bool expand, StringBuilder internalSubsetBuilder, out int charCount, out EntityType entityType)
	{
		return default(int);
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x5FB16D0", Offset = "0x5FB06D0", VA = "0x5FB16D0")]
	private int ParseNamedCharRef(bool expand, StringBuilder internalSubsetBuilder)
	{
		return default(int);
	}

	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x5FBC7C0", Offset = "0x5FBB7C0", VA = "0x5FBC7C0")]
	private int ParseNamedCharRefInline(int startPos, bool expand, StringBuilder internalSubsetBuilder)
	{
		return default(int);
	}

	[Token(Token = "0x60004B0")]
	[Address(RVA = "0x5FB5540", Offset = "0x5FB4540", VA = "0x5FB5540")]
	private int ParseName()
	{
		return default(int);
	}

	[Token(Token = "0x60004B1")]
	[Address(RVA = "0x5FB7110", Offset = "0x5FB6110", VA = "0x5FB7110")]
	private int ParseQName(out int colonPos)
	{
		return default(int);
	}

	[Token(Token = "0x60004B2")]
	[Address(RVA = "0x5FBCAA0", Offset = "0x5FBBAA0", VA = "0x5FBCAA0")]
	private int ParseQName(bool isQName, int startOffset, out int colonPos)
	{
		return default(int);
	}

	[Token(Token = "0x60004B3")]
	[Address(RVA = "0x5FBCD10", Offset = "0x5FBBD10", VA = "0x5FBCD10")]
	private bool ReadDataInName(ref int pos)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x5FBA8B0", Offset = "0x5FB98B0", VA = "0x5FBA8B0")]
	private string ParseEntityName()
	{
		return null;
	}

	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x5FADD40", Offset = "0x5FACD40", VA = "0x5FADD40")]
	private NodeData AddNode(int nodeIndex, int nodeDepth)
	{
		return null;
	}

	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x5FBCD40", Offset = "0x5FBBD40", VA = "0x5FBCD40")]
	private NodeData AllocNode(int nodeIndex, int nodeDepth)
	{
		return null;
	}

	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x5FB3650", Offset = "0x5FB2650", VA = "0x5FB3650")]
	private NodeData AddAttributeNoChecks(string name, int attrDepth)
	{
		return null;
	}

	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x5FB8DF0", Offset = "0x5FB7DF0", VA = "0x5FB8DF0")]
	private NodeData AddAttribute(int endNamePos, int colonPos)
	{
		return null;
	}

	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x5FBCE90", Offset = "0x5FBBE90", VA = "0x5FBCE90")]
	private NodeData AddAttribute(string localName, string prefix, string nameWPrefix)
	{
		return null;
	}

	[Token(Token = "0x60004BA")]
	[Address(RVA = "0x5FADD80", Offset = "0x5FACD80", VA = "0x5FADD80")]
	private void PopElementContext()
	{
	}

	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x5FB1050", Offset = "0x5FB0050", VA = "0x5FB1050")]
	private void OnNewLine(int pos)
	{
	}

	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x5FAE1C0", Offset = "0x5FAD1C0", VA = "0x5FAE1C0")]
	private void OnEof()
	{
	}

	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x5FBA510", Offset = "0x5FB9510", VA = "0x5FBA510")]
	private string LookupNamespace(NodeData node)
	{
		return null;
	}

	[Token(Token = "0x60004BE")]
	[Address(RVA = "0x5FBA640", Offset = "0x5FB9640", VA = "0x5FBA640")]
	private void AddNamespace(string prefix, string uri, NodeData attr)
	{
	}

	[Token(Token = "0x60004BF")]
	[Address(RVA = "0x5FADC90", Offset = "0x5FACC90", VA = "0x5FADC90")]
	private void ResetAttributes()
	{
	}

	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x5FBD020", Offset = "0x5FBC020", VA = "0x5FBD020")]
	private void FullAttributeCleanup()
	{
	}

	[Token(Token = "0x60004C1")]
	[Address(RVA = "0x5FBA5B0", Offset = "0x5FB95B0", VA = "0x5FBA5B0")]
	private void PushXmlContext()
	{
	}

	[Token(Token = "0x60004C2")]
	[Address(RVA = "0x5FBCFE0", Offset = "0x5FBBFE0", VA = "0x5FBCFE0")]
	private void PopXmlContext()
	{
	}

	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x5FBABD0", Offset = "0x5FB9BD0", VA = "0x5FBABD0")]
	private XmlNodeType GetWhitespaceType()
	{
		return default(XmlNodeType);
	}

	[Token(Token = "0x60004C4")]
	[Address(RVA = "0x5FBAA10", Offset = "0x5FB9A10", VA = "0x5FBAA10")]
	private XmlNodeType GetTextNodeType(int orChars)
	{
		return default(XmlNodeType);
	}

	[Token(Token = "0x60004C5")]
	[Address(RVA = "0x5FB2BD0", Offset = "0x5FB1BD0", VA = "0x5FB2BD0")]
	private void PushExternalEntityOrSubset(string publicId, string systemId, Uri baseUri, string entityName)
	{
	}

	[Token(Token = "0x60004C6")]
	[Address(RVA = "0x5FBD0B0", Offset = "0x5FBC0B0", VA = "0x5FBD0B0")]
	private bool OpenAndPush(Uri uri)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C7")]
	[Address(RVA = "0x5FB21A0", Offset = "0x5FB11A0", VA = "0x5FB21A0")]
	private bool PushExternalEntity(IDtdEntityInfo entity)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C8")]
	[Address(RVA = "0x5FB2590", Offset = "0x5FB1590", VA = "0x5FB2590")]
	private void PushInternalEntity(IDtdEntityInfo entity)
	{
	}

	[Token(Token = "0x60004C9")]
	[Address(RVA = "0x5FB2960", Offset = "0x5FB1960", VA = "0x5FB2960")]
	private void PopEntity()
	{
	}

	[Token(Token = "0x60004CA")]
	[Address(RVA = "0x5FBD330", Offset = "0x5FBC330", VA = "0x5FBD330")]
	private void RegisterEntity(IDtdEntityInfo entity)
	{
	}

	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x5FBD5C0", Offset = "0x5FBC5C0", VA = "0x5FBD5C0")]
	private void UnregisterEntity()
	{
	}

	[Token(Token = "0x60004CC")]
	[Address(RVA = "0x5FB3290", Offset = "0x5FB2290", VA = "0x5FB3290")]
	private void PushParsingState()
	{
	}

	[Token(Token = "0x60004CD")]
	[Address(RVA = "0x5FB5460", Offset = "0x5FB4460", VA = "0x5FB5460")]
	private void PopParsingState()
	{
	}

	[Token(Token = "0x60004CE")]
	[Address(RVA = "0x5FBD610", Offset = "0x5FBC610", VA = "0x5FBD610")]
	private int IncrementalRead()
	{
		return default(int);
	}

	[Token(Token = "0x60004CF")]
	[Address(RVA = "0x5FAE000", Offset = "0x5FAD000", VA = "0x5FAE000")]
	private void FinishIncrementalRead()
	{
	}

	[Token(Token = "0x60004D0")]
	[Address(RVA = "0x5FAE080", Offset = "0x5FAD080", VA = "0x5FAE080")]
	private bool ParseFragmentAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x60004D1")]
	[Address(RVA = "0x5FAED20", Offset = "0x5FADD20", VA = "0x5FAED20")]
	private bool ParseAttributeValueChunk()
	{
		return default(bool);
	}

	[Token(Token = "0x60004D2")]
	[Address(RVA = "0x5FAE100", Offset = "0x5FAD100", VA = "0x5FAE100")]
	private void ParseXmlDeclarationFragment()
	{
	}

	[Token(Token = "0x60004D3")]
	[Address(RVA = "0x5FB5750", Offset = "0x5FB4750", VA = "0x5FB5750")]
	private void ThrowUnexpectedToken(int pos, string expectedToken)
	{
	}

	[Token(Token = "0x60004D4")]
	[Address(RVA = "0x5FB5530", Offset = "0x5FB4530", VA = "0x5FB5530")]
	private void ThrowUnexpectedToken(string expectedToken1)
	{
	}

	[Token(Token = "0x60004D5")]
	[Address(RVA = "0x5FB5A50", Offset = "0x5FB4A50", VA = "0x5FB5A50")]
	private void ThrowUnexpectedToken(int pos, string expectedToken1, string expectedToken2)
	{
	}

	[Token(Token = "0x60004D6")]
	[Address(RVA = "0x5FB5560", Offset = "0x5FB4560", VA = "0x5FB5560")]
	private void ThrowUnexpectedToken(string expectedToken1, string expectedToken2)
	{
	}

	[Token(Token = "0x60004D7")]
	[Address(RVA = "0x5FB5A40", Offset = "0x5FB4A40", VA = "0x5FB5A40")]
	private string ParseUnexpectedToken(int pos)
	{
		return null;
	}

	[Token(Token = "0x60004D8")]
	[Address(RVA = "0x5FBE050", Offset = "0x5FBD050", VA = "0x5FBE050")]
	private string ParseUnexpectedToken()
	{
		return null;
	}

	[Token(Token = "0x60004D9")]
	[Address(RVA = "0x5FB8D60", Offset = "0x5FB7D60", VA = "0x5FB8D60")]
	private void ThrowExpectingWhitespace(int pos)
	{
	}

	[Token(Token = "0x60004DA")]
	[Address(RVA = "0x5FAB520", Offset = "0x5FAA520", VA = "0x5FAB520")]
	private int GetIndexOfAttributeWithoutPrefix(string name)
	{
		return default(int);
	}

	[Token(Token = "0x60004DB")]
	[Address(RVA = "0x5FAB610", Offset = "0x5FAA610", VA = "0x5FAB610")]
	private int GetIndexOfAttributeWithPrefix(string name)
	{
		return default(int);
	}

	[Token(Token = "0x60004DC")]
	[Address(RVA = "0x5FBAAC0", Offset = "0x5FB9AC0", VA = "0x5FBAAC0")]
	private bool ZeroEndingStream(int pos)
	{
		return default(bool);
	}

	[Token(Token = "0x60004DD")]
	[Address(RVA = "0x5FB47A0", Offset = "0x5FB37A0", VA = "0x5FB47A0")]
	private void ParseDtdFromParserContext()
	{
	}

	[Token(Token = "0x60004DE")]
	[Address(RVA = "0x5FBAB20", Offset = "0x5FB9B20", VA = "0x5FBAB20")]
	private bool MoveToNextContentNode(bool moveIfOnContentNode)
	{
		return default(bool);
	}

	[Token(Token = "0x60004DF")]
	[Address(RVA = "0x5FA92B0", Offset = "0x5FA82B0", VA = "0x5FA92B0")]
	private void SetupFromParserContext(XmlParserContext context, XmlReaderSettings settings)
	{
	}

	[Token(Token = "0x60004E1")]
	[Address(RVA = "0x5FBE100", Offset = "0x5FBD100", VA = "0x5FBE100")]
	internal void SetDtdInfo(IDtdInfo newDtdInfo)
	{
	}

	[Token(Token = "0x60004E6")]
	[Address(RVA = "0x5FBE3A0", Offset = "0x5FBD3A0", VA = "0x5FBE3A0")]
	internal void ChangeCurrentNodeType(XmlNodeType newNodeType)
	{
	}

	[Token(Token = "0x60004E7")]
	[Address(RVA = "0x5FBE3C0", Offset = "0x5FBD3C0", VA = "0x5FBE3C0")]
	internal XmlResolver GetResolver()
	{
		return null;
	}

	[Token(Token = "0x60004EE")]
	[Address(RVA = "0x5FB83D0", Offset = "0x5FB73D0", VA = "0x5FB83D0")]
	private bool AddDefaultAttributeDtd(IDtdDefaultAttributeInfo defAttrInfo, bool definedInDtd, NodeData[] nameSortedNodeData)
	{
		return default(bool);
	}

	[Token(Token = "0x60004EF")]
	[Address(RVA = "0x5FBE740", Offset = "0x5FBD740", VA = "0x5FBE740")]
	internal bool AddDefaultAttributeNonDtd(SchemaAttDef attrDef)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F0")]
	[Address(RVA = "0x5FBE4A0", Offset = "0x5FBD4A0", VA = "0x5FBE4A0")]
	private NodeData AddDefaultAttributeInternal(string localName, string ns, string prefix, string value, int lineNo, int linePos, int valueLineNo, int valueLinePos, bool isXmlAttribute)
	{
		return null;
	}

	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x5FAAA30", Offset = "0x5FA9A30", VA = "0x5FAAA30")]
	private bool UriEqual(Uri uri1, string uri1Str, string uri2Str, XmlResolver resolver)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x5FB33E0", Offset = "0x5FB23E0", VA = "0x5FB33E0")]
	private void RegisterConsumedCharacters(long characters, bool inEntityReference)
	{
	}

	[Token(Token = "0x60004F4")]
	[Address(RVA = "0x5FBEA10", Offset = "0x5FBDA10", VA = "0x5FBEA10")]
	internal static string StripSpaces(string value)
	{
		return null;
	}

	[Token(Token = "0x60004F5")]
	[Address(RVA = "0x5FBEC30", Offset = "0x5FBDC30", VA = "0x5FBEC30")]
	internal static void StripSpaces(char[] value, int index, ref int len)
	{
	}

	[Token(Token = "0x60004F6")]
	[Address(RVA = "0x5FB07E0", Offset = "0x5FAF7E0", VA = "0x5FB07E0")]
	internal static void BlockCopyChars(char[] src, int srcOffset, char[] dst, int dstOffset, int count)
	{
	}

	[Token(Token = "0x60004F7")]
	[Address(RVA = "0x5FB5190", Offset = "0x5FB4190", VA = "0x5FB5190")]
	internal static void BlockCopy(byte[] src, int srcOffset, byte[] dst, int dstOffset, int count)
	{
	}
}
