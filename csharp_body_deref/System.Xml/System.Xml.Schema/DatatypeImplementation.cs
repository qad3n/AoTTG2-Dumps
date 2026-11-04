// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.DatatypeImplementation
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
			[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000444")]
		public int ParentIndex
		{
			[Token(Token = "0x600107E")]
			[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x600107A")]
		[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
		internal SchemaDatatypeMap(string name, DatatypeImplementation type)
		{
		}

		[Token(Token = "0x600107B")]
		[Address(RVA = "0x1A48980", Offset = "0x1A46F80", VA = "0x181A48980")]
		internal SchemaDatatypeMap(string name, DatatypeImplementation type, int parentIndex)
		{
		}

		[Token(Token = "0x600107C")]
		[Address(RVA = "0x111BC10", Offset = "0x111A210", VA = "0x18111BC10")]
		public static explicit operator DatatypeImplementation(SchemaDatatypeMap sdm)
		{
			return null;
		}

		[Token(Token = "0x600107F")]
		[Address(RVA = "0x25227A0", Offset = "0x2520DA0", VA = "0x1825227A0", Slot = "4")]
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
		[Address(RVA = "0x2798FE0", Offset = "0x27975E0", VA = "0x182798FE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000435")]
	internal static XmlSchemaSimpleType UntypedAtomicType
	{
		[Token(Token = "0x6001050")]
		[Address(RVA = "0x27990C0", Offset = "0x27976C0", VA = "0x1827990C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000436")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x6001067")]
		[Address(RVA = "0x2799030", Offset = "0x2797630", VA = "0x182799030", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000437")]
	internal override XmlValueConverter ValueConverter
	{
		[Token(Token = "0x6001068")]
		[Address(RVA = "0x2799110", Offset = "0x2797710", VA = "0x182799110", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000438")]
	public override XmlTokenizedType TokenizedType
	{
		[Token(Token = "0x6001069")]
		[Address(RVA = "0x847030", Offset = "0x845630", VA = "0x180847030", Slot = "5")]
		get
		{
			return default(XmlTokenizedType);
		}
	}

	[Token(Token = "0x17000439")]
	public override Type ValueType
	{
		[Token(Token = "0x600106A")]
		[Address(RVA = "0x26F0660", Offset = "0x26EEC60", VA = "0x1826F0660", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700043A")]
	public override XmlSchemaDatatypeVariety Variety
	{
		[Token(Token = "0x600106B")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "7")]
		get
		{
			return default(XmlSchemaDatatypeVariety);
		}
	}

	[Token(Token = "0x1700043B")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x600106C")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x1700043C")]
	internal override RestrictionFacets Restriction
	{
		[Token(Token = "0x600106D")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700043D")]
	internal override bool HasLexicalFacets
	{
		[Token(Token = "0x600106E")]
		[Address(RVA = "0x2799080", Offset = "0x2797680", VA = "0x182799080", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700043E")]
	internal override bool HasValueFacets
	{
		[Token(Token = "0x600106F")]
		[Address(RVA = "0x27990A0", Offset = "0x27976A0", VA = "0x1827990A0", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700043F")]
	protected DatatypeImplementation Base
	{
		[Token(Token = "0x6001070")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
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
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x600104E")]
	[Address(RVA = "0x27929A0", Offset = "0x2790FA0", VA = "0x1827929A0")]
	static DatatypeImplementation()
	{
	}

	[Token(Token = "0x6001051")]
	[Address(RVA = "0x2791650", Offset = "0x278FC50", VA = "0x182791650")]
	internal new static DatatypeImplementation FromXmlTokenizedType(XmlTokenizedType token)
	{
		return null;
	}

	[Token(Token = "0x6001052")]
	[Address(RVA = "0x27915D0", Offset = "0x278FBD0", VA = "0x1827915D0")]
	internal new static DatatypeImplementation FromXmlTokenizedTypeXsd(XmlTokenizedType token)
	{
		return null;
	}

	[Token(Token = "0x6001053")]
	[Address(RVA = "0x2791500", Offset = "0x278FB00", VA = "0x182791500")]
	internal new static DatatypeImplementation FromXdrName(string name)
	{
		return null;
	}

	[Token(Token = "0x6001054")]
	[Address(RVA = "0x2791430", Offset = "0x278FA30", VA = "0x182791430")]
	private static DatatypeImplementation FromTypeName(string name)
	{
		return null;
	}

	[Token(Token = "0x6001055")]
	[Address(RVA = "0x27925A0", Offset = "0x2790BA0", VA = "0x1827925A0")]
	internal static XmlSchemaSimpleType StartBuiltinType(XmlQualifiedName qname, XmlSchemaDatatype dataType)
	{
		return null;
	}

	[Token(Token = "0x6001056")]
	[Address(RVA = "0x27911A0", Offset = "0x278F7A0", VA = "0x1827911A0")]
	internal static void FinishBuiltinType(XmlSchemaSimpleType derivedType, XmlSchemaSimpleType baseType)
	{
	}

	[Token(Token = "0x6001057")]
	[Address(RVA = "0x2790050", Offset = "0x278E650", VA = "0x182790050")]
	internal static void CreateBuiltinTypes()
	{
	}

	[Token(Token = "0x6001058")]
	[Address(RVA = "0x2791A80", Offset = "0x2790080", VA = "0x182791A80")]
	internal static XmlSchemaSimpleType GetSimpleTypeFromTypeCode(XmlTypeCode typeCode)
	{
		return null;
	}

	[Token(Token = "0x6001059")]
	[Address(RVA = "0x2791AF0", Offset = "0x27900F0", VA = "0x182791AF0")]
	internal static XmlSchemaSimpleType GetSimpleTypeFromXsdType(XmlQualifiedName qname)
	{
		return null;
	}

	[Token(Token = "0x600105A")]
	[Address(RVA = "0x2791720", Offset = "0x278FD20", VA = "0x182791720")]
	internal static XmlSchemaSimpleType GetNormalizedStringTypeV1Compat()
	{
		return null;
	}

	[Token(Token = "0x600105B")]
	[Address(RVA = "0x2791BB0", Offset = "0x27901B0", VA = "0x182791BB0")]
	internal static XmlSchemaSimpleType GetTokenTypeV1Compat()
	{
		return null;
	}

	[Token(Token = "0x600105C")]
	[Address(RVA = "0x27916D0", Offset = "0x278FCD0", VA = "0x1827916D0")]
	internal static XmlSchemaSimpleType[] GetBuiltInTypes()
	{
		return null;
	}

	[Token(Token = "0x600105D")]
	[Address(RVA = "0x2791920", Offset = "0x278FF20", VA = "0x182791920")]
	internal static XmlTypeCode GetPrimitiveTypeCode(XmlTypeCode typeCode)
	{
		return default(XmlTypeCode);
	}

	[Token(Token = "0x600105E")]
	[Address(RVA = "0x2790F50", Offset = "0x278F550", VA = "0x182790F50", Slot = "20")]
	internal override XmlSchemaDatatype DeriveByRestriction(XmlSchemaObjectCollection facets, XmlNameTable nameTable, XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x600105F")]
	[Address(RVA = "0x2790C50", Offset = "0x278F250", VA = "0x182790C50", Slot = "21")]
	internal override XmlSchemaDatatype DeriveByList(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x6001060")]
	[Address(RVA = "0x2790C60", Offset = "0x278F260", VA = "0x182790C60")]
	internal XmlSchemaDatatype DeriveByList(int minSize, XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x6001061")]
	[Address(RVA = "0x2791070", Offset = "0x278F670", VA = "0x182791070")]
	internal new static DatatypeImplementation DeriveByUnion(XmlSchemaSimpleType[] types, XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x6001062")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "22")]
	internal override void VerifySchemaValid(XmlSchemaObjectTable notations, XmlSchemaObject caller)
	{
	}

	[Token(Token = "0x6001063")]
	[Address(RVA = "0x2791F20", Offset = "0x2790520", VA = "0x182791F20", Slot = "9")]
	public override bool IsDerivedFrom(XmlSchemaDatatype datatype)
	{
		return default(bool);
	}

	[Token(Token = "0x6001064")]
	[Address(RVA = "0x27921E0", Offset = "0x27907E0", VA = "0x1827921E0", Slot = "23")]
	internal override bool IsEqual(object o1, object o2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001065")]
	[Address(RVA = "0x2791E30", Offset = "0x2790430", VA = "0x182791E30", Slot = "24")]
	internal override bool IsComparable(XmlSchemaDatatype dtype)
	{
		return default(bool);
	}

	[Token(Token = "0x6001066")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "25")]
	internal virtual XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x6001074")]
	[Address(RVA = "0x2792390", Offset = "0x2790990", VA = "0x182792390", Slot = "6")]
	public override object ParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr)
	{
		return null;
	}

	[Token(Token = "0x6001075")]
	[Address(RVA = "0x2792200", Offset = "0x2790800", VA = "0x182792200", Slot = "15")]
	internal override object ParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, bool createAtomicValue)
	{
		return null;
	}

	[Token(Token = "0x6001076")]
	[Address(RVA = "0x2792680", Offset = "0x2790C80", VA = "0x182792680", Slot = "17")]
	internal override Exception TryParseValue(object value, XmlNameTable nameTable, IXmlNamespaceResolver namespaceResolver, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x6001077")]
	[Address(RVA = "0x2791DB0", Offset = "0x27903B0", VA = "0x182791DB0")]
	internal string GetTypeName()
	{
		return null;
	}

	[Token(Token = "0x6001078")]
	[Address(RVA = "0x278FFF0", Offset = "0x278E5F0", VA = "0x18278FFF0")]
	protected int Compare(byte[] value1, byte[] value2)
	{
		return default(int);
	}

	[Token(Token = "0x6001079")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	protected DatatypeImplementation()
	{
	}
}
