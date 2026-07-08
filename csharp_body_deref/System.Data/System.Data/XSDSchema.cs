using System.Collections;
using System.Collections.Generic;
using System.Xml;
using System.Xml.Schema;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200008D")]
internal sealed class XSDSchema : XMLSchema
{
	[Token(Token = "0x200008E")]
	private sealed class NameType : IComparable
	{
		[Token(Token = "0x40002EC")]
		[FieldOffset(Offset = "0x10")]
		public readonly string name;

		[Token(Token = "0x40002ED")]
		[FieldOffset(Offset = "0x18")]
		public readonly Type type;

		[Token(Token = "0x600082D")]
		[Address(RVA = "0x42A3930", Offset = "0x42A3930", VA = "0x42A3930")]
		public NameType(string n, Type t)
		{
		}

		[Token(Token = "0x600082E")]
		[Address(RVA = "0x42A3970", Offset = "0x42A3970", VA = "0x42A3970", Slot = "4")]
		public int CompareTo(object obj)
		{
			return default(int);
		}
	}

	[Token(Token = "0x40002D8")]
	[FieldOffset(Offset = "0x10")]
	private XmlSchemaSet _schemaSet;

	[Token(Token = "0x40002D9")]
	[FieldOffset(Offset = "0x18")]
	private XmlSchemaElement _dsElement;

	[Token(Token = "0x40002DA")]
	[FieldOffset(Offset = "0x20")]
	private DataSet _ds;

	[Token(Token = "0x40002DB")]
	[FieldOffset(Offset = "0x28")]
	private string _schemaName;

	[Token(Token = "0x40002DC")]
	[FieldOffset(Offset = "0x30")]
	private ArrayList _columnExpressions;

	[Token(Token = "0x40002DD")]
	[FieldOffset(Offset = "0x38")]
	private Hashtable _constraintNodes;

	[Token(Token = "0x40002DE")]
	[FieldOffset(Offset = "0x40")]
	private ArrayList _refTables;

	[Token(Token = "0x40002DF")]
	[FieldOffset(Offset = "0x48")]
	private ArrayList _complexTypes;

	[Token(Token = "0x40002E0")]
	[FieldOffset(Offset = "0x50")]
	private XmlSchemaObjectCollection _annotations;

	[Token(Token = "0x40002E1")]
	[FieldOffset(Offset = "0x58")]
	private XmlSchemaObjectCollection _elements;

	[Token(Token = "0x40002E2")]
	[FieldOffset(Offset = "0x60")]
	private Hashtable _attributes;

	[Token(Token = "0x40002E3")]
	[FieldOffset(Offset = "0x68")]
	private Hashtable _elementsTable;

	[Token(Token = "0x40002E4")]
	[FieldOffset(Offset = "0x70")]
	private Hashtable _attributeGroups;

	[Token(Token = "0x40002E5")]
	[FieldOffset(Offset = "0x78")]
	private Hashtable _schemaTypes;

	[Token(Token = "0x40002E6")]
	[FieldOffset(Offset = "0x80")]
	private Hashtable _expressions;

	[Token(Token = "0x40002E7")]
	[FieldOffset(Offset = "0x88")]
	private Dictionary<DataTable, List<DataTable>> _tableDictionary;

	[Token(Token = "0x40002E8")]
	[FieldOffset(Offset = "0x90")]
	private Hashtable _udSimpleTypes;

	[Token(Token = "0x40002E9")]
	[FieldOffset(Offset = "0x98")]
	private Hashtable _existingSimpleTypeMap;

	[Token(Token = "0x40002EA")]
	[FieldOffset(Offset = "0xA0")]
	private bool _fromInference;

	[Token(Token = "0x40002EB")]
	[FieldOffset(Offset = "0x0")]
	private static readonly NameType[] s_mapNameTypeXsd;

	[Token(Token = "0x17000148")]
	internal bool FromInference
	{
		[Token(Token = "0x60007F6")]
		[Address(RVA = "0x42902F0", Offset = "0x42902F0", VA = "0x42902F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60007F7")]
		[Address(RVA = "0x4290300", Offset = "0x4290300", VA = "0x4290300")]
		set
		{
		}
	}

	[Token(Token = "0x60007F8")]
	[Address(RVA = "0x4290310", Offset = "0x4290310", VA = "0x4290310")]
	private void CollectElementsAnnotations(XmlSchema schema)
	{
	}

	[Token(Token = "0x60007F9")]
	[Address(RVA = "0x4290390", Offset = "0x4290390", VA = "0x4290390")]
	private void CollectElementsAnnotations(XmlSchema schema, ArrayList schemaList)
	{
	}

	[Token(Token = "0x60007FA")]
	[Address(RVA = "0x4291180", Offset = "0x4291180", VA = "0x4291180")]
	internal static string QualifiedName(string name)
	{
		return null;
	}

	[Token(Token = "0x60007FB")]
	[Address(RVA = "0x42911E0", Offset = "0x42911E0", VA = "0x42911E0")]
	internal static void SetProperties(object instance, XmlAttribute[] attrs)
	{
	}

	[Token(Token = "0x60007FC")]
	[Address(RVA = "0x4291760", Offset = "0x4291760", VA = "0x4291760")]
	private static void SetExtProperties(object instance, XmlAttribute[] attrs)
	{
	}

	[Token(Token = "0x60007FD")]
	[Address(RVA = "0x4291B40", Offset = "0x4291B40", VA = "0x4291B40")]
	private void HandleColumnExpression(object instance, XmlAttribute[] attrs)
	{
	}

	[Token(Token = "0x60007FE")]
	[Address(RVA = "0x4291060", Offset = "0x4291060", VA = "0x4291060")]
	internal static string GetMsdataAttribute(XmlSchemaAnnotated node, string ln)
	{
		return null;
	}

	[Token(Token = "0x60007FF")]
	[Address(RVA = "0x4291D50", Offset = "0x4291D50", VA = "0x4291D50")]
	private static void SetExtProperties(object instance, XmlAttributeCollection attrs)
	{
	}

	[Token(Token = "0x6000800")]
	[Address(RVA = "0x4291FA0", Offset = "0x4291FA0", VA = "0x4291FA0")]
	internal void HandleRefTableProperties(ArrayList RefTables, XmlSchemaElement element)
	{
	}

	[Token(Token = "0x6000801")]
	[Address(RVA = "0x4292150", Offset = "0x4292150", VA = "0x4292150")]
	internal void HandleRelation(XmlElement node, bool fNested)
	{
	}

	[Token(Token = "0x6000802")]
	[Address(RVA = "0x4292A50", Offset = "0x4292A50", VA = "0x4292A50")]
	private bool HasAttributes(XmlSchemaObjectCollection attributes)
	{
		return default(bool);
	}

	[Token(Token = "0x6000803")]
	[Address(RVA = "0x4292D00", Offset = "0x4292D00", VA = "0x4292D00")]
	private bool IsDatasetParticle(XmlSchemaParticle pt)
	{
		return default(bool);
	}

	[Token(Token = "0x6000804")]
	[Address(RVA = "0x4293870", Offset = "0x4293870", VA = "0x4293870")]
	private int DatasetElementCount(XmlSchemaObjectCollection elements)
	{
		return default(int);
	}

	[Token(Token = "0x6000805")]
	[Address(RVA = "0x4293C10", Offset = "0x4293C10", VA = "0x4293C10")]
	private XmlSchemaElement FindDatasetElement(XmlSchemaObjectCollection elements)
	{
		return null;
	}

	[Token(Token = "0x6000806")]
	[Address(RVA = "0x4294280", Offset = "0x4294280", VA = "0x4294280")]
	public void LoadSchema(XmlSchemaSet schemaSet, DataTable dt)
	{
	}

	[Token(Token = "0x6000807")]
	[Address(RVA = "0x42942A0", Offset = "0x42942A0", VA = "0x42942A0")]
	public void LoadSchema(XmlSchemaSet schemaSet, DataSet ds)
	{
	}

	[Token(Token = "0x6000808")]
	[Address(RVA = "0x4298CF0", Offset = "0x4298CF0", VA = "0x4298CF0")]
	private void HandleRelations(XmlSchemaAnnotation ann, bool fNested)
	{
	}

	[Token(Token = "0x6000809")]
	[Address(RVA = "0x4293410", Offset = "0x4293410", VA = "0x4293410")]
	internal XmlSchemaObjectCollection GetParticleItems(XmlSchemaParticle pt)
	{
		return null;
	}

	[Token(Token = "0x600080A")]
	[Address(RVA = "0x42990B0", Offset = "0x42990B0", VA = "0x42990B0")]
	internal void HandleParticle(XmlSchemaParticle pt, DataTable table, ArrayList tableChildren, bool isBase)
	{
	}

	[Token(Token = "0x600080B")]
	[Address(RVA = "0x429AA90", Offset = "0x429AA90", VA = "0x429AA90")]
	internal void HandleAttributes(XmlSchemaObjectCollection attributes, DataTable table, bool isBase)
	{
	}

	[Token(Token = "0x600080C")]
	[Address(RVA = "0x429B890", Offset = "0x429B890", VA = "0x429B890")]
	private void HandleAttributeGroup(XmlSchemaAttributeGroup attributeGroup, DataTable table, bool isBase)
	{
	}

	[Token(Token = "0x600080D")]
	[Address(RVA = "0x429BD30", Offset = "0x429BD30", VA = "0x429BD30")]
	internal void HandleComplexType(XmlSchemaComplexType ct, DataTable table, ArrayList tableChildren, bool isNillable)
	{
	}

	[Token(Token = "0x600080E")]
	[Address(RVA = "0x4294160", Offset = "0x4294160", VA = "0x4294160")]
	internal XmlSchemaParticle GetParticle(XmlSchemaComplexType ct)
	{
		return null;
	}

	[Token(Token = "0x600080F")]
	[Address(RVA = "0x429D5F0", Offset = "0x429D5F0", VA = "0x429D5F0")]
	internal DataColumn FindField(DataTable table, string field)
	{
		return null;
	}

	[Token(Token = "0x6000810")]
	[Address(RVA = "0x429D770", Offset = "0x429D770", VA = "0x429D770")]
	internal DataColumn[] BuildKey(XmlSchemaIdentityConstraint keyNode, DataTable table)
	{
		return null;
	}

	[Token(Token = "0x6000811")]
	[Address(RVA = "0x4293AE0", Offset = "0x4293AE0", VA = "0x4293AE0")]
	internal bool GetBooleanAttribute(XmlSchemaAnnotated element, string attrName, bool defVal)
	{
		return default(bool);
	}

	[Token(Token = "0x6000812")]
	[Address(RVA = "0x4297090", Offset = "0x4297090", VA = "0x4297090")]
	internal string GetStringAttribute(XmlSchemaAnnotated element, string attrName, string defVal)
	{
		return null;
	}

	[Token(Token = "0x6000813")]
	[Address(RVA = "0x429DB10", Offset = "0x429DB10", VA = "0x429DB10")]
	internal static AcceptRejectRule TranslateAcceptRejectRule(string strRule)
	{
		return default(AcceptRejectRule);
	}

	[Token(Token = "0x6000814")]
	[Address(RVA = "0x429DB80", Offset = "0x429DB80", VA = "0x429DB80")]
	internal static Rule TranslateRule(string strRule)
	{
		return default(Rule);
	}

	[Token(Token = "0x6000815")]
	[Address(RVA = "0x429DC40", Offset = "0x429DC40", VA = "0x429DC40")]
	internal void HandleKeyref(XmlSchemaKeyref keyref)
	{
	}

	[Token(Token = "0x6000816")]
	[Address(RVA = "0x429E720", Offset = "0x429E720", VA = "0x429E720")]
	internal void HandleConstraint(XmlSchemaIdentityConstraint keyNode)
	{
	}

	[Token(Token = "0x6000817")]
	[Address(RVA = "0x429EBF0", Offset = "0x429EBF0", VA = "0x429EBF0")]
	internal DataTable InstantiateSimpleTable(XmlSchemaElement node)
	{
		return null;
	}

	[Token(Token = "0x6000818")]
	[Address(RVA = "0x4292090", Offset = "0x4292090", VA = "0x4292090")]
	internal string GetInstanceName(XmlSchemaAnnotated node)
	{
		return null;
	}

	[Token(Token = "0x6000819")]
	[Address(RVA = "0x429FAF0", Offset = "0x429FAF0", VA = "0x429FAF0")]
	internal DataTable InstantiateTable(XmlSchemaElement node, XmlSchemaComplexType typeNode, bool isRef)
	{
		return null;
	}

	[Token(Token = "0x600081A")]
	[Address(RVA = "0x42A1700", Offset = "0x42A1700", VA = "0x42A1700")]
	public static Type XsdtoClr(string xsdTypeName)
	{
		return null;
	}

	[Token(Token = "0x600081B")]
	[Address(RVA = "0x42A17D0", Offset = "0x42A17D0", VA = "0x42A17D0")]
	private static NameType FindNameType(string name)
	{
		return null;
	}

	[Token(Token = "0x600081C")]
	[Address(RVA = "0x42A1890", Offset = "0x42A1890", VA = "0x42A1890")]
	private Type ParseDataType(string dt)
	{
		return null;
	}

	[Token(Token = "0x600081D")]
	[Address(RVA = "0x42A1A90", Offset = "0x42A1A90", VA = "0x42A1A90")]
	internal static bool IsXsdType(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x600081E")]
	[Address(RVA = "0x4297100", Offset = "0x4297100", VA = "0x4297100")]
	internal XmlSchemaAnnotated FindTypeNode(XmlSchemaAnnotated node)
	{
		return null;
	}

	[Token(Token = "0x600081F")]
	[Address(RVA = "0x429CBB0", Offset = "0x429CBB0", VA = "0x429CBB0")]
	internal void HandleSimpleTypeSimpleContentColumn(XmlSchemaSimpleType typeNode, string strType, DataTable table, bool isBase, XmlAttribute[] attrs, bool isNillable)
	{
	}

	[Token(Token = "0x6000820")]
	[Address(RVA = "0x429C3C0", Offset = "0x429C3C0", VA = "0x429C3C0")]
	internal void HandleSimpleContentColumn(string strType, DataTable table, bool isBase, XmlAttribute[] attrs, bool isNillable)
	{
	}

	[Token(Token = "0x6000821")]
	[Address(RVA = "0x429AE00", Offset = "0x429AE00", VA = "0x429AE00")]
	internal void HandleAttributeColumn(XmlSchemaAttribute attrib, DataTable table, bool isBase)
	{
	}

	[Token(Token = "0x6000822")]
	[Address(RVA = "0x4299B90", Offset = "0x4299B90", VA = "0x4299B90")]
	internal void HandleElementColumn(XmlSchemaElement elem, DataTable table, bool isBase)
	{
	}

	[Token(Token = "0x6000823")]
	[Address(RVA = "0x4297640", Offset = "0x4297640", VA = "0x4297640")]
	internal void HandleDataSet(XmlSchemaElement node, bool isNewDataSet)
	{
	}

	[Token(Token = "0x6000824")]
	[Address(RVA = "0x42A1AF0", Offset = "0x42A1AF0", VA = "0x42A1AF0")]
	private void AddTablesToList(List<DataTable> tableList, DataTable dt)
	{
	}

	[Token(Token = "0x6000825")]
	[Address(RVA = "0x429F5D0", Offset = "0x429F5D0", VA = "0x429F5D0")]
	private string GetPrefix(string ns)
	{
		return null;
	}

	[Token(Token = "0x6000826")]
	[Address(RVA = "0x42A1D20", Offset = "0x42A1D20", VA = "0x42A1D20")]
	private string GetNamespaceFromPrefix(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000827")]
	[Address(RVA = "0x42A1570", Offset = "0x42A1570", VA = "0x42A1570")]
	private string GetTableNamespace(XmlSchemaIdentityConstraint key)
	{
		return null;
	}

	[Token(Token = "0x6000828")]
	[Address(RVA = "0x429E600", Offset = "0x429E600", VA = "0x429E600")]
	private string GetTableName(XmlSchemaIdentityConstraint key)
	{
		return null;
	}

	[Token(Token = "0x6000829")]
	[Address(RVA = "0x42935F0", Offset = "0x42935F0", VA = "0x42935F0")]
	internal bool IsTable(XmlSchemaElement node)
	{
		return default(bool);
	}

	[Token(Token = "0x600082A")]
	[Address(RVA = "0x42974D0", Offset = "0x42974D0", VA = "0x42974D0")]
	internal DataTable HandleTable(XmlSchemaElement node)
	{
		return null;
	}

	[Token(Token = "0x600082B")]
	[Address(RVA = "0x42A2250", Offset = "0x42A2250", VA = "0x42A2250")]
	public XSDSchema()
	{
	}
}
