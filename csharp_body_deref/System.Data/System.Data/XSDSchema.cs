// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.XSDSchema
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.Xml;
using System.Xml.Schema;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000097")]
internal sealed class XSDSchema : XMLSchema
{
	[Token(Token = "0x2000098")]
	private sealed class NameType : IComparable
	{
		[Token(Token = "0x40002FF")]
		[FieldOffset(Offset = "0x10")]
		public readonly string name;

		[Token(Token = "0x4000300")]
		[FieldOffset(Offset = "0x18")]
		public readonly Type type;

		[Token(Token = "0x600084C")]
		[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
		public NameType(string n, Type t)
		{
		}

		[Token(Token = "0x600084D")]
		[Address(RVA = "0x25227A0", Offset = "0x2520DA0", VA = "0x1825227A0", Slot = "4")]
		public int CompareTo(object obj)
		{
			return default(int);
		}
	}

	[Token(Token = "0x40002EB")]
	[FieldOffset(Offset = "0x10")]
	private XmlSchemaSet _schemaSet;

	[Token(Token = "0x40002EC")]
	[FieldOffset(Offset = "0x18")]
	private XmlSchemaElement _dsElement;

	[Token(Token = "0x40002ED")]
	[FieldOffset(Offset = "0x20")]
	private DataSet _ds;

	[Token(Token = "0x40002EE")]
	[FieldOffset(Offset = "0x28")]
	private string _schemaName;

	[Token(Token = "0x40002EF")]
	[FieldOffset(Offset = "0x30")]
	private ArrayList _columnExpressions;

	[Token(Token = "0x40002F0")]
	[FieldOffset(Offset = "0x38")]
	private Hashtable _constraintNodes;

	[Token(Token = "0x40002F1")]
	[FieldOffset(Offset = "0x40")]
	private ArrayList _refTables;

	[Token(Token = "0x40002F2")]
	[FieldOffset(Offset = "0x48")]
	private ArrayList _complexTypes;

	[Token(Token = "0x40002F3")]
	[FieldOffset(Offset = "0x50")]
	private XmlSchemaObjectCollection _annotations;

	[Token(Token = "0x40002F4")]
	[FieldOffset(Offset = "0x58")]
	private XmlSchemaObjectCollection _elements;

	[Token(Token = "0x40002F5")]
	[FieldOffset(Offset = "0x60")]
	private Hashtable _attributes;

	[Token(Token = "0x40002F6")]
	[FieldOffset(Offset = "0x68")]
	private Hashtable _elementsTable;

	[Token(Token = "0x40002F7")]
	[FieldOffset(Offset = "0x70")]
	private Hashtable _attributeGroups;

	[Token(Token = "0x40002F8")]
	[FieldOffset(Offset = "0x78")]
	private Hashtable _schemaTypes;

	[Token(Token = "0x40002F9")]
	[FieldOffset(Offset = "0x80")]
	private Hashtable _expressions;

	[Token(Token = "0x40002FA")]
	[FieldOffset(Offset = "0x88")]
	private Dictionary<DataTable, List<DataTable>> _tableDictionary;

	[Token(Token = "0x40002FB")]
	[FieldOffset(Offset = "0x90")]
	private Hashtable _udSimpleTypes;

	[Token(Token = "0x40002FC")]
	[FieldOffset(Offset = "0x98")]
	private Hashtable _existingSimpleTypeMap;

	[Token(Token = "0x40002FD")]
	[FieldOffset(Offset = "0xA0")]
	private bool _fromInference;

	[Token(Token = "0x40002FE")]
	[FieldOffset(Offset = "0x0")]
	private static readonly NameType[] s_mapNameTypeXsd;

	[Token(Token = "0x1700014B")]
	internal bool FromInference
	{
		[Token(Token = "0x6000815")]
		[Address(RVA = "0x1B90350", Offset = "0x1B8E950", VA = "0x181B90350")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000816")]
		[Address(RVA = "0x1C5E4B0", Offset = "0x1C5CAB0", VA = "0x181C5E4B0")]
		set
		{
		}
	}

	[Token(Token = "0x6000817")]
	[Address(RVA = "0x2530680", Offset = "0x252EC80", VA = "0x182530680")]
	private void CollectElementsAnnotations(XmlSchema schema)
	{
	}

	[Token(Token = "0x6000818")]
	[Address(RVA = "0x252FD70", Offset = "0x252E370", VA = "0x18252FD70")]
	private void CollectElementsAnnotations(XmlSchema schema, ArrayList schemaList)
	{
	}

	[Token(Token = "0x6000819")]
	[Address(RVA = "0x253D5F0", Offset = "0x253BBF0", VA = "0x18253D5F0")]
	internal static string QualifiedName(string name)
	{
		return null;
	}

	[Token(Token = "0x600081A")]
	[Address(RVA = "0x253DC30", Offset = "0x253C230", VA = "0x18253DC30")]
	internal static void SetProperties(object instance, XmlAttribute[] attrs)
	{
	}

	[Token(Token = "0x600081B")]
	[Address(RVA = "0x253D890", Offset = "0x253BE90", VA = "0x18253D890")]
	private static void SetExtProperties(object instance, XmlAttribute[] attrs)
	{
	}

	[Token(Token = "0x600081C")]
	[Address(RVA = "0x2533580", Offset = "0x2531B80", VA = "0x182533580")]
	private void HandleColumnExpression(object instance, XmlAttribute[] attrs)
	{
	}

	[Token(Token = "0x600081D")]
	[Address(RVA = "0x2531710", Offset = "0x252FD10", VA = "0x182531710")]
	internal static string GetMsdataAttribute(XmlSchemaAnnotated node, string ln)
	{
		return null;
	}

	[Token(Token = "0x600081E")]
	[Address(RVA = "0x253D660", Offset = "0x253BC60", VA = "0x18253D660")]
	private static void SetExtProperties(object instance, XmlAttributeCollection attrs)
	{
	}

	[Token(Token = "0x600081F")]
	[Address(RVA = "0x25377C0", Offset = "0x2535DC0", VA = "0x1825377C0")]
	internal void HandleRefTableProperties(ArrayList RefTables, XmlSchemaElement element)
	{
	}

	[Token(Token = "0x6000820")]
	[Address(RVA = "0x25378C0", Offset = "0x2535EC0", VA = "0x1825378C0")]
	internal void HandleRelation(XmlElement node, bool fNested)
	{
	}

	[Token(Token = "0x6000821")]
	[Address(RVA = "0x2539760", Offset = "0x2537D60", VA = "0x182539760")]
	private bool HasAttributes(XmlSchemaObjectCollection attributes)
	{
		return default(bool);
	}

	[Token(Token = "0x6000822")]
	[Address(RVA = "0x253B220", Offset = "0x2539820", VA = "0x18253B220")]
	private bool IsDatasetParticle(XmlSchemaParticle pt)
	{
		return default(bool);
	}

	[Token(Token = "0x6000823")]
	[Address(RVA = "0x2530710", Offset = "0x252ED10", VA = "0x182530710")]
	private int DatasetElementCount(XmlSchemaObjectCollection elements)
	{
		return default(int);
	}

	[Token(Token = "0x6000824")]
	[Address(RVA = "0x25308E0", Offset = "0x252EEE0", VA = "0x1825308E0")]
	private XmlSchemaElement FindDatasetElement(XmlSchemaObjectCollection elements)
	{
		return null;
	}

	[Token(Token = "0x6000825")]
	[Address(RVA = "0x253D310", Offset = "0x253B910", VA = "0x18253D310")]
	public void LoadSchema(XmlSchemaSet schemaSet, DataTable dt)
	{
	}

	[Token(Token = "0x6000826")]
	[Address(RVA = "0x253BB80", Offset = "0x253A180", VA = "0x18253BB80")]
	public void LoadSchema(XmlSchemaSet schemaSet, DataSet ds)
	{
	}

	[Token(Token = "0x6000827")]
	[Address(RVA = "0x2538220", Offset = "0x2536820", VA = "0x182538220")]
	private void HandleRelations(XmlSchemaAnnotation ann, bool fNested)
	{
	}

	[Token(Token = "0x6000828")]
	[Address(RVA = "0x2531AC0", Offset = "0x25300C0", VA = "0x182531AC0")]
	internal XmlSchemaObjectCollection GetParticleItems(XmlSchemaParticle pt)
	{
		return null;
	}

	[Token(Token = "0x6000829")]
	[Address(RVA = "0x2536F70", Offset = "0x2535570", VA = "0x182536F70")]
	internal void HandleParticle(XmlSchemaParticle pt, DataTable table, ArrayList tableChildren, bool isBase)
	{
	}

	[Token(Token = "0x600082A")]
	[Address(RVA = "0x2533300", Offset = "0x2531900", VA = "0x182533300")]
	internal void HandleAttributes(XmlSchemaObjectCollection attributes, DataTable table, bool isBase)
	{
	}

	[Token(Token = "0x600082B")]
	[Address(RVA = "0x2532F90", Offset = "0x2531590", VA = "0x182532F90")]
	private void HandleAttributeGroup(XmlSchemaAttributeGroup attributeGroup, DataTable table, bool isBase)
	{
	}

	[Token(Token = "0x600082C")]
	[Address(RVA = "0x2533790", Offset = "0x2531D90", VA = "0x182533790")]
	internal void HandleComplexType(XmlSchemaComplexType ct, DataTable table, ArrayList tableChildren, bool isNillable)
	{
	}

	[Token(Token = "0x600082D")]
	[Address(RVA = "0x2531D90", Offset = "0x2530390", VA = "0x182531D90")]
	internal XmlSchemaParticle GetParticle(XmlSchemaComplexType ct)
	{
		return null;
	}

	[Token(Token = "0x600082E")]
	[Address(RVA = "0x2530E00", Offset = "0x252F400", VA = "0x182530E00")]
	internal DataColumn FindField(DataTable table, string field)
	{
		return null;
	}

	[Token(Token = "0x600082F")]
	[Address(RVA = "0x252FB20", Offset = "0x252E120", VA = "0x18252FB20")]
	internal DataColumn[] BuildKey(XmlSchemaIdentityConstraint keyNode, DataTable table)
	{
		return null;
	}

	[Token(Token = "0x6000830")]
	[Address(RVA = "0x2531460", Offset = "0x252FA60", VA = "0x182531460")]
	internal bool GetBooleanAttribute(XmlSchemaAnnotated element, string attrName, bool defVal)
	{
		return default(bool);
	}

	[Token(Token = "0x6000831")]
	[Address(RVA = "0x25321B0", Offset = "0x25307B0", VA = "0x1825321B0")]
	internal string GetStringAttribute(XmlSchemaAnnotated element, string attrName, string defVal)
	{
		return null;
	}

	[Token(Token = "0x6000832")]
	[Address(RVA = "0x253E110", Offset = "0x253C710", VA = "0x18253E110")]
	internal static AcceptRejectRule TranslateAcceptRejectRule(string strRule)
	{
		return default(AcceptRejectRule);
	}

	[Token(Token = "0x6000833")]
	[Address(RVA = "0x253E180", Offset = "0x253C780", VA = "0x18253E180")]
	internal static Rule TranslateRule(string strRule)
	{
		return default(Rule);
	}

	[Token(Token = "0x6000834")]
	[Address(RVA = "0x2536610", Offset = "0x2534C10", VA = "0x182536610")]
	internal void HandleKeyref(XmlSchemaKeyref keyref)
	{
	}

	[Token(Token = "0x6000835")]
	[Address(RVA = "0x2534000", Offset = "0x2532600", VA = "0x182534000")]
	internal void HandleConstraint(XmlSchemaIdentityConstraint keyNode)
	{
	}

	[Token(Token = "0x6000836")]
	[Address(RVA = "0x2539940", Offset = "0x2537F40", VA = "0x182539940")]
	internal DataTable InstantiateSimpleTable(XmlSchemaElement node)
	{
		return null;
	}

	[Token(Token = "0x6000837")]
	[Address(RVA = "0x25315C0", Offset = "0x252FBC0", VA = "0x1825315C0")]
	internal string GetInstanceName(XmlSchemaAnnotated node)
	{
		return null;
	}

	[Token(Token = "0x6000838")]
	[Address(RVA = "0x253A080", Offset = "0x2538680", VA = "0x18253A080")]
	internal DataTable InstantiateTable(XmlSchemaElement node, XmlSchemaComplexType typeNode, bool isRef)
	{
		return null;
	}

	[Token(Token = "0x6000839")]
	[Address(RVA = "0x253E250", Offset = "0x253C850", VA = "0x18253E250")]
	public static Type XsdtoClr(string xsdTypeName)
	{
		return null;
	}

	[Token(Token = "0x600083A")]
	[Address(RVA = "0x2530FC0", Offset = "0x252F5C0", VA = "0x182530FC0")]
	private static NameType FindNameType(string name)
	{
		return null;
	}

	[Token(Token = "0x600083B")]
	[Address(RVA = "0x253D340", Offset = "0x253B940", VA = "0x18253D340")]
	private Type ParseDataType(string dt)
	{
		return null;
	}

	[Token(Token = "0x600083C")]
	[Address(RVA = "0x253BB10", Offset = "0x253A110", VA = "0x18253BB10")]
	internal static bool IsXsdType(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x600083D")]
	[Address(RVA = "0x25310A0", Offset = "0x252F6A0", VA = "0x1825310A0")]
	internal XmlSchemaAnnotated FindTypeNode(XmlSchemaAnnotated node)
	{
		return null;
	}

	[Token(Token = "0x600083E")]
	[Address(RVA = "0x2538C00", Offset = "0x2537200", VA = "0x182538C00")]
	internal void HandleSimpleTypeSimpleContentColumn(XmlSchemaSimpleType typeNode, string strType, DataTable table, bool isBase, XmlAttribute[] attrs, bool isNillable)
	{
	}

	[Token(Token = "0x600083F")]
	[Address(RVA = "0x25384B0", Offset = "0x2536AB0", VA = "0x1825384B0")]
	internal void HandleSimpleContentColumn(string strType, DataTable table, bool isBase, XmlAttribute[] attrs, bool isNillable)
	{
	}

	[Token(Token = "0x6000840")]
	[Address(RVA = "0x25324E0", Offset = "0x2530AE0", VA = "0x1825324E0")]
	internal void HandleAttributeColumn(XmlSchemaAttribute attrib, DataTable table, bool isBase)
	{
	}

	[Token(Token = "0x6000841")]
	[Address(RVA = "0x25356C0", Offset = "0x2533CC0", VA = "0x1825356C0")]
	internal void HandleElementColumn(XmlSchemaElement elem, DataTable table, bool isBase)
	{
	}

	[Token(Token = "0x6000842")]
	[Address(RVA = "0x25344F0", Offset = "0x2532AF0", VA = "0x1825344F0")]
	internal void HandleDataSet(XmlSchemaElement node, bool isNewDataSet)
	{
	}

	[Token(Token = "0x6000843")]
	[Address(RVA = "0x252F970", Offset = "0x252DF70", VA = "0x18252F970")]
	private void AddTablesToList(List<DataTable> tableList, DataTable dt)
	{
	}

	[Token(Token = "0x6000844")]
	[Address(RVA = "0x2531F30", Offset = "0x2530530", VA = "0x182531F30")]
	private string GetPrefix(string ns)
	{
		return null;
	}

	[Token(Token = "0x6000845")]
	[Address(RVA = "0x2531840", Offset = "0x252FE40", VA = "0x182531840")]
	private string GetNamespaceFromPrefix(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000846")]
	[Address(RVA = "0x2532350", Offset = "0x2530950", VA = "0x182532350")]
	private string GetTableNamespace(XmlSchemaIdentityConstraint key)
	{
		return null;
	}

	[Token(Token = "0x6000847")]
	[Address(RVA = "0x2532230", Offset = "0x2530830", VA = "0x182532230")]
	private string GetTableName(XmlSchemaIdentityConstraint key)
	{
		return null;
	}

	[Token(Token = "0x6000848")]
	[Address(RVA = "0x253B840", Offset = "0x2539E40", VA = "0x18253B840")]
	internal bool IsTable(XmlSchemaElement node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000849")]
	[Address(RVA = "0x25395A0", Offset = "0x2537BA0", VA = "0x1825395A0")]
	internal DataTable HandleTable(XmlSchemaElement node)
	{
		return null;
	}

	[Token(Token = "0x600084A")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public XSDSchema()
	{
	}
}
