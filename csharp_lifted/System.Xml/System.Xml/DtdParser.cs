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
		[Address(RVA = "0x60F4EF0", Offset = "0x60F3EF0", VA = "0x60F4EF0")]
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
		[Address(RVA = "0x60F4F50", Offset = "0x60F3F50", VA = "0x60F4F50")]
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
		[Address(RVA = "0x60E9D50", Offset = "0x60E8D50", VA = "0x60E9D50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002E9")]
	private bool IgnoreEntityReferences
	{
		[Token(Token = "0x6000A98")]
		[Address(RVA = "0x60E9D60", Offset = "0x60E8D60", VA = "0x60E9D60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002EA")]
	private bool SaveInternalSubsetValue
	{
		[Token(Token = "0x6000A99")]
		[Address(RVA = "0x60E9D70", Offset = "0x60E8D70", VA = "0x60E9D70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002EB")]
	private bool ParsingTopLevelMarkup
	{
		[Token(Token = "0x6000A9A")]
		[Address(RVA = "0x60E9E40", Offset = "0x60E8E40", VA = "0x60E9E40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002EC")]
	private bool SupportNamespaces
	{
		[Token(Token = "0x6000A9B")]
		[Address(RVA = "0x60E9E60", Offset = "0x60E8E60", VA = "0x60E9E60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002ED")]
	private bool Normalize
	{
		[Token(Token = "0x6000A9C")]
		[Address(RVA = "0x60E9E70", Offset = "0x60E8E70", VA = "0x60E9E70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002EE")]
	private int LineNo
	{
		[Token(Token = "0x6000AEB")]
		[Address(RVA = "0x60EDE90", Offset = "0x60ECE90", VA = "0x60EDE90")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002EF")]
	private int LinePos
	{
		[Token(Token = "0x6000AEC")]
		[Address(RVA = "0x60EDF30", Offset = "0x60ECF30", VA = "0x60EDF30")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002F0")]
	private string BaseUriStr
	{
		[Token(Token = "0x6000AED")]
		[Address(RVA = "0x60EA0A0", Offset = "0x60E90A0", VA = "0x60EA0A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A91")]
	[Address(RVA = "0x60E8DA0", Offset = "0x60E7DA0", VA = "0x60E8DA0")]
	private DtdParser()
	{
	}

	[Token(Token = "0x6000A92")]
	[Address(RVA = "0x60DBEF0", Offset = "0x60DAEF0", VA = "0x60DBEF0")]
	internal static IDtdParser Create()
	{
		return null;
	}

	[Token(Token = "0x6000A93")]
	[Address(RVA = "0x60E8E80", Offset = "0x60E7E80", VA = "0x60E8E80")]
	private void Initialize(IDtdParserAdapter readerAdapter)
	{
	}

	[Token(Token = "0x6000A94")]
	[Address(RVA = "0x60E92D0", Offset = "0x60E82D0", VA = "0x60E92D0")]
	private void InitializeFreeFloatingDtd(string baseUri, string docTypeName, string publicId, string systemId, string internalSubset, IDtdParserAdapter adapter)
	{
	}

	[Token(Token = "0x6000A95")]
	[Address(RVA = "0x60E97F0", Offset = "0x60E87F0", VA = "0x60E97F0", Slot = "4")]
	private IDtdInfo System_002EXml_002EIDtdParser_002EParseInternalDtd(IDtdParserAdapter adapter, bool saveInternalSubset)
	{
		return null;
	}

	[Token(Token = "0x6000A96")]
	[Address(RVA = "0x60E9D20", Offset = "0x60E8D20", VA = "0x60E9D20", Slot = "5")]
	private IDtdInfo System_002EXml_002EIDtdParser_002EParseFreeFloatingDtd(string baseUri, string docTypeName, string publicId, string systemId, string internalSubset, IDtdParserAdapter adapter)
	{
		return null;
	}

	[Token(Token = "0x6000A9D")]
	[Address(RVA = "0x60E9820", Offset = "0x60E8820", VA = "0x60E9820")]
	private void Parse(bool saveInternalSubset)
	{
	}

	[Token(Token = "0x6000A9E")]
	[Address(RVA = "0x60E9ED0", Offset = "0x60E8ED0", VA = "0x60E9ED0")]
	private void ParseInDocumentDtd(bool saveInternalSubset)
	{
	}

	[Token(Token = "0x6000A9F")]
	[Address(RVA = "0x60E9E80", Offset = "0x60E8E80", VA = "0x60E9E80")]
	private void ParseFreeFloatingDtd()
	{
	}

	[Token(Token = "0x6000AA0")]
	[Address(RVA = "0x60EBA00", Offset = "0x60EAA00", VA = "0x60EBA00")]
	private void ParseInternalSubset()
	{
	}

	[Token(Token = "0x6000AA1")]
	[Address(RVA = "0x60EBA10", Offset = "0x60EAA10", VA = "0x60EBA10")]
	private void ParseExternalSubset()
	{
	}

	[Token(Token = "0x6000AA2")]
	[Address(RVA = "0x60EBBF0", Offset = "0x60EABF0", VA = "0x60EBBF0")]
	private void ParseSubset()
	{
	}

	[Token(Token = "0x6000AA3")]
	[Address(RVA = "0x60EC010", Offset = "0x60EB010", VA = "0x60EC010")]
	private void ParseAttlistDecl()
	{
	}

	[Token(Token = "0x6000AA4")]
	[Address(RVA = "0x60EE1E0", Offset = "0x60ED1E0", VA = "0x60EE1E0")]
	private void ParseAttlistType(SchemaAttDef attrDef, SchemaElementDecl elementDecl, bool ignoreErrors)
	{
	}

	[Token(Token = "0x6000AA5")]
	[Address(RVA = "0x60EEA70", Offset = "0x60EDA70", VA = "0x60EEA70")]
	private void ParseAttlistDefault(SchemaAttDef attrDef, bool ignoreErrors)
	{
	}

	[Token(Token = "0x6000AA6")]
	[Address(RVA = "0x60EC770", Offset = "0x60EB770", VA = "0x60EC770")]
	private void ParseElementDecl()
	{
	}

	[Token(Token = "0x6000AA7")]
	[Address(RVA = "0x60EF5B0", Offset = "0x60EE5B0", VA = "0x60EF5B0")]
	private void ParseElementOnlyContent(ParticleContentValidator pcv, int startParenEntityId)
	{
	}

	[Token(Token = "0x6000AA8")]
	[Address(RVA = "0x60EF980", Offset = "0x60EE980", VA = "0x60EF980")]
	private void ParseHowMany(ParticleContentValidator pcv)
	{
	}

	[Token(Token = "0x6000AA9")]
	[Address(RVA = "0x60EF2C0", Offset = "0x60EE2C0", VA = "0x60EF2C0")]
	private void ParseElementMixedContent(ParticleContentValidator pcv, int startParenEntityId)
	{
	}

	[Token(Token = "0x6000AAA")]
	[Address(RVA = "0x60ECBA0", Offset = "0x60EBBA0", VA = "0x60ECBA0")]
	private void ParseEntityDecl()
	{
	}

	[Token(Token = "0x6000AAB")]
	[Address(RVA = "0x60ECFD0", Offset = "0x60EBFD0", VA = "0x60ECFD0")]
	private void ParseNotationDecl()
	{
	}

	[Token(Token = "0x6000AAC")]
	[Address(RVA = "0x60EEEE0", Offset = "0x60EDEE0", VA = "0x60EEEE0")]
	private void AddUndeclaredNotation(string notationName)
	{
	}

	[Token(Token = "0x6000AAD")]
	[Address(RVA = "0x60ED2C0", Offset = "0x60EC2C0", VA = "0x60ED2C0")]
	private void ParseComment()
	{
	}

	[Token(Token = "0x6000AAE")]
	[Address(RVA = "0x60ED5C0", Offset = "0x60EC5C0", VA = "0x60ED5C0")]
	private void ParsePI()
	{
	}

	[Token(Token = "0x6000AAF")]
	[Address(RVA = "0x60ED7F0", Offset = "0x60EC7F0", VA = "0x60ED7F0")]
	private void ParseCondSection()
	{
	}

	[Token(Token = "0x6000AB0")]
	[Address(RVA = "0x60EB160", Offset = "0x60EA160", VA = "0x60EB160")]
	private void ParseExternalId(Token idTokenType, Token declType, out string publicId, out string systemId)
	{
	}

	[Token(Token = "0x6000AB1")]
	[Address(RVA = "0x60EA4A0", Offset = "0x60E94A0", VA = "0x60EA4A0")]
	private Token GetToken(bool needWhiteSpace)
	{
		return default(Token);
	}

	[Token(Token = "0x6000AB2")]
	[Address(RVA = "0x60F0360", Offset = "0x60EF360", VA = "0x60F0360")]
	private Token ScanSubsetContent()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AB3")]
	[Address(RVA = "0x60F0300", Offset = "0x60EF300", VA = "0x60F0300")]
	private Token ScanNameExpected()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AB4")]
	[Address(RVA = "0x60F0320", Offset = "0x60EF320", VA = "0x60F0320")]
	private Token ScanQNameExpected()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AB5")]
	[Address(RVA = "0x60F0340", Offset = "0x60EF340", VA = "0x60F0340")]
	private Token ScanNmtokenExpected()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AB6")]
	[Address(RVA = "0x60F0A90", Offset = "0x60EFA90", VA = "0x60F0A90")]
	private Token ScanDoctype1()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AB7")]
	[Address(RVA = "0x60F0BF0", Offset = "0x60EFBF0", VA = "0x60F0BF0")]
	private Token ScanDoctype2()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AB8")]
	[Address(RVA = "0x60F2F20", Offset = "0x60F1F20", VA = "0x60F2F20")]
	private Token ScanClosingTag()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AB9")]
	[Address(RVA = "0x60F0CA0", Offset = "0x60EFCA0", VA = "0x60F0CA0")]
	private Token ScanElement1()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ABA")]
	[Address(RVA = "0x60F0F70", Offset = "0x60EFF70", VA = "0x60F0F70")]
	private Token ScanElement2()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ABB")]
	[Address(RVA = "0x60F1120", Offset = "0x60F0120", VA = "0x60F1120")]
	private Token ScanElement3()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ABC")]
	[Address(RVA = "0x60F1190", Offset = "0x60F0190", VA = "0x60F1190")]
	private Token ScanElement4()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ABD")]
	[Address(RVA = "0x60F1260", Offset = "0x60F0260", VA = "0x60F1260")]
	private Token ScanElement5()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ABE")]
	[Address(RVA = "0x60F1340", Offset = "0x60F0340", VA = "0x60F1340")]
	private Token ScanElement6()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ABF")]
	[Address(RVA = "0x60F13F0", Offset = "0x60F03F0", VA = "0x60F13F0")]
	private Token ScanElement7()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AC0")]
	[Address(RVA = "0x60F1440", Offset = "0x60F0440", VA = "0x60F1440")]
	private Token ScanAttlist1()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AC1")]
	[Address(RVA = "0x60F14F0", Offset = "0x60F04F0", VA = "0x60F14F0")]
	private Token ScanAttlist2()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AC2")]
	[Address(RVA = "0x60F1BB0", Offset = "0x60F0BB0", VA = "0x60F1BB0")]
	private Token ScanAttlist3()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AC3")]
	[Address(RVA = "0x60F1C30", Offset = "0x60F0C30", VA = "0x60F1C30")]
	private Token ScanAttlist4()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AC4")]
	[Address(RVA = "0x60F1CE0", Offset = "0x60F0CE0", VA = "0x60F1CE0")]
	private Token ScanAttlist5()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AC5")]
	[Address(RVA = "0x60F1D90", Offset = "0x60F0D90", VA = "0x60F1D90")]
	private Token ScanAttlist6()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AC6")]
	[Address(RVA = "0x60F2100", Offset = "0x60F1100", VA = "0x60F2100")]
	private Token ScanAttlist7()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AC7")]
	[Address(RVA = "0x60F34D0", Offset = "0x60F24D0", VA = "0x60F34D0")]
	private Token ScanLiteral(LiteralType literalType)
	{
		return default(Token);
	}

	[Token(Token = "0x6000AC8")]
	[Address(RVA = "0x60F43A0", Offset = "0x60F33A0", VA = "0x60F43A0")]
	private XmlQualifiedName ScanEntityName()
	{
		return null;
	}

	[Token(Token = "0x6000AC9")]
	[Address(RVA = "0x60F21A0", Offset = "0x60F11A0", VA = "0x60F21A0")]
	private Token ScanNotation1()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ACA")]
	[Address(RVA = "0x60F22D0", Offset = "0x60F12D0", VA = "0x60F22D0")]
	private Token ScanSystemId()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ACB")]
	[Address(RVA = "0x60F2440", Offset = "0x60F1440", VA = "0x60F2440")]
	private Token ScanEntity1()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ACC")]
	[Address(RVA = "0x60F24A0", Offset = "0x60F14A0", VA = "0x60F24A0")]
	private Token ScanEntity2()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ACD")]
	[Address(RVA = "0x60F2600", Offset = "0x60F1600", VA = "0x60F2600")]
	private Token ScanEntity3()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ACE")]
	[Address(RVA = "0x60F2360", Offset = "0x60F1360", VA = "0x60F2360")]
	private Token ScanPublicId1()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ACF")]
	[Address(RVA = "0x60F23F0", Offset = "0x60F13F0", VA = "0x60F23F0")]
	private Token ScanPublicId2()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AD0")]
	[Address(RVA = "0x60F26E0", Offset = "0x60F16E0", VA = "0x60F26E0")]
	private Token ScanCondSection1()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AD1")]
	[Address(RVA = "0x60F2990", Offset = "0x60F1990", VA = "0x60F2990")]
	private Token ScanCondSection2()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AD2")]
	[Address(RVA = "0x60F2A00", Offset = "0x60F1A00", VA = "0x60F2A00")]
	private Token ScanCondSection3()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AD3")]
	[Address(RVA = "0x60F3210", Offset = "0x60F2210", VA = "0x60F3210")]
	private void ScanName()
	{
	}

	[Token(Token = "0x6000AD4")]
	[Address(RVA = "0x60F3220", Offset = "0x60F2220", VA = "0x60F3220")]
	private void ScanQName()
	{
	}

	[Token(Token = "0x6000AD5")]
	[Address(RVA = "0x60F4750", Offset = "0x60F3750", VA = "0x60F4750")]
	private void ScanQName(bool isQName)
	{
	}

	[Token(Token = "0x6000AD6")]
	[Address(RVA = "0x60F49C0", Offset = "0x60F39C0", VA = "0x60F49C0")]
	private bool ReadDataInName()
	{
		return default(bool);
	}

	[Token(Token = "0x6000AD7")]
	[Address(RVA = "0x60F3230", Offset = "0x60F2230", VA = "0x60F3230")]
	private void ScanNmtoken()
	{
	}

	[Token(Token = "0x6000AD8")]
	[Address(RVA = "0x60F3370", Offset = "0x60F2370", VA = "0x60F3370")]
	private bool EatPublicKeyword()
	{
		return default(bool);
	}

	[Token(Token = "0x6000AD9")]
	[Address(RVA = "0x60F3420", Offset = "0x60F2420", VA = "0x60F3420")]
	private bool EatSystemKeyword()
	{
		return default(bool);
	}

	[Token(Token = "0x6000ADA")]
	[Address(RVA = "0x60EB000", Offset = "0x60EA000", VA = "0x60EB000")]
	private XmlQualifiedName GetNameQualified(bool canHavePrefix)
	{
		return null;
	}

	[Token(Token = "0x6000ADB")]
	[Address(RVA = "0x60EEEC0", Offset = "0x60EDEC0", VA = "0x60EEEC0")]
	private string GetNameString()
	{
		return null;
	}

	[Token(Token = "0x6000ADC")]
	[Address(RVA = "0x60EF1D0", Offset = "0x60EE1D0", VA = "0x60EF1D0")]
	private string GetNmtokenString()
	{
		return null;
	}

	[Token(Token = "0x6000ADD")]
	[Address(RVA = "0x60EF260", Offset = "0x60EE260", VA = "0x60EF260")]
	private string GetValue()
	{
		return null;
	}

	[Token(Token = "0x6000ADE")]
	[Address(RVA = "0x60EF1F0", Offset = "0x60EE1F0", VA = "0x60EF1F0")]
	private string GetValueWithStrippedSpaces()
	{
		return null;
	}

	[Token(Token = "0x6000ADF")]
	[Address(RVA = "0x60F2F90", Offset = "0x60F1F90", VA = "0x60F2F90")]
	private int ReadData()
	{
		return default(int);
	}

	[Token(Token = "0x6000AE0")]
	[Address(RVA = "0x60EA2F0", Offset = "0x60E92F0", VA = "0x60EA2F0")]
	private void LoadParsingBuffer()
	{
	}

	[Token(Token = "0x6000AE1")]
	[Address(RVA = "0x60EB9F0", Offset = "0x60EA9F0", VA = "0x60EB9F0")]
	private void SaveParsingBuffer()
	{
	}

	[Token(Token = "0x6000AE2")]
	[Address(RVA = "0x60EDC60", Offset = "0x60ECC60", VA = "0x60EDC60")]
	private void SaveParsingBuffer(int internalSubsetValueEndPos)
	{
	}

	[Token(Token = "0x6000AE3")]
	[Address(RVA = "0x60F0200", Offset = "0x60EF200", VA = "0x60F0200")]
	private bool HandleEntityReference(bool paramEntity, bool inLiteral, bool inAttribute)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AE4")]
	[Address(RVA = "0x60F4C10", Offset = "0x60F3C10", VA = "0x60F4C10")]
	private bool HandleEntityReference(XmlQualifiedName entityName, bool paramEntity, bool inLiteral, bool inAttribute)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AE5")]
	[Address(RVA = "0x60F3050", Offset = "0x60F2050", VA = "0x60F3050")]
	private bool HandleEntityEnd(bool inLiteral)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AE6")]
	[Address(RVA = "0x60F4500", Offset = "0x60F3500", VA = "0x60F4500")]
	private SchemaEntity VerifyEntityReference(XmlQualifiedName entityName, bool paramEntity, bool mustBeDeclared, bool inAttribute)
	{
		return null;
	}

	[Token(Token = "0x6000AE7")]
	[Address(RVA = "0x60EDA60", Offset = "0x60ECA60", VA = "0x60EDA60")]
	private void SendValidationEvent(int pos, XmlSeverityType severity, string code, string arg)
	{
	}

	[Token(Token = "0x6000AE8")]
	[Address(RVA = "0x60EECD0", Offset = "0x60EDCD0", VA = "0x60EECD0")]
	private void SendValidationEvent(XmlSeverityType severity, string code, string arg)
	{
	}

	[Token(Token = "0x6000AE9")]
	[Address(RVA = "0x60EA1B0", Offset = "0x60E91B0", VA = "0x60EA1B0")]
	private void SendValidationEvent(XmlSeverityType severity, XmlSchemaException e)
	{
	}

	[Token(Token = "0x6000AEA")]
	[Address(RVA = "0x60EECC0", Offset = "0x60EDCC0", VA = "0x60EECC0")]
	private bool IsAttributeValueType(Token token)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AEE")]
	[Address(RVA = "0x60EAFB0", Offset = "0x60E9FB0", VA = "0x60EAFB0")]
	private void OnUnexpectedError()
	{
	}

	[Token(Token = "0x6000AEF")]
	[Address(RVA = "0x60ED7D0", Offset = "0x60EC7D0", VA = "0x60ED7D0")]
	private void Throw(int curPos, string res)
	{
	}

	[Token(Token = "0x6000AF0")]
	[Address(RVA = "0x60EF9E0", Offset = "0x60EE9E0", VA = "0x60EF9E0")]
	private void Throw(int curPos, string res, string arg)
	{
	}

	[Token(Token = "0x6000AF1")]
	[Address(RVA = "0x60EFE70", Offset = "0x60EEE70", VA = "0x60EFE70")]
	private void Throw(int curPos, string res, string[] args)
	{
	}

	[Token(Token = "0x6000AF2")]
	[Address(RVA = "0x60EDFF0", Offset = "0x60ECFF0", VA = "0x60EDFF0")]
	private void Throw(string res, string arg, int lineNo, int linePos)
	{
	}

	[Token(Token = "0x6000AF3")]
	[Address(RVA = "0x60E9790", Offset = "0x60E8790", VA = "0x60E9790")]
	private void ThrowInvalidChar(int pos, string data, int invCharPos)
	{
	}

	[Token(Token = "0x6000AF4")]
	[Address(RVA = "0x60F01A0", Offset = "0x60EF1A0", VA = "0x60F01A0")]
	private void ThrowInvalidChar(char[] data, int length, int invCharPos)
	{
	}

	[Token(Token = "0x6000AF5")]
	[Address(RVA = "0x60EDE80", Offset = "0x60ECE80", VA = "0x60EDE80")]
	private void ThrowUnexpectedToken(int pos, string expectedToken)
	{
	}

	[Token(Token = "0x6000AF6")]
	[Address(RVA = "0x60EFD10", Offset = "0x60EED10", VA = "0x60EFD10")]
	private void ThrowUnexpectedToken(int pos, string expectedToken1, string expectedToken2)
	{
	}

	[Token(Token = "0x6000AF7")]
	[Address(RVA = "0x60F0240", Offset = "0x60EF240", VA = "0x60F0240")]
	private string ParseUnexpectedToken(int startPos)
	{
		return null;
	}

	[Token(Token = "0x6000AF8")]
	[Address(RVA = "0x60F49F0", Offset = "0x60F39F0", VA = "0x60F49F0")]
	internal static string StripSpaces(string value)
	{
		return null;
	}
}
