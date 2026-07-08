using System.Collections.Generic;
using System.Text;
using System.Xml.Schema;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000C7")]
internal class DtdParser : IDtdParser
{
	[Token(Token = "0x20000C8")]
	private enum Token
	{
		[Token(Token = "0x40004F4")]
		CDATA,
		[Token(Token = "0x40004F5")]
		ID,
		[Token(Token = "0x40004F6")]
		IDREF,
		[Token(Token = "0x40004F7")]
		IDREFS,
		[Token(Token = "0x40004F8")]
		ENTITY,
		[Token(Token = "0x40004F9")]
		ENTITIES,
		[Token(Token = "0x40004FA")]
		NMTOKEN,
		[Token(Token = "0x40004FB")]
		NMTOKENS,
		[Token(Token = "0x40004FC")]
		NOTATION,
		[Token(Token = "0x40004FD")]
		None,
		[Token(Token = "0x40004FE")]
		PERef,
		[Token(Token = "0x40004FF")]
		AttlistDecl,
		[Token(Token = "0x4000500")]
		ElementDecl,
		[Token(Token = "0x4000501")]
		EntityDecl,
		[Token(Token = "0x4000502")]
		NotationDecl,
		[Token(Token = "0x4000503")]
		Comment,
		[Token(Token = "0x4000504")]
		PI,
		[Token(Token = "0x4000505")]
		CondSectionStart,
		[Token(Token = "0x4000506")]
		CondSectionEnd,
		[Token(Token = "0x4000507")]
		Eof,
		[Token(Token = "0x4000508")]
		REQUIRED,
		[Token(Token = "0x4000509")]
		IMPLIED,
		[Token(Token = "0x400050A")]
		FIXED,
		[Token(Token = "0x400050B")]
		QName,
		[Token(Token = "0x400050C")]
		Name,
		[Token(Token = "0x400050D")]
		Nmtoken,
		[Token(Token = "0x400050E")]
		Quote,
		[Token(Token = "0x400050F")]
		LeftParen,
		[Token(Token = "0x4000510")]
		RightParen,
		[Token(Token = "0x4000511")]
		GreaterThan,
		[Token(Token = "0x4000512")]
		Or,
		[Token(Token = "0x4000513")]
		LeftBracket,
		[Token(Token = "0x4000514")]
		RightBracket,
		[Token(Token = "0x4000515")]
		PUBLIC,
		[Token(Token = "0x4000516")]
		SYSTEM,
		[Token(Token = "0x4000517")]
		Literal,
		[Token(Token = "0x4000518")]
		DOCTYPE,
		[Token(Token = "0x4000519")]
		NData,
		[Token(Token = "0x400051A")]
		Percent,
		[Token(Token = "0x400051B")]
		Star,
		[Token(Token = "0x400051C")]
		QMark,
		[Token(Token = "0x400051D")]
		Plus,
		[Token(Token = "0x400051E")]
		PCDATA,
		[Token(Token = "0x400051F")]
		Comma,
		[Token(Token = "0x4000520")]
		ANY,
		[Token(Token = "0x4000521")]
		EMPTY,
		[Token(Token = "0x4000522")]
		IGNORE,
		[Token(Token = "0x4000523")]
		INCLUDE
	}

	[Token(Token = "0x20000C9")]
	private enum ScanningFunction
	{
		[Token(Token = "0x4000525")]
		SubsetContent,
		[Token(Token = "0x4000526")]
		Name,
		[Token(Token = "0x4000527")]
		QName,
		[Token(Token = "0x4000528")]
		Nmtoken,
		[Token(Token = "0x4000529")]
		Doctype1,
		[Token(Token = "0x400052A")]
		Doctype2,
		[Token(Token = "0x400052B")]
		Element1,
		[Token(Token = "0x400052C")]
		Element2,
		[Token(Token = "0x400052D")]
		Element3,
		[Token(Token = "0x400052E")]
		Element4,
		[Token(Token = "0x400052F")]
		Element5,
		[Token(Token = "0x4000530")]
		Element6,
		[Token(Token = "0x4000531")]
		Element7,
		[Token(Token = "0x4000532")]
		Attlist1,
		[Token(Token = "0x4000533")]
		Attlist2,
		[Token(Token = "0x4000534")]
		Attlist3,
		[Token(Token = "0x4000535")]
		Attlist4,
		[Token(Token = "0x4000536")]
		Attlist5,
		[Token(Token = "0x4000537")]
		Attlist6,
		[Token(Token = "0x4000538")]
		Attlist7,
		[Token(Token = "0x4000539")]
		Entity1,
		[Token(Token = "0x400053A")]
		Entity2,
		[Token(Token = "0x400053B")]
		Entity3,
		[Token(Token = "0x400053C")]
		Notation1,
		[Token(Token = "0x400053D")]
		CondSection1,
		[Token(Token = "0x400053E")]
		CondSection2,
		[Token(Token = "0x400053F")]
		CondSection3,
		[Token(Token = "0x4000540")]
		Literal,
		[Token(Token = "0x4000541")]
		SystemId,
		[Token(Token = "0x4000542")]
		PublicId1,
		[Token(Token = "0x4000543")]
		PublicId2,
		[Token(Token = "0x4000544")]
		ClosingTag,
		[Token(Token = "0x4000545")]
		ParamEntitySpace,
		[Token(Token = "0x4000546")]
		None
	}

	[Token(Token = "0x20000CA")]
	private enum LiteralType
	{
		[Token(Token = "0x4000548")]
		AttributeValue,
		[Token(Token = "0x4000549")]
		EntityReplText,
		[Token(Token = "0x400054A")]
		SystemOrPublicID
	}

	[Token(Token = "0x20000CB")]
	private class UndeclaredNotation
	{
		[Token(Token = "0x400054B")]
		[FieldOffset(Offset = "0x10")]
		internal string name;

		[Token(Token = "0x400054C")]
		[FieldOffset(Offset = "0x18")]
		internal int lineNo;

		[Token(Token = "0x400054D")]
		[FieldOffset(Offset = "0x1C")]
		internal int linePos;

		[Token(Token = "0x400054E")]
		[FieldOffset(Offset = "0x20")]
		internal UndeclaredNotation next;

		[Token(Token = "0x6000AF9")]
		[Address(RVA = "0x44B4CF0", Offset = "0x44B4CF0", VA = "0x44B4CF0")]
		internal UndeclaredNotation(string name, int lineNo, int linePos)
		{
		}
	}

	[Token(Token = "0x20000CC")]
	private class ParseElementOnlyContent_LocalFrame
	{
		[Token(Token = "0x400054F")]
		[FieldOffset(Offset = "0x10")]
		public int startParenEntityId;

		[Token(Token = "0x4000550")]
		[FieldOffset(Offset = "0x14")]
		public Token parsingSchema;

		[Token(Token = "0x6000AFA")]
		[Address(RVA = "0x44B4D50", Offset = "0x44B4D50", VA = "0x44B4D50")]
		public ParseElementOnlyContent_LocalFrame(int startParentEntityIdParam)
		{
		}
	}

	[Token(Token = "0x40004D2")]
	[FieldOffset(Offset = "0x10")]
	private IDtdParserAdapter readerAdapter;

	[Token(Token = "0x40004D3")]
	[FieldOffset(Offset = "0x18")]
	private IDtdParserAdapterWithValidation readerAdapterWithValidation;

	[Token(Token = "0x40004D4")]
	[FieldOffset(Offset = "0x20")]
	private XmlNameTable nameTable;

	[Token(Token = "0x40004D5")]
	[FieldOffset(Offset = "0x28")]
	private SchemaInfo schemaInfo;

	[Token(Token = "0x40004D6")]
	[FieldOffset(Offset = "0x30")]
	private XmlCharType xmlCharType;

	[Token(Token = "0x40004D7")]
	[FieldOffset(Offset = "0x38")]
	private string systemId;

	[Token(Token = "0x40004D8")]
	[FieldOffset(Offset = "0x40")]
	private string publicId;

	[Token(Token = "0x40004D9")]
	[FieldOffset(Offset = "0x48")]
	private bool normalize;

	[Token(Token = "0x40004DA")]
	[FieldOffset(Offset = "0x49")]
	private bool validate;

	[Token(Token = "0x40004DB")]
	[FieldOffset(Offset = "0x4A")]
	private bool supportNamespaces;

	[Token(Token = "0x40004DC")]
	[FieldOffset(Offset = "0x4B")]
	private bool v1Compat;

	[Token(Token = "0x40004DD")]
	[FieldOffset(Offset = "0x50")]
	private char[] chars;

	[Token(Token = "0x40004DE")]
	[FieldOffset(Offset = "0x58")]
	private int charsUsed;

	[Token(Token = "0x40004DF")]
	[FieldOffset(Offset = "0x5C")]
	private int curPos;

	[Token(Token = "0x40004E0")]
	[FieldOffset(Offset = "0x60")]
	private ScanningFunction scanningFunction;

	[Token(Token = "0x40004E1")]
	[FieldOffset(Offset = "0x64")]
	private ScanningFunction nextScaningFunction;

	[Token(Token = "0x40004E2")]
	[FieldOffset(Offset = "0x68")]
	private ScanningFunction savedScanningFunction;

	[Token(Token = "0x40004E3")]
	[FieldOffset(Offset = "0x6C")]
	private bool whitespaceSeen;

	[Token(Token = "0x40004E4")]
	[FieldOffset(Offset = "0x70")]
	private int tokenStartPos;

	[Token(Token = "0x40004E5")]
	[FieldOffset(Offset = "0x74")]
	private int colonPos;

	[Token(Token = "0x40004E6")]
	[FieldOffset(Offset = "0x78")]
	private StringBuilder internalSubsetValueSb;

	[Token(Token = "0x40004E7")]
	[FieldOffset(Offset = "0x80")]
	private int externalEntitiesDepth;

	[Token(Token = "0x40004E8")]
	[FieldOffset(Offset = "0x84")]
	private int currentEntityId;

	[Token(Token = "0x40004E9")]
	[FieldOffset(Offset = "0x88")]
	private bool freeFloatingDtd;

	[Token(Token = "0x40004EA")]
	[FieldOffset(Offset = "0x89")]
	private bool hasFreeFloatingInternalSubset;

	[Token(Token = "0x40004EB")]
	[FieldOffset(Offset = "0x90")]
	private StringBuilder stringBuilder;

	[Token(Token = "0x40004EC")]
	[FieldOffset(Offset = "0x98")]
	private int condSectionDepth;

	[Token(Token = "0x40004ED")]
	[FieldOffset(Offset = "0x9C")]
	private LineInfo literalLineInfo;

	[Token(Token = "0x40004EE")]
	[FieldOffset(Offset = "0xA4")]
	private char literalQuoteChar;

	[Token(Token = "0x40004EF")]
	[FieldOffset(Offset = "0xA8")]
	private string documentBaseUri;

	[Token(Token = "0x40004F0")]
	[FieldOffset(Offset = "0xB0")]
	private string externalDtdBaseUri;

	[Token(Token = "0x40004F1")]
	[FieldOffset(Offset = "0xB8")]
	private Dictionary<string, UndeclaredNotation> undeclaredNotations;

	[Token(Token = "0x40004F2")]
	[FieldOffset(Offset = "0xC0")]
	private int[] condSectionEntityIds;

	[Token(Token = "0x170002E8")]
	private bool ParsingInternalSubset
	{
		[Token(Token = "0x6000A97")]
		[Address(RVA = "0x44A9960", Offset = "0x44A9960", VA = "0x44A9960")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002E9")]
	private bool IgnoreEntityReferences
	{
		[Token(Token = "0x6000A98")]
		[Address(RVA = "0x44A9970", Offset = "0x44A9970", VA = "0x44A9970")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002EA")]
	private bool SaveInternalSubsetValue
	{
		[Token(Token = "0x6000A99")]
		[Address(RVA = "0x44A9980", Offset = "0x44A9980", VA = "0x44A9980")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002EB")]
	private bool ParsingTopLevelMarkup
	{
		[Token(Token = "0x6000A9A")]
		[Address(RVA = "0x44A9A50", Offset = "0x44A9A50", VA = "0x44A9A50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002EC")]
	private bool SupportNamespaces
	{
		[Token(Token = "0x6000A9B")]
		[Address(RVA = "0x44A9A70", Offset = "0x44A9A70", VA = "0x44A9A70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002ED")]
	private bool Normalize
	{
		[Token(Token = "0x6000A9C")]
		[Address(RVA = "0x44A9A80", Offset = "0x44A9A80", VA = "0x44A9A80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002EE")]
	private int LineNo
	{
		[Token(Token = "0x6000AEB")]
		[Address(RVA = "0x44ADB10", Offset = "0x44ADB10", VA = "0x44ADB10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002EF")]
	private int LinePos
	{
		[Token(Token = "0x6000AEC")]
		[Address(RVA = "0x44ADBB0", Offset = "0x44ADBB0", VA = "0x44ADBB0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002F0")]
	private string BaseUriStr
	{
		[Token(Token = "0x6000AED")]
		[Address(RVA = "0x44A9CB0", Offset = "0x44A9CB0", VA = "0x44A9CB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A91")]
	[Address(RVA = "0x44A8C20", Offset = "0x44A8C20", VA = "0x44A8C20")]
	private DtdParser()
	{
	}

	[Token(Token = "0x6000A92")]
	[Address(RVA = "0x449B840", Offset = "0x449B840", VA = "0x449B840")]
	internal static IDtdParser Create()
	{
		return null;
	}

	[Token(Token = "0x6000A93")]
	[Address(RVA = "0x44A8D00", Offset = "0x44A8D00", VA = "0x44A8D00")]
	private void Initialize(IDtdParserAdapter readerAdapter)
	{
	}

	[Token(Token = "0x6000A94")]
	[Address(RVA = "0x44A9150", Offset = "0x44A9150", VA = "0x44A9150")]
	private void InitializeFreeFloatingDtd(string baseUri, string docTypeName, string publicId, string systemId, string internalSubset, IDtdParserAdapter adapter)
	{
	}

	[Token(Token = "0x6000A95")]
	[Address(RVA = "0x44A9650", Offset = "0x44A9650", VA = "0x44A9650", Slot = "4")]
	private IDtdInfo System_002EXml_002EIDtdParser_002EParseInternalDtd(IDtdParserAdapter adapter, bool saveInternalSubset)
	{
		return null;
	}

	[Token(Token = "0x6000A96")]
	[Address(RVA = "0x44A9930", Offset = "0x44A9930", VA = "0x44A9930", Slot = "5")]
	private IDtdInfo System_002EXml_002EIDtdParser_002EParseFreeFloatingDtd(string baseUri, string docTypeName, string publicId, string systemId, string internalSubset, IDtdParserAdapter adapter)
	{
		return null;
	}

	[Token(Token = "0x6000A9D")]
	[Address(RVA = "0x44A9680", Offset = "0x44A9680", VA = "0x44A9680")]
	private void Parse(bool saveInternalSubset)
	{
	}

	[Token(Token = "0x6000A9E")]
	[Address(RVA = "0x44A9AE0", Offset = "0x44A9AE0", VA = "0x44A9AE0")]
	private void ParseInDocumentDtd(bool saveInternalSubset)
	{
	}

	[Token(Token = "0x6000A9F")]
	[Address(RVA = "0x44A9A90", Offset = "0x44A9A90", VA = "0x44A9A90")]
	private void ParseFreeFloatingDtd()
	{
	}

	[Token(Token = "0x6000AA0")]
	[Address(RVA = "0x44AB600", Offset = "0x44AB600", VA = "0x44AB600")]
	private void ParseInternalSubset()
	{
	}

	[Token(Token = "0x6000AA1")]
	[Address(RVA = "0x44AB610", Offset = "0x44AB610", VA = "0x44AB610")]
	private void ParseExternalSubset()
	{
	}

	[Token(Token = "0x6000AA2")]
	[Address(RVA = "0x44AB7F0", Offset = "0x44AB7F0", VA = "0x44AB7F0")]
	private void ParseSubset()
	{
	}

	[Token(Token = "0x6000AA3")]
	[Address(RVA = "0x44ABC10", Offset = "0x44ABC10", VA = "0x44ABC10")]
	private void ParseAttlistDecl()
	{
	}

	[Token(Token = "0x6000AA4")]
	[Address(RVA = "0x44ADE60", Offset = "0x44ADE60", VA = "0x44ADE60")]
	private void ParseAttlistType(SchemaAttDef attrDef, SchemaElementDecl elementDecl, bool ignoreErrors)
	{
	}

	[Token(Token = "0x6000AA5")]
	[Address(RVA = "0x44AE6B0", Offset = "0x44AE6B0", VA = "0x44AE6B0")]
	private void ParseAttlistDefault(SchemaAttDef attrDef, bool ignoreErrors)
	{
	}

	[Token(Token = "0x6000AA6")]
	[Address(RVA = "0x44AC3D0", Offset = "0x44AC3D0", VA = "0x44AC3D0")]
	private void ParseElementDecl()
	{
	}

	[Token(Token = "0x6000AA7")]
	[Address(RVA = "0x44AF2B0", Offset = "0x44AF2B0", VA = "0x44AF2B0")]
	private void ParseElementOnlyContent(ParticleContentValidator pcv, int startParenEntityId)
	{
	}

	[Token(Token = "0x6000AA8")]
	[Address(RVA = "0x44AF670", Offset = "0x44AF670", VA = "0x44AF670")]
	private void ParseHowMany(ParticleContentValidator pcv)
	{
	}

	[Token(Token = "0x6000AA9")]
	[Address(RVA = "0x44AEEF0", Offset = "0x44AEEF0", VA = "0x44AEEF0")]
	private void ParseElementMixedContent(ParticleContentValidator pcv, int startParenEntityId)
	{
	}

	[Token(Token = "0x6000AAA")]
	[Address(RVA = "0x44AC800", Offset = "0x44AC800", VA = "0x44AC800")]
	private void ParseEntityDecl()
	{
	}

	[Token(Token = "0x6000AAB")]
	[Address(RVA = "0x44ACC30", Offset = "0x44ACC30", VA = "0x44ACC30")]
	private void ParseNotationDecl()
	{
	}

	[Token(Token = "0x6000AAC")]
	[Address(RVA = "0x44AEB10", Offset = "0x44AEB10", VA = "0x44AEB10")]
	private void AddUndeclaredNotation(string notationName)
	{
	}

	[Token(Token = "0x6000AAD")]
	[Address(RVA = "0x44ACF20", Offset = "0x44ACF20", VA = "0x44ACF20")]
	private void ParseComment()
	{
	}

	[Token(Token = "0x6000AAE")]
	[Address(RVA = "0x44AD240", Offset = "0x44AD240", VA = "0x44AD240")]
	private void ParsePI()
	{
	}

	[Token(Token = "0x6000AAF")]
	[Address(RVA = "0x44AD470", Offset = "0x44AD470", VA = "0x44AD470")]
	private void ParseCondSection()
	{
	}

	[Token(Token = "0x6000AB0")]
	[Address(RVA = "0x44AADE0", Offset = "0x44AADE0", VA = "0x44AADE0")]
	private void ParseExternalId(Token idTokenType, Token declType, out string publicId, out string systemId)
	{
	}

	[Token(Token = "0x6000AB1")]
	[Address(RVA = "0x44AA0B0", Offset = "0x44AA0B0", VA = "0x44AA0B0")]
	private Token GetToken(bool needWhiteSpace)
	{
		return default(Token);
	}

	[Token(Token = "0x6000AB2")]
	[Address(RVA = "0x44B0040", Offset = "0x44B0040", VA = "0x44B0040")]
	private Token ScanSubsetContent()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AB3")]
	[Address(RVA = "0x44AFFE0", Offset = "0x44AFFE0", VA = "0x44AFFE0")]
	private Token ScanNameExpected()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AB4")]
	[Address(RVA = "0x44B0000", Offset = "0x44B0000", VA = "0x44B0000")]
	private Token ScanQNameExpected()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AB5")]
	[Address(RVA = "0x44B0020", Offset = "0x44B0020", VA = "0x44B0020")]
	private Token ScanNmtokenExpected()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AB6")]
	[Address(RVA = "0x44B0790", Offset = "0x44B0790", VA = "0x44B0790")]
	private Token ScanDoctype1()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AB7")]
	[Address(RVA = "0x44B08F0", Offset = "0x44B08F0", VA = "0x44B08F0")]
	private Token ScanDoctype2()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AB8")]
	[Address(RVA = "0x44B2C40", Offset = "0x44B2C40", VA = "0x44B2C40")]
	private Token ScanClosingTag()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AB9")]
	[Address(RVA = "0x44B09A0", Offset = "0x44B09A0", VA = "0x44B09A0")]
	private Token ScanElement1()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ABA")]
	[Address(RVA = "0x44B0BB0", Offset = "0x44B0BB0", VA = "0x44B0BB0")]
	private Token ScanElement2()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ABB")]
	[Address(RVA = "0x44B0D60", Offset = "0x44B0D60", VA = "0x44B0D60")]
	private Token ScanElement3()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ABC")]
	[Address(RVA = "0x44B0DD0", Offset = "0x44B0DD0", VA = "0x44B0DD0")]
	private Token ScanElement4()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ABD")]
	[Address(RVA = "0x44B0EA0", Offset = "0x44B0EA0", VA = "0x44B0EA0")]
	private Token ScanElement5()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ABE")]
	[Address(RVA = "0x44B0F90", Offset = "0x44B0F90", VA = "0x44B0F90")]
	private Token ScanElement6()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ABF")]
	[Address(RVA = "0x44B1040", Offset = "0x44B1040", VA = "0x44B1040")]
	private Token ScanElement7()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AC0")]
	[Address(RVA = "0x44B1090", Offset = "0x44B1090", VA = "0x44B1090")]
	private Token ScanAttlist1()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AC1")]
	[Address(RVA = "0x44B1140", Offset = "0x44B1140", VA = "0x44B1140")]
	private Token ScanAttlist2()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AC2")]
	[Address(RVA = "0x44B1820", Offset = "0x44B1820", VA = "0x44B1820")]
	private Token ScanAttlist3()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AC3")]
	[Address(RVA = "0x44B18A0", Offset = "0x44B18A0", VA = "0x44B18A0")]
	private Token ScanAttlist4()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AC4")]
	[Address(RVA = "0x44B1950", Offset = "0x44B1950", VA = "0x44B1950")]
	private Token ScanAttlist5()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AC5")]
	[Address(RVA = "0x44B1A00", Offset = "0x44B1A00", VA = "0x44B1A00")]
	private Token ScanAttlist6()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AC6")]
	[Address(RVA = "0x44B1D90", Offset = "0x44B1D90", VA = "0x44B1D90")]
	private Token ScanAttlist7()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AC7")]
	[Address(RVA = "0x44B3230", Offset = "0x44B3230", VA = "0x44B3230")]
	private Token ScanLiteral(LiteralType literalType)
	{
		return default(Token);
	}

	[Token(Token = "0x6000AC8")]
	[Address(RVA = "0x44B4120", Offset = "0x44B4120", VA = "0x44B4120")]
	private XmlQualifiedName ScanEntityName()
	{
		return null;
	}

	[Token(Token = "0x6000AC9")]
	[Address(RVA = "0x44B1E30", Offset = "0x44B1E30", VA = "0x44B1E30")]
	private Token ScanNotation1()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ACA")]
	[Address(RVA = "0x44B1F70", Offset = "0x44B1F70", VA = "0x44B1F70")]
	private Token ScanSystemId()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ACB")]
	[Address(RVA = "0x44B20E0", Offset = "0x44B20E0", VA = "0x44B20E0")]
	private Token ScanEntity1()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ACC")]
	[Address(RVA = "0x44B2140", Offset = "0x44B2140", VA = "0x44B2140")]
	private Token ScanEntity2()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ACD")]
	[Address(RVA = "0x44B22A0", Offset = "0x44B22A0", VA = "0x44B22A0")]
	private Token ScanEntity3()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ACE")]
	[Address(RVA = "0x44B2000", Offset = "0x44B2000", VA = "0x44B2000")]
	private Token ScanPublicId1()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ACF")]
	[Address(RVA = "0x44B2090", Offset = "0x44B2090", VA = "0x44B2090")]
	private Token ScanPublicId2()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AD0")]
	[Address(RVA = "0x44B2380", Offset = "0x44B2380", VA = "0x44B2380")]
	private Token ScanCondSection1()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AD1")]
	[Address(RVA = "0x44B2630", Offset = "0x44B2630", VA = "0x44B2630")]
	private Token ScanCondSection2()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AD2")]
	[Address(RVA = "0x44B26A0", Offset = "0x44B26A0", VA = "0x44B26A0")]
	private Token ScanCondSection3()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AD3")]
	[Address(RVA = "0x44B2F40", Offset = "0x44B2F40", VA = "0x44B2F40")]
	private void ScanName()
	{
	}

	[Token(Token = "0x6000AD4")]
	[Address(RVA = "0x44B2F50", Offset = "0x44B2F50", VA = "0x44B2F50")]
	private void ScanQName()
	{
	}

	[Token(Token = "0x6000AD5")]
	[Address(RVA = "0x44B44B0", Offset = "0x44B44B0", VA = "0x44B44B0")]
	private void ScanQName(bool isQName)
	{
	}

	[Token(Token = "0x6000AD6")]
	[Address(RVA = "0x44B47A0", Offset = "0x44B47A0", VA = "0x44B47A0")]
	private bool ReadDataInName()
	{
		return default(bool);
	}

	[Token(Token = "0x6000AD7")]
	[Address(RVA = "0x44B2F60", Offset = "0x44B2F60", VA = "0x44B2F60")]
	private void ScanNmtoken()
	{
	}

	[Token(Token = "0x6000AD8")]
	[Address(RVA = "0x44B30D0", Offset = "0x44B30D0", VA = "0x44B30D0")]
	private bool EatPublicKeyword()
	{
		return default(bool);
	}

	[Token(Token = "0x6000AD9")]
	[Address(RVA = "0x44B3180", Offset = "0x44B3180", VA = "0x44B3180")]
	private bool EatSystemKeyword()
	{
		return default(bool);
	}

	[Token(Token = "0x6000ADA")]
	[Address(RVA = "0x44AAC90", Offset = "0x44AAC90", VA = "0x44AAC90")]
	private XmlQualifiedName GetNameQualified(bool canHavePrefix)
	{
		return null;
	}

	[Token(Token = "0x6000ADB")]
	[Address(RVA = "0x44AEAF0", Offset = "0x44AEAF0", VA = "0x44AEAF0")]
	private string GetNameString()
	{
		return null;
	}

	[Token(Token = "0x6000ADC")]
	[Address(RVA = "0x44AEE00", Offset = "0x44AEE00", VA = "0x44AEE00")]
	private string GetNmtokenString()
	{
		return null;
	}

	[Token(Token = "0x6000ADD")]
	[Address(RVA = "0x44AEE90", Offset = "0x44AEE90", VA = "0x44AEE90")]
	private string GetValue()
	{
		return null;
	}

	[Token(Token = "0x6000ADE")]
	[Address(RVA = "0x44AEE20", Offset = "0x44AEE20", VA = "0x44AEE20")]
	private string GetValueWithStrippedSpaces()
	{
		return null;
	}

	[Token(Token = "0x6000ADF")]
	[Address(RVA = "0x44B2CC0", Offset = "0x44B2CC0", VA = "0x44B2CC0")]
	private int ReadData()
	{
		return default(int);
	}

	[Token(Token = "0x6000AE0")]
	[Address(RVA = "0x44A9F00", Offset = "0x44A9F00", VA = "0x44A9F00")]
	private void LoadParsingBuffer()
	{
	}

	[Token(Token = "0x6000AE1")]
	[Address(RVA = "0x44AB5F0", Offset = "0x44AB5F0", VA = "0x44AB5F0")]
	private void SaveParsingBuffer()
	{
	}

	[Token(Token = "0x6000AE2")]
	[Address(RVA = "0x44AD8E0", Offset = "0x44AD8E0", VA = "0x44AD8E0")]
	private void SaveParsingBuffer(int internalSubsetValueEndPos)
	{
	}

	[Token(Token = "0x6000AE3")]
	[Address(RVA = "0x44AFEE0", Offset = "0x44AFEE0", VA = "0x44AFEE0")]
	private bool HandleEntityReference(bool paramEntity, bool inLiteral, bool inAttribute)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AE4")]
	[Address(RVA = "0x44B49F0", Offset = "0x44B49F0", VA = "0x44B49F0")]
	private bool HandleEntityReference(XmlQualifiedName entityName, bool paramEntity, bool inLiteral, bool inAttribute)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AE5")]
	[Address(RVA = "0x44B2D80", Offset = "0x44B2D80", VA = "0x44B2D80")]
	private bool HandleEntityEnd(bool inLiteral)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AE6")]
	[Address(RVA = "0x44B4280", Offset = "0x44B4280", VA = "0x44B4280")]
	private SchemaEntity VerifyEntityReference(XmlQualifiedName entityName, bool paramEntity, bool mustBeDeclared, bool inAttribute)
	{
		return null;
	}

	[Token(Token = "0x6000AE7")]
	[Address(RVA = "0x44AD6E0", Offset = "0x44AD6E0", VA = "0x44AD6E0")]
	private void SendValidationEvent(int pos, XmlSeverityType severity, string code, string arg)
	{
	}

	[Token(Token = "0x6000AE8")]
	[Address(RVA = "0x44AE900", Offset = "0x44AE900", VA = "0x44AE900")]
	private void SendValidationEvent(XmlSeverityType severity, string code, string arg)
	{
	}

	[Token(Token = "0x6000AE9")]
	[Address(RVA = "0x44A9DC0", Offset = "0x44A9DC0", VA = "0x44A9DC0")]
	private void SendValidationEvent(XmlSeverityType severity, XmlSchemaException e)
	{
	}

	[Token(Token = "0x6000AEA")]
	[Address(RVA = "0x44AE8F0", Offset = "0x44AE8F0", VA = "0x44AE8F0")]
	private bool IsAttributeValueType(Token token)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AEE")]
	[Address(RVA = "0x44AAC40", Offset = "0x44AAC40", VA = "0x44AAC40")]
	private void OnUnexpectedError()
	{
	}

	[Token(Token = "0x6000AEF")]
	[Address(RVA = "0x44AD450", Offset = "0x44AD450", VA = "0x44AD450")]
	private void Throw(int curPos, string res)
	{
	}

	[Token(Token = "0x6000AF0")]
	[Address(RVA = "0x44AF6D0", Offset = "0x44AF6D0", VA = "0x44AF6D0")]
	private void Throw(int curPos, string res, string arg)
	{
	}

	[Token(Token = "0x6000AF1")]
	[Address(RVA = "0x44AFB50", Offset = "0x44AFB50", VA = "0x44AFB50")]
	private void Throw(int curPos, string res, string[] args)
	{
	}

	[Token(Token = "0x6000AF2")]
	[Address(RVA = "0x44ADC70", Offset = "0x44ADC70", VA = "0x44ADC70")]
	private void Throw(string res, string arg, int lineNo, int linePos)
	{
	}

	[Token(Token = "0x6000AF3")]
	[Address(RVA = "0x44A95F0", Offset = "0x44A95F0", VA = "0x44A95F0")]
	private void ThrowInvalidChar(int pos, string data, int invCharPos)
	{
	}

	[Token(Token = "0x6000AF4")]
	[Address(RVA = "0x44AFE80", Offset = "0x44AFE80", VA = "0x44AFE80")]
	private void ThrowInvalidChar(char[] data, int length, int invCharPos)
	{
	}

	[Token(Token = "0x6000AF5")]
	[Address(RVA = "0x44ADB00", Offset = "0x44ADB00", VA = "0x44ADB00")]
	private void ThrowUnexpectedToken(int pos, string expectedToken)
	{
	}

	[Token(Token = "0x6000AF6")]
	[Address(RVA = "0x44AFA00", Offset = "0x44AFA00", VA = "0x44AFA00")]
	private void ThrowUnexpectedToken(int pos, string expectedToken1, string expectedToken2)
	{
	}

	[Token(Token = "0x6000AF7")]
	[Address(RVA = "0x44AFF20", Offset = "0x44AFF20", VA = "0x44AFF20")]
	private string ParseUnexpectedToken(int startPos)
	{
		return null;
	}

	[Token(Token = "0x6000AF8")]
	[Address(RVA = "0x44B47D0", Offset = "0x44B47D0", VA = "0x44B47D0")]
	internal static string StripSpaces(string value)
	{
		return null;
	}
}
