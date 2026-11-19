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
		[Address(RVA = "0x6019A90", Offset = "0x6018A90", VA = "0x6019A90")]
		internal DeclBaseInfo()
		{
		}

		[Token(Token = "0x6001499")]
		[Address(RVA = "0x6019FE0", Offset = "0x6018FE0", VA = "0x6019FE0")]
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
		[Address(RVA = "0x601F750", Offset = "0x601E750", VA = "0x601F750")]
		internal static void Copy(GroupContent from, GroupContent to)
		{
		}

		[Token(Token = "0x600149B")]
		[Address(RVA = "0x60163D0", Offset = "0x60153D0", VA = "0x60163D0")]
		internal static GroupContent Copy(GroupContent other)
		{
			return null;
		}

		[Token(Token = "0x600149C")]
		[Address(RVA = "0x6014DC0", Offset = "0x6013DC0", VA = "0x6014DC0")]
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
		[Address(RVA = "0x6014DA0", Offset = "0x6013DA0", VA = "0x6014DA0")]
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
		[Address(RVA = "0x6014DB0", Offset = "0x6013DB0", VA = "0x6014DB0")]
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
		[Address(RVA = "0x601F380", Offset = "0x601E380", VA = "0x601F380")]
		internal XdrAttributeEntry(SchemaNames.Token a, XmlTokenizedType ttype, XdrBuildFunction build)
		{
		}

		[Token(Token = "0x60014A8")]
		[Address(RVA = "0x601F410", Offset = "0x601E410", VA = "0x601F410")]
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
		[Address(RVA = "0x601F4A0", Offset = "0x601E4A0", VA = "0x601F4A0")]
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
		[Address(RVA = "0x6015FC0", Offset = "0x6014FC0", VA = "0x6015FC0")]
		set
		{
		}
	}

	[Token(Token = "0x6001442")]
	[Address(RVA = "0x6014AD0", Offset = "0x6013AD0", VA = "0x6014AD0")]
	internal XdrBuilder(XmlReader reader, XmlNamespaceManager curmgr, SchemaInfo sinfo, string targetNamspace, XmlNameTable nameTable, SchemaNames schemaNames, ValidationEventHandler eventhandler)
	{
	}

	[Token(Token = "0x6001443")]
	[Address(RVA = "0x6014DD0", Offset = "0x6013DD0", VA = "0x6014DD0", Slot = "4")]
	internal override bool ProcessElement(string prefix, string name, string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x6001444")]
	[Address(RVA = "0x6015480", Offset = "0x6014480", VA = "0x6015480", Slot = "5")]
	internal override void ProcessAttribute(string prefix, string name, string ns, string value)
	{
	}

	[Token(Token = "0x6001446")]
	[Address(RVA = "0x6015930", Offset = "0x6014930", VA = "0x6015930")]
	private bool LoadSchema(string uri)
	{
		return default(bool);
	}

	[Token(Token = "0x6001447")]
	[Address(RVA = "0x6015890", Offset = "0x6014890", VA = "0x6015890")]
	internal static bool IsXdrSchema(string uri)
	{
		return default(bool);
	}

	[Token(Token = "0x6001448")]
	[Address(RVA = "0x6016140", Offset = "0x6015140", VA = "0x6016140", Slot = "6")]
	internal override bool IsContentParsed()
	{
		return default(bool);
	}

	[Token(Token = "0x6001449")]
	[Address(RVA = "0x6016150", Offset = "0x6015150", VA = "0x6016150", Slot = "7")]
	internal override void ProcessMarkup(XmlNode[] markup)
	{
	}

	[Token(Token = "0x600144A")]
	[Address(RVA = "0x60161B0", Offset = "0x60151B0", VA = "0x60161B0", Slot = "8")]
	internal override void ProcessCData(string value)
	{
	}

	[Token(Token = "0x600144B")]
	[Address(RVA = "0x6016230", Offset = "0x6015230", VA = "0x6016230", Slot = "9")]
	internal override void StartChildren()
	{
	}

	[Token(Token = "0x600144C")]
	[Address(RVA = "0x6016260", Offset = "0x6015260", VA = "0x6016260", Slot = "10")]
	internal override void EndChildren()
	{
	}

	[Token(Token = "0x600144D")]
	[Address(RVA = "0x6015270", Offset = "0x6014270", VA = "0x6015270")]
	private void Push()
	{
	}

	[Token(Token = "0x600144E")]
	[Address(RVA = "0x60162A0", Offset = "0x60152A0", VA = "0x60162A0")]
	private void Pop()
	{
	}

	[Token(Token = "0x600144F")]
	[Address(RVA = "0x6016320", Offset = "0x6015320", VA = "0x6016320")]
	private void PushGroupInfo()
	{
	}

	[Token(Token = "0x6001450")]
	[Address(RVA = "0x6016440", Offset = "0x6015440", VA = "0x6016440")]
	private void PopGroupInfo()
	{
	}

	[Token(Token = "0x6001451")]
	[Address(RVA = "0x60164C0", Offset = "0x60154C0", VA = "0x60164C0")]
	private static void XDR_InitRoot(XdrBuilder builder, object obj)
	{
	}

	[Token(Token = "0x6001452")]
	[Address(RVA = "0x6016540", Offset = "0x6015540", VA = "0x6016540")]
	private static void XDR_BuildRoot_Name(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001453")]
	[Address(RVA = "0x60165C0", Offset = "0x60155C0", VA = "0x60165C0")]
	private static void XDR_BuildRoot_ID(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001454")]
	[Address(RVA = "0x60165D0", Offset = "0x60155D0", VA = "0x60165D0")]
	private static void XDR_BeginRoot(XdrBuilder builder)
	{
	}

	[Token(Token = "0x6001455")]
	[Address(RVA = "0x60166B0", Offset = "0x60156B0", VA = "0x60166B0")]
	private static void XDR_EndRoot(XdrBuilder builder)
	{
	}

	[Token(Token = "0x6001456")]
	[Address(RVA = "0x6016D00", Offset = "0x6015D00", VA = "0x6016D00")]
	private static void XDR_InitElementType(XdrBuilder builder, object obj)
	{
	}

	[Token(Token = "0x6001457")]
	[Address(RVA = "0x6016E30", Offset = "0x6015E30", VA = "0x6016E30")]
	private static void XDR_BuildElementType_Name(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001458")]
	[Address(RVA = "0x6017030", Offset = "0x6016030", VA = "0x6017030")]
	private static void XDR_BuildElementType_Content(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001459")]
	[Address(RVA = "0x60172B0", Offset = "0x60162B0", VA = "0x60172B0")]
	private static void XDR_BuildElementType_Model(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x600145A")]
	[Address(RVA = "0x6017430", Offset = "0x6016430", VA = "0x6017430")]
	private static void XDR_BuildElementType_Order(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x600145B")]
	[Address(RVA = "0x6017630", Offset = "0x6016630", VA = "0x6017630")]
	private static void XDR_BuildElementType_DtType(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x600145C")]
	[Address(RVA = "0x6017810", Offset = "0x6016810", VA = "0x6017810")]
	private static void XDR_BuildElementType_DtValues(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x600145D")]
	[Address(RVA = "0x60178F0", Offset = "0x60168F0", VA = "0x60178F0")]
	private static void XDR_BuildElementType_DtMaxLength(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x600145E")]
	[Address(RVA = "0x6017A80", Offset = "0x6016A80", VA = "0x6017A80")]
	private static void XDR_BuildElementType_DtMinLength(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x600145F")]
	[Address(RVA = "0x6017C10", Offset = "0x6016C10", VA = "0x6017C10")]
	private static void XDR_BeginElementType(XdrBuilder builder)
	{
	}

	[Token(Token = "0x6001460")]
	[Address(RVA = "0x6017F30", Offset = "0x6016F30", VA = "0x6017F30")]
	private static void XDR_EndElementType(XdrBuilder builder)
	{
	}

	[Token(Token = "0x6001461")]
	[Address(RVA = "0x6018460", Offset = "0x6017460", VA = "0x6018460")]
	private static void XDR_InitAttributeType(XdrBuilder builder, object obj)
	{
	}

	[Token(Token = "0x6001462")]
	[Address(RVA = "0x6018570", Offset = "0x6017570", VA = "0x6018570")]
	private static void XDR_BuildAttributeType_Name(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001463")]
	[Address(RVA = "0x6018820", Offset = "0x6017820", VA = "0x6018820")]
	private static void XDR_BuildAttributeType_Required(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001464")]
	[Address(RVA = "0x6018990", Offset = "0x6017990", VA = "0x6018990")]
	private static void XDR_BuildAttributeType_Default(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001465")]
	[Address(RVA = "0x60189C0", Offset = "0x60179C0", VA = "0x60189C0")]
	private static void XDR_BuildAttributeType_DtType(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001466")]
	[Address(RVA = "0x6018C30", Offset = "0x6017C30", VA = "0x6018C30")]
	private static void XDR_BuildAttributeType_DtValues(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001467")]
	[Address(RVA = "0x6018D10", Offset = "0x6017D10", VA = "0x6018D10")]
	private static void XDR_BuildAttributeType_DtMaxLength(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001468")]
	[Address(RVA = "0x6018D80", Offset = "0x6017D80", VA = "0x6018D80")]
	private static void XDR_BuildAttributeType_DtMinLength(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001469")]
	[Address(RVA = "0x6018DF0", Offset = "0x6017DF0", VA = "0x6018DF0")]
	private static void XDR_BeginAttributeType(XdrBuilder builder)
	{
	}

	[Token(Token = "0x600146A")]
	[Address(RVA = "0x6018E70", Offset = "0x6017E70", VA = "0x6018E70")]
	private static void XDR_EndAttributeType(XdrBuilder builder)
	{
	}

	[Token(Token = "0x600146B")]
	[Address(RVA = "0x6019310", Offset = "0x6018310", VA = "0x6019310")]
	private static void XDR_InitElement(XdrBuilder builder, object obj)
	{
	}

	[Token(Token = "0x600146C")]
	[Address(RVA = "0x60193A0", Offset = "0x60183A0", VA = "0x60193A0")]
	private static void XDR_BuildElement_Type(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x600146D")]
	[Address(RVA = "0x60195F0", Offset = "0x60185F0", VA = "0x60195F0")]
	private static void XDR_BuildElement_MinOccurs(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x600146E")]
	[Address(RVA = "0x6019750", Offset = "0x6018750", VA = "0x6019750")]
	private static void XDR_BuildElement_MaxOccurs(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x600146F")]
	[Address(RVA = "0x60198E0", Offset = "0x60188E0", VA = "0x60198E0")]
	private static void XDR_EndElement(XdrBuilder builder)
	{
	}

	[Token(Token = "0x6001470")]
	[Address(RVA = "0x6019A00", Offset = "0x6018A00", VA = "0x6019A00")]
	private static void XDR_InitAttribute(XdrBuilder builder, object obj)
	{
	}

	[Token(Token = "0x6001471")]
	[Address(RVA = "0x6019AB0", Offset = "0x6018AB0", VA = "0x6019AB0")]
	private static void XDR_BuildAttribute_Type(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001472")]
	[Address(RVA = "0x6019B90", Offset = "0x6018B90", VA = "0x6019B90")]
	private static void XDR_BuildAttribute_Required(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001473")]
	[Address(RVA = "0x6019C10", Offset = "0x6018C10", VA = "0x6019C10")]
	private static void XDR_BuildAttribute_Default(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001474")]
	[Address(RVA = "0x6019C40", Offset = "0x6018C40", VA = "0x6019C40")]
	private static void XDR_BeginAttribute(XdrBuilder builder)
	{
	}

	[Token(Token = "0x6001475")]
	[Address(RVA = "0x6019FC0", Offset = "0x6018FC0", VA = "0x6019FC0")]
	private static void XDR_EndAttribute(XdrBuilder builder)
	{
	}

	[Token(Token = "0x6001476")]
	[Address(RVA = "0x601A100", Offset = "0x6019100", VA = "0x601A100")]
	private static void XDR_InitGroup(XdrBuilder builder, object obj)
	{
	}

	[Token(Token = "0x6001477")]
	[Address(RVA = "0x601A1D0", Offset = "0x60191D0", VA = "0x601A1D0")]
	private static void XDR_BuildGroup_Order(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001478")]
	[Address(RVA = "0x601A2C0", Offset = "0x60192C0", VA = "0x601A2C0")]
	private static void XDR_BuildGroup_MinOccurs(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x6001479")]
	[Address(RVA = "0x601A340", Offset = "0x6019340", VA = "0x601A340")]
	private static void XDR_BuildGroup_MaxOccurs(XdrBuilder builder, object obj, string prefix)
	{
	}

	[Token(Token = "0x600147A")]
	[Address(RVA = "0x601A3C0", Offset = "0x60193C0", VA = "0x601A3C0")]
	private static void XDR_EndGroup(XdrBuilder builder)
	{
	}

	[Token(Token = "0x600147B")]
	[Address(RVA = "0x601A540", Offset = "0x6019540", VA = "0x601A540")]
	private static void XDR_InitElementDtType(XdrBuilder builder, object obj)
	{
	}

	[Token(Token = "0x600147C")]
	[Address(RVA = "0x601A5F0", Offset = "0x60195F0", VA = "0x601A5F0")]
	private static void XDR_EndElementDtType(XdrBuilder builder)
	{
	}

	[Token(Token = "0x600147D")]
	[Address(RVA = "0x601A6F0", Offset = "0x60196F0", VA = "0x601A6F0")]
	private static void XDR_InitAttributeDtType(XdrBuilder builder, object obj)
	{
	}

	[Token(Token = "0x600147E")]
	[Address(RVA = "0x601A760", Offset = "0x6019760", VA = "0x601A760")]
	private static void XDR_EndAttributeDtType(XdrBuilder builder)
	{
	}

	[Token(Token = "0x600147F")]
	[Address(RVA = "0x60150C0", Offset = "0x60140C0", VA = "0x60150C0")]
	private bool GetNextState(XmlQualifiedName qname)
	{
		return default(bool);
	}

	[Token(Token = "0x6001480")]
	[Address(RVA = "0x60152C0", Offset = "0x60142C0", VA = "0x60152C0")]
	private bool IsSkipableElement(XmlQualifiedName qname)
	{
		return default(bool);
	}

	[Token(Token = "0x6001481")]
	[Address(RVA = "0x6015E20", Offset = "0x6014E20", VA = "0x6015E20")]
	private bool IsSkipableAttribute(XmlQualifiedName qname)
	{
		return default(bool);
	}

	[Token(Token = "0x6001482")]
	[Address(RVA = "0x60174D0", Offset = "0x60164D0", VA = "0x60174D0")]
	private int GetOrder(XmlQualifiedName qname)
	{
		return default(int);
	}

	[Token(Token = "0x6001483")]
	[Address(RVA = "0x6019540", Offset = "0x6018540", VA = "0x6019540")]
	private void AddOrder()
	{
	}

	[Token(Token = "0x6001484")]
	[Address(RVA = "0x6018890", Offset = "0x6017890", VA = "0x6018890")]
	private static bool IsYes(object obj, XdrBuilder builder)
	{
		return default(bool);
	}

	[Token(Token = "0x6001485")]
	[Address(RVA = "0x6019660", Offset = "0x6018660", VA = "0x6019660")]
	private static uint ParseMinOccurs(object obj, XdrBuilder builder)
	{
		return default(uint);
	}

	[Token(Token = "0x6001486")]
	[Address(RVA = "0x60197C0", Offset = "0x60187C0", VA = "0x60197C0")]
	private static uint ParseMaxOccurs(object obj, XdrBuilder builder)
	{
		return default(uint);
	}

	[Token(Token = "0x6001487")]
	[Address(RVA = "0x60199D0", Offset = "0x60189D0", VA = "0x60199D0")]
	private static void HandleMinMax(ParticleContentValidator pContent, uint cMin, uint cMax)
	{
	}

	[Token(Token = "0x6001488")]
	[Address(RVA = "0x6017960", Offset = "0x6016960", VA = "0x6017960")]
	private static void ParseDtMaxLength(ref uint cVal, object obj, XdrBuilder builder)
	{
	}

	[Token(Token = "0x6001489")]
	[Address(RVA = "0x6017AF0", Offset = "0x6016AF0", VA = "0x6017AF0")]
	private static void ParseDtMinLength(ref uint cVal, object obj, XdrBuilder builder)
	{
	}

	[Token(Token = "0x600148A")]
	[Address(RVA = "0x60183F0", Offset = "0x60173F0", VA = "0x60183F0")]
	private static void CompareMinMaxLength(uint cMin, uint cMax, XdrBuilder builder)
	{
	}

	[Token(Token = "0x600148B")]
	[Address(RVA = "0x601A860", Offset = "0x6019860", VA = "0x601A860")]
	private static bool ParseInteger(string str, ref uint n)
	{
		return default(bool);
	}

	[Token(Token = "0x600148C")]
	[Address(RVA = "0x6016C30", Offset = "0x6015C30", VA = "0x6016C30")]
	private void XDR_CheckAttributeDefault(DeclBaseInfo decl, SchemaAttDef pAttdef)
	{
	}

	[Token(Token = "0x600148D")]
	[Address(RVA = "0x60192D0", Offset = "0x60182D0", VA = "0x60192D0")]
	private void SetAttributePresence(SchemaAttDef pAttdef, bool fRequired)
	{
	}

	[Token(Token = "0x600148E")]
	[Address(RVA = "0x60170C0", Offset = "0x60160C0", VA = "0x60170C0")]
	private int GetContent(XmlQualifiedName qname)
	{
		return default(int);
	}

	[Token(Token = "0x600148F")]
	[Address(RVA = "0x6017340", Offset = "0x6016340", VA = "0x6017340")]
	private bool GetModel(XmlQualifiedName qname)
	{
		return default(bool);
	}

	[Token(Token = "0x6001490")]
	[Address(RVA = "0x6018A70", Offset = "0x6017A70", VA = "0x6018A70")]
	private XmlSchemaDatatype CheckDatatype(string str)
	{
		return null;
	}

	[Token(Token = "0x6001491")]
	[Address(RVA = "0x60191D0", Offset = "0x60181D0", VA = "0x60191D0")]
	private void CheckDefaultAttValue(SchemaAttDef attDef)
	{
	}

	[Token(Token = "0x6001492")]
	[Address(RVA = "0x6015880", Offset = "0x6014880", VA = "0x6015880")]
	private bool IsGlobal(int flags)
	{
		return default(bool);
	}

	[Token(Token = "0x6001493")]
	[Address(RVA = "0x6015FE0", Offset = "0x6014FE0", VA = "0x6015FE0")]
	private void SendValidationEvent(string code, string[] args, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x6001494")]
	[Address(RVA = "0x6017780", Offset = "0x6016780", VA = "0x6017780")]
	private void SendValidationEvent(string code)
	{
	}

	[Token(Token = "0x6001495")]
	[Address(RVA = "0x60153A0", Offset = "0x60143A0", VA = "0x60153A0")]
	private void SendValidationEvent(string code, string msg)
	{
	}

	[Token(Token = "0x6001496")]
	[Address(RVA = "0x601AF20", Offset = "0x6019F20", VA = "0x601AF20")]
	private void SendValidationEvent(XmlSchemaException e, XmlSeverityType severity)
	{
	}
}
