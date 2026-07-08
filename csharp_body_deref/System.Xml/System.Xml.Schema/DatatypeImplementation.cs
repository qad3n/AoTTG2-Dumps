using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200018C")]
internal abstract class DatatypeImplementation : XmlSchemaDatatype
{
	[Token(Token = "0x200018D")]
	private class SchemaDatatypeMap : IComparable
	{
		[Token(Token = "0x400082B")]
		[FieldOffset(Offset = "0x10")]
		private string name;

		[Token(Token = "0x400082C")]
		[FieldOffset(Offset = "0x18")]
		private DatatypeImplementation type;

		[Token(Token = "0x400082D")]
		[FieldOffset(Offset = "0x20")]
		private int parentIndex;

		[Token(Token = "0x17000443")]
		public string Name
		{
			[Token(Token = "0x600107D")]
			[Address(RVA = "0x451E150", Offset = "0x451E150", VA = "0x451E150")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000444")]
		public int ParentIndex
		{
			[Token(Token = "0x600107E")]
			[Address(RVA = "0x451E160", Offset = "0x451E160", VA = "0x451E160")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x600107A")]
		[Address(RVA = "0x451B3A0", Offset = "0x451B3A0", VA = "0x451B3A0")]
		internal SchemaDatatypeMap(string name, DatatypeImplementation type)
		{
		}

		[Token(Token = "0x600107B")]
		[Address(RVA = "0x451B3E0", Offset = "0x451B3E0", VA = "0x451B3E0")]
		internal SchemaDatatypeMap(string name, DatatypeImplementation type, int parentIndex)
		{
		}

		[Token(Token = "0x600107C")]
		[Address(RVA = "0x451E130", Offset = "0x451E130", VA = "0x451E130")]
		public static explicit operator DatatypeImplementation(SchemaDatatypeMap sdm)
		{
			return null;
		}

		[Token(Token = "0x600107F")]
		[Address(RVA = "0x451E170", Offset = "0x451E170", VA = "0x451E170", Slot = "4")]
		public int CompareTo(object obj)
		{
			return default(int);
		}
	}

	[Token(Token = "0x40007D0")]
	[FieldOffset(Offset = "0x10")]
	private XmlSchemaDatatypeVariety variety;

	[Token(Token = "0x40007D1")]
	[FieldOffset(Offset = "0x18")]
	private RestrictionFacets restriction;

	[Token(Token = "0x40007D2")]
	[FieldOffset(Offset = "0x20")]
	private DatatypeImplementation baseType;

	[Token(Token = "0x40007D3")]
	[FieldOffset(Offset = "0x28")]
	private XmlValueConverter valueConverter;

	[Token(Token = "0x40007D4")]
	[FieldOffset(Offset = "0x30")]
	private XmlSchemaType parentSchemaType;

	[Token(Token = "0x40007D5")]
	[FieldOffset(Offset = "0x0")]
	private static Hashtable builtinTypes;

	[Token(Token = "0x40007D6")]
	[FieldOffset(Offset = "0x8")]
	private static XmlSchemaSimpleType[] enumToTypeCode;

	[Token(Token = "0x40007D7")]
	[FieldOffset(Offset = "0x10")]
	private static XmlSchemaSimpleType anySimpleType;

	[Token(Token = "0x40007D8")]
	[FieldOffset(Offset = "0x18")]
	private static XmlSchemaSimpleType anyAtomicType;

	[Token(Token = "0x40007D9")]
	[FieldOffset(Offset = "0x20")]
	private static XmlSchemaSimpleType untypedAtomicType;

	[Token(Token = "0x40007DA")]
	[FieldOffset(Offset = "0x28")]
	private static XmlSchemaSimpleType yearMonthDurationType;

	[Token(Token = "0x40007DB")]
	[FieldOffset(Offset = "0x30")]
	private static XmlSchemaSimpleType dayTimeDurationType;

	[Token(Token = "0x40007DC")]
	[FieldOffset(Offset = "0x38")]
	private static XmlSchemaSimpleType normalizedStringTypeV1Compat;

	[Token(Token = "0x40007DD")]
	[FieldOffset(Offset = "0x40")]
	private static XmlSchemaSimpleType tokenTypeV1Compat;

	[Token(Token = "0x40007DE")]
	[FieldOffset(Offset = "0x48")]
	internal static XmlQualifiedName QnAnySimpleType;

	[Token(Token = "0x40007DF")]
	[FieldOffset(Offset = "0x50")]
	internal static XmlQualifiedName QnAnyType;

	[Token(Token = "0x40007E0")]
	[FieldOffset(Offset = "0x58")]
	internal static FacetsChecker stringFacetsChecker;

	[Token(Token = "0x40007E1")]
	[FieldOffset(Offset = "0x60")]
	internal static FacetsChecker miscFacetsChecker;

	[Token(Token = "0x40007E2")]
	[FieldOffset(Offset = "0x68")]
	internal static FacetsChecker numeric2FacetsChecker;

	[Token(Token = "0x40007E3")]
	[FieldOffset(Offset = "0x70")]
	internal static FacetsChecker binaryFacetsChecker;

	[Token(Token = "0x40007E4")]
	[FieldOffset(Offset = "0x78")]
	internal static FacetsChecker dateTimeFacetsChecker;

	[Token(Token = "0x40007E5")]
	[FieldOffset(Offset = "0x80")]
	internal static FacetsChecker durationFacetsChecker;

	[Token(Token = "0x40007E6")]
	[FieldOffset(Offset = "0x88")]
	internal static FacetsChecker listFacetsChecker;

	[Token(Token = "0x40007E7")]
	[FieldOffset(Offset = "0x90")]
	internal static FacetsChecker qnameFacetsChecker;

	[Token(Token = "0x40007E8")]
	[FieldOffset(Offset = "0x98")]
	internal static FacetsChecker unionFacetsChecker;

	[Token(Token = "0x40007E9")]
	[FieldOffset(Offset = "0xA0")]
	private static readonly DatatypeImplementation c_anySimpleType;

	[Token(Token = "0x40007EA")]
	[FieldOffset(Offset = "0xA8")]
	private static readonly DatatypeImplementation c_anyURI;

	[Token(Token = "0x40007EB")]
	[FieldOffset(Offset = "0xB0")]
	private static readonly DatatypeImplementation c_base64Binary;

	[Token(Token = "0x40007EC")]
	[FieldOffset(Offset = "0xB8")]
	private static readonly DatatypeImplementation c_boolean;

	[Token(Token = "0x40007ED")]
	[FieldOffset(Offset = "0xC0")]
	private static readonly DatatypeImplementation c_byte;

	[Token(Token = "0x40007EE")]
	[FieldOffset(Offset = "0xC8")]
	private static readonly DatatypeImplementation c_char;

	[Token(Token = "0x40007EF")]
	[FieldOffset(Offset = "0xD0")]
	private static readonly DatatypeImplementation c_date;

	[Token(Token = "0x40007F0")]
	[FieldOffset(Offset = "0xD8")]
	private static readonly DatatypeImplementation c_dateTime;

	[Token(Token = "0x40007F1")]
	[FieldOffset(Offset = "0xE0")]
	private static readonly DatatypeImplementation c_dateTimeNoTz;

	[Token(Token = "0x40007F2")]
	[FieldOffset(Offset = "0xE8")]
	private static readonly DatatypeImplementation c_dateTimeTz;

	[Token(Token = "0x40007F3")]
	[FieldOffset(Offset = "0xF0")]
	private static readonly DatatypeImplementation c_day;

	[Token(Token = "0x40007F4")]
	[FieldOffset(Offset = "0xF8")]
	private static readonly DatatypeImplementation c_decimal;

	[Token(Token = "0x40007F5")]
	[FieldOffset(Offset = "0x100")]
	private static readonly DatatypeImplementation c_double;

	[Token(Token = "0x40007F6")]
	[FieldOffset(Offset = "0x108")]
	private static readonly DatatypeImplementation c_doubleXdr;

	[Token(Token = "0x40007F7")]
	[FieldOffset(Offset = "0x110")]
	private static readonly DatatypeImplementation c_duration;

	[Token(Token = "0x40007F8")]
	[FieldOffset(Offset = "0x118")]
	private static readonly DatatypeImplementation c_ENTITY;

	[Token(Token = "0x40007F9")]
	[FieldOffset(Offset = "0x120")]
	private static readonly DatatypeImplementation c_ENTITIES;

	[Token(Token = "0x40007FA")]
	[FieldOffset(Offset = "0x128")]
	private static readonly DatatypeImplementation c_ENUMERATION;

	[Token(Token = "0x40007FB")]
	[FieldOffset(Offset = "0x130")]
	private static readonly DatatypeImplementation c_fixed;

	[Token(Token = "0x40007FC")]
	[FieldOffset(Offset = "0x138")]
	private static readonly DatatypeImplementation c_float;

	[Token(Token = "0x40007FD")]
	[FieldOffset(Offset = "0x140")]
	private static readonly DatatypeImplementation c_floatXdr;

	[Token(Token = "0x40007FE")]
	[FieldOffset(Offset = "0x148")]
	private static readonly DatatypeImplementation c_hexBinary;

	[Token(Token = "0x40007FF")]
	[FieldOffset(Offset = "0x150")]
	private static readonly DatatypeImplementation c_ID;

	[Token(Token = "0x4000800")]
	[FieldOffset(Offset = "0x158")]
	private static readonly DatatypeImplementation c_IDREF;

	[Token(Token = "0x4000801")]
	[FieldOffset(Offset = "0x160")]
	private static readonly DatatypeImplementation c_IDREFS;

	[Token(Token = "0x4000802")]
	[FieldOffset(Offset = "0x168")]
	private static readonly DatatypeImplementation c_int;

	[Token(Token = "0x4000803")]
	[FieldOffset(Offset = "0x170")]
	private static readonly DatatypeImplementation c_integer;

	[Token(Token = "0x4000804")]
	[FieldOffset(Offset = "0x178")]
	private static readonly DatatypeImplementation c_language;

	[Token(Token = "0x4000805")]
	[FieldOffset(Offset = "0x180")]
	private static readonly DatatypeImplementation c_long;

	[Token(Token = "0x4000806")]
	[FieldOffset(Offset = "0x188")]
	private static readonly DatatypeImplementation c_month;

	[Token(Token = "0x4000807")]
	[FieldOffset(Offset = "0x190")]
	private static readonly DatatypeImplementation c_monthDay;

	[Token(Token = "0x4000808")]
	[FieldOffset(Offset = "0x198")]
	private static readonly DatatypeImplementation c_Name;

	[Token(Token = "0x4000809")]
	[FieldOffset(Offset = "0x1A0")]
	private static readonly DatatypeImplementation c_NCName;

	[Token(Token = "0x400080A")]
	[FieldOffset(Offset = "0x1A8")]
	private static readonly DatatypeImplementation c_negativeInteger;

	[Token(Token = "0x400080B")]
	[FieldOffset(Offset = "0x1B0")]
	private static readonly DatatypeImplementation c_NMTOKEN;

	[Token(Token = "0x400080C")]
	[FieldOffset(Offset = "0x1B8")]
	private static readonly DatatypeImplementation c_NMTOKENS;

	[Token(Token = "0x400080D")]
	[FieldOffset(Offset = "0x1C0")]
	private static readonly DatatypeImplementation c_nonNegativeInteger;

	[Token(Token = "0x400080E")]
	[FieldOffset(Offset = "0x1C8")]
	private static readonly DatatypeImplementation c_nonPositiveInteger;

	[Token(Token = "0x400080F")]
	[FieldOffset(Offset = "0x1D0")]
	private static readonly DatatypeImplementation c_normalizedString;

	[Token(Token = "0x4000810")]
	[FieldOffset(Offset = "0x1D8")]
	private static readonly DatatypeImplementation c_NOTATION;

	[Token(Token = "0x4000811")]
	[FieldOffset(Offset = "0x1E0")]
	private static readonly DatatypeImplementation c_positiveInteger;

	[Token(Token = "0x4000812")]
	[FieldOffset(Offset = "0x1E8")]
	private static readonly DatatypeImplementation c_QName;

	[Token(Token = "0x4000813")]
	[FieldOffset(Offset = "0x1F0")]
	private static readonly DatatypeImplementation c_QNameXdr;

	[Token(Token = "0x4000814")]
	[FieldOffset(Offset = "0x1F8")]
	private static readonly DatatypeImplementation c_short;

	[Token(Token = "0x4000815")]
	[FieldOffset(Offset = "0x200")]
	private static readonly DatatypeImplementation c_string;

	[Token(Token = "0x4000816")]
	[FieldOffset(Offset = "0x208")]
	private static readonly DatatypeImplementation c_time;

	[Token(Token = "0x4000817")]
	[FieldOffset(Offset = "0x210")]
	private static readonly DatatypeImplementation c_timeNoTz;

	[Token(Token = "0x4000818")]
	[FieldOffset(Offset = "0x218")]
	private static readonly DatatypeImplementation c_timeTz;

	[Token(Token = "0x4000819")]
	[FieldOffset(Offset = "0x220")]
	private static readonly DatatypeImplementation c_token;

	[Token(Token = "0x400081A")]
	[FieldOffset(Offset = "0x228")]
	private static readonly DatatypeImplementation c_unsignedByte;

	[Token(Token = "0x400081B")]
	[FieldOffset(Offset = "0x230")]
	private static readonly DatatypeImplementation c_unsignedInt;

	[Token(Token = "0x400081C")]
	[FieldOffset(Offset = "0x238")]
	private static readonly DatatypeImplementation c_unsignedLong;

	[Token(Token = "0x400081D")]
	[FieldOffset(Offset = "0x240")]
	private static readonly DatatypeImplementation c_unsignedShort;

	[Token(Token = "0x400081E")]
	[FieldOffset(Offset = "0x248")]
	private static readonly DatatypeImplementation c_uuid;

	[Token(Token = "0x400081F")]
	[FieldOffset(Offset = "0x250")]
	private static readonly DatatypeImplementation c_year;

	[Token(Token = "0x4000820")]
	[FieldOffset(Offset = "0x258")]
	private static readonly DatatypeImplementation c_yearMonth;

	[Token(Token = "0x4000821")]
	[FieldOffset(Offset = "0x260")]
	internal static readonly DatatypeImplementation c_normalizedStringV1Compat;

	[Token(Token = "0x4000822")]
	[FieldOffset(Offset = "0x268")]
	internal static readonly DatatypeImplementation c_tokenV1Compat;

	[Token(Token = "0x4000823")]
	[FieldOffset(Offset = "0x270")]
	private static readonly DatatypeImplementation c_anyAtomicType;

	[Token(Token = "0x4000824")]
	[FieldOffset(Offset = "0x278")]
	private static readonly DatatypeImplementation c_dayTimeDuration;

	[Token(Token = "0x4000825")]
	[FieldOffset(Offset = "0x280")]
	private static readonly DatatypeImplementation c_untypedAtomicType;

	[Token(Token = "0x4000826")]
	[FieldOffset(Offset = "0x288")]
	private static readonly DatatypeImplementation c_yearMonthDuration;

	[Token(Token = "0x4000827")]
	[FieldOffset(Offset = "0x290")]
	private static readonly DatatypeImplementation[] c_tokenizedTypes;

	[Token(Token = "0x4000828")]
	[FieldOffset(Offset = "0x298")]
	private static readonly DatatypeImplementation[] c_tokenizedTypesXsd;

	[Token(Token = "0x4000829")]
	[FieldOffset(Offset = "0x2A0")]
	private static readonly SchemaDatatypeMap[] c_XdrTypes;

	[Token(Token = "0x400082A")]
	[FieldOffset(Offset = "0x2A8")]
	private static readonly SchemaDatatypeMap[] c_XsdTypes;

	[Token(Token = "0x17000434")]
	internal static XmlSchemaSimpleType AnySimpleType
	{
		[Token(Token = "0x600104F")]
		[Address(RVA = "0x451BF30", Offset = "0x451BF30", VA = "0x451BF30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000435")]
	internal static XmlSchemaSimpleType UntypedAtomicType
	{
		[Token(Token = "0x6001050")]
		[Address(RVA = "0x451BFA0", Offset = "0x451BFA0", VA = "0x451BFA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000436")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x6001067")]
		[Address(RVA = "0x451D690", Offset = "0x451D690", VA = "0x451D690", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000437")]
	internal override XmlValueConverter ValueConverter
	{
		[Token(Token = "0x6001068")]
		[Address(RVA = "0x451D700", Offset = "0x451D700", VA = "0x451D700", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000438")]
	public override XmlTokenizedType TokenizedType
	{
		[Token(Token = "0x6001069")]
		[Address(RVA = "0x451D750", Offset = "0x451D750", VA = "0x451D750", Slot = "5")]
		get
		{
			return default(XmlTokenizedType);
		}
	}

	[Token(Token = "0x17000439")]
	public override Type ValueType
	{
		[Token(Token = "0x600106A")]
		[Address(RVA = "0x451D760", Offset = "0x451D760", VA = "0x451D760", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700043A")]
	public override XmlSchemaDatatypeVariety Variety
	{
		[Token(Token = "0x600106B")]
		[Address(RVA = "0x451D7A0", Offset = "0x451D7A0", VA = "0x451D7A0", Slot = "7")]
		get
		{
			return default(XmlSchemaDatatypeVariety);
		}
	}

	[Token(Token = "0x1700043B")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x600106C")]
		[Address(RVA = "0x451D7B0", Offset = "0x451D7B0", VA = "0x451D7B0", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x1700043C")]
	internal override RestrictionFacets Restriction
	{
		[Token(Token = "0x600106D")]
		[Address(RVA = "0x451D7C0", Offset = "0x451D7C0", VA = "0x451D7C0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700043D")]
	internal override bool HasLexicalFacets
	{
		[Token(Token = "0x600106E")]
		[Address(RVA = "0x451D7D0", Offset = "0x451D7D0", VA = "0x451D7D0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700043E")]
	internal override bool HasValueFacets
	{
		[Token(Token = "0x600106F")]
		[Address(RVA = "0x451D7F0", Offset = "0x451D7F0", VA = "0x451D7F0", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700043F")]
	protected DatatypeImplementation Base
	{
		[Token(Token = "0x6001070")]
		[Address(RVA = "0x451D810", Offset = "0x451D810", VA = "0x451D810")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000440")]
	internal abstract Type ListValueType
	{
		[Token(Token = "0x6001071")]
		get;
	}

	[Token(Token = "0x17000441")]
	internal abstract RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x6001072")]
		get;
	}

	[Token(Token = "0x17000442")]
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet
	{
		[Token(Token = "0x6001073")]
		[Address(RVA = "0x451D820", Offset = "0x451D820", VA = "0x451D820", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x600104E")]
	[Address(RVA = "0x4511A30", Offset = "0x4511A30", VA = "0x4511A30")]
	static DatatypeImplementation()
	{
	}

	[Token(Token = "0x6001051")]
	[Address(RVA = "0x451C010", Offset = "0x451C010", VA = "0x451C010")]
	internal new static DatatypeImplementation FromXmlTokenizedType(XmlTokenizedType token)
	{
		return null;
	}

	[Token(Token = "0x6001052")]
	[Address(RVA = "0x451C0B0", Offset = "0x451C0B0", VA = "0x451C0B0")]
	internal new static DatatypeImplementation FromXmlTokenizedTypeXsd(XmlTokenizedType token)
	{
		return null;
	}

	[Token(Token = "0x6001053")]
	[Address(RVA = "0x451C150", Offset = "0x451C150", VA = "0x451C150")]
	internal new static DatatypeImplementation FromXdrName(string name)
	{
		return null;
	}

	[Token(Token = "0x6001054")]
	[Address(RVA = "0x451C210", Offset = "0x451C210", VA = "0x451C210")]
	private static DatatypeImplementation FromTypeName(string name)
	{
		return null;
	}

	[Token(Token = "0x6001055")]
	[Address(RVA = "0x451C2D0", Offset = "0x451C2D0", VA = "0x451C2D0")]
	internal static XmlSchemaSimpleType StartBuiltinType(XmlQualifiedName qname, XmlSchemaDatatype dataType)
	{
		return null;
	}

	[Token(Token = "0x6001056")]
	[Address(RVA = "0x451C3A0", Offset = "0x451C3A0", VA = "0x451C3A0")]
	internal static void FinishBuiltinType(XmlSchemaSimpleType derivedType, XmlSchemaSimpleType baseType)
	{
	}

	[Token(Token = "0x6001057")]
	[Address(RVA = "0x451B430", Offset = "0x451B430", VA = "0x451B430")]
	internal static void CreateBuiltinTypes()
	{
	}

	[Token(Token = "0x6001058")]
	[Address(RVA = "0x451C630", Offset = "0x451C630", VA = "0x451C630")]
	internal static XmlSchemaSimpleType GetSimpleTypeFromTypeCode(XmlTypeCode typeCode)
	{
		return null;
	}

	[Token(Token = "0x6001059")]
	[Address(RVA = "0x451C6C0", Offset = "0x451C6C0", VA = "0x451C6C0")]
	internal static XmlSchemaSimpleType GetSimpleTypeFromXsdType(XmlQualifiedName qname)
	{
		return null;
	}

	[Token(Token = "0x600105A")]
	[Address(RVA = "0x451C7B0", Offset = "0x451C7B0", VA = "0x451C7B0")]
	internal static XmlSchemaSimpleType GetNormalizedStringTypeV1Compat()
	{
		return null;
	}

	[Token(Token = "0x600105B")]
	[Address(RVA = "0x451CA20", Offset = "0x451CA20", VA = "0x451CA20")]
	internal static XmlSchemaSimpleType GetTokenTypeV1Compat()
	{
		return null;
	}

	[Token(Token = "0x600105C")]
	[Address(RVA = "0x451CC90", Offset = "0x451CC90", VA = "0x451CC90")]
	internal static XmlSchemaSimpleType[] GetBuiltInTypes()
	{
		return null;
	}

	[Token(Token = "0x600105D")]
	[Address(RVA = "0x451CD00", Offset = "0x451CD00", VA = "0x451CD00")]
	internal static XmlTypeCode GetPrimitiveTypeCode(XmlTypeCode typeCode)
	{
		return default(XmlTypeCode);
	}

	[Token(Token = "0x600105E")]
	[Address(RVA = "0x451CE90", Offset = "0x451CE90", VA = "0x451CE90", Slot = "20")]
	internal override XmlSchemaDatatype DeriveByRestriction(XmlSchemaObjectCollection facets, XmlNameTable nameTable, XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x600105F")]
	[Address(RVA = "0x451CFA0", Offset = "0x451CFA0", VA = "0x451CFA0", Slot = "21")]
	internal override XmlSchemaDatatype DeriveByList(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x6001060")]
	[Address(RVA = "0x4519030", Offset = "0x4519030", VA = "0x4519030")]
	internal XmlSchemaDatatype DeriveByList(int minSize, XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x6001061")]
	[Address(RVA = "0x451D100", Offset = "0x451D100", VA = "0x451D100")]
	internal new static DatatypeImplementation DeriveByUnion(XmlSchemaSimpleType[] types, XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x6001062")]
	[Address(RVA = "0x451D290", Offset = "0x451D290", VA = "0x451D290", Slot = "22")]
	internal override void VerifySchemaValid(XmlSchemaObjectTable notations, XmlSchemaObject caller)
	{
	}

	[Token(Token = "0x6001063")]
	[Address(RVA = "0x451D2A0", Offset = "0x451D2A0", VA = "0x451D2A0", Slot = "9")]
	public override bool IsDerivedFrom(XmlSchemaDatatype datatype)
	{
		return default(bool);
	}

	[Token(Token = "0x6001064")]
	[Address(RVA = "0x451D580", Offset = "0x451D580", VA = "0x451D580", Slot = "23")]
	internal override bool IsEqual(object o1, object o2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001065")]
	[Address(RVA = "0x451D5A0", Offset = "0x451D5A0", VA = "0x451D5A0", Slot = "24")]
	internal override bool IsComparable(XmlSchemaDatatype dtype)
	{
		return default(bool);
	}

	[Token(Token = "0x6001066")]
	[Address(RVA = "0x451D680", Offset = "0x451D680", VA = "0x451D680", Slot = "25")]
	internal virtual XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x6001074")]
	[Address(RVA = "0x451D830", Offset = "0x451D830", VA = "0x451D830", Slot = "6")]
	public override object ParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr)
	{
		return null;
	}

	[Token(Token = "0x6001075")]
	[Address(RVA = "0x451DA60", Offset = "0x451DA60", VA = "0x451DA60", Slot = "15")]
	internal override object ParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, bool createAtomicValue)
	{
		return null;
	}

	[Token(Token = "0x6001076")]
	[Address(RVA = "0x451DBC0", Offset = "0x451DBC0", VA = "0x451DBC0", Slot = "17")]
	internal override Exception TryParseValue(object value, XmlNameTable nameTable, IXmlNamespaceResolver namespaceResolver, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x6001077")]
	[Address(RVA = "0x451D9F0", Offset = "0x451D9F0", VA = "0x451D9F0")]
	internal string GetTypeName()
	{
		return null;
	}

	[Token(Token = "0x6001078")]
	[Address(RVA = "0x451E0C0", Offset = "0x451E0C0", VA = "0x451E0C0")]
	protected int Compare(byte[] value1, byte[] value2)
	{
		return default(int);
	}

	[Token(Token = "0x6001079")]
	[Address(RVA = "0x451E120", Offset = "0x451E120", VA = "0x451E120")]
	protected DatatypeImplementation()
	{
	}
}
