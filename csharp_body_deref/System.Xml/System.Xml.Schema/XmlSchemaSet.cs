// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaSet
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000252")]
public class XmlSchemaSet
{
	[Token(Token = "0x4000BE4")]
	[FieldOffset(Offset = "0x10")]
	private XmlNameTable nameTable;

	[Token(Token = "0x4000BE5")]
	[FieldOffset(Offset = "0x18")]
	private SchemaNames schemaNames;

	[Token(Token = "0x4000BE6")]
	[FieldOffset(Offset = "0x20")]
	private SortedList schemas;

	[Token(Token = "0x4000BE7")]
	[FieldOffset(Offset = "0x28")]
	private ValidationEventHandler internalEventHandler;

	[Token(Token = "0x4000BE8")]
	[FieldOffset(Offset = "0x30")]
	private ValidationEventHandler eventHandler;

	[Token(Token = "0x4000BE9")]
	[FieldOffset(Offset = "0x38")]
	private bool isCompiled;

	[Token(Token = "0x4000BEA")]
	[FieldOffset(Offset = "0x40")]
	private Hashtable schemaLocations;

	[Token(Token = "0x4000BEB")]
	[FieldOffset(Offset = "0x48")]
	private Hashtable chameleonSchemas;

	[Token(Token = "0x4000BEC")]
	[FieldOffset(Offset = "0x50")]
	private Hashtable targetNamespaces;

	[Token(Token = "0x4000BED")]
	[FieldOffset(Offset = "0x58")]
	private bool compileAll;

	[Token(Token = "0x4000BEE")]
	[FieldOffset(Offset = "0x60")]
	private SchemaInfo cachedCompiledInfo;

	[Token(Token = "0x4000BEF")]
	[FieldOffset(Offset = "0x68")]
	private XmlReaderSettings readerSettings;

	[Token(Token = "0x4000BF0")]
	[FieldOffset(Offset = "0x70")]
	private XmlSchema schemaForSchema;

	[Token(Token = "0x4000BF1")]
	[FieldOffset(Offset = "0x78")]
	private XmlSchemaCompilationSettings compilationSettings;

	[Token(Token = "0x4000BF2")]
	[FieldOffset(Offset = "0x80")]
	internal XmlSchemaObjectTable elements;

	[Token(Token = "0x4000BF3")]
	[FieldOffset(Offset = "0x88")]
	internal XmlSchemaObjectTable attributes;

	[Token(Token = "0x4000BF4")]
	[FieldOffset(Offset = "0x90")]
	internal XmlSchemaObjectTable schemaTypes;

	[Token(Token = "0x4000BF5")]
	[FieldOffset(Offset = "0x98")]
	internal XmlSchemaObjectTable substitutionGroups;

	[Token(Token = "0x4000BF6")]
	[FieldOffset(Offset = "0xA0")]
	private XmlSchemaObjectTable typeExtensions;

	[Token(Token = "0x4000BF7")]
	[FieldOffset(Offset = "0xA8")]
	private object internalSyncObject;

	[Token(Token = "0x1700066B")]
	internal object InternalSyncObject
	{
		[Token(Token = "0x600171F")]
		[Address(RVA = "0x4728380", Offset = "0x4728380", VA = "0x4728380")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700066C")]
	public bool IsCompiled
	{
		[Token(Token = "0x6001724")]
		[Address(RVA = "0x47288B0", Offset = "0x47288B0", VA = "0x47288B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700066D")]
	public XmlResolver XmlResolver
	{
		[Token(Token = "0x6001725")]
		[Address(RVA = "0x47288C0", Offset = "0x47288C0", VA = "0x47288C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700066E")]
	public XmlSchemaCompilationSettings CompilationSettings
	{
		[Token(Token = "0x6001726")]
		[Address(RVA = "0x47288E0", Offset = "0x47288E0", VA = "0x47288E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001727")]
		[Address(RVA = "0x47288F0", Offset = "0x47288F0", VA = "0x47288F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700066F")]
	public int Count
	{
		[Token(Token = "0x6001728")]
		[Address(RVA = "0x4728900", Offset = "0x4728900", VA = "0x4728900")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000670")]
	public XmlSchemaObjectTable GlobalElements
	{
		[Token(Token = "0x6001729")]
		[Address(RVA = "0x4728930", Offset = "0x4728930", VA = "0x4728930")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000671")]
	public XmlSchemaObjectTable GlobalAttributes
	{
		[Token(Token = "0x600172A")]
		[Address(RVA = "0x47289B0", Offset = "0x47289B0", VA = "0x47289B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000672")]
	public XmlSchemaObjectTable GlobalTypes
	{
		[Token(Token = "0x600172B")]
		[Address(RVA = "0x4728A30", Offset = "0x4728A30", VA = "0x4728A30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000673")]
	internal XmlSchemaObjectTable SubstitutionGroups
	{
		[Token(Token = "0x600172C")]
		[Address(RVA = "0x4728AB0", Offset = "0x4728AB0", VA = "0x4728AB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000674")]
	internal Hashtable SchemaLocations
	{
		[Token(Token = "0x600172D")]
		[Address(RVA = "0x4728B30", Offset = "0x4728B30", VA = "0x4728B30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000675")]
	internal XmlSchemaObjectTable TypeExtensions
	{
		[Token(Token = "0x600172E")]
		[Address(RVA = "0x4728B40", Offset = "0x4728B40", VA = "0x4728B40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000676")]
	internal SchemaInfo CompiledInfo
	{
		[Token(Token = "0x6001743")]
		[Address(RVA = "0x47324E0", Offset = "0x47324E0", VA = "0x47324E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000677")]
	internal XmlReaderSettings ReaderSettings
	{
		[Token(Token = "0x6001744")]
		[Address(RVA = "0x47324F0", Offset = "0x47324F0", VA = "0x47324F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000678")]
	internal SortedList SortedSchemas
	{
		[Token(Token = "0x600174B")]
		[Address(RVA = "0x4732670", Offset = "0x4732670", VA = "0x4732670")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000001")]
	public event ValidationEventHandler ValidationEventHandler
	{
		[Token(Token = "0x6001722")]
		[Address(RVA = "0x4728750", Offset = "0x4728750", VA = "0x4728750")]
		add
		{
		}
		[Token(Token = "0x6001723")]
		[Address(RVA = "0x4728820", Offset = "0x4728820", VA = "0x4728820")]
		remove
		{
		}
	}

	[Token(Token = "0x6001720")]
	[Address(RVA = "0x4728400", Offset = "0x4728400", VA = "0x4728400")]
	public XmlSchemaSet()
	{
	}

	[Token(Token = "0x6001721")]
	[Address(RVA = "0x4728450", Offset = "0x4728450", VA = "0x4728450")]
	public XmlSchemaSet(XmlNameTable nameTable)
	{
	}

	[Token(Token = "0x600172F")]
	[Address(RVA = "0x4728BC0", Offset = "0x4728BC0", VA = "0x4728BC0")]
	public void Add(XmlSchemaSet schemas)
	{
	}

	[Token(Token = "0x6001730")]
	[Address(RVA = "0x472BFC0", Offset = "0x472BFC0", VA = "0x472BFC0")]
	public XmlSchema Add(XmlSchema schema)
	{
		return null;
	}

	[Token(Token = "0x6001731")]
	[Address(RVA = "0x472C200", Offset = "0x472C200", VA = "0x472C200")]
	public bool RemoveRecursive(XmlSchema schemaToRemove)
	{
		return default(bool);
	}

	[Token(Token = "0x6001732")]
	[Address(RVA = "0x472D440", Offset = "0x472D440", VA = "0x472D440")]
	public bool Contains(string targetNamespace)
	{
		return default(bool);
	}

	[Token(Token = "0x6001733")]
	[Address(RVA = "0x472D490", Offset = "0x472D490", VA = "0x472D490")]
	public void Compile()
	{
	}

	[Token(Token = "0x6001734")]
	[Address(RVA = "0x472DE80", Offset = "0x472DE80", VA = "0x472DE80")]
	public XmlSchema Reprocess(XmlSchema schema)
	{
		return null;
	}

	[Token(Token = "0x6001735")]
	[Address(RVA = "0x4730440", Offset = "0x4730440", VA = "0x4730440")]
	public void CopyTo(XmlSchema[] schemas, int index)
	{
	}

	[Token(Token = "0x6001736")]
	[Address(RVA = "0x47305B0", Offset = "0x47305B0", VA = "0x47305B0")]
	public ICollection Schemas()
	{
		return null;
	}

	[Token(Token = "0x6001737")]
	[Address(RVA = "0x47300B0", Offset = "0x47300B0", VA = "0x47300B0")]
	public ICollection Schemas(string targetNamespace)
	{
		return null;
	}

	[Token(Token = "0x6001738")]
	[Address(RVA = "0x472BF60", Offset = "0x472BF60", VA = "0x472BF60")]
	private XmlSchema Add(string targetNamespace, XmlSchema schema)
	{
		return null;
	}

	[Token(Token = "0x6001739")]
	[Address(RVA = "0x4730A90", Offset = "0x4730A90", VA = "0x4730A90")]
	internal void Add(string targetNamespace, XmlReader reader, Hashtable validatedNamespaces)
	{
	}

	[Token(Token = "0x600173A")]
	[Address(RVA = "0x472BC80", Offset = "0x472BC80", VA = "0x472BC80")]
	internal XmlSchema FindSchemaByNSAndUrl(Uri schemaUri, string ns, DictionaryEntry[] locationsTable)
	{
		return null;
	}

	[Token(Token = "0x600173B")]
	[Address(RVA = "0x47305E0", Offset = "0x47305E0", VA = "0x47305E0")]
	private void AddSchemaToSet(XmlSchema schema)
	{
	}

	[Token(Token = "0x600173C")]
	[Address(RVA = "0x47313A0", Offset = "0x47313A0", VA = "0x47313A0")]
	private void ProcessNewSubstitutionGroups(XmlSchemaObjectTable substitutionGroupsTable, bool resolve)
	{
	}

	[Token(Token = "0x600173D")]
	[Address(RVA = "0x4731A40", Offset = "0x4731A40", VA = "0x4731A40")]
	private void ResolveSubstitutionGroup(XmlSchemaSubstitutionGroup substitutionGroup, XmlSchemaObjectTable substTable)
	{
	}

	[Token(Token = "0x600173E")]
	[Address(RVA = "0x472CFF0", Offset = "0x472CFF0", VA = "0x472CFF0")]
	internal XmlSchema Remove(XmlSchema schema, bool forceCompile)
	{
		return null;
	}

	[Token(Token = "0x600173F")]
	[Address(RVA = "0x472DC60", Offset = "0x472DC60", VA = "0x472DC60")]
	private void ClearTables()
	{
	}

	[Token(Token = "0x6001740")]
	[Address(RVA = "0x4730300", Offset = "0x4730300", VA = "0x4730300")]
	internal bool PreprocessSchema(ref XmlSchema schema, string targetNamespace)
	{
		return default(bool);
	}

	[Token(Token = "0x6001741")]
	[Address(RVA = "0x47311D0", Offset = "0x47311D0", VA = "0x47311D0")]
	internal XmlSchema ParseSchema(string targetNamespace, XmlReader reader)
	{
		return null;
	}

	[Token(Token = "0x6001742")]
	[Address(RVA = "0x47297A0", Offset = "0x47297A0", VA = "0x47297A0")]
	internal void CopyFromCompiledSet(XmlSchemaSet otherSet)
	{
	}

	[Token(Token = "0x6001745")]
	[Address(RVA = "0x4732500", Offset = "0x4732500", VA = "0x4732500")]
	internal XmlResolver GetResolver()
	{
		return null;
	}

	[Token(Token = "0x6001746")]
	[Address(RVA = "0x4732520", Offset = "0x4732520", VA = "0x4732520")]
	internal ValidationEventHandler GetEventHandler()
	{
		return null;
	}

	[Token(Token = "0x6001747")]
	[Address(RVA = "0x47322D0", Offset = "0x47322D0", VA = "0x47322D0")]
	internal SchemaNames GetSchemaNames(XmlNameTable nt)
	{
		return null;
	}

	[Token(Token = "0x6001748")]
	[Address(RVA = "0x4730E70", Offset = "0x4730E70", VA = "0x4730E70")]
	internal bool IsSchemaLoaded(Uri schemaUri, string targetNamespace, out XmlSchema schema)
	{
		return default(bool);
	}

	[Token(Token = "0x6001749")]
	[Address(RVA = "0x4732530", Offset = "0x4732530", VA = "0x4732530")]
	internal bool GetSchemaByUri(Uri schemaUri, out XmlSchema schema)
	{
		return default(bool);
	}

	[Token(Token = "0x600174A")]
	[Address(RVA = "0x472CF30", Offset = "0x472CF30", VA = "0x472CF30")]
	internal string GetTargetNamespace(XmlSchema schema)
	{
		return null;
	}

	[Token(Token = "0x600174C")]
	[Address(RVA = "0x472F980", Offset = "0x472F980", VA = "0x472F980")]
	private void RemoveSchemaFromCaches(XmlSchema schema)
	{
	}

	[Token(Token = "0x600174D")]
	[Address(RVA = "0x472EA70", Offset = "0x472EA70", VA = "0x472EA70")]
	private void RemoveSchemaFromGlobalTables(XmlSchema schema)
	{
	}

	[Token(Token = "0x600174E")]
	[Address(RVA = "0x4731EF0", Offset = "0x4731EF0", VA = "0x4731EF0")]
	private bool AddToTable(XmlSchemaObjectTable table, XmlQualifiedName qname, XmlSchemaObject item)
	{
		return default(bool);
	}

	[Token(Token = "0x600174F")]
	[Address(RVA = "0x4732370", Offset = "0x4732370", VA = "0x4732370")]
	private void VerifyTables()
	{
	}

	[Token(Token = "0x6001750")]
	[Address(RVA = "0x4732680", Offset = "0x4732680", VA = "0x4732680")]
	private void InternalValidationCallback(object sender, ValidationEventArgs e)
	{
	}

	[Token(Token = "0x6001751")]
	[Address(RVA = "0x472CF60", Offset = "0x472CF60", VA = "0x472CF60")]
	private void SendValidationEvent(XmlSchemaException e, XmlSeverityType severity)
	{
	}
}
