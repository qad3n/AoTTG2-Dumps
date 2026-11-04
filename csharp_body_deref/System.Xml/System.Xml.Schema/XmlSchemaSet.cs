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
		[Address(RVA = "0x267E830", Offset = "0x267CE30", VA = "0x18267E830")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700066C")]
	public bool IsCompiled
	{
		[Token(Token = "0x6001724")]
		[Address(RVA = "0xF1D190", Offset = "0xF1B790", VA = "0x180F1D190")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700066D")]
	public XmlResolver XmlResolver
	{
		[Token(Token = "0x6001725")]
		[Address(RVA = "0x267EA70", Offset = "0x267D070", VA = "0x18267EA70")]
		set
		{
		}
	}

	[Token(Token = "0x1700066E")]
	public XmlSchemaCompilationSettings CompilationSettings
	{
		[Token(Token = "0x6001726")]
		[Address(RVA = "0xCDB5A0", Offset = "0xCD9BA0", VA = "0x180CDB5A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001727")]
		[Address(RVA = "0xCDB690", Offset = "0xCD9C90", VA = "0x180CDB690")]
		set
		{
		}
	}

	[Token(Token = "0x1700066F")]
	public int Count
	{
		[Token(Token = "0x6001728")]
		[Address(RVA = "0x267E680", Offset = "0x267CC80", VA = "0x18267E680")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000670")]
	public XmlSchemaObjectTable GlobalElements
	{
		[Token(Token = "0x6001729")]
		[Address(RVA = "0x267E730", Offset = "0x267CD30", VA = "0x18267E730")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000671")]
	public XmlSchemaObjectTable GlobalAttributes
	{
		[Token(Token = "0x600172A")]
		[Address(RVA = "0x267E6B0", Offset = "0x267CCB0", VA = "0x18267E6B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000672")]
	public XmlSchemaObjectTable GlobalTypes
	{
		[Token(Token = "0x600172B")]
		[Address(RVA = "0x267E7B0", Offset = "0x267CDB0", VA = "0x18267E7B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000673")]
	internal XmlSchemaObjectTable SubstitutionGroups
	{
		[Token(Token = "0x600172C")]
		[Address(RVA = "0x267E8B0", Offset = "0x267CEB0", VA = "0x18267E8B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000674")]
	internal Hashtable SchemaLocations
	{
		[Token(Token = "0x600172D")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000675")]
	internal XmlSchemaObjectTable TypeExtensions
	{
		[Token(Token = "0x600172E")]
		[Address(RVA = "0x267E930", Offset = "0x267CF30", VA = "0x18267E930")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000676")]
	internal SchemaInfo CompiledInfo
	{
		[Token(Token = "0x6001743")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000677")]
	internal XmlReaderSettings ReaderSettings
	{
		[Token(Token = "0x6001744")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000678")]
	internal SortedList SortedSchemas
	{
		[Token(Token = "0x600174B")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000001")]
	public event ValidationEventHandler ValidationEventHandler
	{
		[Token(Token = "0x6001722")]
		[Address(RVA = "0x267E540", Offset = "0x267CB40", VA = "0x18267E540")]
		add
		{
		}
		[Token(Token = "0x6001723")]
		[Address(RVA = "0x267E9B0", Offset = "0x267CFB0", VA = "0x18267E9B0")]
		remove
		{
		}
	}

	[Token(Token = "0x6001720")]
	[Address(RVA = "0x267E1E0", Offset = "0x267C7E0", VA = "0x18267E1E0")]
	public XmlSchemaSet()
	{
	}

	[Token(Token = "0x6001721")]
	[Address(RVA = "0x267E240", Offset = "0x267C840", VA = "0x18267E240")]
	public XmlSchemaSet(XmlNameTable nameTable)
	{
	}

	[Token(Token = "0x600172F")]
	[Address(RVA = "0x26778D0", Offset = "0x2675ED0", VA = "0x1826778D0")]
	public void Add(XmlSchemaSet schemas)
	{
	}

	[Token(Token = "0x6001730")]
	[Address(RVA = "0x2678480", Offset = "0x2676A80", VA = "0x182678480")]
	public XmlSchema Add(XmlSchema schema)
	{
		return null;
	}

	[Token(Token = "0x6001731")]
	[Address(RVA = "0x267B9A0", Offset = "0x2679FA0", VA = "0x18267B9A0")]
	public bool RemoveRecursive(XmlSchema schemaToRemove)
	{
		return default(bool);
	}

	[Token(Token = "0x6001732")]
	[Address(RVA = "0x2678D60", Offset = "0x2677360", VA = "0x182678D60")]
	public bool Contains(string targetNamespace)
	{
		return default(bool);
	}

	[Token(Token = "0x6001733")]
	[Address(RVA = "0x2678740", Offset = "0x2676D40", VA = "0x182678740")]
	public void Compile()
	{
	}

	[Token(Token = "0x6001734")]
	[Address(RVA = "0x267D300", Offset = "0x267B900", VA = "0x18267D300")]
	public XmlSchema Reprocess(XmlSchema schema)
	{
		return null;
	}

	[Token(Token = "0x6001735")]
	[Address(RVA = "0x267A0E0", Offset = "0x26786E0", VA = "0x18267A0E0")]
	public void CopyTo(XmlSchema[] schemas, int index)
	{
	}

	[Token(Token = "0x6001736")]
	[Address(RVA = "0x267DFD0", Offset = "0x267C5D0", VA = "0x18267DFD0")]
	public ICollection Schemas()
	{
		return null;
	}

	[Token(Token = "0x6001737")]
	[Address(RVA = "0x267DE40", Offset = "0x267C440", VA = "0x18267DE40")]
	public ICollection Schemas(string targetNamespace)
	{
		return null;
	}

	[Token(Token = "0x6001738")]
	[Address(RVA = "0x2677870", Offset = "0x2675E70", VA = "0x182677870")]
	private XmlSchema Add(string targetNamespace, XmlSchema schema)
	{
		return null;
	}

	[Token(Token = "0x6001739")]
	[Address(RVA = "0x2677FF0", Offset = "0x26765F0", VA = "0x182677FF0")]
	internal void Add(string targetNamespace, XmlReader reader, Hashtable validatedNamespaces)
	{
	}

	[Token(Token = "0x600173A")]
	[Address(RVA = "0x267A280", Offset = "0x2678880", VA = "0x18267A280")]
	internal XmlSchema FindSchemaByNSAndUrl(Uri schemaUri, string ns, DictionaryEntry[] locationsTable)
	{
		return null;
	}

	[Token(Token = "0x600173B")]
	[Address(RVA = "0x26770D0", Offset = "0x26756D0", VA = "0x1826770D0")]
	private void AddSchemaToSet(XmlSchema schema)
	{
	}

	[Token(Token = "0x600173C")]
	[Address(RVA = "0x267B640", Offset = "0x2679C40", VA = "0x18267B640")]
	private void ProcessNewSubstitutionGroups(XmlSchemaObjectTable substitutionGroupsTable, bool resolve)
	{
	}

	[Token(Token = "0x600173D")]
	[Address(RVA = "0x267DA80", Offset = "0x267C080", VA = "0x18267DA80")]
	private void ResolveSubstitutionGroup(XmlSchemaSubstitutionGroup substitutionGroup, XmlSchemaObjectTable substTable)
	{
	}

	[Token(Token = "0x600173E")]
	[Address(RVA = "0x267D010", Offset = "0x267B610", VA = "0x18267D010")]
	internal XmlSchema Remove(XmlSchema schema, bool forceCompile)
	{
		return null;
	}

	[Token(Token = "0x600173F")]
	[Address(RVA = "0x2678640", Offset = "0x2676C40", VA = "0x182678640")]
	private void ClearTables()
	{
	}

	[Token(Token = "0x6001740")]
	[Address(RVA = "0x267B500", Offset = "0x2679B00", VA = "0x18267B500")]
	internal bool PreprocessSchema(ref XmlSchema schema, string targetNamespace)
	{
		return default(bool);
	}

	[Token(Token = "0x6001741")]
	[Address(RVA = "0x267B3E0", Offset = "0x26799E0", VA = "0x18267B3E0")]
	internal XmlSchema ParseSchema(string targetNamespace, XmlReader reader)
	{
		return null;
	}

	[Token(Token = "0x6001742")]
	[Address(RVA = "0x2678DB0", Offset = "0x26773B0", VA = "0x182678DB0")]
	internal void CopyFromCompiledSet(XmlSchemaSet otherSet)
	{
	}

	[Token(Token = "0x6001745")]
	[Address(RVA = "0x267A540", Offset = "0x2678B40", VA = "0x18267A540")]
	internal XmlResolver GetResolver()
	{
		return null;
	}

	[Token(Token = "0x6001746")]
	[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
	internal ValidationEventHandler GetEventHandler()
	{
		return null;
	}

	[Token(Token = "0x6001747")]
	[Address(RVA = "0x267A6E0", Offset = "0x2678CE0", VA = "0x18267A6E0")]
	internal SchemaNames GetSchemaNames(XmlNameTable nt)
	{
		return null;
	}

	[Token(Token = "0x6001748")]
	[Address(RVA = "0x267A830", Offset = "0x2678E30", VA = "0x18267A830")]
	internal bool IsSchemaLoaded(Uri schemaUri, string targetNamespace, out XmlSchema schema)
	{
		return default(bool);
	}

	[Token(Token = "0x6001749")]
	[Address(RVA = "0x267A560", Offset = "0x2678B60", VA = "0x18267A560")]
	internal bool GetSchemaByUri(Uri schemaUri, out XmlSchema schema)
	{
		return default(bool);
	}

	[Token(Token = "0x600174A")]
	[Address(RVA = "0x267A7A0", Offset = "0x2678DA0", VA = "0x18267A7A0")]
	internal string GetTargetNamespace(XmlSchema schema)
	{
		return null;
	}

	[Token(Token = "0x600174C")]
	[Address(RVA = "0x267C1D0", Offset = "0x267A7D0", VA = "0x18267C1D0")]
	private void RemoveSchemaFromCaches(XmlSchema schema)
	{
	}

	[Token(Token = "0x600174D")]
	[Address(RVA = "0x267C660", Offset = "0x267AC60", VA = "0x18267C660")]
	private void RemoveSchemaFromGlobalTables(XmlSchema schema)
	{
	}

	[Token(Token = "0x600174E")]
	[Address(RVA = "0x26774B0", Offset = "0x2675AB0", VA = "0x1826774B0")]
	private bool AddToTable(XmlSchemaObjectTable table, XmlQualifiedName qname, XmlSchemaObject item)
	{
		return default(bool);
	}

	[Token(Token = "0x600174F")]
	[Address(RVA = "0x267E0C0", Offset = "0x267C6C0", VA = "0x18267E0C0")]
	private void VerifyTables()
	{
	}

	[Token(Token = "0x6001750")]
	[Address(RVA = "0x267A7E0", Offset = "0x2678DE0", VA = "0x18267A7E0")]
	private void InternalValidationCallback(object sender, ValidationEventArgs e)
	{
	}

	[Token(Token = "0x6001751")]
	[Address(RVA = "0x267E000", Offset = "0x267C600", VA = "0x18267E000")]
	private void SendValidationEvent(XmlSchemaException e, XmlSeverityType severity)
	{
	}
}
