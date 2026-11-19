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
		[Address(RVA = "0x5EE7100", Offset = "0x5EE6100", VA = "0x5EE7100")]
		public NameType(string n, Type t)
		{
		}

		[Token(Token = "0x600084D")]
		[Address(RVA = "0x5EE7140", Offset = "0x5EE6140", VA = "0x5EE7140", Slot = "4")]
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
		[Address(RVA = "0x5ED5930", Offset = "0x5ED4930", VA = "0x5ED5930")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000816")]
		[Address(RVA = "0x5ED5940", Offset = "0x5ED4940", VA = "0x5ED5940")]
		set
		{
		}
	}

	[Token(Token = "0x6000817")]
	[Address(RVA = "0x5ED5950", Offset = "0x5ED4950", VA = "0x5ED5950")]
	private void CollectElementsAnnotations(XmlSchema schema)
	{
	}

	[Token(Token = "0x6000818")]
	[Address(RVA = "0x5ED59D0", Offset = "0x5ED49D0", VA = "0x5ED59D0")]
	private void CollectElementsAnnotations(XmlSchema schema, ArrayList schemaList)
	{
	}

	[Token(Token = "0x6000819")]
	[Address(RVA = "0x5ED6470", Offset = "0x5ED5470", VA = "0x5ED6470")]
	internal static string QualifiedName(string name)
	{
		return null;
	}

	[Token(Token = "0x600081A")]
	[Address(RVA = "0x5ED64D0", Offset = "0x5ED54D0", VA = "0x5ED64D0")]
	internal static void SetProperties(object instance, XmlAttribute[] attrs)
	{
	}

	[Token(Token = "0x600081B")]
	[Address(RVA = "0x5ED6A30", Offset = "0x5ED5A30", VA = "0x5ED6A30")]
	private static void SetExtProperties(object instance, XmlAttribute[] attrs)
	{
	}

	[Token(Token = "0x600081C")]
	[Address(RVA = "0x5ED6E20", Offset = "0x5ED5E20", VA = "0x5ED6E20")]
	private void HandleColumnExpression(object instance, XmlAttribute[] attrs)
	{
	}

	[Token(Token = "0x600081D")]
	[Address(RVA = "0x5ED6350", Offset = "0x5ED5350", VA = "0x5ED6350")]
	internal static string GetMsdataAttribute(XmlSchemaAnnotated node, string ln)
	{
		return null;
	}

	[Token(Token = "0x600081E")]
	[Address(RVA = "0x5ED7030", Offset = "0x5ED6030", VA = "0x5ED7030")]
	private static void SetExtProperties(object instance, XmlAttributeCollection attrs)
	{
	}

	[Token(Token = "0x600081F")]
	[Address(RVA = "0x5ED7290", Offset = "0x5ED6290", VA = "0x5ED7290")]
	internal void HandleRefTableProperties(ArrayList RefTables, XmlSchemaElement element)
	{
	}

	[Token(Token = "0x6000820")]
	[Address(RVA = "0x5ED7440", Offset = "0x5ED6440", VA = "0x5ED7440")]
	internal void HandleRelation(XmlElement node, bool fNested)
	{
	}

	[Token(Token = "0x6000821")]
	[Address(RVA = "0x5ED7D80", Offset = "0x5ED6D80", VA = "0x5ED7D80")]
	private bool HasAttributes(XmlSchemaObjectCollection attributes)
	{
		return default(bool);
	}

	[Token(Token = "0x6000822")]
	[Address(RVA = "0x5ED7FE0", Offset = "0x5ED6FE0", VA = "0x5ED7FE0")]
	private bool IsDatasetParticle(XmlSchemaParticle pt)
	{
		return default(bool);
	}

	[Token(Token = "0x6000823")]
	[Address(RVA = "0x5ED8A00", Offset = "0x5ED7A00", VA = "0x5ED8A00")]
	private int DatasetElementCount(XmlSchemaObjectCollection elements)
	{
		return default(int);
	}

	[Token(Token = "0x6000824")]
	[Address(RVA = "0x5ED8D30", Offset = "0x5ED7D30", VA = "0x5ED8D30")]
	private XmlSchemaElement FindDatasetElement(XmlSchemaObjectCollection elements)
	{
		return null;
	}

	[Token(Token = "0x6000825")]
	[Address(RVA = "0x5ED9310", Offset = "0x5ED8310", VA = "0x5ED9310")]
	public void LoadSchema(XmlSchemaSet schemaSet, DataTable dt)
	{
	}

	[Token(Token = "0x6000826")]
	[Address(RVA = "0x5ED9330", Offset = "0x5ED8330", VA = "0x5ED9330")]
	public void LoadSchema(XmlSchemaSet schemaSet, DataSet ds)
	{
	}

	[Token(Token = "0x6000827")]
	[Address(RVA = "0x5EDCFB0", Offset = "0x5EDBFB0", VA = "0x5EDCFB0")]
	private void HandleRelations(XmlSchemaAnnotation ann, bool fNested)
	{
	}

	[Token(Token = "0x6000828")]
	[Address(RVA = "0x5ED8580", Offset = "0x5ED7580", VA = "0x5ED8580")]
	internal XmlSchemaObjectCollection GetParticleItems(XmlSchemaParticle pt)
	{
		return null;
	}

	[Token(Token = "0x6000829")]
	[Address(RVA = "0x5EDD2F0", Offset = "0x5EDC2F0", VA = "0x5EDD2F0")]
	internal void HandleParticle(XmlSchemaParticle pt, DataTable table, ArrayList tableChildren, bool isBase)
	{
	}

	[Token(Token = "0x600082A")]
	[Address(RVA = "0x5EDEB90", Offset = "0x5EDDB90", VA = "0x5EDEB90")]
	internal void HandleAttributes(XmlSchemaObjectCollection attributes, DataTable table, bool isBase)
	{
	}

	[Token(Token = "0x600082B")]
	[Address(RVA = "0x5EDF900", Offset = "0x5EDE900", VA = "0x5EDF900")]
	private void HandleAttributeGroup(XmlSchemaAttributeGroup attributeGroup, DataTable table, bool isBase)
	{
	}

	[Token(Token = "0x600082C")]
	[Address(RVA = "0x5EDFCC0", Offset = "0x5EDECC0", VA = "0x5EDFCC0")]
	internal void HandleComplexType(XmlSchemaComplexType ct, DataTable table, ArrayList tableChildren, bool isNillable)
	{
	}

	[Token(Token = "0x600082D")]
	[Address(RVA = "0x5ED9200", Offset = "0x5ED8200", VA = "0x5ED9200")]
	internal XmlSchemaParticle GetParticle(XmlSchemaComplexType ct)
	{
		return null;
	}

	[Token(Token = "0x600082E")]
	[Address(RVA = "0x5EE1570", Offset = "0x5EE0570", VA = "0x5EE1570")]
	internal DataColumn FindField(DataTable table, string field)
	{
		return null;
	}

	[Token(Token = "0x600082F")]
	[Address(RVA = "0x5EE16F0", Offset = "0x5EE06F0", VA = "0x5EE16F0")]
	internal DataColumn[] BuildKey(XmlSchemaIdentityConstraint keyNode, DataTable table)
	{
		return null;
	}

	[Token(Token = "0x6000830")]
	[Address(RVA = "0x5ED8C00", Offset = "0x5ED7C00", VA = "0x5ED8C00")]
	internal bool GetBooleanAttribute(XmlSchemaAnnotated element, string attrName, bool defVal)
	{
		return default(bool);
	}

	[Token(Token = "0x6000831")]
	[Address(RVA = "0x5EDB670", Offset = "0x5EDA670", VA = "0x5EDB670")]
	internal string GetStringAttribute(XmlSchemaAnnotated element, string attrName, string defVal)
	{
		return null;
	}

	[Token(Token = "0x6000832")]
	[Address(RVA = "0x5EE1A10", Offset = "0x5EE0A10", VA = "0x5EE1A10")]
	internal static AcceptRejectRule TranslateAcceptRejectRule(string strRule)
	{
		return default(AcceptRejectRule);
	}

	[Token(Token = "0x6000833")]
	[Address(RVA = "0x5EE1A80", Offset = "0x5EE0A80", VA = "0x5EE1A80")]
	internal static Rule TranslateRule(string strRule)
	{
		return default(Rule);
	}

	[Token(Token = "0x6000834")]
	[Address(RVA = "0x5EE1B40", Offset = "0x5EE0B40", VA = "0x5EE1B40")]
	internal void HandleKeyref(XmlSchemaKeyref keyref)
	{
	}

	[Token(Token = "0x6000835")]
	[Address(RVA = "0x5EE25C0", Offset = "0x5EE15C0", VA = "0x5EE25C0")]
	internal void HandleConstraint(XmlSchemaIdentityConstraint keyNode)
	{
	}

	[Token(Token = "0x6000836")]
	[Address(RVA = "0x5EE2A80", Offset = "0x5EE1A80", VA = "0x5EE2A80")]
	internal DataTable InstantiateSimpleTable(XmlSchemaElement node)
	{
		return null;
	}

	[Token(Token = "0x6000837")]
	[Address(RVA = "0x5ED7380", Offset = "0x5ED6380", VA = "0x5ED7380")]
	internal string GetInstanceName(XmlSchemaAnnotated node)
	{
		return null;
	}

	[Token(Token = "0x6000838")]
	[Address(RVA = "0x5EE3780", Offset = "0x5EE2780", VA = "0x5EE3780")]
	internal DataTable InstantiateTable(XmlSchemaElement node, XmlSchemaComplexType typeNode, bool isRef)
	{
		return null;
	}

	[Token(Token = "0x6000839")]
	[Address(RVA = "0x5EE4FC0", Offset = "0x5EE3FC0", VA = "0x5EE4FC0")]
	public static Type XsdtoClr(string xsdTypeName)
	{
		return null;
	}

	[Token(Token = "0x600083A")]
	[Address(RVA = "0x5EE5090", Offset = "0x5EE4090", VA = "0x5EE5090")]
	private static NameType FindNameType(string name)
	{
		return null;
	}

	[Token(Token = "0x600083B")]
	[Address(RVA = "0x5EE5150", Offset = "0x5EE4150", VA = "0x5EE5150")]
	private Type ParseDataType(string dt)
	{
		return null;
	}

	[Token(Token = "0x600083C")]
	[Address(RVA = "0x5EE5350", Offset = "0x5EE4350", VA = "0x5EE5350")]
	internal static bool IsXsdType(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x600083D")]
	[Address(RVA = "0x5EDB6E0", Offset = "0x5EDA6E0", VA = "0x5EDB6E0")]
	internal XmlSchemaAnnotated FindTypeNode(XmlSchemaAnnotated node)
	{
		return null;
	}

	[Token(Token = "0x600083E")]
	[Address(RVA = "0x5EE0B10", Offset = "0x5EDFB10", VA = "0x5EE0B10")]
	internal void HandleSimpleTypeSimpleContentColumn(XmlSchemaSimpleType typeNode, string strType, DataTable table, bool isBase, XmlAttribute[] attrs, bool isNillable)
	{
	}

	[Token(Token = "0x600083F")]
	[Address(RVA = "0x5EE0310", Offset = "0x5EDF310", VA = "0x5EE0310")]
	internal void HandleSimpleContentColumn(string strType, DataTable table, bool isBase, XmlAttribute[] attrs, bool isNillable)
	{
	}

	[Token(Token = "0x6000840")]
	[Address(RVA = "0x5EDEE60", Offset = "0x5EDDE60", VA = "0x5EDEE60")]
	internal void HandleAttributeColumn(XmlSchemaAttribute attrib, DataTable table, bool isBase)
	{
	}

	[Token(Token = "0x6000841")]
	[Address(RVA = "0x5EDDCC0", Offset = "0x5EDCCC0", VA = "0x5EDDCC0")]
	internal void HandleElementColumn(XmlSchemaElement elem, DataTable table, bool isBase)
	{
	}

	[Token(Token = "0x6000842")]
	[Address(RVA = "0x5EDBBD0", Offset = "0x5EDABD0", VA = "0x5EDBBD0")]
	internal void HandleDataSet(XmlSchemaElement node, bool isNewDataSet)
	{
	}

	[Token(Token = "0x6000843")]
	[Address(RVA = "0x5EE53B0", Offset = "0x5EE43B0", VA = "0x5EE53B0")]
	private void AddTablesToList(List<DataTable> tableList, DataTable dt)
	{
	}

	[Token(Token = "0x6000844")]
	[Address(RVA = "0x5EE3340", Offset = "0x5EE2340", VA = "0x5EE3340")]
	private string GetPrefix(string ns)
	{
		return null;
	}

	[Token(Token = "0x6000845")]
	[Address(RVA = "0x5EE55C0", Offset = "0x5EE45C0", VA = "0x5EE55C0")]
	private string GetNamespaceFromPrefix(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000846")]
	[Address(RVA = "0x5EE4E30", Offset = "0x5EE3E30", VA = "0x5EE4E30")]
	private string GetTableNamespace(XmlSchemaIdentityConstraint key)
	{
		return null;
	}

	[Token(Token = "0x6000847")]
	[Address(RVA = "0x5EE24A0", Offset = "0x5EE14A0", VA = "0x5EE24A0")]
	private string GetTableName(XmlSchemaIdentityConstraint key)
	{
		return null;
	}

	[Token(Token = "0x6000848")]
	[Address(RVA = "0x5ED8780", Offset = "0x5ED7780", VA = "0x5ED8780")]
	internal bool IsTable(XmlSchemaElement node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000849")]
	[Address(RVA = "0x5EDBA60", Offset = "0x5EDAA60", VA = "0x5EDBA60")]
	internal DataTable HandleTable(XmlSchemaElement node)
	{
		return null;
	}

	[Token(Token = "0x600084A")]
	[Address(RVA = "0x5EE5A10", Offset = "0x5EE4A10", VA = "0x5EE5A10")]
	public XSDSchema()
	{
	}
}
