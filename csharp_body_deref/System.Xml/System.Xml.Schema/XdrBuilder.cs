using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001FC")]
internal sealed class XdrBuilder : SchemaBuilder
{
	[Token(Token = "0x20001FD")]
	private sealed class DeclBaseInfo
	{
		[Token(Token = "0x4000AA0")]
		[FieldOffset(Offset = "0x10")]
		internal XmlQualifiedName _Name;

		[Token(Token = "0x4000AA1")]
		[FieldOffset(Offset = "0x18")]
		internal string _Prefix;

		[Token(Token = "0x4000AA2")]
		[FieldOffset(Offset = "0x20")]
		internal XmlQualifiedName _TypeName;

		[Token(Token = "0x4000AA3")]
		[FieldOffset(Offset = "0x28")]
		internal string _TypePrefix;

		[Token(Token = "0x4000AA4")]
		[FieldOffset(Offset = "0x30")]
		internal object _Default;

		[Token(Token = "0x4000AA5")]
		[FieldOffset(Offset = "0x38")]
		internal object _Revises;

		[Token(Token = "0x4000AA6")]
		[FieldOffset(Offset = "0x40")]
		internal uint _MaxOccurs;

		[Token(Token = "0x4000AA7")]
		[FieldOffset(Offset = "0x44")]
		internal uint _MinOccurs;

		[Token(Token = "0x4000AA8")]
		[FieldOffset(Offset = "0x48")]
		internal bool _Checking;

		[Token(Token = "0x4000AA9")]
		[FieldOffset(Offset = "0x50")]
		internal SchemaElementDecl _ElementDecl;

		[Token(Token = "0x4000AAA")]
		[FieldOffset(Offset = "0x58")]
		internal SchemaAttDef _Attdef;

		[Token(Token = "0x4000AAB")]
		[FieldOffset(Offset = "0x60")]
		internal DeclBaseInfo _Next;

		[Token(Token = "0x6001498")]
		[Address(RVA = "0x43D3C90", Offset = "0x43D3C90", VA = "0x43D3C90")]
		internal DeclBaseInfo()
		{
		}

		[Token(Token = "0x6001499")]
		[Address(RVA = "0x43D41E0", Offset = "0x43D41E0", VA = "0x43D41E0")]
		internal void Reset()
		{
		}
	}

	[Token(Token = "0x20001FE")]
	private sealed class GroupContent
	{
		[Token(Token = "0x4000AAC")]
		[FieldOffset(Offset = "0x10")]
		internal uint _MinVal;

		[Token(Token = "0x4000AAD")]
		[FieldOffset(Offset = "0x14")]
		internal uint _MaxVal;

		[Token(Token = "0x4000AAE")]
		[FieldOffset(Offset = "0x18")]
		internal bool _HasMaxAttr;

		[Token(Token = "0x4000AAF")]
		[FieldOffset(Offset = "0x19")]
		internal bool _HasMinAttr;

		[Token(Token = "0x4000AB0")]
		[FieldOffset(Offset = "0x1C")]
		internal int _Order;

		[Token(Token = "0x600149A")]
		[Address(RVA = "0x43D9960", Offset = "0x43D9960", VA = "0x43D9960")]
		internal static void Copy(GroupContent from, GroupContent to)
		{
		}

		[Token(Token = "0x600149B")]
		[Address(RVA = "0x43D04A0", Offset = "0x43D04A0", VA = "0x43D04A0")]
		internal static GroupContent Copy(GroupContent other)
		{
			return null;
		}

		[Token(Token = "0x600149C")]
		[Address(RVA = "0x43CEE30", Offset = "0x43CEE30", VA = "0x43CEE30")]
		public GroupContent()
		{
		}
	}

	[Token(Token = "0x20001FF")]
	private sealed class ElementContent
	{
		[Token(Token = "0x4000AB1")]
		[FieldOffset(Offset = "0x10")]
		internal SchemaElementDecl _ElementDecl;

		[Token(Token = "0x4000AB2")]
		[FieldOffset(Offset = "0x18")]
		internal int _ContentAttr;

		[Token(Token = "0x4000AB3")]
		[FieldOffset(Offset = "0x1C")]
		internal int _OrderAttr;

		[Token(Token = "0x4000AB4")]
		[FieldOffset(Offset = "0x20")]
		internal bool _MasterGroupRequired;

		[Token(Token = "0x4000AB5")]
		[FieldOffset(Offset = "0x21")]
		internal bool _ExistTerminal;

		[Token(Token = "0x4000AB6")]
		[FieldOffset(Offset = "0x22")]
		internal bool _AllowDataType;

		[Token(Token = "0x4000AB7")]
		[FieldOffset(Offset = "0x23")]
		internal bool _HasDataType;

		[Token(Token = "0x4000AB8")]
		[FieldOffset(Offset = "0x24")]
		internal bool _HasType;

		[Token(Token = "0x4000AB9")]
		[FieldOffset(Offset = "0x25")]
		internal bool _EnumerationRequired;

		[Token(Token = "0x4000ABA")]
		[FieldOffset(Offset = "0x28")]
		internal uint _MinVal;

		[Token(Token = "0x4000ABB")]
		[FieldOffset(Offset = "0x2C")]
		internal uint _MaxVal;

		[Token(Token = "0x4000ABC")]
		[FieldOffset(Offset = "0x30")]
		internal uint _MaxLength;

		[Token(Token = "0x4000ABD")]
		[FieldOffset(Offset = "0x34")]
		internal uint _MinLength;

		[Token(Token = "0x4000ABE")]
		[FieldOffset(Offset = "0x38")]
		internal Hashtable _AttDefList;

		[Token(Token = "0x600149D")]
		[Address(RVA = "0x43CEE10", Offset = "0x43CEE10", VA = "0x43CEE10")]
		public ElementContent()
		{
		}
	}

	[Token(Token = "0x2000200")]
	private sealed class AttributeContent
	{
		[Token(Token = "0x4000ABF")]
		[FieldOffset(Offset = "0x10")]
		internal SchemaAttDef _AttDef;

		[Token(Token = "0x4000AC0")]
		[FieldOffset(Offset = "0x18")]
		internal XmlQualifiedName _Name;

		[Token(Token = "0x4000AC1")]
		[FieldOffset(Offset = "0x20")]
		internal string _Prefix;

		[Token(Token = "0x4000AC2")]
		[FieldOffset(Offset = "0x28")]
		internal bool _Required;

		[Token(Token = "0x4000AC3")]
		[FieldOffset(Offset = "0x2C")]
		internal uint _MinVal;

		[Token(Token = "0x4000AC4")]
		[FieldOffset(Offset = "0x30")]
		internal uint _MaxVal;

		[Token(Token = "0x4000AC5")]
		[FieldOffset(Offset = "0x34")]
		internal uint _MaxLength;

		[Token(Token = "0x4000AC6")]
		[FieldOffset(Offset = "0x38")]
		internal uint _MinLength;

		[Token(Token = "0x4000AC7")]
		[FieldOffset(Offset = "0x3C")]
		internal bool _EnumerationRequired;

		[Token(Token = "0x4000AC8")]
		[FieldOffset(Offset = "0x3D")]
		internal bool _HasDataType;

		[Token(Token = "0x4000AC9")]
		[FieldOffset(Offset = "0x3E")]
		internal bool _Global;

		[Token(Token = "0x4000ACA")]
		[FieldOffset(Offset = "0x40")]
		internal object _Default;

		[Token(Token = "0x600149E")]
		[Address(RVA = "0x43CEE20", Offset = "0x43CEE20", VA = "0x43CEE20")]
		public AttributeContent()
		{
		}
	}

	[Token(Token = "0x2000201")]
	private delegate void XdrBuildFunction(XdrBuilder builder, object obj, string prefix);

	[Token(Token = "0x2000202")]
	private delegate void XdrInitFunction(XdrBuilder builder, object obj);

	[Token(Token = "0x2000203")]
	private delegate void XdrBeginChildFunction(XdrBuilder builder);

	[Token(Token = "0x2000204")]
	private delegate void XdrEndChildFunction(XdrBuilder builder);

	[Token(Token = "0x2000205")]
	private sealed class XdrAttributeEntry
	{
		[Token(Token = "0x4000ACB")]
		[FieldOffset(Offset = "0x10")]
		internal SchemaNames.Token _Attribute;

		[Token(Token = "0x4000ACC")]
		[FieldOffset(Offset = "0x14")]
		internal int _SchemaFlags;

		[Token(Token = "0x4000ACD")]
		[FieldOffset(Offset = "0x18")]
		internal XmlSchemaDatatype _Datatype;

		[Token(Token = "0x4000ACE")]
		[FieldOffset(Offset = "0x20")]
		internal XdrBuildFunction _BuildFunc;

		[Token(Token = "0x60014A7")]
		[Address(RVA = "0x43D95A0", Offset = "0x43D95A0", VA = "0x43D95A0")]
		internal XdrAttributeEntry(SchemaNames.Token a, XmlTokenizedType ttype, XdrBuildFunction build)
		{
		}

		[Token(Token = "0x60014A8")]
		[Address(RVA = "0x43D9630", Offset = "0x43D9630", VA = "0x43D9630")]
		internal XdrAttributeEntry(SchemaNames.Token a, XmlTokenizedType ttype, int schemaFlags, XdrBuildFunction build)
		{
		}
	}

	[Token(Token = "0x2000206")]
	private sealed class XdrEntry
	{
		[Token(Token = "0x4000ACF")]
		[FieldOffset(Offset = "0x10")]
		internal SchemaNames.Token _Name;

		[Token(Token = "0x4000AD0")]
		[FieldOffset(Offset = "0x18")]
		internal int[] _NextStates;

		[Token(Token = "0x4000AD1")]
		[FieldOffset(Offset = "0x20")]
		internal XdrAttributeEntry[] _Attributes;

		[Token(Token = "0x4000AD2")]
		[FieldOffset(Offset = "0x28")]
		internal XdrInitFunction _InitFunc;

		[Token(Token = "0x4000AD3")]
		[FieldOffset(Offset = "0x30")]
		internal XdrBeginChildFunction _BeginChildFunc;

		[Token(Token = "0x4000AD4")]
		[FieldOffset(Offset = "0x38")]
		internal XdrEndChildFunction _EndChildFunc;

		[Token(Token = "0x4000AD5")]
		[FieldOffset(Offset = "0x40")]
		internal bool _AllowText;

		[Token(Token = "0x60014A9")]
		[Address(RVA = "0x43D96C0", Offset = "0x43D96C0", VA = "0x43D96C0")]
		internal XdrEntry(SchemaNames.Token n, int[] states, XdrAttributeEntry[] attributes, XdrInitFunction init, XdrBeginChildFunction begin, XdrEndChildFunction end, bool fText)
		{
		}
	}

	[Token(Token = "0x4000A7B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int[] S_XDR_Root_Element;

	[Token(Token = "0x4000A7C")]
	[FieldOffset(Offset = "0x8")]
	private static readonly int[] S_XDR_Root_SubElements;

	[Token(Token = "0x4000A7D")]
	[FieldOffset(Offset = "0x10")]
	private static readonly int[] S_XDR_ElementType_SubElements;

	[Token(Token = "0x4000A7E")]
	[FieldOffset(Offset = "0x18")]
	private static readonly int[] S_XDR_AttributeType_SubElements;

	[Token(Token = "0x4000A7F")]
	[FieldOffset(Offset = "0x20")]
	private static readonly int[] S_XDR_Group_SubElements;

	[Token(Token = "0x4000A80")]
	[FieldOffset(Offset = "0x28")]
	private static readonly XdrAttributeEntry[] S_XDR_Root_Attributes;

	[Token(Token = "0x4000A81")]
	[FieldOffset(Offset = "0x30")]
	private static readonly XdrAttributeEntry[] S_XDR_ElementType_Attributes;

	[Token(Token = "0x4000A82")]
	[FieldOffset(Offset = "0x38")]
	private static readonly XdrAttributeEntry[] S_XDR_AttributeType_Attributes;

	[Token(Token = "0x4000A83")]
	[FieldOffset(Offset = "0x40")]
	private static readonly XdrAttributeEntry[] S_XDR_Element_Attributes;

	[Token(Token = "0x4000A84")]
	[FieldOffset(Offset = "0x48")]
	private static readonly XdrAttributeEntry[] S_XDR_Attribute_Attributes;

	[Token(Token = "0x4000A85")]
	[FieldOffset(Offset = "0x50")]
	private static readonly XdrAttributeEntry[] S_XDR_Group_Attributes;

	[Token(Token = "0x4000A86")]
	[FieldOffset(Offset = "0x58")]
	private static readonly XdrAttributeEntry[] S_XDR_ElementDataType_Attributes;

	[Token(Token = "0x4000A87")]
	[FieldOffset(Offset = "0x60")]
	private static readonly XdrAttributeEntry[] S_XDR_AttributeDataType_Attributes;

	[Token(Token = "0x4000A88")]
	[FieldOffset(Offset = "0x68")]
	private static readonly XdrEntry[] S_SchemaEntries;

	[Token(Token = "0x4000A89")]
	[FieldOffset(Offset = "0x10")]
	private SchemaInfo _SchemaInfo;

	[Token(Token = "0x4000A8A")]
	[FieldOffset(Offset = "0x18")]
	private string _TargetNamespace;

	[Token(Token = "0x4000A8B")]
	[FieldOffset(Offset = "0x20")]
	private XmlReader _reader;

	[Token(Token = "0x4000A8C")]
	[FieldOffset(Offset = "0x28")]
	private PositionInfo positionInfo;

	[Token(Token = "0x4000A8D")]
	[FieldOffset(Offset = "0x30")]
	private ParticleContentValidator _contentValidator;

	[Token(Token = "0x4000A8E")]
	[FieldOffset(Offset = "0x38")]
	private XdrEntry _CurState;

	[Token(Token = "0x4000A8F")]
	[FieldOffset(Offset = "0x40")]
	private XdrEntry _NextState;

	[Token(Token = "0x4000A90")]
	[FieldOffset(Offset = "0x48")]
	private HWStack _StateHistory;

	[Token(Token = "0x4000A91")]
	[FieldOffset(Offset = "0x50")]
	private HWStack _GroupStack;

	[Token(Token = "0x4000A92")]
	[FieldOffset(Offset = "0x58")]
	private string _XdrName;

	[Token(Token = "0x4000A93")]
	[FieldOffset(Offset = "0x60")]
	private string _XdrPrefix;

	[Token(Token = "0x4000A94")]
	[FieldOffset(Offset = "0x68")]
	private ElementContent _ElementDef;

	[Token(Token = "0x4000A95")]
	[FieldOffset(Offset = "0x70")]
	private GroupContent _GroupDef;

	[Token(Token = "0x4000A96")]
	[FieldOffset(Offset = "0x78")]
	private AttributeContent _AttributeDef;

	[Token(Token = "0x4000A97")]
	[FieldOffset(Offset = "0x80")]
	private DeclBaseInfo _UndefinedAttributeTypes;

	[Token(Token = "0x4000A98")]
	[FieldOffset(Offset = "0x88")]
	private DeclBaseInfo _BaseDecl;

	[Token(Token = "0x4000A99")]
	[FieldOffset(Offset = "0x90")]
	private XmlNameTable _NameTable;

	[Token(Token = "0x4000A9A")]
	[FieldOffset(Offset = "0x98")]
	private SchemaNames _SchemaNames;

	[Token(Token = "0x4000A9B")]
	[FieldOffset(Offset = "0xA0")]
	private XmlNamespaceManager _CurNsMgr;

	[Token(Token = "0x4000A9C")]
	[FieldOffset(Offset = "0xA8")]
	private string _Text;

	[Token(Token = "0x4000A9D")]
	[FieldOffset(Offset = "0xB0")]
	private ValidationEventHandler validationEventHandler;

	[Token(Token = "0x4000A9E")]
	[FieldOffset(Offset = "0xB8")]
	private Hashtable _UndeclaredElements;

	[Token(Token = "0x4000A9F")]
	[FieldOffset(Offset = "0xC0")]
	private XmlResolver xmlResolver;

	[Token(Token = "0x1700056B")]
	internal XmlResolver XmlResolver
	{
		[Token(Token = "0x6001445")]
		[Address(RVA = "0x43D00A0", Offset = "0x43D00A0", VA = "0x43D00A0")]
		set
		{
		}
	}

	[Token(Token = "0x6001442")]
	[Address(RVA = "0x43CEB40", Offset = "0x43CEB40", VA = "0x43CEB40")]
	internal XdrBuilder(XmlReader reader, XmlNamespaceManager curmgr, SchemaInfo sinfo, string targetNamspace, XmlNameTable nameTable, SchemaNames schemaNames, ValidationEventHandler eventhandler)
	{
	}

	[Token(Token = "0x6001443")]
	[Address(RVA = "0x43CEE40", Offset = "0x43CEE40", VA = "0x43CEE40", Slot = "4")]
	internal override bool ProcessElement(string prefix, string name, string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x6001444")]
	[Address(RVA = "0x43CF510", Offset = "0x43CF510", VA = "0x43CF510", Slot = "5")]
	internal override void ProcessAttribute(string prefix, string name, string ns, string value)
	{
	}

	[Token(Token = "0x6001446")]
	[Address(RVA = "0x43CF9B0", Offset = "0x43CF9B0", VA = "0x43CF9B0")]
	private bool LoadSchema(string uri)
	{
		return default(bool);
	}

	[Token(Token = "0x6001447")]
	[Address(RVA = "0x43CF910", Offset = "0x43CF910", VA = "0x43CF910")]
	internal static bool IsXdrSchema(string uri)
	{
		return default(bool);
	}

	[Token(Token = "0x6001448")]
	[Address(RVA = "0x43D0220", Offset = "0x43D0220", VA = "0x43D0220", Slot = "6")]
	internal override bool IsContentParsed()
	{
		return default(bool);
	}

	[Token(Token = "0x6001449")]
	[Address(RVA = "0x43D0230", Offset = "0x43D0230", VA = "0x43D0230", Slot = "7")]
	internal override void ProcessMarkup(XmlNode[] markup)
	{
	}

	[Token(Token = "0x600144A")]
	[Address(RVA = "0x43D0290", Offset = "0x43D0290", VA = "0x43D0290", Slot = "8")]
	internal override void ProcessCData(string value)
	{
	}

	[Token(Token = "0x600144B")]
	[Address(RVA = "0x43D0310", Offset = "0x43D0310", VA = "0x43D0310", Slot = "9")]
	internal override void StartChildren()
	{
	}

	[Token(Token = "0x600144C")]
	[Address(RVA = "0x43D0340", Offset = "0x43D0340", VA = "0x43D0340", Slot = "10")]
	internal override void EndChildren()
	{
	}

	[Token(Token = "0x600144D")]
	[Address(RVA = "0x43CF300", Offset = "0x43CF300", VA = "0x43CF300")]
	private void Push()
	{
	}

	[Token(Token = "0x600144E")]
	[Address(RVA = "0x43D0370", Offset = "0x43D0370", VA = "0x43D0370")]
	private void Pop()
	{
	}

	[Token(Token = "0x600144F")]
	[Address(RVA = "0x43D03F0", Offset = "0x43D03F0", VA = "0x43D03F0")]
	private void PushGroupInfo()
	{
	}

	[Token(Token = "0x6001450")]
	[Address(RVA = "0x43D0510", Offset = "0x43D0510", VA = "0x43D0510")]
	private void PopGroupInfo()
	{
	}

	[Token(Token = "0x6001451")]
	[Address(RVA = "0x43D0590", Offset = "0x43D0590", VA = "0x43D0590")]
	private static void XDR_InitRoot(XdrBuilder builder, object obj)
	{
	}

	[Token(Token = "0x6001452")]
	[Address(RVA = "0x43D0610", Offset = "0x43D0610", VA = "0x43D0610")]
	private static void XDR_BuildRoot_Name(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001453")]
	[Address(RVA = "0x43D0690", Offset = "0x43D0690", VA = "0x43D0690")]
	private static void XDR_BuildRoot_ID(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001454")]
	[Address(RVA = "0x43D06A0", Offset = "0x43D06A0", VA = "0x43D06A0")]
	private static void XDR_BeginRoot(XdrBuilder builder)
	{
	}

	[Token(Token = "0x6001455")]
	[Address(RVA = "0x43D0780", Offset = "0x43D0780", VA = "0x43D0780")]
	private static void XDR_EndRoot(XdrBuilder builder)
	{
	}

	[Token(Token = "0x6001456")]
	[Address(RVA = "0x43D0E20", Offset = "0x43D0E20", VA = "0x43D0E20")]
	private static void XDR_InitElementType(XdrBuilder builder, object obj)
	{
	}

	[Token(Token = "0x6001457")]
	[Address(RVA = "0x43D0F50", Offset = "0x43D0F50", VA = "0x43D0F50")]
	private static void XDR_BuildElementType_Name(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001458")]
	[Address(RVA = "0x43D1150", Offset = "0x43D1150", VA = "0x43D1150")]
	private static void XDR_BuildElementType_Content(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001459")]
	[Address(RVA = "0x43D13C0", Offset = "0x43D13C0", VA = "0x43D13C0")]
	private static void XDR_BuildElementType_Model(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x600145A")]
	[Address(RVA = "0x43D1540", Offset = "0x43D1540", VA = "0x43D1540")]
	private static void XDR_BuildElementType_Order(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x600145B")]
	[Address(RVA = "0x43D1740", Offset = "0x43D1740", VA = "0x43D1740")]
	private static void XDR_BuildElementType_DtType(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x600145C")]
	[Address(RVA = "0x43D1920", Offset = "0x43D1920", VA = "0x43D1920")]
	private static void XDR_BuildElementType_DtValues(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x600145D")]
	[Address(RVA = "0x43D1A00", Offset = "0x43D1A00", VA = "0x43D1A00")]
	private static void XDR_BuildElementType_DtMaxLength(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x600145E")]
	[Address(RVA = "0x43D1B90", Offset = "0x43D1B90", VA = "0x43D1B90")]
	private static void XDR_BuildElementType_DtMinLength(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x600145F")]
	[Address(RVA = "0x43D1D20", Offset = "0x43D1D20", VA = "0x43D1D20")]
	private static void XDR_BeginElementType(XdrBuilder builder)
	{
	}

	[Token(Token = "0x6001460")]
	[Address(RVA = "0x43D2090", Offset = "0x43D2090", VA = "0x43D2090")]
	private static void XDR_EndElementType(XdrBuilder builder)
	{
	}

	[Token(Token = "0x6001461")]
	[Address(RVA = "0x43D2630", Offset = "0x43D2630", VA = "0x43D2630")]
	private static void XDR_InitAttributeType(XdrBuilder builder, object obj)
	{
	}

	[Token(Token = "0x6001462")]
	[Address(RVA = "0x43D2740", Offset = "0x43D2740", VA = "0x43D2740")]
	private static void XDR_BuildAttributeType_Name(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001463")]
	[Address(RVA = "0x43D29F0", Offset = "0x43D29F0", VA = "0x43D29F0")]
	private static void XDR_BuildAttributeType_Required(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001464")]
	[Address(RVA = "0x43D2B60", Offset = "0x43D2B60", VA = "0x43D2B60")]
	private static void XDR_BuildAttributeType_Default(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001465")]
	[Address(RVA = "0x43D2B90", Offset = "0x43D2B90", VA = "0x43D2B90")]
	private static void XDR_BuildAttributeType_DtType(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001466")]
	[Address(RVA = "0x43D2E00", Offset = "0x43D2E00", VA = "0x43D2E00")]
	private static void XDR_BuildAttributeType_DtValues(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001467")]
	[Address(RVA = "0x43D2EE0", Offset = "0x43D2EE0", VA = "0x43D2EE0")]
	private static void XDR_BuildAttributeType_DtMaxLength(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001468")]
	[Address(RVA = "0x43D2F50", Offset = "0x43D2F50", VA = "0x43D2F50")]
	private static void XDR_BuildAttributeType_DtMinLength(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001469")]
	[Address(RVA = "0x43D2FC0", Offset = "0x43D2FC0", VA = "0x43D2FC0")]
	private static void XDR_BeginAttributeType(XdrBuilder builder)
	{
	}

	[Token(Token = "0x600146A")]
	[Address(RVA = "0x43D3040", Offset = "0x43D3040", VA = "0x43D3040")]
	private static void XDR_EndAttributeType(XdrBuilder builder)
	{
	}

	[Token(Token = "0x600146B")]
	[Address(RVA = "0x43D3510", Offset = "0x43D3510", VA = "0x43D3510")]
	private static void XDR_InitElement(XdrBuilder builder, object obj)
	{
	}

	[Token(Token = "0x600146C")]
	[Address(RVA = "0x43D35A0", Offset = "0x43D35A0", VA = "0x43D35A0")]
	private static void XDR_BuildElement_Type(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x600146D")]
	[Address(RVA = "0x43D37F0", Offset = "0x43D37F0", VA = "0x43D37F0")]
	private static void XDR_BuildElement_MinOccurs(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x600146E")]
	[Address(RVA = "0x43D3950", Offset = "0x43D3950", VA = "0x43D3950")]
	private static void XDR_BuildElement_MaxOccurs(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x600146F")]
	[Address(RVA = "0x43D3AE0", Offset = "0x43D3AE0", VA = "0x43D3AE0")]
	private static void XDR_EndElement(XdrBuilder builder)
	{
	}

	[Token(Token = "0x6001470")]
	[Address(RVA = "0x43D3C00", Offset = "0x43D3C00", VA = "0x43D3C00")]
	private static void XDR_InitAttribute(XdrBuilder builder, object obj)
	{
	}

	[Token(Token = "0x6001471")]
	[Address(RVA = "0x43D3CB0", Offset = "0x43D3CB0", VA = "0x43D3CB0")]
	private static void XDR_BuildAttribute_Type(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001472")]
	[Address(RVA = "0x43D3D90", Offset = "0x43D3D90", VA = "0x43D3D90")]
	private static void XDR_BuildAttribute_Required(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001473")]
	[Address(RVA = "0x43D3E10", Offset = "0x43D3E10", VA = "0x43D3E10")]
	private static void XDR_BuildAttribute_Default(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001474")]
	[Address(RVA = "0x43D3E40", Offset = "0x43D3E40", VA = "0x43D3E40")]
	private static void XDR_BeginAttribute(XdrBuilder builder)
	{
	}

	[Token(Token = "0x6001475")]
	[Address(RVA = "0x43D41C0", Offset = "0x43D41C0", VA = "0x43D41C0")]
	private static void XDR_EndAttribute(XdrBuilder builder)
	{
	}

	[Token(Token = "0x6001476")]
	[Address(RVA = "0x43D4300", Offset = "0x43D4300", VA = "0x43D4300")]
	private static void XDR_InitGroup(XdrBuilder builder, object obj)
	{
	}

	[Token(Token = "0x6001477")]
	[Address(RVA = "0x43D43D0", Offset = "0x43D43D0", VA = "0x43D43D0")]
	private static void XDR_BuildGroup_Order(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001478")]
	[Address(RVA = "0x43D44C0", Offset = "0x43D44C0", VA = "0x43D44C0")]
	private static void XDR_BuildGroup_MinOccurs(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001479")]
	[Address(RVA = "0x43D4540", Offset = "0x43D4540", VA = "0x43D4540")]
	private static void XDR_BuildGroup_MaxOccurs(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x600147A")]
	[Address(RVA = "0x43D45C0", Offset = "0x43D45C0", VA = "0x43D45C0")]
	private static void XDR_EndGroup(XdrBuilder builder)
	{
	}

	[Token(Token = "0x600147B")]
	[Address(RVA = "0x43D4740", Offset = "0x43D4740", VA = "0x43D4740")]
	private static void XDR_InitElementDtType(XdrBuilder builder, object obj)
	{
	}

	[Token(Token = "0x600147C")]
	[Address(RVA = "0x43D47F0", Offset = "0x43D47F0", VA = "0x43D47F0")]
	private static void XDR_EndElementDtType(XdrBuilder builder)
	{
	}

	[Token(Token = "0x600147D")]
	[Address(RVA = "0x43D48F0", Offset = "0x43D48F0", VA = "0x43D48F0")]
	private static void XDR_InitAttributeDtType(XdrBuilder builder, object obj)
	{
	}

	[Token(Token = "0x600147E")]
	[Address(RVA = "0x43D4960", Offset = "0x43D4960", VA = "0x43D4960")]
	private static void XDR_EndAttributeDtType(XdrBuilder builder)
	{
	}

	[Token(Token = "0x600147F")]
	[Address(RVA = "0x43CF130", Offset = "0x43CF130", VA = "0x43CF130")]
	private bool GetNextState(XmlQualifiedName qname)
	{
		return default(bool);
	}

	[Token(Token = "0x6001480")]
	[Address(RVA = "0x43CF350", Offset = "0x43CF350", VA = "0x43CF350")]
	private bool IsSkipableElement(XmlQualifiedName qname)
	{
		return default(bool);
	}

	[Token(Token = "0x6001481")]
	[Address(RVA = "0x43CFF00", Offset = "0x43CFF00", VA = "0x43CFF00")]
	private bool IsSkipableAttribute(XmlQualifiedName qname)
	{
		return default(bool);
	}

	[Token(Token = "0x6001482")]
	[Address(RVA = "0x43D15E0", Offset = "0x43D15E0", VA = "0x43D15E0")]
	private int GetOrder(XmlQualifiedName qname)
	{
		return default(int);
	}

	[Token(Token = "0x6001483")]
	[Address(RVA = "0x43D3740", Offset = "0x43D3740", VA = "0x43D3740")]
	private void AddOrder()
	{
	}

	[Token(Token = "0x6001484")]
	[Address(RVA = "0x43D2A60", Offset = "0x43D2A60", VA = "0x43D2A60")]
	private static bool IsYes(object obj, XdrBuilder builder)
	{
		return default(bool);
	}

	[Token(Token = "0x6001485")]
	[Address(RVA = "0x43D3860", Offset = "0x43D3860", VA = "0x43D3860")]
	private static uint ParseMinOccurs(object obj, XdrBuilder builder)
	{
		return default(uint);
	}

	[Token(Token = "0x6001486")]
	[Address(RVA = "0x43D39C0", Offset = "0x43D39C0", VA = "0x43D39C0")]
	private static uint ParseMaxOccurs(object obj, XdrBuilder builder)
	{
		return default(uint);
	}

	[Token(Token = "0x6001487")]
	[Address(RVA = "0x43D3BD0", Offset = "0x43D3BD0", VA = "0x43D3BD0")]
	private static void HandleMinMax(ParticleContentValidator pContent, uint cMin, uint cMax)
	{
	}

	[Token(Token = "0x6001488")]
	[Address(RVA = "0x43D1A70", Offset = "0x43D1A70", VA = "0x43D1A70")]
	private static void ParseDtMaxLength(ref uint cVal, object obj, XdrBuilder builder)
	{
	}

	[Token(Token = "0x6001489")]
	[Address(RVA = "0x43D1C00", Offset = "0x43D1C00", VA = "0x43D1C00")]
	private static void ParseDtMinLength(ref uint cVal, object obj, XdrBuilder builder)
	{
	}

	[Token(Token = "0x600148A")]
	[Address(RVA = "0x43D25B0", Offset = "0x43D25B0", VA = "0x43D25B0")]
	private static void CompareMinMaxLength(uint cMin, uint cMax, XdrBuilder builder)
	{
	}

	[Token(Token = "0x600148B")]
	[Address(RVA = "0x43D4A60", Offset = "0x43D4A60", VA = "0x43D4A60")]
	private static bool ParseInteger(string str, ref uint n)
	{
		return default(bool);
	}

	[Token(Token = "0x600148C")]
	[Address(RVA = "0x43D0D50", Offset = "0x43D0D50", VA = "0x43D0D50")]
	private void XDR_CheckAttributeDefault(DeclBaseInfo decl, SchemaAttDef pAttdef)
	{
	}

	[Token(Token = "0x600148D")]
	[Address(RVA = "0x43D34D0", Offset = "0x43D34D0", VA = "0x43D34D0")]
	private void SetAttributePresence(SchemaAttDef pAttdef, bool fRequired)
	{
	}

	[Token(Token = "0x600148E")]
	[Address(RVA = "0x43D11E0", Offset = "0x43D11E0", VA = "0x43D11E0")]
	private int GetContent(XmlQualifiedName qname)
	{
		return default(int);
	}

	[Token(Token = "0x600148F")]
	[Address(RVA = "0x43D1450", Offset = "0x43D1450", VA = "0x43D1450")]
	private bool GetModel(XmlQualifiedName qname)
	{
		return default(bool);
	}

	[Token(Token = "0x6001490")]
	[Address(RVA = "0x43D2C40", Offset = "0x43D2C40", VA = "0x43D2C40")]
	private XmlSchemaDatatype CheckDatatype(string str)
	{
		return null;
	}

	[Token(Token = "0x6001491")]
	[Address(RVA = "0x43D33D0", Offset = "0x43D33D0", VA = "0x43D33D0")]
	private void CheckDefaultAttValue(SchemaAttDef attDef)
	{
	}

	[Token(Token = "0x6001492")]
	[Address(RVA = "0x43CF900", Offset = "0x43CF900", VA = "0x43CF900")]
	private bool IsGlobal(int flags)
	{
		return default(bool);
	}

	[Token(Token = "0x6001493")]
	[Address(RVA = "0x43D00C0", Offset = "0x43D00C0", VA = "0x43D00C0")]
	private void SendValidationEvent(string code, string[] args, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x6001494")]
	[Address(RVA = "0x43D1890", Offset = "0x43D1890", VA = "0x43D1890")]
	private void SendValidationEvent(string code)
	{
	}

	[Token(Token = "0x6001495")]
	[Address(RVA = "0x43CF430", Offset = "0x43CF430", VA = "0x43CF430")]
	private void SendValidationEvent(string code, string msg)
	{
	}

	[Token(Token = "0x6001496")]
	[Address(RVA = "0x43D51A0", Offset = "0x43D51A0", VA = "0x43D51A0")]
	private void SendValidationEvent(XmlSchemaException e, XmlSeverityType severity)
	{
	}
}
