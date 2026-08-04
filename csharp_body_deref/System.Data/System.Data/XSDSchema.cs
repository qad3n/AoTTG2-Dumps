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
		[Address(RVA = "0x45E1090", Offset = "0x45E1090", VA = "0x45E1090")]
		public NameType(string n, Type t)
		{
		}

		[Token(Token = "0x600082E")]
		[Address(RVA = "0x45E10D0", Offset = "0x45E10D0", VA = "0x45E10D0", Slot = "4")]
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
		[Address(RVA = "0x45CDA50", Offset = "0x45CDA50", VA = "0x45CDA50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60007F7")]
		[Address(RVA = "0x45CDA60", Offset = "0x45CDA60", VA = "0x45CDA60")]
		set
		{
		}
	}

	[Token(Token = "0x60007F8")]
	[Address(RVA = "0x45CDA70", Offset = "0x45CDA70", VA = "0x45CDA70")]
	private void CollectElementsAnnotations(XmlSchema schema)
	{
	}

	[Token(Token = "0x60007F9")]
	[Address(RVA = "0x45CDAF0", Offset = "0x45CDAF0", VA = "0x45CDAF0")]
	private void CollectElementsAnnotations(XmlSchema schema, ArrayList schemaList)
	{
	}

	[Token(Token = "0x60007FA")]
	[Address(RVA = "0x45CE8E0", Offset = "0x45CE8E0", VA = "0x45CE8E0")]
	internal static string QualifiedName(string name)
	{
		return null;
	}

	[Token(Token = "0x60007FB")]
	[Address(RVA = "0x45CE940", Offset = "0x45CE940", VA = "0x45CE940")]
	internal static void SetProperties(object instance, XmlAttribute[] attrs)
	{
	}

	[Token(Token = "0x60007FC")]
	[Address(RVA = "0x45CEEC0", Offset = "0x45CEEC0", VA = "0x45CEEC0")]
	private static void SetExtProperties(object instance, XmlAttribute[] attrs)
	{
	}

	[Token(Token = "0x60007FD")]
	[Address(RVA = "0x45CF2A0", Offset = "0x45CF2A0", VA = "0x45CF2A0")]
	private void HandleColumnExpression(object instance, XmlAttribute[] attrs)
	{
	}

	[Token(Token = "0x60007FE")]
	[Address(RVA = "0x45CE7C0", Offset = "0x45CE7C0", VA = "0x45CE7C0")]
	internal static string GetMsdataAttribute(XmlSchemaAnnotated node, string ln)
	{
		return null;
	}

	[Token(Token = "0x60007FF")]
	[Address(RVA = "0x45CF4B0", Offset = "0x45CF4B0", VA = "0x45CF4B0")]
	private static void SetExtProperties(object instance, XmlAttributeCollection attrs)
	{
	}

	[Token(Token = "0x6000800")]
	[Address(RVA = "0x45CF700", Offset = "0x45CF700", VA = "0x45CF700")]
	internal void HandleRefTableProperties(ArrayList RefTables, XmlSchemaElement element)
	{
	}

	[Token(Token = "0x6000801")]
	[Address(RVA = "0x45CF8B0", Offset = "0x45CF8B0", VA = "0x45CF8B0")]
	internal void HandleRelation(XmlElement node, bool fNested)
	{
	}

	[Token(Token = "0x6000802")]
	[Address(RVA = "0x45D01B0", Offset = "0x45D01B0", VA = "0x45D01B0")]
	private bool HasAttributes(XmlSchemaObjectCollection attributes)
	{
		return default(bool);
	}

	[Token(Token = "0x6000803")]
	[Address(RVA = "0x45D0460", Offset = "0x45D0460", VA = "0x45D0460")]
	private bool IsDatasetParticle(XmlSchemaParticle pt)
	{
		return default(bool);
	}

	[Token(Token = "0x6000804")]
	[Address(RVA = "0x45D0FD0", Offset = "0x45D0FD0", VA = "0x45D0FD0")]
	private int DatasetElementCount(XmlSchemaObjectCollection elements)
	{
		return default(int);
	}

	[Token(Token = "0x6000805")]
	[Address(RVA = "0x45D1370", Offset = "0x45D1370", VA = "0x45D1370")]
	private XmlSchemaElement FindDatasetElement(XmlSchemaObjectCollection elements)
	{
		return null;
	}

	[Token(Token = "0x6000806")]
	[Address(RVA = "0x45D19E0", Offset = "0x45D19E0", VA = "0x45D19E0")]
	public void LoadSchema(XmlSchemaSet schemaSet, DataTable dt)
	{
	}

	[Token(Token = "0x6000807")]
	[Address(RVA = "0x45D1A00", Offset = "0x45D1A00", VA = "0x45D1A00")]
	public void LoadSchema(XmlSchemaSet schemaSet, DataSet ds)
	{
	}

	[Token(Token = "0x6000808")]
	[Address(RVA = "0x45D6450", Offset = "0x45D6450", VA = "0x45D6450")]
	private void HandleRelations(XmlSchemaAnnotation ann, bool fNested)
	{
	}

	[Token(Token = "0x6000809")]
	[Address(RVA = "0x45D0B70", Offset = "0x45D0B70", VA = "0x45D0B70")]
	internal XmlSchemaObjectCollection GetParticleItems(XmlSchemaParticle pt)
	{
		return null;
	}

	[Token(Token = "0x600080A")]
	[Address(RVA = "0x45D6810", Offset = "0x45D6810", VA = "0x45D6810")]
	internal void HandleParticle(XmlSchemaParticle pt, DataTable table, ArrayList tableChildren, bool isBase)
	{
	}

	[Token(Token = "0x600080B")]
	[Address(RVA = "0x45D81F0", Offset = "0x45D81F0", VA = "0x45D81F0")]
	internal void HandleAttributes(XmlSchemaObjectCollection attributes, DataTable table, bool isBase)
	{
	}

	[Token(Token = "0x600080C")]
	[Address(RVA = "0x45D8FF0", Offset = "0x45D8FF0", VA = "0x45D8FF0")]
	private void HandleAttributeGroup(XmlSchemaAttributeGroup attributeGroup, DataTable table, bool isBase)
	{
	}

	[Token(Token = "0x600080D")]
	[Address(RVA = "0x45D9490", Offset = "0x45D9490", VA = "0x45D9490")]
	internal void HandleComplexType(XmlSchemaComplexType ct, DataTable table, ArrayList tableChildren, bool isNillable)
	{
	}

	[Token(Token = "0x600080E")]
	[Address(RVA = "0x45D18C0", Offset = "0x45D18C0", VA = "0x45D18C0")]
	internal XmlSchemaParticle GetParticle(XmlSchemaComplexType ct)
	{
		return null;
	}

	[Token(Token = "0x600080F")]
	[Address(RVA = "0x45DAD50", Offset = "0x45DAD50", VA = "0x45DAD50")]
	internal DataColumn FindField(DataTable table, string field)
	{
		return null;
	}

	[Token(Token = "0x6000810")]
	[Address(RVA = "0x45DAED0", Offset = "0x45DAED0", VA = "0x45DAED0")]
	internal DataColumn[] BuildKey(XmlSchemaIdentityConstraint keyNode, DataTable table)
	{
		return null;
	}

	[Token(Token = "0x6000811")]
	[Address(RVA = "0x45D1240", Offset = "0x45D1240", VA = "0x45D1240")]
	internal bool GetBooleanAttribute(XmlSchemaAnnotated element, string attrName, bool defVal)
	{
		return default(bool);
	}

	[Token(Token = "0x6000812")]
	[Address(RVA = "0x45D47F0", Offset = "0x45D47F0", VA = "0x45D47F0")]
	internal string GetStringAttribute(XmlSchemaAnnotated element, string attrName, string defVal)
	{
		return null;
	}

	[Token(Token = "0x6000813")]
	[Address(RVA = "0x45DB270", Offset = "0x45DB270", VA = "0x45DB270")]
	internal static AcceptRejectRule TranslateAcceptRejectRule(string strRule)
	{
		return default(AcceptRejectRule);
	}

	[Token(Token = "0x6000814")]
	[Address(RVA = "0x45DB2E0", Offset = "0x45DB2E0", VA = "0x45DB2E0")]
	internal static Rule TranslateRule(string strRule)
	{
		return default(Rule);
	}

	[Token(Token = "0x6000815")]
	[Address(RVA = "0x45DB3A0", Offset = "0x45DB3A0", VA = "0x45DB3A0")]
	internal void HandleKeyref(XmlSchemaKeyref keyref)
	{
	}

	[Token(Token = "0x6000816")]
	[Address(RVA = "0x45DBE80", Offset = "0x45DBE80", VA = "0x45DBE80")]
	internal void HandleConstraint(XmlSchemaIdentityConstraint keyNode)
	{
	}

	[Token(Token = "0x6000817")]
	[Address(RVA = "0x45DC350", Offset = "0x45DC350", VA = "0x45DC350")]
	internal DataTable InstantiateSimpleTable(XmlSchemaElement node)
	{
		return null;
	}

	[Token(Token = "0x6000818")]
	[Address(RVA = "0x45CF7F0", Offset = "0x45CF7F0", VA = "0x45CF7F0")]
	internal string GetInstanceName(XmlSchemaAnnotated node)
	{
		return null;
	}

	[Token(Token = "0x6000819")]
	[Address(RVA = "0x45DD250", Offset = "0x45DD250", VA = "0x45DD250")]
	internal DataTable InstantiateTable(XmlSchemaElement node, XmlSchemaComplexType typeNode, bool isRef)
	{
		return null;
	}

	[Token(Token = "0x600081A")]
	[Address(RVA = "0x45DEE60", Offset = "0x45DEE60", VA = "0x45DEE60")]
	public static Type XsdtoClr(string xsdTypeName)
	{
		return null;
	}

	[Token(Token = "0x600081B")]
	[Address(RVA = "0x45DEF30", Offset = "0x45DEF30", VA = "0x45DEF30")]
	private static NameType FindNameType(string name)
	{
		return null;
	}

	[Token(Token = "0x600081C")]
	[Address(RVA = "0x45DEFF0", Offset = "0x45DEFF0", VA = "0x45DEFF0")]
	private Type ParseDataType(string dt)
	{
		return null;
	}

	[Token(Token = "0x600081D")]
	[Address(RVA = "0x45DF1F0", Offset = "0x45DF1F0", VA = "0x45DF1F0")]
	internal static bool IsXsdType(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x600081E")]
	[Address(RVA = "0x45D4860", Offset = "0x45D4860", VA = "0x45D4860")]
	internal XmlSchemaAnnotated FindTypeNode(XmlSchemaAnnotated node)
	{
		return null;
	}

	[Token(Token = "0x600081F")]
	[Address(RVA = "0x45DA310", Offset = "0x45DA310", VA = "0x45DA310")]
	internal void HandleSimpleTypeSimpleContentColumn(XmlSchemaSimpleType typeNode, string strType, DataTable table, bool isBase, XmlAttribute[] attrs, bool isNillable)
	{
	}

	[Token(Token = "0x6000820")]
	[Address(RVA = "0x45D9B20", Offset = "0x45D9B20", VA = "0x45D9B20")]
	internal void HandleSimpleContentColumn(string strType, DataTable table, bool isBase, XmlAttribute[] attrs, bool isNillable)
	{
	}

	[Token(Token = "0x6000821")]
	[Address(RVA = "0x45D8560", Offset = "0x45D8560", VA = "0x45D8560")]
	internal void HandleAttributeColumn(XmlSchemaAttribute attrib, DataTable table, bool isBase)
	{
	}

	[Token(Token = "0x6000822")]
	[Address(RVA = "0x45D72F0", Offset = "0x45D72F0", VA = "0x45D72F0")]
	internal void HandleElementColumn(XmlSchemaElement elem, DataTable table, bool isBase)
	{
	}

	[Token(Token = "0x6000823")]
	[Address(RVA = "0x45D4DA0", Offset = "0x45D4DA0", VA = "0x45D4DA0")]
	internal void HandleDataSet(XmlSchemaElement node, bool isNewDataSet)
	{
	}

	[Token(Token = "0x6000824")]
	[Address(RVA = "0x45DF250", Offset = "0x45DF250", VA = "0x45DF250")]
	private void AddTablesToList(List<DataTable> tableList, DataTable dt)
	{
	}

	[Token(Token = "0x6000825")]
	[Address(RVA = "0x45DCD30", Offset = "0x45DCD30", VA = "0x45DCD30")]
	private string GetPrefix(string ns)
	{
		return null;
	}

	[Token(Token = "0x6000826")]
	[Address(RVA = "0x45DF480", Offset = "0x45DF480", VA = "0x45DF480")]
	private string GetNamespaceFromPrefix(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000827")]
	[Address(RVA = "0x45DECD0", Offset = "0x45DECD0", VA = "0x45DECD0")]
	private string GetTableNamespace(XmlSchemaIdentityConstraint key)
	{
		return null;
	}

	[Token(Token = "0x6000828")]
	[Address(RVA = "0x45DBD60", Offset = "0x45DBD60", VA = "0x45DBD60")]
	private string GetTableName(XmlSchemaIdentityConstraint key)
	{
		return null;
	}

	[Token(Token = "0x6000829")]
	[Address(RVA = "0x45D0D50", Offset = "0x45D0D50", VA = "0x45D0D50")]
	internal bool IsTable(XmlSchemaElement node)
	{
		return default(bool);
	}

	[Token(Token = "0x600082A")]
	[Address(RVA = "0x45D4C30", Offset = "0x45D4C30", VA = "0x45D4C30")]
	internal DataTable HandleTable(XmlSchemaElement node)
	{
		return null;
	}

	[Token(Token = "0x600082B")]
	[Address(RVA = "0x45DF9B0", Offset = "0x45DF9B0", VA = "0x45DF9B0")]
	public XSDSchema()
	{
	}
}
