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
		[Address(RVA = "0x60304A0", Offset = "0x602F4A0", VA = "0x60304A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700066C")]
	public bool IsCompiled
	{
		[Token(Token = "0x6001724")]
		[Address(RVA = "0x60309F0", Offset = "0x602F9F0", VA = "0x60309F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700066D")]
	public XmlResolver XmlResolver
	{
		[Token(Token = "0x6001725")]
		[Address(RVA = "0x6030A00", Offset = "0x602FA00", VA = "0x6030A00")]
		set
		{
		}
	}

	[Token(Token = "0x1700066E")]
	public XmlSchemaCompilationSettings CompilationSettings
	{
		[Token(Token = "0x6001726")]
		[Address(RVA = "0x6030A20", Offset = "0x602FA20", VA = "0x6030A20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001727")]
		[Address(RVA = "0x6030A30", Offset = "0x602FA30", VA = "0x6030A30")]
		set
		{
		}
	}

	[Token(Token = "0x1700066F")]
	public int Count
	{
		[Token(Token = "0x6001728")]
		[Address(RVA = "0x6030A40", Offset = "0x602FA40", VA = "0x6030A40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000670")]
	public XmlSchemaObjectTable GlobalElements
	{
		[Token(Token = "0x6001729")]
		[Address(RVA = "0x6030A70", Offset = "0x602FA70", VA = "0x6030A70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000671")]
	public XmlSchemaObjectTable GlobalAttributes
	{
		[Token(Token = "0x600172A")]
		[Address(RVA = "0x6030AF0", Offset = "0x602FAF0", VA = "0x6030AF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000672")]
	public XmlSchemaObjectTable GlobalTypes
	{
		[Token(Token = "0x600172B")]
		[Address(RVA = "0x6030B70", Offset = "0x602FB70", VA = "0x6030B70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000673")]
	internal XmlSchemaObjectTable SubstitutionGroups
	{
		[Token(Token = "0x600172C")]
		[Address(RVA = "0x6030BF0", Offset = "0x602FBF0", VA = "0x6030BF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000674")]
	internal Hashtable SchemaLocations
	{
		[Token(Token = "0x600172D")]
		[Address(RVA = "0x6030C70", Offset = "0x602FC70", VA = "0x6030C70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000675")]
	internal XmlSchemaObjectTable TypeExtensions
	{
		[Token(Token = "0x600172E")]
		[Address(RVA = "0x6030C80", Offset = "0x602FC80", VA = "0x6030C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000676")]
	internal SchemaInfo CompiledInfo
	{
		[Token(Token = "0x6001743")]
		[Address(RVA = "0x60393D0", Offset = "0x60383D0", VA = "0x60393D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000677")]
	internal XmlReaderSettings ReaderSettings
	{
		[Token(Token = "0x6001744")]
		[Address(RVA = "0x60393E0", Offset = "0x60383E0", VA = "0x60393E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000678")]
	internal SortedList SortedSchemas
	{
		[Token(Token = "0x600174B")]
		[Address(RVA = "0x6039570", Offset = "0x6038570", VA = "0x6039570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000001")]
	public event ValidationEventHandler ValidationEventHandler
	{
		[Token(Token = "0x6001722")]
		[Address(RVA = "0x6030880", Offset = "0x602F880", VA = "0x6030880")]
		add
		{
		}
		[Token(Token = "0x6001723")]
		[Address(RVA = "0x6030960", Offset = "0x602F960", VA = "0x6030960")]
		remove
		{
		}
	}

	[Token(Token = "0x6001720")]
	[Address(RVA = "0x6030520", Offset = "0x602F520", VA = "0x6030520")]
	public XmlSchemaSet()
	{
	}

	[Token(Token = "0x6001721")]
	[Address(RVA = "0x6030580", Offset = "0x602F580", VA = "0x6030580")]
	public XmlSchemaSet(XmlNameTable nameTable)
	{
	}

	[Token(Token = "0x600172F")]
	[Address(RVA = "0x6030D00", Offset = "0x602FD00", VA = "0x6030D00")]
	public void Add(XmlSchemaSet schemas)
	{
	}

	[Token(Token = "0x6001730")]
	[Address(RVA = "0x6033A40", Offset = "0x6032A40", VA = "0x6033A40")]
	public XmlSchema Add(XmlSchema schema)
	{
		return null;
	}

	[Token(Token = "0x6001731")]
	[Address(RVA = "0x6033C60", Offset = "0x6032C60", VA = "0x6033C60")]
	public bool RemoveRecursive(XmlSchema schemaToRemove)
	{
		return default(bool);
	}

	[Token(Token = "0x6001732")]
	[Address(RVA = "0x6034C20", Offset = "0x6033C20", VA = "0x6034C20")]
	public bool Contains(string targetNamespace)
	{
		return default(bool);
	}

	[Token(Token = "0x6001733")]
	[Address(RVA = "0x6034C70", Offset = "0x6033C70", VA = "0x6034C70")]
	public void Compile()
	{
	}

	[Token(Token = "0x6001734")]
	[Address(RVA = "0x6035440", Offset = "0x6034440", VA = "0x6035440")]
	public XmlSchema Reprocess(XmlSchema schema)
	{
		return null;
	}

	[Token(Token = "0x6001735")]
	[Address(RVA = "0x6037440", Offset = "0x6036440", VA = "0x6037440")]
	public void CopyTo(XmlSchema[] schemas, int index)
	{
	}

	[Token(Token = "0x6001736")]
	[Address(RVA = "0x60375B0", Offset = "0x60365B0", VA = "0x60375B0")]
	public ICollection Schemas()
	{
		return null;
	}

	[Token(Token = "0x6001737")]
	[Address(RVA = "0x60370B0", Offset = "0x60360B0", VA = "0x60370B0")]
	public ICollection Schemas(string targetNamespace)
	{
		return null;
	}

	[Token(Token = "0x6001738")]
	[Address(RVA = "0x60339F0", Offset = "0x60329F0", VA = "0x60339F0")]
	private XmlSchema Add(string targetNamespace, XmlSchema schema)
	{
		return null;
	}

	[Token(Token = "0x6001739")]
	[Address(RVA = "0x6037A90", Offset = "0x6036A90", VA = "0x6037A90")]
	internal void Add(string targetNamespace, XmlReader reader, Hashtable validatedNamespaces)
	{
	}

	[Token(Token = "0x600173A")]
	[Address(RVA = "0x6033730", Offset = "0x6032730", VA = "0x6033730")]
	internal XmlSchema FindSchemaByNSAndUrl(Uri schemaUri, string ns, DictionaryEntry[] locationsTable)
	{
		return null;
	}

	[Token(Token = "0x600173B")]
	[Address(RVA = "0x60375E0", Offset = "0x60365E0", VA = "0x60375E0")]
	private void AddSchemaToSet(XmlSchema schema)
	{
	}

	[Token(Token = "0x600173C")]
	[Address(RVA = "0x60383B0", Offset = "0x60373B0", VA = "0x60383B0")]
	private void ProcessNewSubstitutionGroups(XmlSchemaObjectTable substitutionGroupsTable, bool resolve)
	{
	}

	[Token(Token = "0x600173D")]
	[Address(RVA = "0x6038930", Offset = "0x6037930", VA = "0x6038930")]
	private void ResolveSubstitutionGroup(XmlSchemaSubstitutionGroup substitutionGroup, XmlSchemaObjectTable substTable)
	{
	}

	[Token(Token = "0x600173E")]
	[Address(RVA = "0x6034870", Offset = "0x6033870", VA = "0x6034870")]
	internal XmlSchema Remove(XmlSchema schema, bool forceCompile)
	{
		return null;
	}

	[Token(Token = "0x600173F")]
	[Address(RVA = "0x6035220", Offset = "0x6034220", VA = "0x6035220")]
	private void ClearTables()
	{
	}

	[Token(Token = "0x6001740")]
	[Address(RVA = "0x6037300", Offset = "0x6036300", VA = "0x6037300")]
	internal bool PreprocessSchema(ref XmlSchema schema, string targetNamespace)
	{
		return default(bool);
	}

	[Token(Token = "0x6001741")]
	[Address(RVA = "0x60381D0", Offset = "0x60371D0", VA = "0x60381D0")]
	internal XmlSchema ParseSchema(string targetNamespace, XmlReader reader)
	{
		return null;
	}

	[Token(Token = "0x6001742")]
	[Address(RVA = "0x6031800", Offset = "0x6030800", VA = "0x6031800")]
	internal void CopyFromCompiledSet(XmlSchemaSet otherSet)
	{
	}

	[Token(Token = "0x6001745")]
	[Address(RVA = "0x60393F0", Offset = "0x60383F0", VA = "0x60393F0")]
	internal XmlResolver GetResolver()
	{
		return null;
	}

	[Token(Token = "0x6001746")]
	[Address(RVA = "0x6039410", Offset = "0x6038410", VA = "0x6039410")]
	internal ValidationEventHandler GetEventHandler()
	{
		return null;
	}

	[Token(Token = "0x6001747")]
	[Address(RVA = "0x60391C0", Offset = "0x60381C0", VA = "0x60391C0")]
	internal SchemaNames GetSchemaNames(XmlNameTable nt)
	{
		return null;
	}

	[Token(Token = "0x6001748")]
	[Address(RVA = "0x6037E60", Offset = "0x6036E60", VA = "0x6037E60")]
	internal bool IsSchemaLoaded(Uri schemaUri, string targetNamespace, out XmlSchema schema)
	{
		return default(bool);
	}

	[Token(Token = "0x6001749")]
	[Address(RVA = "0x6039420", Offset = "0x6038420", VA = "0x6039420")]
	internal bool GetSchemaByUri(Uri schemaUri, out XmlSchema schema)
	{
		return default(bool);
	}

	[Token(Token = "0x600174A")]
	[Address(RVA = "0x60347B0", Offset = "0x60337B0", VA = "0x60347B0")]
	internal string GetTargetNamespace(XmlSchema schema)
	{
		return null;
	}

	[Token(Token = "0x600174C")]
	[Address(RVA = "0x6036A20", Offset = "0x6035A20", VA = "0x6036A20")]
	private void RemoveSchemaFromCaches(XmlSchema schema)
	{
	}

	[Token(Token = "0x600174D")]
	[Address(RVA = "0x6035D30", Offset = "0x6034D30", VA = "0x6035D30")]
	private void RemoveSchemaFromGlobalTables(XmlSchema schema)
	{
	}

	[Token(Token = "0x600174E")]
	[Address(RVA = "0x6038E40", Offset = "0x6037E40", VA = "0x6038E40")]
	private bool AddToTable(XmlSchemaObjectTable table, XmlQualifiedName qname, XmlSchemaObject item)
	{
		return default(bool);
	}

	[Token(Token = "0x600174F")]
	[Address(RVA = "0x6039260", Offset = "0x6038260", VA = "0x6039260")]
	private void VerifyTables()
	{
	}

	[Token(Token = "0x6001750")]
	[Address(RVA = "0x6039580", Offset = "0x6038580", VA = "0x6039580")]
	private void InternalValidationCallback(object sender, ValidationEventArgs e)
	{
	}

	[Token(Token = "0x6001751")]
	[Address(RVA = "0x60347E0", Offset = "0x60337E0", VA = "0x60347E0")]
	private void SendValidationEvent(XmlSchemaException e, XmlSeverityType severity)
	{
	}
}
