// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Threading;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000216")]
[Obsolete("Use System.Xml.Schema.XmlSchemaSet for schema compilation and validation. https://go.microsoft.com/fwlink/?linkid=14202")]
public sealed class XmlSchemaCollection : ICollection, IEnumerable
{
	[Token(Token = "0x4000B2C")]
	[FieldOffset(Offset = "0x10")]
	private Hashtable collection;

	[Token(Token = "0x4000B2D")]
	[FieldOffset(Offset = "0x18")]
	private XmlNameTable nameTable;

	[Token(Token = "0x4000B2E")]
	[FieldOffset(Offset = "0x20")]
	private SchemaNames schemaNames;

	[Token(Token = "0x4000B2F")]
	[FieldOffset(Offset = "0x28")]
	private ReaderWriterLock wLock;

	[Token(Token = "0x4000B30")]
	[FieldOffset(Offset = "0x30")]
	private int timeout;

	[Token(Token = "0x4000B31")]
	[FieldOffset(Offset = "0x34")]
	private bool isThreadSafe;

	[Token(Token = "0x4000B32")]
	[FieldOffset(Offset = "0x38")]
	private ValidationEventHandler validationEventHandler;

	[Token(Token = "0x4000B33")]
	[FieldOffset(Offset = "0x40")]
	private XmlResolver xmlResolver;

	[Token(Token = "0x170005C3")]
	public int Count
	{
		[Token(Token = "0x600157B")]
		[Address(RVA = "0x6027C70", Offset = "0x6026C70", VA = "0x6027C70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170005C4")]
	public XmlNameTable NameTable
	{
		[Token(Token = "0x600157C")]
		[Address(RVA = "0x6027CA0", Offset = "0x6026CA0", VA = "0x6027CA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005C5")]
	internal XmlResolver XmlResolver
	{
		[Token(Token = "0x600157D")]
		[Address(RVA = "0x6027CB0", Offset = "0x6026CB0", VA = "0x6027CB0")]
		set
		{
		}
	}

	[Token(Token = "0x170005C6")]
	public XmlSchema this[string ns]
	{
		[Token(Token = "0x600157E")]
		[Address(RVA = "0x6027CC0", Offset = "0x6026CC0", VA = "0x6027CC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005C7")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6001582")]
		[Address(RVA = "0x6028230", Offset = "0x6027230", VA = "0x6028230", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170005C8")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6001583")]
		[Address(RVA = "0x6028240", Offset = "0x6027240", VA = "0x6028240", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005C9")]
	private int System_002ECollections_002EICollection_002ECount
	{
		[Token(Token = "0x6001584")]
		[Address(RVA = "0x6028250", Offset = "0x6027250", VA = "0x6028250", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170005CA")]
	internal ValidationEventHandler EventHandler
	{
		[Token(Token = "0x600158A")]
		[Address(RVA = "0x60285D0", Offset = "0x60275D0", VA = "0x60285D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600158B")]
		[Address(RVA = "0x60285E0", Offset = "0x60275E0", VA = "0x60285E0")]
		set
		{
		}
	}

	[Token(Token = "0x600157A")]
	[Address(RVA = "0x6027B40", Offset = "0x6026B40", VA = "0x6027B40")]
	public XmlSchemaCollection(XmlNameTable nametable)
	{
	}

	[Token(Token = "0x600157F")]
	[Address(RVA = "0x6027D70", Offset = "0x6026D70", VA = "0x6027D70", Slot = "8")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001580")]
	[Address(RVA = "0x6027E40", Offset = "0x6026E40", VA = "0x6027E40")]
	public XmlSchemaCollectionEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001581")]
	[Address(RVA = "0x6027EC0", Offset = "0x6026EC0", VA = "0x6027EC0", Slot = "4")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6001585")]
	[Address(RVA = "0x60221A0", Offset = "0x60211A0", VA = "0x60221A0")]
	internal SchemaInfo GetSchemaInfo(string ns)
	{
		return null;
	}

	[Token(Token = "0x6001586")]
	[Address(RVA = "0x6028280", Offset = "0x6027280", VA = "0x6028280")]
	internal SchemaNames GetSchemaNames(XmlNameTable nt)
	{
		return null;
	}

	[Token(Token = "0x6001587")]
	[Address(RVA = "0x6020560", Offset = "0x601F560", VA = "0x6020560")]
	internal XmlSchema Add(string ns, SchemaInfo schemaInfo, XmlSchema schema, bool compile)
	{
		return null;
	}

	[Token(Token = "0x6001588")]
	[Address(RVA = "0x6028320", Offset = "0x6027320", VA = "0x6028320")]
	private XmlSchema Add(string ns, SchemaInfo schemaInfo, XmlSchema schema, bool compile, XmlResolver resolver)
	{
		return null;
	}

	[Token(Token = "0x6001589")]
	[Address(RVA = "0x6028490", Offset = "0x6027490", VA = "0x6028490")]
	private void Add(string ns, XmlSchemaCollectionNode node)
	{
	}
}
