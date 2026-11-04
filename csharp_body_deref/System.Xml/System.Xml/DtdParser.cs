// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.DtdParser
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x27468B0", Offset = "0x2744EB0", VA = "0x1827468B0")]
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
		[Address(RVA = "0x273D400", Offset = "0x273BA00", VA = "0x18273D400")]
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
		[Address(RVA = "0x2728290", Offset = "0x2726890", VA = "0x182728290")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002E9")]
	private bool IgnoreEntityReferences
	{
		[Token(Token = "0x6000A98")]
		[Address(RVA = "0x27281D0", Offset = "0x27267D0", VA = "0x1827281D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002EA")]
	private bool SaveInternalSubsetValue
	{
		[Token(Token = "0x6000A99")]
		[Address(RVA = "0x27282C0", Offset = "0x27268C0", VA = "0x1827282C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002EB")]
	private bool ParsingTopLevelMarkup
	{
		[Token(Token = "0x6000A9A")]
		[Address(RVA = "0x27282A0", Offset = "0x27268A0", VA = "0x1827282A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002EC")]
	private bool SupportNamespaces
	{
		[Token(Token = "0x6000A9B")]
		[Address(RVA = "0x26EDC70", Offset = "0x26EC270", VA = "0x1826EDC70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002ED")]
	private bool Normalize
	{
		[Token(Token = "0x6000A9C")]
		[Address(RVA = "0x58A530", Offset = "0x588B30", VA = "0x18058A530")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002EE")]
	private int LineNo
	{
		[Token(Token = "0x6000AEB")]
		[Address(RVA = "0x27281E0", Offset = "0x27267E0", VA = "0x1827281E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002EF")]
	private int LinePos
	{
		[Token(Token = "0x6000AEC")]
		[Address(RVA = "0x2728230", Offset = "0x2726830", VA = "0x182728230")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002F0")]
	private string BaseUriStr
	{
		[Token(Token = "0x6000AED")]
		[Address(RVA = "0x2728120", Offset = "0x2726720", VA = "0x182728120")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A91")]
	[Address(RVA = "0x2728040", Offset = "0x2726640", VA = "0x182728040")]
	private DtdParser()
	{
	}

	[Token(Token = "0x6000A92")]
	[Address(RVA = "0x271C7E0", Offset = "0x271ADE0", VA = "0x18271C7E0")]
	internal static IDtdParser Create()
	{
		return null;
	}

	[Token(Token = "0x6000A93")]
	[Address(RVA = "0x271E8F0", Offset = "0x271CEF0", VA = "0x18271E8F0")]
	private void Initialize(IDtdParserAdapter readerAdapter)
	{
	}

	[Token(Token = "0x6000A94")]
	[Address(RVA = "0x271E510", Offset = "0x271CB10", VA = "0x18271E510")]
	private void InitializeFreeFloatingDtd(string baseUri, string docTypeName, string publicId, string systemId, string internalSubset, IDtdParserAdapter adapter)
	{
	}

	[Token(Token = "0x6000A95")]
	[Address(RVA = "0x2727660", Offset = "0x2725C60", VA = "0x182727660", Slot = "4")]
	private IDtdInfo System_002EXml_002EIDtdParser_002EParseInternalDtd(IDtdParserAdapter adapter, bool saveInternalSubset)
	{
		return null;
	}

	[Token(Token = "0x6000A96")]
	[Address(RVA = "0x2727610", Offset = "0x2725C10", VA = "0x182727610", Slot = "5")]
	private IDtdInfo System_002EXml_002EIDtdParser_002EParseFreeFloatingDtd(string baseUri, string docTypeName, string publicId, string systemId, string internalSubset, IDtdParserAdapter adapter)
	{
		return null;
	}

	[Token(Token = "0x6000A9D")]
	[Address(RVA = "0x27224F0", Offset = "0x2720AF0", VA = "0x1827224F0")]
	private void Parse(bool saveInternalSubset)
	{
	}

	[Token(Token = "0x6000A9E")]
	[Address(RVA = "0x2721780", Offset = "0x271FD80", VA = "0x182721780")]
	private void ParseInDocumentDtd(bool saveInternalSubset)
	{
	}

	[Token(Token = "0x6000A9F")]
	[Address(RVA = "0x27216B0", Offset = "0x271FCB0", VA = "0x1827216B0")]
	private void ParseFreeFloatingDtd()
	{
	}

	[Token(Token = "0x6000AA0")]
	[Address(RVA = "0x2721980", Offset = "0x271FF80", VA = "0x182721980")]
	private void ParseInternalSubset()
	{
	}

	[Token(Token = "0x6000AA1")]
	[Address(RVA = "0x2721520", Offset = "0x271FB20", VA = "0x182721520")]
	private void ParseExternalSubset()
	{
	}

	[Token(Token = "0x6000AA2")]
	[Address(RVA = "0x2721D80", Offset = "0x2720380", VA = "0x182721D80")]
	private void ParseSubset()
	{
	}

	[Token(Token = "0x6000AA3")]
	[Address(RVA = "0x271ED30", Offset = "0x271D330", VA = "0x18271ED30")]
	private void ParseAttlistDecl()
	{
	}

	[Token(Token = "0x6000AA4")]
	[Address(RVA = "0x271F5C0", Offset = "0x271DBC0", VA = "0x18271F5C0")]
	private void ParseAttlistType(SchemaAttDef attrDef, SchemaElementDecl elementDecl, bool ignoreErrors)
	{
	}

	[Token(Token = "0x6000AA5")]
	[Address(RVA = "0x271F350", Offset = "0x271D950", VA = "0x18271F350")]
	private void ParseAttlistDefault(SchemaAttDef attrDef, bool ignoreErrors)
	{
	}

	[Token(Token = "0x6000AA6")]
	[Address(RVA = "0x2720130", Offset = "0x271E730", VA = "0x182720130")]
	private void ParseElementDecl()
	{
	}

	[Token(Token = "0x6000AA7")]
	[Address(RVA = "0x2720860", Offset = "0x271EE60", VA = "0x182720860")]
	private void ParseElementOnlyContent(ParticleContentValidator pcv, int startParenEntityId)
	{
	}

	[Token(Token = "0x6000AA8")]
	[Address(RVA = "0x2721710", Offset = "0x271FD10", VA = "0x182721710")]
	private void ParseHowMany(ParticleContentValidator pcv)
	{
	}

	[Token(Token = "0x6000AA9")]
	[Address(RVA = "0x2720590", Offset = "0x271EB90", VA = "0x182720590")]
	private void ParseElementMixedContent(ParticleContentValidator pcv, int startParenEntityId)
	{
	}

	[Token(Token = "0x6000AAA")]
	[Address(RVA = "0x2720C60", Offset = "0x271F260", VA = "0x182720C60")]
	private void ParseEntityDecl()
	{
	}

	[Token(Token = "0x6000AAB")]
	[Address(RVA = "0x2721990", Offset = "0x271FF90", VA = "0x182721990")]
	private void ParseNotationDecl()
	{
	}

	[Token(Token = "0x6000AAC")]
	[Address(RVA = "0x271C5C0", Offset = "0x271ABC0", VA = "0x18271C5C0")]
	private void AddUndeclaredNotation(string notationName)
	{
	}

	[Token(Token = "0x6000AAD")]
	[Address(RVA = "0x271FCD0", Offset = "0x271E2D0", VA = "0x18271FCD0")]
	private void ParseComment()
	{
	}

	[Token(Token = "0x6000AAE")]
	[Address(RVA = "0x2721C80", Offset = "0x2720280", VA = "0x182721C80")]
	private void ParsePI()
	{
	}

	[Token(Token = "0x6000AAF")]
	[Address(RVA = "0x271FE70", Offset = "0x271E470", VA = "0x18271FE70")]
	private void ParseCondSection()
	{
	}

	[Token(Token = "0x6000AB0")]
	[Address(RVA = "0x2721050", Offset = "0x271F650", VA = "0x182721050")]
	private void ParseExternalId(Token idTokenType, Token declType, out string publicId, out string systemId)
	{
	}

	[Token(Token = "0x6000AB1")]
	[Address(RVA = "0x271CC30", Offset = "0x271B230", VA = "0x18271CC30")]
	private Token GetToken(bool needWhiteSpace)
	{
		return default(Token);
	}

	[Token(Token = "0x6000AB2")]
	[Address(RVA = "0x2726780", Offset = "0x2724D80", VA = "0x182726780")]
	private Token ScanSubsetContent()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AB3")]
	[Address(RVA = "0x2726010", Offset = "0x2724610", VA = "0x182726010")]
	private Token ScanNameExpected()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AB4")]
	[Address(RVA = "0x27264B0", Offset = "0x2724AB0", VA = "0x1827264B0")]
	private Token ScanQNameExpected()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AB5")]
	[Address(RVA = "0x2726050", Offset = "0x2724650", VA = "0x182726050")]
	private Token ScanNmtokenExpected()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AB6")]
	[Address(RVA = "0x27243B0", Offset = "0x27229B0", VA = "0x1827243B0")]
	private Token ScanDoctype1()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AB7")]
	[Address(RVA = "0x2724530", Offset = "0x2722B30", VA = "0x182724530")]
	private Token ScanDoctype2()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AB8")]
	[Address(RVA = "0x2723940", Offset = "0x2721F40", VA = "0x182723940")]
	private Token ScanClosingTag()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AB9")]
	[Address(RVA = "0x27245F0", Offset = "0x2722BF0", VA = "0x1827245F0")]
	private Token ScanElement1()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ABA")]
	[Address(RVA = "0x2724870", Offset = "0x2722E70", VA = "0x182724870")]
	private Token ScanElement2()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ABB")]
	[Address(RVA = "0x2724A90", Offset = "0x2723090", VA = "0x182724A90")]
	private Token ScanElement3()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ABC")]
	[Address(RVA = "0x2724B10", Offset = "0x2723110", VA = "0x182724B10")]
	private Token ScanElement4()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ABD")]
	[Address(RVA = "0x2724BF0", Offset = "0x27231F0", VA = "0x182724BF0")]
	private Token ScanElement5()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ABE")]
	[Address(RVA = "0x2724CF0", Offset = "0x27232F0", VA = "0x182724CF0")]
	private Token ScanElement6()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ABF")]
	[Address(RVA = "0x2724DC0", Offset = "0x27233C0", VA = "0x182724DC0")]
	private Token ScanElement7()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AC0")]
	[Address(RVA = "0x2722940", Offset = "0x2720F40", VA = "0x182722940")]
	private Token ScanAttlist1()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AC1")]
	[Address(RVA = "0x2722A10", Offset = "0x2721010", VA = "0x182722A10")]
	private Token ScanAttlist2()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AC2")]
	[Address(RVA = "0x27231C0", Offset = "0x27217C0", VA = "0x1827231C0")]
	private Token ScanAttlist3()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AC3")]
	[Address(RVA = "0x2723260", Offset = "0x2721860", VA = "0x182723260")]
	private Token ScanAttlist4()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AC4")]
	[Address(RVA = "0x2723330", Offset = "0x2721930", VA = "0x182723330")]
	private Token ScanAttlist5()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AC5")]
	[Address(RVA = "0x2723400", Offset = "0x2721A00", VA = "0x182723400")]
	private Token ScanAttlist6()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AC6")]
	[Address(RVA = "0x2723890", Offset = "0x2721E90", VA = "0x182723890")]
	private Token ScanAttlist7()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AC7")]
	[Address(RVA = "0x2725210", Offset = "0x2723810", VA = "0x182725210")]
	private Token ScanLiteral(LiteralType literalType)
	{
		return default(Token);
	}

	[Token(Token = "0x6000AC8")]
	[Address(RVA = "0x2725100", Offset = "0x2723700", VA = "0x182725100")]
	private XmlQualifiedName ScanEntityName()
	{
		return null;
	}

	[Token(Token = "0x6000AC9")]
	[Address(RVA = "0x2726250", Offset = "0x2724850", VA = "0x182726250")]
	private Token ScanNotation1()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ACA")]
	[Address(RVA = "0x2726FE0", Offset = "0x27255E0", VA = "0x182726FE0")]
	private Token ScanSystemId()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ACB")]
	[Address(RVA = "0x2724E10", Offset = "0x2723410", VA = "0x182724E10")]
	private Token ScanEntity1()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ACC")]
	[Address(RVA = "0x2724E80", Offset = "0x2723480", VA = "0x182724E80")]
	private Token ScanEntity2()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ACD")]
	[Address(RVA = "0x2725000", Offset = "0x2723600", VA = "0x182725000")]
	private Token ScanEntity3()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ACE")]
	[Address(RVA = "0x2726390", Offset = "0x2724990", VA = "0x182726390")]
	private Token ScanPublicId1()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ACF")]
	[Address(RVA = "0x2726440", Offset = "0x2724A40", VA = "0x182726440")]
	private Token ScanPublicId2()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AD0")]
	[Address(RVA = "0x27239C0", Offset = "0x2721FC0", VA = "0x1827239C0")]
	private Token ScanCondSection1()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AD1")]
	[Address(RVA = "0x2723D20", Offset = "0x2722320", VA = "0x182723D20")]
	private Token ScanCondSection2()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AD2")]
	[Address(RVA = "0x2723DA0", Offset = "0x27223A0", VA = "0x182723DA0")]
	private Token ScanCondSection3()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AD3")]
	[Address(RVA = "0x2726040", Offset = "0x2724640", VA = "0x182726040")]
	private void ScanName()
	{
	}

	[Token(Token = "0x6000AD4")]
	[Address(RVA = "0x2726770", Offset = "0x2724D70", VA = "0x182726770")]
	private void ScanQName()
	{
	}

	[Token(Token = "0x6000AD5")]
	[Address(RVA = "0x27264E0", Offset = "0x2724AE0", VA = "0x1827264E0")]
	private void ScanQName(bool isQName)
	{
	}

	[Token(Token = "0x6000AD6")]
	[Address(RVA = "0x2722780", Offset = "0x2720D80", VA = "0x182722780")]
	private bool ReadDataInName()
	{
		return default(bool);
	}

	[Token(Token = "0x6000AD7")]
	[Address(RVA = "0x2726080", Offset = "0x2724680", VA = "0x182726080")]
	private void ScanNmtoken()
	{
	}

	[Token(Token = "0x6000AD8")]
	[Address(RVA = "0x271C8E0", Offset = "0x271AEE0", VA = "0x18271C8E0")]
	private bool EatPublicKeyword()
	{
		return default(bool);
	}

	[Token(Token = "0x6000AD9")]
	[Address(RVA = "0x271C9A0", Offset = "0x271AFA0", VA = "0x18271C9A0")]
	private bool EatSystemKeyword()
	{
		return default(bool);
	}

	[Token(Token = "0x6000ADA")]
	[Address(RVA = "0x271CA60", Offset = "0x271B060", VA = "0x18271CA60")]
	private XmlQualifiedName GetNameQualified(bool canHavePrefix)
	{
		return null;
	}

	[Token(Token = "0x6000ADB")]
	[Address(RVA = "0x271CC00", Offset = "0x271B200", VA = "0x18271CC00")]
	private string GetNameString()
	{
		return null;
	}

	[Token(Token = "0x6000ADC")]
	[Address(RVA = "0x271CC00", Offset = "0x271B200", VA = "0x18271CC00")]
	private string GetNmtokenString()
	{
		return null;
	}

	[Token(Token = "0x6000ADD")]
	[Address(RVA = "0x271E030", Offset = "0x271C630", VA = "0x18271E030")]
	private string GetValue()
	{
		return null;
	}

	[Token(Token = "0x6000ADE")]
	[Address(RVA = "0x271DFA0", Offset = "0x271C5A0", VA = "0x18271DFA0")]
	private string GetValueWithStrippedSpaces()
	{
		return null;
	}

	[Token(Token = "0x6000ADF")]
	[Address(RVA = "0x27227C0", Offset = "0x2720DC0", VA = "0x1827227C0")]
	private int ReadData()
	{
		return default(int);
	}

	[Token(Token = "0x6000AE0")]
	[Address(RVA = "0x271EBC0", Offset = "0x271D1C0", VA = "0x18271EBC0")]
	private void LoadParsingBuffer()
	{
	}

	[Token(Token = "0x6000AE1")]
	[Address(RVA = "0x2722930", Offset = "0x2720F30", VA = "0x182722930")]
	private void SaveParsingBuffer()
	{
	}

	[Token(Token = "0x6000AE2")]
	[Address(RVA = "0x2722840", Offset = "0x2720E40", VA = "0x182722840")]
	private void SaveParsingBuffer(int internalSubsetValueEndPos)
	{
	}

	[Token(Token = "0x6000AE3")]
	[Address(RVA = "0x271E4C0", Offset = "0x271CAC0", VA = "0x18271E4C0")]
	private bool HandleEntityReference(bool paramEntity, bool inLiteral, bool inAttribute)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AE4")]
	[Address(RVA = "0x271E220", Offset = "0x271C820", VA = "0x18271E220")]
	private bool HandleEntityReference(XmlQualifiedName entityName, bool paramEntity, bool inLiteral, bool inAttribute)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AE5")]
	[Address(RVA = "0x271E0A0", Offset = "0x271C6A0", VA = "0x18271E0A0")]
	private bool HandleEntityEnd(bool inLiteral)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AE6")]
	[Address(RVA = "0x2727E10", Offset = "0x2726410", VA = "0x182727E10")]
	private SchemaEntity VerifyEntityReference(XmlQualifiedName entityName, bool paramEntity, bool mustBeDeclared, bool inAttribute)
	{
		return null;
	}

	[Token(Token = "0x6000AE7")]
	[Address(RVA = "0x2727090", Offset = "0x2725690", VA = "0x182727090")]
	private void SendValidationEvent(int pos, XmlSeverityType severity, string code, string arg)
	{
	}

	[Token(Token = "0x6000AE8")]
	[Address(RVA = "0x27271F0", Offset = "0x27257F0", VA = "0x1827271F0")]
	private void SendValidationEvent(XmlSeverityType severity, string code, string arg)
	{
	}

	[Token(Token = "0x6000AE9")]
	[Address(RVA = "0x2727330", Offset = "0x2725930", VA = "0x182727330")]
	private void SendValidationEvent(XmlSeverityType severity, XmlSchemaException e)
	{
	}

	[Token(Token = "0x6000AEA")]
	[Address(RVA = "0x271EBB0", Offset = "0x271D1B0", VA = "0x18271EBB0")]
	private bool IsAttributeValueType(Token token)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AEE")]
	[Address(RVA = "0x271ECD0", Offset = "0x271D2D0", VA = "0x18271ECD0")]
	private void OnUnexpectedError()
	{
	}

	[Token(Token = "0x6000AEF")]
	[Address(RVA = "0x2727900", Offset = "0x2725F00", VA = "0x182727900")]
	private void Throw(int curPos, string res)
	{
	}

	[Token(Token = "0x6000AF0")]
	[Address(RVA = "0x2727930", Offset = "0x2725F30", VA = "0x182727930")]
	private void Throw(int curPos, string res, string arg)
	{
	}

	[Token(Token = "0x6000AF1")]
	[Address(RVA = "0x2727C40", Offset = "0x2726240", VA = "0x182727C40")]
	private void Throw(int curPos, string res, string[] args)
	{
	}

	[Token(Token = "0x6000AF2")]
	[Address(RVA = "0x2727B00", Offset = "0x2726100", VA = "0x182727B00")]
	private void Throw(string res, string arg, int lineNo, int linePos)
	{
	}

	[Token(Token = "0x6000AF3")]
	[Address(RVA = "0x2727710", Offset = "0x2725D10", VA = "0x182727710")]
	private void ThrowInvalidChar(int pos, string data, int invCharPos)
	{
	}

	[Token(Token = "0x6000AF4")]
	[Address(RVA = "0x27276A0", Offset = "0x2725CA0", VA = "0x1827276A0")]
	private void ThrowInvalidChar(char[] data, int length, int invCharPos)
	{
	}

	[Token(Token = "0x6000AF5")]
	[Address(RVA = "0x2727780", Offset = "0x2725D80", VA = "0x182727780")]
	private void ThrowUnexpectedToken(int pos, string expectedToken)
	{
	}

	[Token(Token = "0x6000AF6")]
	[Address(RVA = "0x27277A0", Offset = "0x2725DA0", VA = "0x1827277A0")]
	private void ThrowUnexpectedToken(int pos, string expectedToken1, string expectedToken2)
	{
	}

	[Token(Token = "0x6000AF7")]
	[Address(RVA = "0x2722420", Offset = "0x2720A20", VA = "0x182722420")]
	private string ParseUnexpectedToken(int startPos)
	{
		return null;
	}

	[Token(Token = "0x6000AF8")]
	[Address(RVA = "0x2727430", Offset = "0x2725A30", VA = "0x182727430")]
	internal static string StripSpaces(string value)
	{
		return null;
	}
}
