// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XdrBuilder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x47113F0", Offset = "0x47113F0", VA = "0x47113F0")]
		internal DeclBaseInfo()
		{
		}

		[Token(Token = "0x6001499")]
		[Address(RVA = "0x4711940", Offset = "0x4711940", VA = "0x4711940")]
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
		[Address(RVA = "0x47170C0", Offset = "0x47170C0", VA = "0x47170C0")]
		internal static void Copy(GroupContent from, GroupContent to)
		{
		}

		[Token(Token = "0x600149B")]
		[Address(RVA = "0x470DC00", Offset = "0x470DC00", VA = "0x470DC00")]
		internal static GroupContent Copy(GroupContent other)
		{
			return null;
		}

		[Token(Token = "0x600149C")]
		[Address(RVA = "0x470C590", Offset = "0x470C590", VA = "0x470C590")]
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
		[Address(RVA = "0x470C570", Offset = "0x470C570", VA = "0x470C570")]
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
		[Address(RVA = "0x470C580", Offset = "0x470C580", VA = "0x470C580")]
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
		[Address(RVA = "0x4716D00", Offset = "0x4716D00", VA = "0x4716D00")]
		internal XdrAttributeEntry(SchemaNames.Token a, XmlTokenizedType ttype, XdrBuildFunction build)
		{
		}

		[Token(Token = "0x60014A8")]
		[Address(RVA = "0x4716D90", Offset = "0x4716D90", VA = "0x4716D90")]
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
		[Address(RVA = "0x4716E20", Offset = "0x4716E20", VA = "0x4716E20")]
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
		[Address(RVA = "0x470D800", Offset = "0x470D800", VA = "0x470D800")]
		set
		{
		}
	}

	[Token(Token = "0x6001442")]
	[Address(RVA = "0x470C2A0", Offset = "0x470C2A0", VA = "0x470C2A0")]
	internal XdrBuilder(XmlReader reader, XmlNamespaceManager curmgr, SchemaInfo sinfo, string targetNamspace, XmlNameTable nameTable, SchemaNames schemaNames, ValidationEventHandler eventhandler)
	{
	}

	[Token(Token = "0x6001443")]
	[Address(RVA = "0x470C5A0", Offset = "0x470C5A0", VA = "0x470C5A0", Slot = "4")]
	internal override bool ProcessElement(string prefix, string name, string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x6001444")]
	[Address(RVA = "0x470CC70", Offset = "0x470CC70", VA = "0x470CC70", Slot = "5")]
	internal override void ProcessAttribute(string prefix, string name, string ns, string value)
	{
	}

	[Token(Token = "0x6001446")]
	[Address(RVA = "0x470D110", Offset = "0x470D110", VA = "0x470D110")]
	private bool LoadSchema(string uri)
	{
		return default(bool);
	}

	[Token(Token = "0x6001447")]
	[Address(RVA = "0x470D070", Offset = "0x470D070", VA = "0x470D070")]
	internal static bool IsXdrSchema(string uri)
	{
		return default(bool);
	}

	[Token(Token = "0x6001448")]
	[Address(RVA = "0x470D980", Offset = "0x470D980", VA = "0x470D980", Slot = "6")]
	internal override bool IsContentParsed()
	{
		return default(bool);
	}

	[Token(Token = "0x6001449")]
	[Address(RVA = "0x470D990", Offset = "0x470D990", VA = "0x470D990", Slot = "7")]
	internal override void ProcessMarkup(XmlNode[] markup)
	{
	}

	[Token(Token = "0x600144A")]
	[Address(RVA = "0x470D9F0", Offset = "0x470D9F0", VA = "0x470D9F0", Slot = "8")]
	internal override void ProcessCData(string value)
	{
	}

	[Token(Token = "0x600144B")]
	[Address(RVA = "0x470DA70", Offset = "0x470DA70", VA = "0x470DA70", Slot = "9")]
	internal override void StartChildren()
	{
	}

	[Token(Token = "0x600144C")]
	[Address(RVA = "0x470DAA0", Offset = "0x470DAA0", VA = "0x470DAA0", Slot = "10")]
	internal override void EndChildren()
	{
	}

	[Token(Token = "0x600144D")]
	[Address(RVA = "0x470CA60", Offset = "0x470CA60", VA = "0x470CA60")]
	private void Push()
	{
	}

	[Token(Token = "0x600144E")]
	[Address(RVA = "0x470DAD0", Offset = "0x470DAD0", VA = "0x470DAD0")]
	private void Pop()
	{
	}

	[Token(Token = "0x600144F")]
	[Address(RVA = "0x470DB50", Offset = "0x470DB50", VA = "0x470DB50")]
	private void PushGroupInfo()
	{
	}

	[Token(Token = "0x6001450")]
	[Address(RVA = "0x470DC70", Offset = "0x470DC70", VA = "0x470DC70")]
	private void PopGroupInfo()
	{
	}

	[Token(Token = "0x6001451")]
	[Address(RVA = "0x470DCF0", Offset = "0x470DCF0", VA = "0x470DCF0")]
	private static void XDR_InitRoot(XdrBuilder builder, object obj)
	{
	}

	[Token(Token = "0x6001452")]
	[Address(RVA = "0x470DD70", Offset = "0x470DD70", VA = "0x470DD70")]
	private static void XDR_BuildRoot_Name(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001453")]
	[Address(RVA = "0x470DDF0", Offset = "0x470DDF0", VA = "0x470DDF0")]
	private static void XDR_BuildRoot_ID(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001454")]
	[Address(RVA = "0x470DE00", Offset = "0x470DE00", VA = "0x470DE00")]
	private static void XDR_BeginRoot(XdrBuilder builder)
	{
	}

	[Token(Token = "0x6001455")]
	[Address(RVA = "0x470DEE0", Offset = "0x470DEE0", VA = "0x470DEE0")]
	private static void XDR_EndRoot(XdrBuilder builder)
	{
	}

	[Token(Token = "0x6001456")]
	[Address(RVA = "0x470E580", Offset = "0x470E580", VA = "0x470E580")]
	private static void XDR_InitElementType(XdrBuilder builder, object obj)
	{
	}

	[Token(Token = "0x6001457")]
	[Address(RVA = "0x470E6B0", Offset = "0x470E6B0", VA = "0x470E6B0")]
	private static void XDR_BuildElementType_Name(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001458")]
	[Address(RVA = "0x470E8B0", Offset = "0x470E8B0", VA = "0x470E8B0")]
	private static void XDR_BuildElementType_Content(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001459")]
	[Address(RVA = "0x470EB20", Offset = "0x470EB20", VA = "0x470EB20")]
	private static void XDR_BuildElementType_Model(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x600145A")]
	[Address(RVA = "0x470ECA0", Offset = "0x470ECA0", VA = "0x470ECA0")]
	private static void XDR_BuildElementType_Order(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x600145B")]
	[Address(RVA = "0x470EEA0", Offset = "0x470EEA0", VA = "0x470EEA0")]
	private static void XDR_BuildElementType_DtType(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x600145C")]
	[Address(RVA = "0x470F080", Offset = "0x470F080", VA = "0x470F080")]
	private static void XDR_BuildElementType_DtValues(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x600145D")]
	[Address(RVA = "0x470F160", Offset = "0x470F160", VA = "0x470F160")]
	private static void XDR_BuildElementType_DtMaxLength(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x600145E")]
	[Address(RVA = "0x470F2F0", Offset = "0x470F2F0", VA = "0x470F2F0")]
	private static void XDR_BuildElementType_DtMinLength(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x600145F")]
	[Address(RVA = "0x470F480", Offset = "0x470F480", VA = "0x470F480")]
	private static void XDR_BeginElementType(XdrBuilder builder)
	{
	}

	[Token(Token = "0x6001460")]
	[Address(RVA = "0x470F7F0", Offset = "0x470F7F0", VA = "0x470F7F0")]
	private static void XDR_EndElementType(XdrBuilder builder)
	{
	}

	[Token(Token = "0x6001461")]
	[Address(RVA = "0x470FD90", Offset = "0x470FD90", VA = "0x470FD90")]
	private static void XDR_InitAttributeType(XdrBuilder builder, object obj)
	{
	}

	[Token(Token = "0x6001462")]
	[Address(RVA = "0x470FEA0", Offset = "0x470FEA0", VA = "0x470FEA0")]
	private static void XDR_BuildAttributeType_Name(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001463")]
	[Address(RVA = "0x4710150", Offset = "0x4710150", VA = "0x4710150")]
	private static void XDR_BuildAttributeType_Required(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001464")]
	[Address(RVA = "0x47102C0", Offset = "0x47102C0", VA = "0x47102C0")]
	private static void XDR_BuildAttributeType_Default(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001465")]
	[Address(RVA = "0x47102F0", Offset = "0x47102F0", VA = "0x47102F0")]
	private static void XDR_BuildAttributeType_DtType(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001466")]
	[Address(RVA = "0x4710560", Offset = "0x4710560", VA = "0x4710560")]
	private static void XDR_BuildAttributeType_DtValues(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001467")]
	[Address(RVA = "0x4710640", Offset = "0x4710640", VA = "0x4710640")]
	private static void XDR_BuildAttributeType_DtMaxLength(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001468")]
	[Address(RVA = "0x47106B0", Offset = "0x47106B0", VA = "0x47106B0")]
	private static void XDR_BuildAttributeType_DtMinLength(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001469")]
	[Address(RVA = "0x4710720", Offset = "0x4710720", VA = "0x4710720")]
	private static void XDR_BeginAttributeType(XdrBuilder builder)
	{
	}

	[Token(Token = "0x600146A")]
	[Address(RVA = "0x47107A0", Offset = "0x47107A0", VA = "0x47107A0")]
	private static void XDR_EndAttributeType(XdrBuilder builder)
	{
	}

	[Token(Token = "0x600146B")]
	[Address(RVA = "0x4710C70", Offset = "0x4710C70", VA = "0x4710C70")]
	private static void XDR_InitElement(XdrBuilder builder, object obj)
	{
	}

	[Token(Token = "0x600146C")]
	[Address(RVA = "0x4710D00", Offset = "0x4710D00", VA = "0x4710D00")]
	private static void XDR_BuildElement_Type(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x600146D")]
	[Address(RVA = "0x4710F50", Offset = "0x4710F50", VA = "0x4710F50")]
	private static void XDR_BuildElement_MinOccurs(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x600146E")]
	[Address(RVA = "0x47110B0", Offset = "0x47110B0", VA = "0x47110B0")]
	private static void XDR_BuildElement_MaxOccurs(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x600146F")]
	[Address(RVA = "0x4711240", Offset = "0x4711240", VA = "0x4711240")]
	private static void XDR_EndElement(XdrBuilder builder)
	{
	}

	[Token(Token = "0x6001470")]
	[Address(RVA = "0x4711360", Offset = "0x4711360", VA = "0x4711360")]
	private static void XDR_InitAttribute(XdrBuilder builder, object obj)
	{
	}

	[Token(Token = "0x6001471")]
	[Address(RVA = "0x4711410", Offset = "0x4711410", VA = "0x4711410")]
	private static void XDR_BuildAttribute_Type(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001472")]
	[Address(RVA = "0x47114F0", Offset = "0x47114F0", VA = "0x47114F0")]
	private static void XDR_BuildAttribute_Required(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001473")]
	[Address(RVA = "0x4711570", Offset = "0x4711570", VA = "0x4711570")]
	private static void XDR_BuildAttribute_Default(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001474")]
	[Address(RVA = "0x47115A0", Offset = "0x47115A0", VA = "0x47115A0")]
	private static void XDR_BeginAttribute(XdrBuilder builder)
	{
	}

	[Token(Token = "0x6001475")]
	[Address(RVA = "0x4711920", Offset = "0x4711920", VA = "0x4711920")]
	private static void XDR_EndAttribute(XdrBuilder builder)
	{
	}

	[Token(Token = "0x6001476")]
	[Address(RVA = "0x4711A60", Offset = "0x4711A60", VA = "0x4711A60")]
	private static void XDR_InitGroup(XdrBuilder builder, object obj)
	{
	}

	[Token(Token = "0x6001477")]
	[Address(RVA = "0x4711B30", Offset = "0x4711B30", VA = "0x4711B30")]
	private static void XDR_BuildGroup_Order(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001478")]
	[Address(RVA = "0x4711C20", Offset = "0x4711C20", VA = "0x4711C20")]
	private static void XDR_BuildGroup_MinOccurs(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001479")]
	[Address(RVA = "0x4711CA0", Offset = "0x4711CA0", VA = "0x4711CA0")]
	private static void XDR_BuildGroup_MaxOccurs(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x600147A")]
	[Address(RVA = "0x4711D20", Offset = "0x4711D20", VA = "0x4711D20")]
	private static void XDR_EndGroup(XdrBuilder builder)
	{
	}

	[Token(Token = "0x600147B")]
	[Address(RVA = "0x4711EA0", Offset = "0x4711EA0", VA = "0x4711EA0")]
	private static void XDR_InitElementDtType(XdrBuilder builder, object obj)
	{
	}

	[Token(Token = "0x600147C")]
	[Address(RVA = "0x4711F50", Offset = "0x4711F50", VA = "0x4711F50")]
	private static void XDR_EndElementDtType(XdrBuilder builder)
	{
	}

	[Token(Token = "0x600147D")]
	[Address(RVA = "0x4712050", Offset = "0x4712050", VA = "0x4712050")]
	private static void XDR_InitAttributeDtType(XdrBuilder builder, object obj)
	{
	}

	[Token(Token = "0x600147E")]
	[Address(RVA = "0x47120C0", Offset = "0x47120C0", VA = "0x47120C0")]
	private static void XDR_EndAttributeDtType(XdrBuilder builder)
	{
	}

	[Token(Token = "0x600147F")]
	[Address(RVA = "0x470C890", Offset = "0x470C890", VA = "0x470C890")]
	private bool GetNextState(XmlQualifiedName qname)
	{
		return default(bool);
	}

	[Token(Token = "0x6001480")]
	[Address(RVA = "0x470CAB0", Offset = "0x470CAB0", VA = "0x470CAB0")]
	private bool IsSkipableElement(XmlQualifiedName qname)
	{
		return default(bool);
	}

	[Token(Token = "0x6001481")]
	[Address(RVA = "0x470D660", Offset = "0x470D660", VA = "0x470D660")]
	private bool IsSkipableAttribute(XmlQualifiedName qname)
	{
		return default(bool);
	}

	[Token(Token = "0x6001482")]
	[Address(RVA = "0x470ED40", Offset = "0x470ED40", VA = "0x470ED40")]
	private int GetOrder(XmlQualifiedName qname)
	{
		return default(int);
	}

	[Token(Token = "0x6001483")]
	[Address(RVA = "0x4710EA0", Offset = "0x4710EA0", VA = "0x4710EA0")]
	private void AddOrder()
	{
	}

	[Token(Token = "0x6001484")]
	[Address(RVA = "0x47101C0", Offset = "0x47101C0", VA = "0x47101C0")]
	private static bool IsYes(object obj, XdrBuilder builder)
	{
		return default(bool);
	}

	[Token(Token = "0x6001485")]
	[Address(RVA = "0x4710FC0", Offset = "0x4710FC0", VA = "0x4710FC0")]
	private static uint ParseMinOccurs(object obj, XdrBuilder builder)
	{
		return default(uint);
	}

	[Token(Token = "0x6001486")]
	[Address(RVA = "0x4711120", Offset = "0x4711120", VA = "0x4711120")]
	private static uint ParseMaxOccurs(object obj, XdrBuilder builder)
	{
		return default(uint);
	}

	[Token(Token = "0x6001487")]
	[Address(RVA = "0x4711330", Offset = "0x4711330", VA = "0x4711330")]
	private static void HandleMinMax(ParticleContentValidator pContent, uint cMin, uint cMax)
	{
	}

	[Token(Token = "0x6001488")]
	[Address(RVA = "0x470F1D0", Offset = "0x470F1D0", VA = "0x470F1D0")]
	private static void ParseDtMaxLength(ref uint cVal, object obj, XdrBuilder builder)
	{
	}

	[Token(Token = "0x6001489")]
	[Address(RVA = "0x470F360", Offset = "0x470F360", VA = "0x470F360")]
	private static void ParseDtMinLength(ref uint cVal, object obj, XdrBuilder builder)
	{
	}

	[Token(Token = "0x600148A")]
	[Address(RVA = "0x470FD10", Offset = "0x470FD10", VA = "0x470FD10")]
	private static void CompareMinMaxLength(uint cMin, uint cMax, XdrBuilder builder)
	{
	}

	[Token(Token = "0x600148B")]
	[Address(RVA = "0x47121C0", Offset = "0x47121C0", VA = "0x47121C0")]
	private static bool ParseInteger(string str, ref uint n)
	{
		return default(bool);
	}

	[Token(Token = "0x600148C")]
	[Address(RVA = "0x470E4B0", Offset = "0x470E4B0", VA = "0x470E4B0")]
	private void XDR_CheckAttributeDefault(DeclBaseInfo decl, SchemaAttDef pAttdef)
	{
	}

	[Token(Token = "0x600148D")]
	[Address(RVA = "0x4710C30", Offset = "0x4710C30", VA = "0x4710C30")]
	private void SetAttributePresence(SchemaAttDef pAttdef, bool fRequired)
	{
	}

	[Token(Token = "0x600148E")]
	[Address(RVA = "0x470E940", Offset = "0x470E940", VA = "0x470E940")]
	private int GetContent(XmlQualifiedName qname)
	{
		return default(int);
	}

	[Token(Token = "0x600148F")]
	[Address(RVA = "0x470EBB0", Offset = "0x470EBB0", VA = "0x470EBB0")]
	private bool GetModel(XmlQualifiedName qname)
	{
		return default(bool);
	}

	[Token(Token = "0x6001490")]
	[Address(RVA = "0x47103A0", Offset = "0x47103A0", VA = "0x47103A0")]
	private XmlSchemaDatatype CheckDatatype(string str)
	{
		return null;
	}

	[Token(Token = "0x6001491")]
	[Address(RVA = "0x4710B30", Offset = "0x4710B30", VA = "0x4710B30")]
	private void CheckDefaultAttValue(SchemaAttDef attDef)
	{
	}

	[Token(Token = "0x6001492")]
	[Address(RVA = "0x470D060", Offset = "0x470D060", VA = "0x470D060")]
	private bool IsGlobal(int flags)
	{
		return default(bool);
	}

	[Token(Token = "0x6001493")]
	[Address(RVA = "0x470D820", Offset = "0x470D820", VA = "0x470D820")]
	private void SendValidationEvent(string code, string[] args, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x6001494")]
	[Address(RVA = "0x470EFF0", Offset = "0x470EFF0", VA = "0x470EFF0")]
	private void SendValidationEvent(string code)
	{
	}

	[Token(Token = "0x6001495")]
	[Address(RVA = "0x470CB90", Offset = "0x470CB90", VA = "0x470CB90")]
	private void SendValidationEvent(string code, string msg)
	{
	}

	[Token(Token = "0x6001496")]
	[Address(RVA = "0x4712900", Offset = "0x4712900", VA = "0x4712900")]
	private void SendValidationEvent(XmlSchemaException e, XmlSeverityType severity)
	{
	}
}
