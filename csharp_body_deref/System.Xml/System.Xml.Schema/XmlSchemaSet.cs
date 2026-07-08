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
		[Address(RVA = "0x43EAC20", Offset = "0x43EAC20", VA = "0x43EAC20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700066C")]
	public bool IsCompiled
	{
		[Token(Token = "0x6001724")]
		[Address(RVA = "0x43EB150", Offset = "0x43EB150", VA = "0x43EB150")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700066D")]
	public XmlResolver XmlResolver
	{
		[Token(Token = "0x6001725")]
		[Address(RVA = "0x43EB160", Offset = "0x43EB160", VA = "0x43EB160")]
		set
		{
		}
	}

	[Token(Token = "0x1700066E")]
	public XmlSchemaCompilationSettings CompilationSettings
	{
		[Token(Token = "0x6001726")]
		[Address(RVA = "0x43EB180", Offset = "0x43EB180", VA = "0x43EB180")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001727")]
		[Address(RVA = "0x43EB190", Offset = "0x43EB190", VA = "0x43EB190")]
		set
		{
		}
	}

	[Token(Token = "0x1700066F")]
	public int Count
	{
		[Token(Token = "0x6001728")]
		[Address(RVA = "0x43EB1A0", Offset = "0x43EB1A0", VA = "0x43EB1A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000670")]
	public XmlSchemaObjectTable GlobalElements
	{
		[Token(Token = "0x6001729")]
		[Address(RVA = "0x43EB1D0", Offset = "0x43EB1D0", VA = "0x43EB1D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000671")]
	public XmlSchemaObjectTable GlobalAttributes
	{
		[Token(Token = "0x600172A")]
		[Address(RVA = "0x43EB250", Offset = "0x43EB250", VA = "0x43EB250")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000672")]
	public XmlSchemaObjectTable GlobalTypes
	{
		[Token(Token = "0x600172B")]
		[Address(RVA = "0x43EB2D0", Offset = "0x43EB2D0", VA = "0x43EB2D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000673")]
	internal XmlSchemaObjectTable SubstitutionGroups
	{
		[Token(Token = "0x600172C")]
		[Address(RVA = "0x43EB350", Offset = "0x43EB350", VA = "0x43EB350")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000674")]
	internal Hashtable SchemaLocations
	{
		[Token(Token = "0x600172D")]
		[Address(RVA = "0x43EB3D0", Offset = "0x43EB3D0", VA = "0x43EB3D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000675")]
	internal XmlSchemaObjectTable TypeExtensions
	{
		[Token(Token = "0x600172E")]
		[Address(RVA = "0x43EB3E0", Offset = "0x43EB3E0", VA = "0x43EB3E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000676")]
	internal SchemaInfo CompiledInfo
	{
		[Token(Token = "0x6001743")]
		[Address(RVA = "0x43F4D80", Offset = "0x43F4D80", VA = "0x43F4D80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000677")]
	internal XmlReaderSettings ReaderSettings
	{
		[Token(Token = "0x6001744")]
		[Address(RVA = "0x43F4D90", Offset = "0x43F4D90", VA = "0x43F4D90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000678")]
	internal SortedList SortedSchemas
	{
		[Token(Token = "0x600174B")]
		[Address(RVA = "0x43F4F10", Offset = "0x43F4F10", VA = "0x43F4F10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000001")]
	public event ValidationEventHandler ValidationEventHandler
	{
		[Token(Token = "0x6001722")]
		[Address(RVA = "0x43EAFF0", Offset = "0x43EAFF0", VA = "0x43EAFF0")]
		add
		{
		}
		[Token(Token = "0x6001723")]
		[Address(RVA = "0x43EB0C0", Offset = "0x43EB0C0", VA = "0x43EB0C0")]
		remove
		{
		}
	}

	[Token(Token = "0x6001720")]
	[Address(RVA = "0x43EACA0", Offset = "0x43EACA0", VA = "0x43EACA0")]
	public XmlSchemaSet()
	{
	}

	[Token(Token = "0x6001721")]
	[Address(RVA = "0x43EACF0", Offset = "0x43EACF0", VA = "0x43EACF0")]
	public XmlSchemaSet(XmlNameTable nameTable)
	{
	}

	[Token(Token = "0x600172F")]
	[Address(RVA = "0x43EB460", Offset = "0x43EB460", VA = "0x43EB460")]
	public void Add(XmlSchemaSet schemas)
	{
	}

	[Token(Token = "0x6001730")]
	[Address(RVA = "0x43EE860", Offset = "0x43EE860", VA = "0x43EE860")]
	public XmlSchema Add(XmlSchema schema)
	{
		return null;
	}

	[Token(Token = "0x6001731")]
	[Address(RVA = "0x43EEAA0", Offset = "0x43EEAA0", VA = "0x43EEAA0")]
	public bool RemoveRecursive(XmlSchema schemaToRemove)
	{
		return default(bool);
	}

	[Token(Token = "0x6001732")]
	[Address(RVA = "0x43EFCE0", Offset = "0x43EFCE0", VA = "0x43EFCE0")]
	public bool Contains(string targetNamespace)
	{
		return default(bool);
	}

	[Token(Token = "0x6001733")]
	[Address(RVA = "0x43EFD30", Offset = "0x43EFD30", VA = "0x43EFD30")]
	public void Compile()
	{
	}

	[Token(Token = "0x6001734")]
	[Address(RVA = "0x43F0720", Offset = "0x43F0720", VA = "0x43F0720")]
	public XmlSchema Reprocess(XmlSchema schema)
	{
		return null;
	}

	[Token(Token = "0x6001735")]
	[Address(RVA = "0x43F2CE0", Offset = "0x43F2CE0", VA = "0x43F2CE0")]
	public void CopyTo(XmlSchema[] schemas, int index)
	{
	}

	[Token(Token = "0x6001736")]
	[Address(RVA = "0x43F2E50", Offset = "0x43F2E50", VA = "0x43F2E50")]
	public ICollection Schemas()
	{
		return null;
	}

	[Token(Token = "0x6001737")]
	[Address(RVA = "0x43F2950", Offset = "0x43F2950", VA = "0x43F2950")]
	public ICollection Schemas(string targetNamespace)
	{
		return null;
	}

	[Token(Token = "0x6001738")]
	[Address(RVA = "0x43EE800", Offset = "0x43EE800", VA = "0x43EE800")]
	private XmlSchema Add(string targetNamespace, XmlSchema schema)
	{
		return null;
	}

	[Token(Token = "0x6001739")]
	[Address(RVA = "0x43F3330", Offset = "0x43F3330", VA = "0x43F3330")]
	internal void Add(string targetNamespace, XmlReader reader, Hashtable validatedNamespaces)
	{
	}

	[Token(Token = "0x600173A")]
	[Address(RVA = "0x43EE520", Offset = "0x43EE520", VA = "0x43EE520")]
	internal XmlSchema FindSchemaByNSAndUrl(Uri schemaUri, string ns, DictionaryEntry[] locationsTable)
	{
		return null;
	}

	[Token(Token = "0x600173B")]
	[Address(RVA = "0x43F2E80", Offset = "0x43F2E80", VA = "0x43F2E80")]
	private void AddSchemaToSet(XmlSchema schema)
	{
	}

	[Token(Token = "0x600173C")]
	[Address(RVA = "0x43F3C40", Offset = "0x43F3C40", VA = "0x43F3C40")]
	private void ProcessNewSubstitutionGroups(XmlSchemaObjectTable substitutionGroupsTable, bool resolve)
	{
	}

	[Token(Token = "0x600173D")]
	[Address(RVA = "0x43F42E0", Offset = "0x43F42E0", VA = "0x43F42E0")]
	private void ResolveSubstitutionGroup(XmlSchemaSubstitutionGroup substitutionGroup, XmlSchemaObjectTable substTable)
	{
	}

	[Token(Token = "0x600173E")]
	[Address(RVA = "0x43EF890", Offset = "0x43EF890", VA = "0x43EF890")]
	internal XmlSchema Remove(XmlSchema schema, bool forceCompile)
	{
		return null;
	}

	[Token(Token = "0x600173F")]
	[Address(RVA = "0x43F0500", Offset = "0x43F0500", VA = "0x43F0500")]
	private void ClearTables()
	{
	}

	[Token(Token = "0x6001740")]
	[Address(RVA = "0x43F2BA0", Offset = "0x43F2BA0", VA = "0x43F2BA0")]
	internal bool PreprocessSchema(ref XmlSchema schema, string targetNamespace)
	{
		return default(bool);
	}

	[Token(Token = "0x6001741")]
	[Address(RVA = "0x43F3A70", Offset = "0x43F3A70", VA = "0x43F3A70")]
	internal XmlSchema ParseSchema(string targetNamespace, XmlReader reader)
	{
		return null;
	}

	[Token(Token = "0x6001742")]
	[Address(RVA = "0x43EC040", Offset = "0x43EC040", VA = "0x43EC040")]
	internal void CopyFromCompiledSet(XmlSchemaSet otherSet)
	{
	}

	[Token(Token = "0x6001745")]
	[Address(RVA = "0x43F4DA0", Offset = "0x43F4DA0", VA = "0x43F4DA0")]
	internal XmlResolver GetResolver()
	{
		return null;
	}

	[Token(Token = "0x6001746")]
	[Address(RVA = "0x43F4DC0", Offset = "0x43F4DC0", VA = "0x43F4DC0")]
	internal ValidationEventHandler GetEventHandler()
	{
		return null;
	}

	[Token(Token = "0x6001747")]
	[Address(RVA = "0x43F4B70", Offset = "0x43F4B70", VA = "0x43F4B70")]
	internal SchemaNames GetSchemaNames(XmlNameTable nt)
	{
		return null;
	}

	[Token(Token = "0x6001748")]
	[Address(RVA = "0x43F3710", Offset = "0x43F3710", VA = "0x43F3710")]
	internal bool IsSchemaLoaded(Uri schemaUri, string targetNamespace, out XmlSchema schema)
	{
		return default(bool);
	}

	[Token(Token = "0x6001749")]
	[Address(RVA = "0x43F4DD0", Offset = "0x43F4DD0", VA = "0x43F4DD0")]
	internal bool GetSchemaByUri(Uri schemaUri, out XmlSchema schema)
	{
		return default(bool);
	}

	[Token(Token = "0x600174A")]
	[Address(RVA = "0x43EF7D0", Offset = "0x43EF7D0", VA = "0x43EF7D0")]
	internal string GetTargetNamespace(XmlSchema schema)
	{
		return null;
	}

	[Token(Token = "0x600174C")]
	[Address(RVA = "0x43F2220", Offset = "0x43F2220", VA = "0x43F2220")]
	private void RemoveSchemaFromCaches(XmlSchema schema)
	{
	}

	[Token(Token = "0x600174D")]
	[Address(RVA = "0x43F1310", Offset = "0x43F1310", VA = "0x43F1310")]
	private void RemoveSchemaFromGlobalTables(XmlSchema schema)
	{
	}

	[Token(Token = "0x600174E")]
	[Address(RVA = "0x43F4790", Offset = "0x43F4790", VA = "0x43F4790")]
	private bool AddToTable(XmlSchemaObjectTable table, XmlQualifiedName qname, XmlSchemaObject item)
	{
		return default(bool);
	}

	[Token(Token = "0x600174F")]
	[Address(RVA = "0x43F4C10", Offset = "0x43F4C10", VA = "0x43F4C10")]
	private void VerifyTables()
	{
	}

	[Token(Token = "0x6001750")]
	[Address(RVA = "0x43F4F20", Offset = "0x43F4F20", VA = "0x43F4F20")]
	private void InternalValidationCallback(object sender, ValidationEventArgs e)
	{
	}

	[Token(Token = "0x6001751")]
	[Address(RVA = "0x43EF800", Offset = "0x43EF800", VA = "0x43EF800")]
	private void SendValidationEvent(XmlSchemaException e, XmlSeverityType severity)
	{
	}
}
