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
		[Address(RVA = "0x47F2450", Offset = "0x47F2450", VA = "0x47F2450")]
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
		[Address(RVA = "0x47F24B0", Offset = "0x47F24B0", VA = "0x47F24B0")]
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
		[Address(RVA = "0x47E70C0", Offset = "0x47E70C0", VA = "0x47E70C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002E9")]
	private bool IgnoreEntityReferences
	{
		[Token(Token = "0x6000A98")]
		[Address(RVA = "0x47E70D0", Offset = "0x47E70D0", VA = "0x47E70D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002EA")]
	private bool SaveInternalSubsetValue
	{
		[Token(Token = "0x6000A99")]
		[Address(RVA = "0x47E70E0", Offset = "0x47E70E0", VA = "0x47E70E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002EB")]
	private bool ParsingTopLevelMarkup
	{
		[Token(Token = "0x6000A9A")]
		[Address(RVA = "0x47E71B0", Offset = "0x47E71B0", VA = "0x47E71B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002EC")]
	private bool SupportNamespaces
	{
		[Token(Token = "0x6000A9B")]
		[Address(RVA = "0x47E71D0", Offset = "0x47E71D0", VA = "0x47E71D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002ED")]
	private bool Normalize
	{
		[Token(Token = "0x6000A9C")]
		[Address(RVA = "0x47E71E0", Offset = "0x47E71E0", VA = "0x47E71E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002EE")]
	private int LineNo
	{
		[Token(Token = "0x6000AEB")]
		[Address(RVA = "0x47EB270", Offset = "0x47EB270", VA = "0x47EB270")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002EF")]
	private int LinePos
	{
		[Token(Token = "0x6000AEC")]
		[Address(RVA = "0x47EB310", Offset = "0x47EB310", VA = "0x47EB310")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002F0")]
	private string BaseUriStr
	{
		[Token(Token = "0x6000AED")]
		[Address(RVA = "0x47E7410", Offset = "0x47E7410", VA = "0x47E7410")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A91")]
	[Address(RVA = "0x47E6380", Offset = "0x47E6380", VA = "0x47E6380")]
	private DtdParser()
	{
	}

	[Token(Token = "0x6000A92")]
	[Address(RVA = "0x47D8FA0", Offset = "0x47D8FA0", VA = "0x47D8FA0")]
	internal static IDtdParser Create()
	{
		return null;
	}

	[Token(Token = "0x6000A93")]
	[Address(RVA = "0x47E6460", Offset = "0x47E6460", VA = "0x47E6460")]
	private void Initialize(IDtdParserAdapter readerAdapter)
	{
	}

	[Token(Token = "0x6000A94")]
	[Address(RVA = "0x47E68B0", Offset = "0x47E68B0", VA = "0x47E68B0")]
	private void InitializeFreeFloatingDtd(string baseUri, string docTypeName, string publicId, string systemId, string internalSubset, IDtdParserAdapter adapter)
	{
	}

	[Token(Token = "0x6000A95")]
	[Address(RVA = "0x47E6DB0", Offset = "0x47E6DB0", VA = "0x47E6DB0", Slot = "4")]
	private IDtdInfo System_002EXml_002EIDtdParser_002EParseInternalDtd(IDtdParserAdapter adapter, bool saveInternalSubset)
	{
		return null;
	}

	[Token(Token = "0x6000A96")]
	[Address(RVA = "0x47E7090", Offset = "0x47E7090", VA = "0x47E7090", Slot = "5")]
	private IDtdInfo System_002EXml_002EIDtdParser_002EParseFreeFloatingDtd(string baseUri, string docTypeName, string publicId, string systemId, string internalSubset, IDtdParserAdapter adapter)
	{
		return null;
	}

	[Token(Token = "0x6000A9D")]
	[Address(RVA = "0x47E6DE0", Offset = "0x47E6DE0", VA = "0x47E6DE0")]
	private void Parse(bool saveInternalSubset)
	{
	}

	[Token(Token = "0x6000A9E")]
	[Address(RVA = "0x47E7240", Offset = "0x47E7240", VA = "0x47E7240")]
	private void ParseInDocumentDtd(bool saveInternalSubset)
	{
	}

	[Token(Token = "0x6000A9F")]
	[Address(RVA = "0x47E71F0", Offset = "0x47E71F0", VA = "0x47E71F0")]
	private void ParseFreeFloatingDtd()
	{
	}

	[Token(Token = "0x6000AA0")]
	[Address(RVA = "0x47E8D60", Offset = "0x47E8D60", VA = "0x47E8D60")]
	private void ParseInternalSubset()
	{
	}

	[Token(Token = "0x6000AA1")]
	[Address(RVA = "0x47E8D70", Offset = "0x47E8D70", VA = "0x47E8D70")]
	private void ParseExternalSubset()
	{
	}

	[Token(Token = "0x6000AA2")]
	[Address(RVA = "0x47E8F50", Offset = "0x47E8F50", VA = "0x47E8F50")]
	private void ParseSubset()
	{
	}

	[Token(Token = "0x6000AA3")]
	[Address(RVA = "0x47E9370", Offset = "0x47E9370", VA = "0x47E9370")]
	private void ParseAttlistDecl()
	{
	}

	[Token(Token = "0x6000AA4")]
	[Address(RVA = "0x47EB5C0", Offset = "0x47EB5C0", VA = "0x47EB5C0")]
	private void ParseAttlistType(SchemaAttDef attrDef, SchemaElementDecl elementDecl, bool ignoreErrors)
	{
	}

	[Token(Token = "0x6000AA5")]
	[Address(RVA = "0x47EBE10", Offset = "0x47EBE10", VA = "0x47EBE10")]
	private void ParseAttlistDefault(SchemaAttDef attrDef, bool ignoreErrors)
	{
	}

	[Token(Token = "0x6000AA6")]
	[Address(RVA = "0x47E9B30", Offset = "0x47E9B30", VA = "0x47E9B30")]
	private void ParseElementDecl()
	{
	}

	[Token(Token = "0x6000AA7")]
	[Address(RVA = "0x47ECA10", Offset = "0x47ECA10", VA = "0x47ECA10")]
	private void ParseElementOnlyContent(ParticleContentValidator pcv, int startParenEntityId)
	{
	}

	[Token(Token = "0x6000AA8")]
	[Address(RVA = "0x47ECDD0", Offset = "0x47ECDD0", VA = "0x47ECDD0")]
	private void ParseHowMany(ParticleContentValidator pcv)
	{
	}

	[Token(Token = "0x6000AA9")]
	[Address(RVA = "0x47EC650", Offset = "0x47EC650", VA = "0x47EC650")]
	private void ParseElementMixedContent(ParticleContentValidator pcv, int startParenEntityId)
	{
	}

	[Token(Token = "0x6000AAA")]
	[Address(RVA = "0x47E9F60", Offset = "0x47E9F60", VA = "0x47E9F60")]
	private void ParseEntityDecl()
	{
	}

	[Token(Token = "0x6000AAB")]
	[Address(RVA = "0x47EA390", Offset = "0x47EA390", VA = "0x47EA390")]
	private void ParseNotationDecl()
	{
	}

	[Token(Token = "0x6000AAC")]
	[Address(RVA = "0x47EC270", Offset = "0x47EC270", VA = "0x47EC270")]
	private void AddUndeclaredNotation(string notationName)
	{
	}

	[Token(Token = "0x6000AAD")]
	[Address(RVA = "0x47EA680", Offset = "0x47EA680", VA = "0x47EA680")]
	private void ParseComment()
	{
	}

	[Token(Token = "0x6000AAE")]
	[Address(RVA = "0x47EA9A0", Offset = "0x47EA9A0", VA = "0x47EA9A0")]
	private void ParsePI()
	{
	}

	[Token(Token = "0x6000AAF")]
	[Address(RVA = "0x47EABD0", Offset = "0x47EABD0", VA = "0x47EABD0")]
	private void ParseCondSection()
	{
	}

	[Token(Token = "0x6000AB0")]
	[Address(RVA = "0x47E8540", Offset = "0x47E8540", VA = "0x47E8540")]
	private void ParseExternalId(Token idTokenType, Token declType, out string publicId, out string systemId)
	{
	}

	[Token(Token = "0x6000AB1")]
	[Address(RVA = "0x47E7810", Offset = "0x47E7810", VA = "0x47E7810")]
	private Token GetToken(bool needWhiteSpace)
	{
		return default(Token);
	}

	[Token(Token = "0x6000AB2")]
	[Address(RVA = "0x47ED7A0", Offset = "0x47ED7A0", VA = "0x47ED7A0")]
	private Token ScanSubsetContent()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AB3")]
	[Address(RVA = "0x47ED740", Offset = "0x47ED740", VA = "0x47ED740")]
	private Token ScanNameExpected()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AB4")]
	[Address(RVA = "0x47ED760", Offset = "0x47ED760", VA = "0x47ED760")]
	private Token ScanQNameExpected()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AB5")]
	[Address(RVA = "0x47ED780", Offset = "0x47ED780", VA = "0x47ED780")]
	private Token ScanNmtokenExpected()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AB6")]
	[Address(RVA = "0x47EDEF0", Offset = "0x47EDEF0", VA = "0x47EDEF0")]
	private Token ScanDoctype1()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AB7")]
	[Address(RVA = "0x47EE050", Offset = "0x47EE050", VA = "0x47EE050")]
	private Token ScanDoctype2()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AB8")]
	[Address(RVA = "0x47F03A0", Offset = "0x47F03A0", VA = "0x47F03A0")]
	private Token ScanClosingTag()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AB9")]
	[Address(RVA = "0x47EE100", Offset = "0x47EE100", VA = "0x47EE100")]
	private Token ScanElement1()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ABA")]
	[Address(RVA = "0x47EE310", Offset = "0x47EE310", VA = "0x47EE310")]
	private Token ScanElement2()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ABB")]
	[Address(RVA = "0x47EE4C0", Offset = "0x47EE4C0", VA = "0x47EE4C0")]
	private Token ScanElement3()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ABC")]
	[Address(RVA = "0x47EE530", Offset = "0x47EE530", VA = "0x47EE530")]
	private Token ScanElement4()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ABD")]
	[Address(RVA = "0x47EE600", Offset = "0x47EE600", VA = "0x47EE600")]
	private Token ScanElement5()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ABE")]
	[Address(RVA = "0x47EE6F0", Offset = "0x47EE6F0", VA = "0x47EE6F0")]
	private Token ScanElement6()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ABF")]
	[Address(RVA = "0x47EE7A0", Offset = "0x47EE7A0", VA = "0x47EE7A0")]
	private Token ScanElement7()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AC0")]
	[Address(RVA = "0x47EE7F0", Offset = "0x47EE7F0", VA = "0x47EE7F0")]
	private Token ScanAttlist1()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AC1")]
	[Address(RVA = "0x47EE8A0", Offset = "0x47EE8A0", VA = "0x47EE8A0")]
	private Token ScanAttlist2()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AC2")]
	[Address(RVA = "0x47EEF80", Offset = "0x47EEF80", VA = "0x47EEF80")]
	private Token ScanAttlist3()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AC3")]
	[Address(RVA = "0x47EF000", Offset = "0x47EF000", VA = "0x47EF000")]
	private Token ScanAttlist4()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AC4")]
	[Address(RVA = "0x47EF0B0", Offset = "0x47EF0B0", VA = "0x47EF0B0")]
	private Token ScanAttlist5()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AC5")]
	[Address(RVA = "0x47EF160", Offset = "0x47EF160", VA = "0x47EF160")]
	private Token ScanAttlist6()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AC6")]
	[Address(RVA = "0x47EF4F0", Offset = "0x47EF4F0", VA = "0x47EF4F0")]
	private Token ScanAttlist7()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AC7")]
	[Address(RVA = "0x47F0990", Offset = "0x47F0990", VA = "0x47F0990")]
	private Token ScanLiteral(LiteralType literalType)
	{
		return default(Token);
	}

	[Token(Token = "0x6000AC8")]
	[Address(RVA = "0x47F1880", Offset = "0x47F1880", VA = "0x47F1880")]
	private XmlQualifiedName ScanEntityName()
	{
		return null;
	}

	[Token(Token = "0x6000AC9")]
	[Address(RVA = "0x47EF590", Offset = "0x47EF590", VA = "0x47EF590")]
	private Token ScanNotation1()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ACA")]
	[Address(RVA = "0x47EF6D0", Offset = "0x47EF6D0", VA = "0x47EF6D0")]
	private Token ScanSystemId()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ACB")]
	[Address(RVA = "0x47EF840", Offset = "0x47EF840", VA = "0x47EF840")]
	private Token ScanEntity1()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ACC")]
	[Address(RVA = "0x47EF8A0", Offset = "0x47EF8A0", VA = "0x47EF8A0")]
	private Token ScanEntity2()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ACD")]
	[Address(RVA = "0x47EFA00", Offset = "0x47EFA00", VA = "0x47EFA00")]
	private Token ScanEntity3()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ACE")]
	[Address(RVA = "0x47EF760", Offset = "0x47EF760", VA = "0x47EF760")]
	private Token ScanPublicId1()
	{
		return default(Token);
	}

	[Token(Token = "0x6000ACF")]
	[Address(RVA = "0x47EF7F0", Offset = "0x47EF7F0", VA = "0x47EF7F0")]
	private Token ScanPublicId2()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AD0")]
	[Address(RVA = "0x47EFAE0", Offset = "0x47EFAE0", VA = "0x47EFAE0")]
	private Token ScanCondSection1()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AD1")]
	[Address(RVA = "0x47EFD90", Offset = "0x47EFD90", VA = "0x47EFD90")]
	private Token ScanCondSection2()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AD2")]
	[Address(RVA = "0x47EFE00", Offset = "0x47EFE00", VA = "0x47EFE00")]
	private Token ScanCondSection3()
	{
		return default(Token);
	}

	[Token(Token = "0x6000AD3")]
	[Address(RVA = "0x47F06A0", Offset = "0x47F06A0", VA = "0x47F06A0")]
	private void ScanName()
	{
	}

	[Token(Token = "0x6000AD4")]
	[Address(RVA = "0x47F06B0", Offset = "0x47F06B0", VA = "0x47F06B0")]
	private void ScanQName()
	{
	}

	[Token(Token = "0x6000AD5")]
	[Address(RVA = "0x47F1C10", Offset = "0x47F1C10", VA = "0x47F1C10")]
	private void ScanQName(bool isQName)
	{
	}

	[Token(Token = "0x6000AD6")]
	[Address(RVA = "0x47F1F00", Offset = "0x47F1F00", VA = "0x47F1F00")]
	private bool ReadDataInName()
	{
		return default(bool);
	}

	[Token(Token = "0x6000AD7")]
	[Address(RVA = "0x47F06C0", Offset = "0x47F06C0", VA = "0x47F06C0")]
	private void ScanNmtoken()
	{
	}

	[Token(Token = "0x6000AD8")]
	[Address(RVA = "0x47F0830", Offset = "0x47F0830", VA = "0x47F0830")]
	private bool EatPublicKeyword()
	{
		return default(bool);
	}

	[Token(Token = "0x6000AD9")]
	[Address(RVA = "0x47F08E0", Offset = "0x47F08E0", VA = "0x47F08E0")]
	private bool EatSystemKeyword()
	{
		return default(bool);
	}

	[Token(Token = "0x6000ADA")]
	[Address(RVA = "0x47E83F0", Offset = "0x47E83F0", VA = "0x47E83F0")]
	private XmlQualifiedName GetNameQualified(bool canHavePrefix)
	{
		return null;
	}

	[Token(Token = "0x6000ADB")]
	[Address(RVA = "0x47EC250", Offset = "0x47EC250", VA = "0x47EC250")]
	private string GetNameString()
	{
		return null;
	}

	[Token(Token = "0x6000ADC")]
	[Address(RVA = "0x47EC560", Offset = "0x47EC560", VA = "0x47EC560")]
	private string GetNmtokenString()
	{
		return null;
	}

	[Token(Token = "0x6000ADD")]
	[Address(RVA = "0x47EC5F0", Offset = "0x47EC5F0", VA = "0x47EC5F0")]
	private string GetValue()
	{
		return null;
	}

	[Token(Token = "0x6000ADE")]
	[Address(RVA = "0x47EC580", Offset = "0x47EC580", VA = "0x47EC580")]
	private string GetValueWithStrippedSpaces()
	{
		return null;
	}

	[Token(Token = "0x6000ADF")]
	[Address(RVA = "0x47F0420", Offset = "0x47F0420", VA = "0x47F0420")]
	private int ReadData()
	{
		return default(int);
	}

	[Token(Token = "0x6000AE0")]
	[Address(RVA = "0x47E7660", Offset = "0x47E7660", VA = "0x47E7660")]
	private void LoadParsingBuffer()
	{
	}

	[Token(Token = "0x6000AE1")]
	[Address(RVA = "0x47E8D50", Offset = "0x47E8D50", VA = "0x47E8D50")]
	private void SaveParsingBuffer()
	{
	}

	[Token(Token = "0x6000AE2")]
	[Address(RVA = "0x47EB040", Offset = "0x47EB040", VA = "0x47EB040")]
	private void SaveParsingBuffer(int internalSubsetValueEndPos)
	{
	}

	[Token(Token = "0x6000AE3")]
	[Address(RVA = "0x47ED640", Offset = "0x47ED640", VA = "0x47ED640")]
	private bool HandleEntityReference(bool paramEntity, bool inLiteral, bool inAttribute)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AE4")]
	[Address(RVA = "0x47F2150", Offset = "0x47F2150", VA = "0x47F2150")]
	private bool HandleEntityReference(XmlQualifiedName entityName, bool paramEntity, bool inLiteral, bool inAttribute)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AE5")]
	[Address(RVA = "0x47F04E0", Offset = "0x47F04E0", VA = "0x47F04E0")]
	private bool HandleEntityEnd(bool inLiteral)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AE6")]
	[Address(RVA = "0x47F19E0", Offset = "0x47F19E0", VA = "0x47F19E0")]
	private SchemaEntity VerifyEntityReference(XmlQualifiedName entityName, bool paramEntity, bool mustBeDeclared, bool inAttribute)
	{
		return null;
	}

	[Token(Token = "0x6000AE7")]
	[Address(RVA = "0x47EAE40", Offset = "0x47EAE40", VA = "0x47EAE40")]
	private void SendValidationEvent(int pos, XmlSeverityType severity, string code, string arg)
	{
	}

	[Token(Token = "0x6000AE8")]
	[Address(RVA = "0x47EC060", Offset = "0x47EC060", VA = "0x47EC060")]
	private void SendValidationEvent(XmlSeverityType severity, string code, string arg)
	{
	}

	[Token(Token = "0x6000AE9")]
	[Address(RVA = "0x47E7520", Offset = "0x47E7520", VA = "0x47E7520")]
	private void SendValidationEvent(XmlSeverityType severity, XmlSchemaException e)
	{
	}

	[Token(Token = "0x6000AEA")]
	[Address(RVA = "0x47EC050", Offset = "0x47EC050", VA = "0x47EC050")]
	private bool IsAttributeValueType(Token token)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AEE")]
	[Address(RVA = "0x47E83A0", Offset = "0x47E83A0", VA = "0x47E83A0")]
	private void OnUnexpectedError()
	{
	}

	[Token(Token = "0x6000AEF")]
	[Address(RVA = "0x47EABB0", Offset = "0x47EABB0", VA = "0x47EABB0")]
	private void Throw(int curPos, string res)
	{
	}

	[Token(Token = "0x6000AF0")]
	[Address(RVA = "0x47ECE30", Offset = "0x47ECE30", VA = "0x47ECE30")]
	private void Throw(int curPos, string res, string arg)
	{
	}

	[Token(Token = "0x6000AF1")]
	[Address(RVA = "0x47ED2B0", Offset = "0x47ED2B0", VA = "0x47ED2B0")]
	private void Throw(int curPos, string res, string[] args)
	{
	}

	[Token(Token = "0x6000AF2")]
	[Address(RVA = "0x47EB3D0", Offset = "0x47EB3D0", VA = "0x47EB3D0")]
	private void Throw(string res, string arg, int lineNo, int linePos)
	{
	}

	[Token(Token = "0x6000AF3")]
	[Address(RVA = "0x47E6D50", Offset = "0x47E6D50", VA = "0x47E6D50")]
	private void ThrowInvalidChar(int pos, string data, int invCharPos)
	{
	}

	[Token(Token = "0x6000AF4")]
	[Address(RVA = "0x47ED5E0", Offset = "0x47ED5E0", VA = "0x47ED5E0")]
	private void ThrowInvalidChar(char[] data, int length, int invCharPos)
	{
	}

	[Token(Token = "0x6000AF5")]
	[Address(RVA = "0x47EB260", Offset = "0x47EB260", VA = "0x47EB260")]
	private void ThrowUnexpectedToken(int pos, string expectedToken)
	{
	}

	[Token(Token = "0x6000AF6")]
	[Address(RVA = "0x47ED160", Offset = "0x47ED160", VA = "0x47ED160")]
	private void ThrowUnexpectedToken(int pos, string expectedToken1, string expectedToken2)
	{
	}

	[Token(Token = "0x6000AF7")]
	[Address(RVA = "0x47ED680", Offset = "0x47ED680", VA = "0x47ED680")]
	private string ParseUnexpectedToken(int startPos)
	{
		return null;
	}

	[Token(Token = "0x6000AF8")]
	[Address(RVA = "0x47F1F30", Offset = "0x47F1F30", VA = "0x47F1F30")]
	internal static string StripSpaces(string value)
	{
		return null;
	}
}
