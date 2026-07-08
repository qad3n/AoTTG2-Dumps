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
		[Address(RVA = "0x4467470", Offset = "0x4467470", VA = "0x4467470")]
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
			[Address(RVA = "0x44675A0", Offset = "0x44675A0", VA = "0x44675A0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000117")]
		internal int LinePos
		{
			[Token(Token = "0x60004FC")]
			[Address(RVA = "0x44675B0", Offset = "0x44675B0", VA = "0x44675B0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x60004F9")]
		[Address(RVA = "0x4467480", Offset = "0x4467480", VA = "0x4467480")]
		internal void Clear()
		{
		}

		[Token(Token = "0x60004FA")]
		[Address(RVA = "0x4467550", Offset = "0x4467550", VA = "0x4467550")]
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
		[Address(RVA = "0x44675C0", Offset = "0x44675C0", VA = "0x44675C0")]
		internal XmlContext()
		{
		}

		[Token(Token = "0x60004FE")]
		[Address(RVA = "0x4467640", Offset = "0x4467640", VA = "0x4467640")]
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
			[Address(RVA = "0x44676B0", Offset = "0x44676B0", VA = "0x44676B0", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60004FF")]
		[Address(RVA = "0x44676A0", Offset = "0x44676A0", VA = "0x44676A0")]
		public NoNamespaceManager()
		{
		}

		[Token(Token = "0x6000501")]
		[Address(RVA = "0x44676D0", Offset = "0x44676D0", VA = "0x44676D0", Slot = "10")]
		public override void PushScope()
		{
		}

		[Token(Token = "0x6000502")]
		[Address(RVA = "0x44676E0", Offset = "0x44676E0", VA = "0x44676E0", Slot = "11")]
		public override bool PopScope()
		{
			return default(bool);
		}

		[Token(Token = "0x6000503")]
		[Address(RVA = "0x44676F0", Offset = "0x44676F0", VA = "0x44676F0", Slot = "12")]
		public override void AddNamespace(string prefix, string uri)
		{
		}

		[Token(Token = "0x6000504")]
		[Address(RVA = "0x4467700", Offset = "0x4467700", VA = "0x4467700", Slot = "13")]
		public override void RemoveNamespace(string prefix, string uri)
		{
		}

		[Token(Token = "0x6000505")]
		[Address(RVA = "0x4467710", Offset = "0x4467710", VA = "0x4467710", Slot = "14")]
		public override IEnumerator GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000506")]
		[Address(RVA = "0x4467720", Offset = "0x4467720", VA = "0x4467720", Slot = "15")]
		public override IDictionary<string, string> GetNamespacesInScope(XmlNamespaceScope scope)
		{
			return null;
		}

		[Token(Token = "0x6000507")]
		[Address(RVA = "0x4467730", Offset = "0x4467730", VA = "0x4467730", Slot = "16")]
		public override string LookupNamespace(string prefix)
		{
			return null;
		}

		[Token(Token = "0x6000508")]
		[Address(RVA = "0x4467750", Offset = "0x4467750", VA = "0x4467750", Slot = "17")]
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
			[Address(RVA = "0x4467790", Offset = "0x4467790", VA = "0x4467790", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700011A")]
		private IXmlNamespaceResolver System_002EXml_002EIDtdParserAdapter_002ENamespaceResolver
		{
			[Token(Token = "0x600050B")]
			[Address(RVA = "0x44677B0", Offset = "0x44677B0", VA = "0x44677B0", Slot = "10")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700011B")]
		private Uri System_002EXml_002EIDtdParserAdapter_002EBaseUri
		{
			[Token(Token = "0x600050C")]
			[Address(RVA = "0x44677D0", Offset = "0x44677D0", VA = "0x44677D0", Slot = "11")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700011C")]
		private bool System_002EXml_002EIDtdParserAdapter_002EIsEof
		{
			[Token(Token = "0x600050D")]
			[Address(RVA = "0x44677F0", Offset = "0x44677F0", VA = "0x44677F0", Slot = "18")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700011D")]
		private char[] System_002EXml_002EIDtdParserAdapter_002EParsingBuffer
		{
			[Token(Token = "0x600050E")]
			[Address(RVA = "0x4467810", Offset = "0x4467810", VA = "0x4467810", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700011E")]
		private int System_002EXml_002EIDtdParserAdapter_002EParsingBufferLength
		{
			[Token(Token = "0x600050F")]
			[Address(RVA = "0x4467830", Offset = "0x4467830", VA = "0x4467830", Slot = "13")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700011F")]
		private int System_002EXml_002EIDtdParserAdapter_002ECurrentPosition
		{
			[Token(Token = "0x6000510")]
			[Address(RVA = "0x4467850", Offset = "0x4467850", VA = "0x4467850", Slot = "14")]
			get
			{
				return default(int);
			}
			[Token(Token = "0x6000511")]
			[Address(RVA = "0x4467870", Offset = "0x4467870", VA = "0x4467870", Slot = "15")]
			set
			{
			}
		}

		[Token(Token = "0x17000120")]
		private int System_002EXml_002EIDtdParserAdapter_002EEntityStackLength
		{
			[Token(Token = "0x6000512")]
			[Address(RVA = "0x4467890", Offset = "0x4467890", VA = "0x4467890", Slot = "19")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000121")]
		private bool System_002EXml_002EIDtdParserAdapter_002EIsEntityEolNormalized
		{
			[Token(Token = "0x6000513")]
			[Address(RVA = "0x44678B0", Offset = "0x44678B0", VA = "0x44678B0", Slot = "20")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000122")]
		private int System_002EXml_002EIDtdParserAdapter_002ELineNo
		{
			[Token(Token = "0x6000515")]
			[Address(RVA = "0x44678F0", Offset = "0x44678F0", VA = "0x44678F0", Slot = "16")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000123")]
		private int System_002EXml_002EIDtdParserAdapter_002ELineStartPosition
		{
			[Token(Token = "0x6000516")]
			[Address(RVA = "0x4467910", Offset = "0x4467910", VA = "0x4467910", Slot = "17")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000124")]
		private bool System_002EXml_002EIDtdParserAdapterWithValidation_002EDtdValidation
		{
			[Token(Token = "0x6000523")]
			[Address(RVA = "0x4467AB0", Offset = "0x4467AB0", VA = "0x4467AB0", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000125")]
		private IValidationEventHandling System_002EXml_002EIDtdParserAdapterWithValidation_002EValidationEventHandling
		{
			[Token(Token = "0x6000524")]
			[Address(RVA = "0x4467AD0", Offset = "0x4467AD0", VA = "0x4467AD0", Slot = "8")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000126")]
		private bool System_002EXml_002EIDtdParserAdapterV1_002ENormalization
		{
			[Token(Token = "0x6000525")]
			[Address(RVA = "0x4467AF0", Offset = "0x4467AF0", VA = "0x4467AF0", Slot = "5")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000127")]
		private bool System_002EXml_002EIDtdParserAdapterV1_002ENamespaces
		{
			[Token(Token = "0x6000526")]
			[Address(RVA = "0x4467B10", Offset = "0x4467B10", VA = "0x4467B10", Slot = "6")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000128")]
		private bool System_002EXml_002EIDtdParserAdapterV1_002EV1CompatibilityMode
		{
			[Token(Token = "0x6000527")]
			[Address(RVA = "0x4467B30", Offset = "0x4467B30", VA = "0x4467B30", Slot = "4")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000509")]
		[Address(RVA = "0x4467760", Offset = "0x4467760", VA = "0x4467760")]
		internal DtdParserProxy(XmlTextReaderImpl reader)
		{
		}

		[Token(Token = "0x6000514")]
		[Address(RVA = "0x44678D0", Offset = "0x44678D0", VA = "0x44678D0", Slot = "22")]
		private void System_002EXml_002EIDtdParserAdapter_002EOnNewLine(int pos)
		{
		}

		[Token(Token = "0x6000517")]
		[Address(RVA = "0x4467930", Offset = "0x4467930", VA = "0x4467930", Slot = "21")]
		private int System_002EXml_002EIDtdParserAdapter_002EReadData()
		{
			return default(int);
		}

		[Token(Token = "0x6000518")]
		[Address(RVA = "0x4467950", Offset = "0x4467950", VA = "0x4467950", Slot = "23")]
		private int System_002EXml_002EIDtdParserAdapter_002EParseNumericCharRef(StringBuilder internalSubsetBuilder)
		{
			return default(int);
		}

		[Token(Token = "0x6000519")]
		[Address(RVA = "0x4467970", Offset = "0x4467970", VA = "0x4467970", Slot = "24")]
		private int System_002EXml_002EIDtdParserAdapter_002EParseNamedCharRef(bool expand, StringBuilder internalSubsetBuilder)
		{
			return default(int);
		}

		[Token(Token = "0x600051A")]
		[Address(RVA = "0x4467990", Offset = "0x4467990", VA = "0x4467990", Slot = "25")]
		private void System_002EXml_002EIDtdParserAdapter_002EParsePI(StringBuilder sb)
		{
		}

		[Token(Token = "0x600051B")]
		[Address(RVA = "0x44679B0", Offset = "0x44679B0", VA = "0x44679B0", Slot = "26")]
		private void System_002EXml_002EIDtdParserAdapter_002EParseComment(StringBuilder sb)
		{
		}

		[Token(Token = "0x600051C")]
		[Address(RVA = "0x44679D0", Offset = "0x44679D0", VA = "0x44679D0", Slot = "27")]
		private bool System_002EXml_002EIDtdParserAdapter_002EPushEntity(IDtdEntityInfo entity, out int entityId)
		{
			return default(bool);
		}

		[Token(Token = "0x600051D")]
		[Address(RVA = "0x44679F0", Offset = "0x44679F0", VA = "0x44679F0", Slot = "28")]
		private bool System_002EXml_002EIDtdParserAdapter_002EPopEntity(out IDtdEntityInfo oldEntity, out int newEntityId)
		{
			return default(bool);
		}

		[Token(Token = "0x600051E")]
		[Address(RVA = "0x4467A10", Offset = "0x4467A10", VA = "0x4467A10", Slot = "29")]
		private bool System_002EXml_002EIDtdParserAdapter_002EPushExternalSubset(string systemId, string publicId)
		{
			return default(bool);
		}

		[Token(Token = "0x600051F")]
		[Address(RVA = "0x4467A30", Offset = "0x4467A30", VA = "0x4467A30", Slot = "30")]
		private void System_002EXml_002EIDtdParserAdapter_002EPushInternalDtd(string baseUri, string internalDtd)
		{
		}

		[Token(Token = "0x6000520")]
		[Address(RVA = "0x4467A50", Offset = "0x4467A50", VA = "0x4467A50", Slot = "33")]
		private void System_002EXml_002EIDtdParserAdapter_002EThrow(Exception e)
		{
		}

		[Token(Token = "0x6000521")]
		[Address(RVA = "0x4467A70", Offset = "0x4467A70", VA = "0x4467A70", Slot = "31")]
		private void System_002EXml_002EIDtdParserAdapter_002EOnSystemId(string systemId, LineInfo keywordLineInfo, LineInfo systemLiteralLineInfo)
		{
		}

		[Token(Token = "0x6000522")]
		[Address(RVA = "0x4467A90", Offset = "0x4467A90", VA = "0x4467A90", Slot = "32")]
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
			[Address(RVA = "0x4467B50", Offset = "0x4467B50", VA = "0x4467B50")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700012A")]
		internal int LineNo
		{
			[Token(Token = "0x600052A")]
			[Address(RVA = "0x4467D30", Offset = "0x4467D30", VA = "0x4467D30")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700012B")]
		internal int LinePos
		{
			[Token(Token = "0x600052B")]
			[Address(RVA = "0x4467D40", Offset = "0x4467D40", VA = "0x4467D40")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700012C")]
		internal bool IsEmptyElement
		{
			[Token(Token = "0x600052C")]
			[Address(RVA = "0x4467D50", Offset = "0x4467D50", VA = "0x4467D50")]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x600052D")]
			[Address(RVA = "0x4467D70", Offset = "0x4467D70", VA = "0x4467D70")]
			set
			{
			}
		}

		[Token(Token = "0x1700012D")]
		internal bool IsDefaultAttribute
		{
			[Token(Token = "0x600052E")]
			[Address(RVA = "0x4467D80", Offset = "0x4467D80", VA = "0x4467D80")]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x600052F")]
			[Address(RVA = "0x4467DA0", Offset = "0x4467DA0", VA = "0x4467DA0")]
			set
			{
			}
		}

		[Token(Token = "0x1700012E")]
		internal bool ValueBuffered
		{
			[Token(Token = "0x6000530")]
			[Address(RVA = "0x4467DB0", Offset = "0x4467DB0", VA = "0x4467DB0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700012F")]
		internal string StringValue
		{
			[Token(Token = "0x6000531")]
			[Address(RVA = "0x4467DC0", Offset = "0x4467DC0", VA = "0x4467DC0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000529")]
		[Address(RVA = "0x4467C00", Offset = "0x4467C00", VA = "0x4467C00")]
		internal NodeData()
		{
		}

		[Token(Token = "0x6000532")]
		[Address(RVA = "0x4467E10", Offset = "0x4467E10", VA = "0x4467E10")]
		internal void TrimSpacesInValue()
		{
		}

		[Token(Token = "0x6000533")]
		[Address(RVA = "0x4467C20", Offset = "0x4467C20", VA = "0x4467C20")]
		internal void Clear(XmlNodeType type)
		{
		}

		[Token(Token = "0x6000534")]
		[Address(RVA = "0x4467E50", Offset = "0x4467E50", VA = "0x4467E50")]
		internal void ClearName()
		{
		}

		[Token(Token = "0x6000535")]
		[Address(RVA = "0x4467EE0", Offset = "0x4467EE0", VA = "0x4467EE0")]
		internal void SetLineInfo(int lineNo, int linePos)
		{
		}

		[Token(Token = "0x6000536")]
		[Address(RVA = "0x4467EF0", Offset = "0x4467EF0", VA = "0x4467EF0")]
		internal void SetLineInfo2(int lineNo, int linePos)
		{
		}

		[Token(Token = "0x6000537")]
		[Address(RVA = "0x4467F00", Offset = "0x4467F00", VA = "0x4467F00")]
		internal void SetValueNode(XmlNodeType type, string value)
		{
		}

		[Token(Token = "0x6000538")]
		[Address(RVA = "0x4467FB0", Offset = "0x4467FB0", VA = "0x4467FB0")]
		internal void SetValueNode(XmlNodeType type, char[] chars, int startPos, int len)
		{
		}

		[Token(Token = "0x6000539")]
		[Address(RVA = "0x4468080", Offset = "0x4468080", VA = "0x4468080")]
		internal void SetNamedNode(XmlNodeType type, string localName)
		{
		}

		[Token(Token = "0x600053A")]
		[Address(RVA = "0x4468130", Offset = "0x4468130", VA = "0x4468130")]
		internal void SetNamedNode(XmlNodeType type, string localName, string prefix, string nameWPrefix)
		{
		}

		[Token(Token = "0x600053B")]
		[Address(RVA = "0x44681D0", Offset = "0x44681D0", VA = "0x44681D0")]
		internal void SetValue(string value)
		{
		}

		[Token(Token = "0x600053C")]
		[Address(RVA = "0x44681F0", Offset = "0x44681F0", VA = "0x44681F0")]
		internal void SetValue(char[] chars, int startPos, int len)
		{
		}

		[Token(Token = "0x600053D")]
		[Address(RVA = "0x4468240", Offset = "0x4468240", VA = "0x4468240")]
		internal void OnBufferInvalidated()
		{
		}

		[Token(Token = "0x600053E")]
		[Address(RVA = "0x4468290", Offset = "0x4468290", VA = "0x4468290")]
		internal void CopyTo(int valueOffset, StringBuilder sb)
		{
		}

		[Token(Token = "0x600053F")]
		[Address(RVA = "0x44682F0", Offset = "0x44682F0", VA = "0x44682F0")]
		internal int CopyTo(int valueOffset, char[] buffer, int offset, int length)
		{
			return default(int);
		}

		[Token(Token = "0x6000540")]
		[Address(RVA = "0x4468340", Offset = "0x4468340", VA = "0x4468340")]
		internal string GetNameWPrefix(XmlNameTable nt)
		{
			return null;
		}

		[Token(Token = "0x6000541")]
		[Address(RVA = "0x4468350", Offset = "0x4468350", VA = "0x4468350")]
		internal string CreateNameWPrefix(XmlNameTable nt)
		{
			return null;
		}

		[Token(Token = "0x6000542")]
		[Address(RVA = "0x44683E0", Offset = "0x44683E0", VA = "0x44683E0", Slot = "4")]
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
			[Address(RVA = "0x44684B0", Offset = "0x44684B0", VA = "0x44684B0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000544")]
		[Address(RVA = "0x4468520", Offset = "0x4468520", VA = "0x4468520", Slot = "4")]
		public int Compare(object x, object y)
		{
			return default(int);
		}

		[Token(Token = "0x6000545")]
		[Address(RVA = "0x44688A0", Offset = "0x44688A0", VA = "0x44688A0")]
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
		[Address(RVA = "0x435BB00", Offset = "0x435BB00", VA = "0x435BB00", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DB")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x60003FA")]
		[Address(RVA = "0x435BC80", Offset = "0x435BC80", VA = "0x435BC80", Slot = "6")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x170000DC")]
	public override string Name
	{
		[Token(Token = "0x60003FB")]
		[Address(RVA = "0x435BCA0", Offset = "0x435BCA0", VA = "0x435BCA0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DD")]
	public override string LocalName
	{
		[Token(Token = "0x60003FC")]
		[Address(RVA = "0x435BCD0", Offset = "0x435BCD0", VA = "0x435BCD0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DE")]
	public override string NamespaceURI
	{
		[Token(Token = "0x60003FD")]
		[Address(RVA = "0x435BCF0", Offset = "0x435BCF0", VA = "0x435BCF0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DF")]
	public override string Prefix
	{
		[Token(Token = "0x60003FE")]
		[Address(RVA = "0x435BD10", Offset = "0x435BD10", VA = "0x435BD10", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E0")]
	public override string Value
	{
		[Token(Token = "0x60003FF")]
		[Address(RVA = "0x435BD30", Offset = "0x435BD30", VA = "0x435BD30", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E1")]
	public override int Depth
	{
		[Token(Token = "0x6000400")]
		[Address(RVA = "0x435BF90", Offset = "0x435BF90", VA = "0x435BF90", Slot = "12")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000E2")]
	public override string BaseURI
	{
		[Token(Token = "0x6000401")]
		[Address(RVA = "0x435BFB0", Offset = "0x435BFB0", VA = "0x435BFB0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E3")]
	public override bool IsEmptyElement
	{
		[Token(Token = "0x6000402")]
		[Address(RVA = "0x435BFC0", Offset = "0x435BFC0", VA = "0x435BFC0", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E4")]
	public override bool IsDefault
	{
		[Token(Token = "0x6000403")]
		[Address(RVA = "0x435BFE0", Offset = "0x435BFE0", VA = "0x435BFE0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E5")]
	public override char QuoteChar
	{
		[Token(Token = "0x6000404")]
		[Address(RVA = "0x435C000", Offset = "0x435C000", VA = "0x435C000", Slot = "16")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x170000E6")]
	public override XmlSpace XmlSpace
	{
		[Token(Token = "0x6000405")]
		[Address(RVA = "0x435C030", Offset = "0x435C030", VA = "0x435C030", Slot = "17")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x170000E7")]
	public override string XmlLang
	{
		[Token(Token = "0x6000406")]
		[Address(RVA = "0x435C050", Offset = "0x435C050", VA = "0x435C050", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E8")]
	public override ReadState ReadState
	{
		[Token(Token = "0x6000407")]
		[Address(RVA = "0x435C070", Offset = "0x435C070", VA = "0x435C070", Slot = "34")]
		get
		{
			return default(ReadState);
		}
	}

	[Token(Token = "0x170000E9")]
	public override bool EOF
	{
		[Token(Token = "0x6000408")]
		[Address(RVA = "0x435C080", Offset = "0x435C080", VA = "0x435C080", Slot = "32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EA")]
	public override XmlNameTable NameTable
	{
		[Token(Token = "0x6000409")]
		[Address(RVA = "0x435C090", Offset = "0x435C090", VA = "0x435C090", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000EB")]
	public override bool CanResolveEntity
	{
		[Token(Token = "0x600040A")]
		[Address(RVA = "0x435C0A0", Offset = "0x435C0A0", VA = "0x435C0A0", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EC")]
	public override int AttributeCount
	{
		[Token(Token = "0x600040B")]
		[Address(RVA = "0x435C0B0", Offset = "0x435C0B0", VA = "0x435C0B0", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000ED")]
	internal XmlReader OuterReader
	{
		[Token(Token = "0x600041B")]
		[Address(RVA = "0x43608D0", Offset = "0x43608D0", VA = "0x43608D0")]
		set
		{
		}
	}

	[Token(Token = "0x170000EE")]
	public override bool CanReadValueChunk
	{
		[Token(Token = "0x600041E")]
		[Address(RVA = "0x43609D0", Offset = "0x43609D0", VA = "0x43609D0", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EF")]
	public int LineNumber
	{
		[Token(Token = "0x6000421")]
		[Address(RVA = "0x43616F0", Offset = "0x43616F0", VA = "0x43616F0", Slot = "54")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000F0")]
	public int LinePosition
	{
		[Token(Token = "0x6000422")]
		[Address(RVA = "0x4361710", Offset = "0x4361710", VA = "0x4361710", Slot = "55")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000F1")]
	internal bool Namespaces
	{
		[Token(Token = "0x6000428")]
		[Address(RVA = "0x4361810", Offset = "0x4361810", VA = "0x4361810")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000429")]
		[Address(RVA = "0x4361820", Offset = "0x4361820", VA = "0x4361820")]
		set
		{
		}
	}

	[Token(Token = "0x170000F2")]
	internal bool Normalization
	{
		[Token(Token = "0x600042A")]
		[Address(RVA = "0x4361A20", Offset = "0x4361A20", VA = "0x4361A20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600042B")]
		[Address(RVA = "0x4361A30", Offset = "0x4361A30", VA = "0x4361A30")]
		set
		{
		}
	}

	[Token(Token = "0x170000F3")]
	internal WhitespaceHandling WhitespaceHandling
	{
		[Token(Token = "0x600042C")]
		[Address(RVA = "0x4361B50", Offset = "0x4361B50", VA = "0x4361B50")]
		set
		{
		}
	}

	[Token(Token = "0x170000F4")]
	internal EntityHandling EntityHandling
	{
		[Token(Token = "0x600042D")]
		[Address(RVA = "0x4361C20", Offset = "0x4361C20", VA = "0x4361C20")]
		set
		{
		}
	}

	[Token(Token = "0x170000F5")]
	internal bool IsResolverSet
	{
		[Token(Token = "0x600042E")]
		[Address(RVA = "0x4361CA0", Offset = "0x4361CA0", VA = "0x4361CA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F6")]
	internal XmlResolver XmlResolver
	{
		[Token(Token = "0x600042F")]
		[Address(RVA = "0x4361CB0", Offset = "0x4361CB0", VA = "0x4361CB0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F7")]
	internal XmlNameTable DtdParserProxy_NameTable
	{
		[Token(Token = "0x6000430")]
		[Address(RVA = "0x4361D50", Offset = "0x4361D50", VA = "0x4361D50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F8")]
	internal IXmlNamespaceResolver DtdParserProxy_NamespaceResolver
	{
		[Token(Token = "0x6000431")]
		[Address(RVA = "0x4361D60", Offset = "0x4361D60", VA = "0x4361D60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F9")]
	internal bool DtdParserProxy_DtdValidation
	{
		[Token(Token = "0x6000432")]
		[Address(RVA = "0x4361D70", Offset = "0x4361D70", VA = "0x4361D70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FA")]
	internal bool DtdParserProxy_Normalization
	{
		[Token(Token = "0x6000433")]
		[Address(RVA = "0x4361D90", Offset = "0x4361D90", VA = "0x4361D90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FB")]
	internal bool DtdParserProxy_Namespaces
	{
		[Token(Token = "0x6000434")]
		[Address(RVA = "0x4361DA0", Offset = "0x4361DA0", VA = "0x4361DA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FC")]
	internal bool DtdParserProxy_V1CompatibilityMode
	{
		[Token(Token = "0x6000435")]
		[Address(RVA = "0x4361DB0", Offset = "0x4361DB0", VA = "0x4361DB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FD")]
	internal Uri DtdParserProxy_BaseUri
	{
		[Token(Token = "0x6000436")]
		[Address(RVA = "0x4361DC0", Offset = "0x4361DC0", VA = "0x4361DC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FE")]
	internal bool DtdParserProxy_IsEof
	{
		[Token(Token = "0x6000437")]
		[Address(RVA = "0x4361E70", Offset = "0x4361E70", VA = "0x4361E70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FF")]
	internal char[] DtdParserProxy_ParsingBuffer
	{
		[Token(Token = "0x6000438")]
		[Address(RVA = "0x4361E80", Offset = "0x4361E80", VA = "0x4361E80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000100")]
	internal int DtdParserProxy_ParsingBufferLength
	{
		[Token(Token = "0x6000439")]
		[Address(RVA = "0x4361E90", Offset = "0x4361E90", VA = "0x4361E90")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000101")]
	internal int DtdParserProxy_CurrentPosition
	{
		[Token(Token = "0x600043A")]
		[Address(RVA = "0x4361EA0", Offset = "0x4361EA0", VA = "0x4361EA0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600043B")]
		[Address(RVA = "0x4361EB0", Offset = "0x4361EB0", VA = "0x4361EB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000102")]
	internal int DtdParserProxy_EntityStackLength
	{
		[Token(Token = "0x600043C")]
		[Address(RVA = "0x4361EC0", Offset = "0x4361EC0", VA = "0x4361EC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000103")]
	internal bool DtdParserProxy_IsEntityEolNormalized
	{
		[Token(Token = "0x600043D")]
		[Address(RVA = "0x4361ED0", Offset = "0x4361ED0", VA = "0x4361ED0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000104")]
	internal IValidationEventHandling DtdParserProxy_ValidationEventHandling
	{
		[Token(Token = "0x600043E")]
		[Address(RVA = "0x4361EE0", Offset = "0x4361EE0", VA = "0x4361EE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000105")]
	internal int DtdParserProxy_LineNo
	{
		[Token(Token = "0x6000440")]
		[Address(RVA = "0x4361F10", Offset = "0x4361F10", VA = "0x4361F10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000106")]
	internal int DtdParserProxy_LineStartPosition
	{
		[Token(Token = "0x6000441")]
		[Address(RVA = "0x4361F20", Offset = "0x4361F20", VA = "0x4361F20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000107")]
	private bool IsResolverNull
	{
		[Token(Token = "0x6000447")]
		[Address(RVA = "0x4362F50", Offset = "0x4362F50", VA = "0x4362F50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000108")]
	private bool InAttributeValueIterator
	{
		[Token(Token = "0x6000463")]
		[Address(RVA = "0x435C5E0", Offset = "0x435C5E0", VA = "0x435C5E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000109")]
	private bool DtdValidation
	{
		[Token(Token = "0x6000465")]
		[Address(RVA = "0x4361D80", Offset = "0x4361D80", VA = "0x4361D80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700010A")]
	private bool InEntity
	{
		[Token(Token = "0x600049A")]
		[Address(RVA = "0x4365CE0", Offset = "0x4365CE0", VA = "0x4365CE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700010B")]
	internal override IDtdInfo DtdInfo
	{
		[Token(Token = "0x60004E0")]
		[Address(RVA = "0x436EF70", Offset = "0x436EF70", VA = "0x436EF70", Slot = "52")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700010C")]
	internal IValidationEventHandling ValidationEventHandling
	{
		[Token(Token = "0x60004E2")]
		[Address(RVA = "0x436F100", Offset = "0x436F100", VA = "0x436F100")]
		set
		{
		}
	}

	[Token(Token = "0x1700010D")]
	internal OnDefaultAttributeUseDelegate OnDefaultAttributeUse
	{
		[Token(Token = "0x60004E3")]
		[Address(RVA = "0x436F120", Offset = "0x436F120", VA = "0x436F120")]
		set
		{
		}
	}

	[Token(Token = "0x1700010E")]
	internal bool XmlValidatingReaderCompatibilityMode
	{
		[Token(Token = "0x60004E4")]
		[Address(RVA = "0x436F140", Offset = "0x436F140", VA = "0x436F140")]
		set
		{
		}
	}

	[Token(Token = "0x1700010F")]
	internal XmlNodeType FragmentType
	{
		[Token(Token = "0x60004E5")]
		[Address(RVA = "0x436F210", Offset = "0x436F210", VA = "0x436F210")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000110")]
	internal object InternalSchemaType
	{
		[Token(Token = "0x60004E8")]
		[Address(RVA = "0x436F270", Offset = "0x436F270", VA = "0x436F270")]
		set
		{
		}
	}

	[Token(Token = "0x17000111")]
	internal object InternalTypedValue
	{
		[Token(Token = "0x60004E9")]
		[Address(RVA = "0x436F2A0", Offset = "0x436F2A0", VA = "0x436F2A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004EA")]
		[Address(RVA = "0x436F2C0", Offset = "0x436F2C0", VA = "0x436F2C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000112")]
	internal bool StandAlone
	{
		[Token(Token = "0x60004EB")]
		[Address(RVA = "0x436F2F0", Offset = "0x436F2F0", VA = "0x436F2F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000113")]
	internal override XmlNamespaceManager NamespaceManager
	{
		[Token(Token = "0x60004EC")]
		[Address(RVA = "0x436F300", Offset = "0x436F300", VA = "0x436F300", Slot = "51")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000114")]
	internal bool V1Compat
	{
		[Token(Token = "0x60004ED")]
		[Address(RVA = "0x436F310", Offset = "0x436F310", VA = "0x436F310")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000115")]
	internal bool DisableUndeclaredEntityCheck
	{
		[Token(Token = "0x60004F1")]
		[Address(RVA = "0x436F870", Offset = "0x436F870", VA = "0x436F870")]
		set
		{
		}
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x4359400", Offset = "0x4359400", VA = "0x4359400")]
	internal XmlTextReaderImpl(XmlNameTable nt)
	{
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x43598B0", Offset = "0x43598B0", VA = "0x43598B0")]
	private XmlTextReaderImpl(XmlResolver resolver, XmlReaderSettings settings, XmlParserContext context)
	{
	}

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x435A120", Offset = "0x435A120", VA = "0x435A120")]
	internal XmlTextReaderImpl(Stream input)
	{
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x435A1A0", Offset = "0x435A1A0", VA = "0x435A1A0")]
	internal XmlTextReaderImpl(string url, Stream input, XmlNameTable nt)
	{
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x435A320", Offset = "0x435A320", VA = "0x435A320")]
	internal XmlTextReaderImpl(TextReader input)
	{
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x435A480", Offset = "0x435A480", VA = "0x435A480")]
	internal XmlTextReaderImpl(TextReader input, XmlNameTable nt)
	{
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x435A3A0", Offset = "0x435A3A0", VA = "0x435A3A0")]
	internal XmlTextReaderImpl(string url, TextReader input, XmlNameTable nt)
	{
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x435A4C0", Offset = "0x435A4C0", VA = "0x435A4C0")]
	internal XmlTextReaderImpl(string xmlFragment, XmlNodeType fragType, XmlParserContext context)
	{
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x435A9A0", Offset = "0x435A9A0", VA = "0x435A9A0")]
	internal XmlTextReaderImpl(string xmlFragment, XmlParserContext context)
	{
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x435AAD0", Offset = "0x435AAD0", VA = "0x435AAD0")]
	public XmlTextReaderImpl(string url, XmlNameTable nt)
	{
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x435AD50", Offset = "0x435AD50", VA = "0x435AD50")]
	private void FinishInitUriString()
	{
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x435B4A0", Offset = "0x435B4A0", VA = "0x435B4A0")]
	internal XmlTextReaderImpl(Stream stream, byte[] bytes, int byteCount, XmlReaderSettings settings, Uri baseUri, string baseUriStr, XmlParserContext context, bool closeInput)
	{
	}

	[Token(Token = "0x60003F5")]
	[Address(RVA = "0x435B780", Offset = "0x435B780", VA = "0x435B780")]
	private void FinishInitStream()
	{
	}

	[Token(Token = "0x60003F6")]
	[Address(RVA = "0x435B870", Offset = "0x435B870", VA = "0x435B870")]
	internal XmlTextReaderImpl(TextReader input, XmlReaderSettings settings, string baseUriStr, XmlParserContext context)
	{
	}

	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x435B9A0", Offset = "0x435B9A0", VA = "0x435B9A0")]
	private void FinishInitTextReader()
	{
	}

	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x435BA70", Offset = "0x435BA70", VA = "0x435BA70")]
	internal XmlTextReaderImpl(string xmlFragment, XmlParserContext context, XmlReaderSettings settings)
	{
	}

	[Token(Token = "0x600040C")]
	[Address(RVA = "0x435C0C0", Offset = "0x435C0C0", VA = "0x435C0C0", Slot = "22")]
	public override string GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x600040D")]
	[Address(RVA = "0x435C310", Offset = "0x435C310", VA = "0x435C310", Slot = "23")]
	public override string GetAttribute(string localName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x600040E")]
	[Address(RVA = "0x435C490", Offset = "0x435C490", VA = "0x435C490", Slot = "24")]
	public override string GetAttribute(int i)
	{
		return null;
	}

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x435C520", Offset = "0x435C520", VA = "0x435C520", Slot = "25")]
	public override bool MoveToAttribute(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x435C710", Offset = "0x435C710", VA = "0x435C710", Slot = "26")]
	public override void MoveToAttribute(int i)
	{
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x435C7E0", Offset = "0x435C7E0", VA = "0x435C7E0", Slot = "27")]
	public override bool MoveToFirstAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x435C860", Offset = "0x435C860", VA = "0x435C860", Slot = "28")]
	public override bool MoveToNextAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6000413")]
	[Address(RVA = "0x435C8F0", Offset = "0x435C8F0", VA = "0x435C8F0", Slot = "29")]
	public override bool MoveToElement()
	{
		return default(bool);
	}

	[Token(Token = "0x6000414")]
	[Address(RVA = "0x435C990", Offset = "0x435C990", VA = "0x435C990")]
	private void FinishInit()
	{
	}

	[Token(Token = "0x6000415")]
	[Address(RVA = "0x435C9D0", Offset = "0x435C9D0", VA = "0x435C9D0", Slot = "31")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x6000416")]
	[Address(RVA = "0x435F350", Offset = "0x435F350", VA = "0x435F350", Slot = "33")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000417")]
	[Address(RVA = "0x435F4F0", Offset = "0x435F4F0", VA = "0x435F4F0", Slot = "35")]
	public override void Skip()
	{
	}

	[Token(Token = "0x6000418")]
	[Address(RVA = "0x435F7B0", Offset = "0x435F7B0", VA = "0x435F7B0", Slot = "37")]
	public override string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x435F7F0", Offset = "0x435F7F0", VA = "0x435F7F0", Slot = "30")]
	public override bool ReadAttributeValue()
	{
		return default(bool);
	}

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x4360140", Offset = "0x4360140", VA = "0x4360140", Slot = "39")]
	public override void ResolveEntity()
	{
	}

	[Token(Token = "0x600041C")]
	[Address(RVA = "0x43608F0", Offset = "0x43608F0", VA = "0x43608F0")]
	internal void MoveOffEntityReference()
	{
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x43609B0", Offset = "0x43609B0", VA = "0x43609B0", Slot = "42")]
	public override string ReadString()
	{
		return null;
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x43609E0", Offset = "0x43609E0", VA = "0x43609E0", Slot = "41")]
	public override int ReadValueChunk(char[] buffer, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x43616E0", Offset = "0x43616E0", VA = "0x43616E0", Slot = "53")]
	public bool HasLineInfo()
	{
		return default(bool);
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x4361730", Offset = "0x4361730", VA = "0x4361730", Slot = "56")]
	private IDictionary<string, string> System_002EXml_002EIXmlNamespaceResolver_002EGetNamespacesInScope(XmlNamespaceScope scope)
	{
		return null;
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x4361790", Offset = "0x4361790", VA = "0x4361790", Slot = "57")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000425")]
	[Address(RVA = "0x43617B0", Offset = "0x43617B0", VA = "0x43617B0", Slot = "58")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupPrefix(string namespaceName)
	{
		return null;
	}

	[Token(Token = "0x6000426")]
	[Address(RVA = "0x4361760", Offset = "0x4361760", VA = "0x4361760")]
	internal IDictionary<string, string> GetNamespacesInScope(XmlNamespaceScope scope)
	{
		return null;
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x43617E0", Offset = "0x43617E0", VA = "0x43617E0")]
	internal string LookupPrefix(string namespaceName)
	{
		return null;
	}

	[Token(Token = "0x600043F")]
	[Address(RVA = "0x4361EF0", Offset = "0x4361EF0", VA = "0x4361EF0")]
	internal void DtdParserProxy_OnNewLine(int pos)
	{
	}

	[Token(Token = "0x6000442")]
	[Address(RVA = "0x4361F30", Offset = "0x4361F30", VA = "0x4361F30")]
	internal int DtdParserProxy_ReadData()
	{
		return default(int);
	}

	[Token(Token = "0x6000443")]
	[Address(RVA = "0x43623C0", Offset = "0x43623C0", VA = "0x43623C0")]
	internal int DtdParserProxy_ParseNumericCharRef(StringBuilder internalSubsetBuilder)
	{
		return default(int);
	}

	[Token(Token = "0x6000444")]
	[Address(RVA = "0x4362520", Offset = "0x4362520", VA = "0x4362520")]
	internal int DtdParserProxy_ParseNamedCharRef(bool expand, StringBuilder internalSubsetBuilder)
	{
		return default(int);
	}

	[Token(Token = "0x6000445")]
	[Address(RVA = "0x4362600", Offset = "0x4362600", VA = "0x4362600")]
	internal void DtdParserProxy_ParsePI(StringBuilder sb)
	{
	}

	[Token(Token = "0x6000446")]
	[Address(RVA = "0x4362A50", Offset = "0x4362A50", VA = "0x4362A50")]
	internal void DtdParserProxy_ParseComment(StringBuilder sb)
	{
	}

	[Token(Token = "0x6000448")]
	[Address(RVA = "0x435ACF0", Offset = "0x435ACF0", VA = "0x435ACF0")]
	private XmlResolver GetTempResolver()
	{
		return null;
	}

	[Token(Token = "0x6000449")]
	[Address(RVA = "0x4362F90", Offset = "0x4362F90", VA = "0x4362F90")]
	internal bool DtdParserProxy_PushEntity(IDtdEntityInfo entity, out int entityId)
	{
		return default(bool);
	}

	[Token(Token = "0x600044A")]
	[Address(RVA = "0x4363800", Offset = "0x4363800", VA = "0x4363800")]
	internal bool DtdParserProxy_PopEntity(out IDtdEntityInfo oldEntity, out int newEntityId)
	{
		return default(bool);
	}

	[Token(Token = "0x600044B")]
	[Address(RVA = "0x4363980", Offset = "0x4363980", VA = "0x4363980")]
	internal bool DtdParserProxy_PushExternalSubset(string systemId, string publicId)
	{
		return default(bool);
	}

	[Token(Token = "0x600044C")]
	[Address(RVA = "0x4364130", Offset = "0x4364130", VA = "0x4364130")]
	internal void DtdParserProxy_PushInternalDtd(string baseUri, string internalDtd)
	{
	}

	[Token(Token = "0x600044D")]
	[Address(RVA = "0x43644C0", Offset = "0x43644C0", VA = "0x43644C0")]
	internal void DtdParserProxy_Throw(Exception e)
	{
	}

	[Token(Token = "0x600044E")]
	[Address(RVA = "0x4364570", Offset = "0x4364570", VA = "0x4364570")]
	internal void DtdParserProxy_OnSystemId(string systemId, LineInfo keywordLineInfo, LineInfo systemLiteralLineInfo)
	{
	}

	[Token(Token = "0x600044F")]
	[Address(RVA = "0x43646A0", Offset = "0x43646A0", VA = "0x43646A0")]
	internal void DtdParserProxy_OnPublicId(string publicId, LineInfo keywordLineInfo, LineInfo publicLiteralLineInfo)
	{
	}

	[Token(Token = "0x6000450")]
	[Address(RVA = "0x4364720", Offset = "0x4364720", VA = "0x4364720")]
	private void Throw(int pos, string res, string arg)
	{
	}

	[Token(Token = "0x6000451")]
	[Address(RVA = "0x43647C0", Offset = "0x43647C0", VA = "0x43647C0")]
	private void Throw(int pos, string res, string[] args)
	{
	}

	[Token(Token = "0x6000452")]
	[Address(RVA = "0x4364860", Offset = "0x4364860", VA = "0x4364860")]
	private void Throw(int pos, string res)
	{
	}

	[Token(Token = "0x6000453")]
	[Address(RVA = "0x435B760", Offset = "0x435B760", VA = "0x435B760")]
	private void Throw(string res)
	{
	}

	[Token(Token = "0x6000454")]
	[Address(RVA = "0x4364890", Offset = "0x4364890", VA = "0x4364890")]
	private void Throw(string res, int lineNo, int linePos)
	{
	}

	[Token(Token = "0x6000455")]
	[Address(RVA = "0x4364730", Offset = "0x4364730", VA = "0x4364730")]
	private void Throw(string res, string arg)
	{
	}

	[Token(Token = "0x6000456")]
	[Address(RVA = "0x4364930", Offset = "0x4364930", VA = "0x4364930")]
	private void Throw(string res, string arg, int lineNo, int linePos)
	{
	}

	[Token(Token = "0x6000457")]
	[Address(RVA = "0x43647D0", Offset = "0x43647D0", VA = "0x43647D0")]
	private void Throw(string res, string[] args)
	{
	}

	[Token(Token = "0x6000458")]
	[Address(RVA = "0x43649B0", Offset = "0x43649B0", VA = "0x43649B0")]
	private void Throw(string res, string arg, Exception innerException)
	{
	}

	[Token(Token = "0x6000459")]
	[Address(RVA = "0x4364A20", Offset = "0x4364A20", VA = "0x4364A20")]
	private void Throw(string res, string[] args, Exception innerException)
	{
	}

	[Token(Token = "0x600045A")]
	[Address(RVA = "0x43644D0", Offset = "0x43644D0", VA = "0x43644D0")]
	private void Throw(Exception e)
	{
	}

	[Token(Token = "0x600045B")]
	[Address(RVA = "0x4364AD0", Offset = "0x4364AD0", VA = "0x4364AD0")]
	private void ReThrow(Exception e, int lineNo, int linePos)
	{
	}

	[Token(Token = "0x600045C")]
	[Address(RVA = "0x435F0A0", Offset = "0x435F0A0", VA = "0x435F0A0")]
	private void ThrowWithoutLineInfo(string res)
	{
	}

	[Token(Token = "0x600045D")]
	[Address(RVA = "0x4364B70", Offset = "0x4364B70", VA = "0x4364B70")]
	private void ThrowWithoutLineInfo(string res, string arg)
	{
	}

	[Token(Token = "0x600045E")]
	[Address(RVA = "0x4364BE0", Offset = "0x4364BE0", VA = "0x4364BE0")]
	private void ThrowWithoutLineInfo(string res, string[] args, Exception innerException)
	{
	}

	[Token(Token = "0x600045F")]
	[Address(RVA = "0x4364C60", Offset = "0x4364C60", VA = "0x4364C60")]
	private void ThrowInvalidChar(char[] data, int length, int invCharPos)
	{
	}

	[Token(Token = "0x6000460")]
	[Address(RVA = "0x4364AB0", Offset = "0x4364AB0", VA = "0x4364AB0")]
	private void SetErrorState()
	{
	}

	[Token(Token = "0x6000461")]
	[Address(RVA = "0x4362E10", Offset = "0x4362E10", VA = "0x4362E10")]
	private void SendValidationEvent(XmlSeverityType severity, string code, string arg, int lineNo, int linePos)
	{
	}

	[Token(Token = "0x6000462")]
	[Address(RVA = "0x4364CC0", Offset = "0x4364CC0", VA = "0x4364CC0")]
	private void SendValidationEvent(XmlSeverityType severity, XmlSchemaException exception)
	{
	}

	[Token(Token = "0x6000464")]
	[Address(RVA = "0x435C600", Offset = "0x435C600", VA = "0x435C600")]
	private void FinishAttributeValueIterator()
	{
	}

	[Token(Token = "0x6000466")]
	[Address(RVA = "0x435A2B0", Offset = "0x435A2B0", VA = "0x435A2B0")]
	private void InitStreamInput(Stream stream, Encoding encoding)
	{
	}

	[Token(Token = "0x6000467")]
	[Address(RVA = "0x435A2F0", Offset = "0x435A2F0", VA = "0x435A2F0")]
	private void InitStreamInput(string baseUriStr, Stream stream, Encoding encoding)
	{
	}

	[Token(Token = "0x6000468")]
	[Address(RVA = "0x4364ED0", Offset = "0x4364ED0", VA = "0x4364ED0")]
	private void InitStreamInput(Uri baseUri, Stream stream, Encoding encoding)
	{
	}

	[Token(Token = "0x6000469")]
	[Address(RVA = "0x4364F30", Offset = "0x4364F30", VA = "0x4364F30")]
	private void InitStreamInput(Uri baseUri, string baseUriStr, Stream stream, Encoding encoding)
	{
	}

	[Token(Token = "0x600046A")]
	[Address(RVA = "0x435B150", Offset = "0x435B150", VA = "0x435B150")]
	private void InitStreamInput(Uri baseUri, string baseUriStr, Stream stream, byte[] bytes, int byteCount, Encoding encoding)
	{
	}

	[Token(Token = "0x600046B")]
	[Address(RVA = "0x435A4B0", Offset = "0x435A4B0", VA = "0x435A4B0")]
	private void InitTextReaderInput(string baseUriStr, TextReader input)
	{
	}

	[Token(Token = "0x600046C")]
	[Address(RVA = "0x4365280", Offset = "0x4365280", VA = "0x4365280")]
	private void InitTextReaderInput(string baseUriStr, Uri baseUri, TextReader input)
	{
	}

	[Token(Token = "0x600046D")]
	[Address(RVA = "0x435A5D0", Offset = "0x435A5D0", VA = "0x435A5D0")]
	private void InitStringInput(string baseUriStr, Encoding originalEncoding, string str)
	{
	}

	[Token(Token = "0x600046E")]
	[Address(RVA = "0x435A6D0", Offset = "0x435A6D0", VA = "0x435A6D0")]
	private void InitFragmentReader(XmlNodeType fragmentType, XmlParserContext parserContext, bool allowXmlDeclFragment)
	{
	}

	[Token(Token = "0x600046F")]
	[Address(RVA = "0x435B450", Offset = "0x435B450", VA = "0x435B450")]
	private void ProcessDtdFromParserContext(XmlParserContext context)
	{
	}

	[Token(Token = "0x6000470")]
	[Address(RVA = "0x435D990", Offset = "0x435D990", VA = "0x435D990")]
	private void OpenUrl()
	{
	}

	[Token(Token = "0x6000471")]
	[Address(RVA = "0x43655F0", Offset = "0x43655F0", VA = "0x43655F0")]
	private void OpenUrlDelegate(object xmlResolver)
	{
	}

	[Token(Token = "0x6000472")]
	[Address(RVA = "0x4364F50", Offset = "0x4364F50", VA = "0x4364F50")]
	private Encoding DetectEncoding()
	{
		return null;
	}

	[Token(Token = "0x6000473")]
	[Address(RVA = "0x4365110", Offset = "0x4365110", VA = "0x4365110")]
	private void SetupEncoding(Encoding encoding)
	{
	}

	[Token(Token = "0x6000474")]
	[Address(RVA = "0x4365780", Offset = "0x4365780", VA = "0x4365780")]
	private void SwitchEncoding(Encoding newEncoding)
	{
	}

	[Token(Token = "0x6000475")]
	[Address(RVA = "0x4365990", Offset = "0x4365990", VA = "0x4365990")]
	private Encoding CheckEncoding(string newEncodingName)
	{
		return null;
	}

	[Token(Token = "0x6000476")]
	[Address(RVA = "0x4365900", Offset = "0x4365900", VA = "0x4365900")]
	private void UnDecodeChars()
	{
	}

	[Token(Token = "0x6000477")]
	[Address(RVA = "0x4365CF0", Offset = "0x4365CF0", VA = "0x4365CF0")]
	private void SwitchEncodingToUTF8()
	{
	}

	[Token(Token = "0x6000478")]
	[Address(RVA = "0x4361F40", Offset = "0x4361F40", VA = "0x4361F40")]
	private int ReadData()
	{
		return default(int);
	}

	[Token(Token = "0x6000479")]
	[Address(RVA = "0x4365D60", Offset = "0x4365D60", VA = "0x4365D60")]
	private int GetChars(int maxCharsCount)
	{
		return default(int);
	}

	[Token(Token = "0x600047A")]
	[Address(RVA = "0x4365E80", Offset = "0x4365E80", VA = "0x4365E80")]
	private void InvalidCharRecovery(ref int bytesCount, out int charsCount)
	{
	}

	[Token(Token = "0x600047B")]
	[Address(RVA = "0x435F360", Offset = "0x435F360", VA = "0x435F360")]
	internal void Close(bool closeInput)
	{
	}

	[Token(Token = "0x600047C")]
	[Address(RVA = "0x43660B0", Offset = "0x43660B0", VA = "0x43660B0")]
	private void ShiftBuffer(int sourcePos, int destPos, int count)
	{
	}

	[Token(Token = "0x600047D")]
	[Address(RVA = "0x435DBE0", Offset = "0x435DBE0", VA = "0x435DBE0")]
	private bool ParseXmlDeclaration(bool isTextDecl)
	{
		return default(bool);
	}

	[Token(Token = "0x600047E")]
	[Address(RVA = "0x435D3D0", Offset = "0x435D3D0", VA = "0x435D3D0")]
	private bool ParseDocumentContent()
	{
		return default(bool);
	}

	[Token(Token = "0x600047F")]
	[Address(RVA = "0x435D010", Offset = "0x435D010", VA = "0x435D010")]
	private bool ParseElementContent()
	{
		return default(bool);
	}

	[Token(Token = "0x6000480")]
	[Address(RVA = "0x4367AE0", Offset = "0x4367AE0", VA = "0x4367AE0")]
	private void ThrowUnclosedElements()
	{
	}

	[Token(Token = "0x6000481")]
	[Address(RVA = "0x43665C0", Offset = "0x43665C0", VA = "0x43665C0")]
	private void ParseElement()
	{
	}

	[Token(Token = "0x6000482")]
	[Address(RVA = "0x4368380", Offset = "0x4368380", VA = "0x4368380")]
	private void AddDefaultAttributesAndNormalize()
	{
	}

	[Token(Token = "0x6000483")]
	[Address(RVA = "0x4367670", Offset = "0x4367670", VA = "0x4367670")]
	private void ParseEndElement()
	{
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x4369850", Offset = "0x4369850", VA = "0x4369850")]
	private void ThrowTagMismatch(NodeData startTag)
	{
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x4367CA0", Offset = "0x4367CA0", VA = "0x4367CA0")]
	private void ParseAttributes()
	{
	}

	[Token(Token = "0x6000486")]
	[Address(RVA = "0x4368FF0", Offset = "0x4368FF0", VA = "0x4368FF0")]
	private void ElementNamespaceLookup()
	{
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x4369790", Offset = "0x4369790", VA = "0x4369790")]
	private void AttributeNamespaceLookup()
	{
	}

	[Token(Token = "0x6000488")]
	[Address(RVA = "0x436AD10", Offset = "0x436AD10", VA = "0x436AD10")]
	private void AttributeDuplCheck()
	{
	}

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x436A7D0", Offset = "0x436A7D0", VA = "0x436A7D0")]
	private void OnDefaultNamespaceDecl(NodeData attr)
	{
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x436A970", Offset = "0x436A970", VA = "0x436A970")]
	private void OnNamespaceDecl(NodeData attr)
	{
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x436AA30", Offset = "0x436AA30", VA = "0x436AA30")]
	private void OnXmlReservedAttribute(NodeData attr)
	{
	}

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x4369C40", Offset = "0x4369C40", VA = "0x4369C40")]
	private void ParseAttributeValueSlow(int curPos, char quoteChar, NodeData attr)
	{
	}

	[Token(Token = "0x600048D")]
	[Address(RVA = "0x436B460", Offset = "0x436B460", VA = "0x436B460")]
	private void AddAttributeChunkToList(NodeData attr, NodeData chunk, ref NodeData lastChunk)
	{
	}

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x4366ED0", Offset = "0x4366ED0", VA = "0x4366ED0")]
	private bool ParseText()
	{
		return default(bool);
	}

	[Token(Token = "0x600048F")]
	[Address(RVA = "0x4360EC0", Offset = "0x4360EC0", VA = "0x4360EC0")]
	private bool ParseText(out int startPos, out int endPos, ref int outOrChars)
	{
		return default(bool);
	}

	[Token(Token = "0x6000490")]
	[Address(RVA = "0x435BD80", Offset = "0x435BD80", VA = "0x435BD80")]
	private void FinishPartialValue()
	{
	}

	[Token(Token = "0x6000491")]
	[Address(RVA = "0x435BE90", Offset = "0x435BE90", VA = "0x435BE90")]
	private void FinishOtherValueIterator()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000492")]
	[Address(RVA = "0x435F120", Offset = "0x435F120", VA = "0x435F120")]
	private void SkipPartialTextValue()
	{
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x435F1A0", Offset = "0x435F1A0", VA = "0x435F1A0")]
	private void FinishReadValueChunk()
	{
	}

	[Token(Token = "0x6000494")]
	[Address(RVA = "0x435F1D0", Offset = "0x435F1D0", VA = "0x435F1D0")]
	private void FinishReadContentAsBinary()
	{
	}

	[Token(Token = "0x6000495")]
	[Address(RVA = "0x435F240", Offset = "0x435F240", VA = "0x435F240")]
	private void FinishReadElementContentAsBinary()
	{
	}

	[Token(Token = "0x6000496")]
	[Address(RVA = "0x4367410", Offset = "0x4367410", VA = "0x4367410")]
	private bool ParseRootLevelWhitespace()
	{
		return default(bool);
	}

	[Token(Token = "0x6000497")]
	[Address(RVA = "0x435EC10", Offset = "0x435EC10", VA = "0x435EC10")]
	private void ParseEntityReference()
	{
	}

	[Token(Token = "0x6000498")]
	[Address(RVA = "0x4366B70", Offset = "0x4366B70", VA = "0x4366B70")]
	private EntityType HandleEntityReference(bool isInAttributeValue, EntityExpandType expandType, out int charRefEndPos)
	{
		return default(EntityType);
	}

	[Token(Token = "0x6000499")]
	[Address(RVA = "0x4360390", Offset = "0x4360390", VA = "0x4360390")]
	private EntityType HandleGeneralEntityReference(string name, bool isInAttributeValue, bool pushFakeEntityIfNullResolver, int entityStartLinePos)
	{
		return default(EntityType);
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x4364D70", Offset = "0x4364D70", VA = "0x4364D70")]
	private bool HandleEntityEnd(bool checkEntityNesting)
	{
		return default(bool);
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x435EC80", Offset = "0x435EC80", VA = "0x435EC80")]
	private void SetupEndEntityNodeInContent()
	{
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x436B7F0", Offset = "0x436B7F0", VA = "0x436B7F0")]
	private void SetupEndEntityNodeInAttribute()
	{
	}

	[Token(Token = "0x600049E")]
	[Address(RVA = "0x4366240", Offset = "0x4366240", VA = "0x4366240")]
	private bool ParsePI()
	{
		return default(bool);
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x4362640", Offset = "0x4362640", VA = "0x4362640")]
	private bool ParsePI(StringBuilder piInDtdStringBuilder)
	{
		return default(bool);
	}

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x436B860", Offset = "0x436B860", VA = "0x436B860")]
	private bool ParsePIValue(out int outStartPos, out int outEndPos)
	{
		return default(bool);
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x4366250", Offset = "0x4366250", VA = "0x4366250")]
	private bool ParseComment()
	{
		return default(bool);
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x43662C0", Offset = "0x43662C0", VA = "0x43662C0")]
	private void ParseCData()
	{
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x4362C60", Offset = "0x4362C60", VA = "0x4362C60")]
	private void ParseCDataOrComment(XmlNodeType type)
	{
	}

	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x436BC30", Offset = "0x436BC30", VA = "0x436BC30")]
	private bool ParseCDataOrComment(XmlNodeType type, out int outStartPos, out int outEndPos)
	{
		return default(bool);
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x43662D0", Offset = "0x43662D0", VA = "0x43662D0")]
	private bool ParseDoctypeDecl()
	{
		return default(bool);
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x436C1D0", Offset = "0x436C1D0", VA = "0x436C1D0")]
	private void ParseDtd()
	{
	}

	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x436C570", Offset = "0x436C570", VA = "0x436C570")]
	private void SkipDtd()
	{
	}

	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x436C8D0", Offset = "0x436C8D0", VA = "0x436C8D0")]
	private void SkipPublicOrSystemIdLiteral()
	{
	}

	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x436C970", Offset = "0x436C970", VA = "0x436C970")]
	private void SkipUntil(char stopChar, bool recognizeLiterals)
	{
	}

	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x4363EA0", Offset = "0x4363EA0", VA = "0x4363EA0")]
	private int EatWhitespaces(StringBuilder sb)
	{
		return default(int);
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x436B640", Offset = "0x436B640", VA = "0x436B640")]
	private int ParseCharRefInline(int startPos, out int charCount, out EntityType entityType)
	{
		return default(int);
	}

	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x4362470", Offset = "0x4362470", VA = "0x4362470")]
	private int ParseNumericCharRef(bool expand, StringBuilder internalSubsetBuilder, out EntityType entityType)
	{
		return default(int);
	}

	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x436CE50", Offset = "0x436CE50", VA = "0x436CE50")]
	private int ParseNumericCharRefInline(int startPos, bool expand, StringBuilder internalSubsetBuilder, out int charCount, out EntityType entityType)
	{
		return default(int);
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x4362590", Offset = "0x4362590", VA = "0x4362590")]
	private int ParseNamedCharRef(bool expand, StringBuilder internalSubsetBuilder)
	{
		return default(int);
	}

	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x436D610", Offset = "0x436D610", VA = "0x436D610")]
	private int ParseNamedCharRefInline(int startPos, bool expand, StringBuilder internalSubsetBuilder)
	{
		return default(int);
	}

	[Token(Token = "0x60004B0")]
	[Address(RVA = "0x43660E0", Offset = "0x43660E0", VA = "0x43660E0")]
	private int ParseName()
	{
		return default(int);
	}

	[Token(Token = "0x60004B1")]
	[Address(RVA = "0x4367C90", Offset = "0x4367C90", VA = "0x4367C90")]
	private int ParseQName(out int colonPos)
	{
		return default(int);
	}

	[Token(Token = "0x60004B2")]
	[Address(RVA = "0x436D8F0", Offset = "0x436D8F0", VA = "0x436D8F0")]
	private int ParseQName(bool isQName, int startOffset, out int colonPos)
	{
		return default(int);
	}

	[Token(Token = "0x60004B3")]
	[Address(RVA = "0x436DB90", Offset = "0x436DB90", VA = "0x436DB90")]
	private bool ReadDataInName(ref int pos)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x436B4C0", Offset = "0x436B4C0", VA = "0x436B4C0")]
	private string ParseEntityName()
	{
		return null;
	}

	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x435EB60", Offset = "0x435EB60", VA = "0x435EB60")]
	private NodeData AddNode(int nodeIndex, int nodeDepth)
	{
		return null;
	}

	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x436DBC0", Offset = "0x436DBC0", VA = "0x436DBC0")]
	private NodeData AllocNode(int nodeIndex, int nodeDepth)
	{
		return null;
	}

	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x43645F0", Offset = "0x43645F0", VA = "0x43645F0")]
	private NodeData AddAttributeNoChecks(string name, int attrDepth)
	{
		return null;
	}

	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x4369A70", Offset = "0x4369A70", VA = "0x4369A70")]
	private NodeData AddAttribute(int endNamePos, int colonPos)
	{
		return null;
	}

	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x436DD10", Offset = "0x436DD10", VA = "0x436DD10")]
	private NodeData AddAttribute(string localName, string prefix, string nameWPrefix)
	{
		return null;
	}

	[Token(Token = "0x60004BA")]
	[Address(RVA = "0x435EBA0", Offset = "0x435EBA0", VA = "0x435EBA0")]
	private void PopElementContext()
	{
	}

	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x4361F00", Offset = "0x4361F00", VA = "0x4361F00")]
	private void OnNewLine(int pos)
	{
	}

	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x435EFE0", Offset = "0x435EFE0", VA = "0x435EFE0")]
	private void OnEof()
	{
	}

	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x436B0E0", Offset = "0x436B0E0", VA = "0x436B0E0")]
	private string LookupNamespace(NodeData node)
	{
		return null;
	}

	[Token(Token = "0x60004BE")]
	[Address(RVA = "0x436B220", Offset = "0x436B220", VA = "0x436B220")]
	private void AddNamespace(string prefix, string uri, NodeData attr)
	{
	}

	[Token(Token = "0x60004BF")]
	[Address(RVA = "0x435EAB0", Offset = "0x435EAB0", VA = "0x435EAB0")]
	private void ResetAttributes()
	{
	}

	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x436DEC0", Offset = "0x436DEC0", VA = "0x436DEC0")]
	private void FullAttributeCleanup()
	{
	}

	[Token(Token = "0x60004C1")]
	[Address(RVA = "0x436B190", Offset = "0x436B190", VA = "0x436B190")]
	private void PushXmlContext()
	{
	}

	[Token(Token = "0x60004C2")]
	[Address(RVA = "0x436DE80", Offset = "0x436DE80", VA = "0x436DE80")]
	private void PopXmlContext()
	{
	}

	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x436B7B0", Offset = "0x436B7B0", VA = "0x436B7B0")]
	private XmlNodeType GetWhitespaceType()
	{
		return default(XmlNodeType);
	}

	[Token(Token = "0x60004C4")]
	[Address(RVA = "0x436B5F0", Offset = "0x436B5F0", VA = "0x436B5F0")]
	private XmlNodeType GetTextNodeType(int orChars)
	{
		return default(XmlNodeType);
	}

	[Token(Token = "0x60004C5")]
	[Address(RVA = "0x4363AD0", Offset = "0x4363AD0", VA = "0x4363AD0")]
	private void PushExternalEntityOrSubset(string publicId, string systemId, Uri baseUri, string entityName)
	{
	}

	[Token(Token = "0x60004C6")]
	[Address(RVA = "0x436DF50", Offset = "0x436DF50", VA = "0x436DF50")]
	private bool OpenAndPush(Uri uri)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C7")]
	[Address(RVA = "0x43630A0", Offset = "0x43630A0", VA = "0x43630A0")]
	private bool PushExternalEntity(IDtdEntityInfo entity)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C8")]
	[Address(RVA = "0x4363490", Offset = "0x4363490", VA = "0x4363490")]
	private void PushInternalEntity(IDtdEntityInfo entity)
	{
	}

	[Token(Token = "0x60004C9")]
	[Address(RVA = "0x4363860", Offset = "0x4363860", VA = "0x4363860")]
	private void PopEntity()
	{
	}

	[Token(Token = "0x60004CA")]
	[Address(RVA = "0x436E1D0", Offset = "0x436E1D0", VA = "0x436E1D0")]
	private void RegisterEntity(IDtdEntityInfo entity)
	{
	}

	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x436E3E0", Offset = "0x436E3E0", VA = "0x436E3E0")]
	private void UnregisterEntity()
	{
	}

	[Token(Token = "0x60004CC")]
	[Address(RVA = "0x43641B0", Offset = "0x43641B0", VA = "0x43641B0")]
	private void PushParsingState()
	{
	}

	[Token(Token = "0x60004CD")]
	[Address(RVA = "0x4366000", Offset = "0x4366000", VA = "0x4366000")]
	private void PopParsingState()
	{
	}

	[Token(Token = "0x60004CE")]
	[Address(RVA = "0x436E430", Offset = "0x436E430", VA = "0x436E430")]
	private int IncrementalRead()
	{
		return default(int);
	}

	[Token(Token = "0x60004CF")]
	[Address(RVA = "0x435EE20", Offset = "0x435EE20", VA = "0x435EE20")]
	private void FinishIncrementalRead()
	{
	}

	[Token(Token = "0x60004D0")]
	[Address(RVA = "0x435EEA0", Offset = "0x435EEA0", VA = "0x435EEA0")]
	private bool ParseFragmentAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x60004D1")]
	[Address(RVA = "0x435FBD0", Offset = "0x435FBD0", VA = "0x435FBD0")]
	private bool ParseAttributeValueChunk()
	{
		return default(bool);
	}

	[Token(Token = "0x60004D2")]
	[Address(RVA = "0x435EF20", Offset = "0x435EF20", VA = "0x435EF20")]
	private void ParseXmlDeclarationFragment()
	{
	}

	[Token(Token = "0x60004D3")]
	[Address(RVA = "0x43662B0", Offset = "0x43662B0", VA = "0x43662B0")]
	private void ThrowUnexpectedToken(int pos, string expectedToken)
	{
	}

	[Token(Token = "0x60004D4")]
	[Address(RVA = "0x43660D0", Offset = "0x43660D0", VA = "0x43660D0")]
	private void ThrowUnexpectedToken(string expectedToken1)
	{
	}

	[Token(Token = "0x60004D5")]
	[Address(RVA = "0x43665B0", Offset = "0x43665B0", VA = "0x43665B0")]
	private void ThrowUnexpectedToken(int pos, string expectedToken1, string expectedToken2)
	{
	}

	[Token(Token = "0x60004D6")]
	[Address(RVA = "0x4366100", Offset = "0x4366100", VA = "0x4366100")]
	private void ThrowUnexpectedToken(string expectedToken1, string expectedToken2)
	{
	}

	[Token(Token = "0x60004D7")]
	[Address(RVA = "0x43665A0", Offset = "0x43665A0", VA = "0x43665A0")]
	private string ParseUnexpectedToken(int pos)
	{
		return null;
	}

	[Token(Token = "0x60004D8")]
	[Address(RVA = "0x436EED0", Offset = "0x436EED0", VA = "0x436EED0")]
	private string ParseUnexpectedToken()
	{
		return null;
	}

	[Token(Token = "0x60004D9")]
	[Address(RVA = "0x4369A00", Offset = "0x4369A00", VA = "0x4369A00")]
	private void ThrowExpectingWhitespace(int pos)
	{
	}

	[Token(Token = "0x60004DA")]
	[Address(RVA = "0x435C140", Offset = "0x435C140", VA = "0x435C140")]
	private int GetIndexOfAttributeWithoutPrefix(string name)
	{
		return default(int);
	}

	[Token(Token = "0x60004DB")]
	[Address(RVA = "0x435C240", Offset = "0x435C240", VA = "0x435C240")]
	private int GetIndexOfAttributeWithPrefix(string name)
	{
		return default(int);
	}

	[Token(Token = "0x60004DC")]
	[Address(RVA = "0x436B6A0", Offset = "0x436B6A0", VA = "0x436B6A0")]
	private bool ZeroEndingStream(int pos)
	{
		return default(bool);
	}

	[Token(Token = "0x60004DD")]
	[Address(RVA = "0x4365370", Offset = "0x4365370", VA = "0x4365370")]
	private void ParseDtdFromParserContext()
	{
	}

	[Token(Token = "0x60004DE")]
	[Address(RVA = "0x436B700", Offset = "0x436B700", VA = "0x436B700")]
	private bool MoveToNextContentNode(bool moveIfOnContentNode)
	{
		return default(bool);
	}

	[Token(Token = "0x60004DF")]
	[Address(RVA = "0x4359E90", Offset = "0x4359E90", VA = "0x4359E90")]
	private void SetupFromParserContext(XmlParserContext context, XmlReaderSettings settings)
	{
	}

	[Token(Token = "0x60004E1")]
	[Address(RVA = "0x436EF80", Offset = "0x436EF80", VA = "0x436EF80")]
	internal void SetDtdInfo(IDtdInfo newDtdInfo)
	{
	}

	[Token(Token = "0x60004E6")]
	[Address(RVA = "0x436F220", Offset = "0x436F220", VA = "0x436F220")]
	internal void ChangeCurrentNodeType(XmlNodeType newNodeType)
	{
	}

	[Token(Token = "0x60004E7")]
	[Address(RVA = "0x436F240", Offset = "0x436F240", VA = "0x436F240")]
	internal XmlResolver GetResolver()
	{
		return null;
	}

	[Token(Token = "0x60004EE")]
	[Address(RVA = "0x4369050", Offset = "0x4369050", VA = "0x4369050")]
	private bool AddDefaultAttributeDtd(IDtdDefaultAttributeInfo defAttrInfo, bool definedInDtd, NodeData[] nameSortedNodeData)
	{
		return default(bool);
	}

	[Token(Token = "0x60004EF")]
	[Address(RVA = "0x436F5D0", Offset = "0x436F5D0", VA = "0x436F5D0")]
	internal bool AddDefaultAttributeNonDtd(SchemaAttDef attrDef)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F0")]
	[Address(RVA = "0x436F320", Offset = "0x436F320", VA = "0x436F320")]
	private NodeData AddDefaultAttributeInternal(string localName, string ns, string prefix, string value, int lineNo, int linePos, int valueLineNo, int valueLinePos, bool isXmlAttribute)
	{
		return null;
	}

	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x435B680", Offset = "0x435B680", VA = "0x435B680")]
	private bool UriEqual(Uri uri1, string uri1Str, string uri2Str, XmlResolver resolver)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x43643E0", Offset = "0x43643E0", VA = "0x43643E0")]
	private void RegisterConsumedCharacters(long characters, bool inEntityReference)
	{
	}

	[Token(Token = "0x60004F4")]
	[Address(RVA = "0x436F880", Offset = "0x436F880", VA = "0x436F880")]
	internal static string StripSpaces(string value)
	{
		return null;
	}

	[Token(Token = "0x60004F5")]
	[Address(RVA = "0x436FAA0", Offset = "0x436FAA0", VA = "0x436FAA0")]
	internal static void StripSpaces(char[] value, int index, ref int len)
	{
	}

	[Token(Token = "0x60004F6")]
	[Address(RVA = "0x43616D0", Offset = "0x43616D0", VA = "0x43616D0")]
	internal static void BlockCopyChars(char[] src, int srcOffset, char[] dst, int dstOffset, int count)
	{
	}

	[Token(Token = "0x60004F7")]
	[Address(RVA = "0x4365D50", Offset = "0x4365D50", VA = "0x4365D50")]
	internal static void BlockCopy(byte[] src, int srcOffset, byte[] dst, int dstOffset, int count)
	{
	}
}
