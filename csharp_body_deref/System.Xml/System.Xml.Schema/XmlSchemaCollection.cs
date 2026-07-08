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
		[Address(RVA = "0x43E2390", Offset = "0x43E2390", VA = "0x43E2390")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170005C4")]
	public XmlNameTable NameTable
	{
		[Token(Token = "0x600157C")]
		[Address(RVA = "0x43E23C0", Offset = "0x43E23C0", VA = "0x43E23C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005C5")]
	internal XmlResolver XmlResolver
	{
		[Token(Token = "0x600157D")]
		[Address(RVA = "0x43E23D0", Offset = "0x43E23D0", VA = "0x43E23D0")]
		set
		{
		}
	}

	[Token(Token = "0x170005C6")]
	public XmlSchema this[string ns]
	{
		[Token(Token = "0x600157E")]
		[Address(RVA = "0x43E23E0", Offset = "0x43E23E0", VA = "0x43E23E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005C7")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6001582")]
		[Address(RVA = "0x43E2960", Offset = "0x43E2960", VA = "0x43E2960", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170005C8")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6001583")]
		[Address(RVA = "0x43E2970", Offset = "0x43E2970", VA = "0x43E2970", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005C9")]
	private int System_002ECollections_002EICollection_002ECount
	{
		[Token(Token = "0x6001584")]
		[Address(RVA = "0x43E2980", Offset = "0x43E2980", VA = "0x43E2980", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170005CA")]
	internal ValidationEventHandler EventHandler
	{
		[Token(Token = "0x600158A")]
		[Address(RVA = "0x43E2D20", Offset = "0x43E2D20", VA = "0x43E2D20")]
		get
		{
			return null;
		}
		[Token(Token = "0x600158B")]
		[Address(RVA = "0x43E2D30", Offset = "0x43E2D30", VA = "0x43E2D30")]
		set
		{
		}
	}

	[Token(Token = "0x600157A")]
	[Address(RVA = "0x43E2260", Offset = "0x43E2260", VA = "0x43E2260")]
	public XmlSchemaCollection(XmlNameTable nametable)
	{
	}

	[Token(Token = "0x600157F")]
	[Address(RVA = "0x43E2490", Offset = "0x43E2490", VA = "0x43E2490", Slot = "8")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001580")]
	[Address(RVA = "0x43E2560", Offset = "0x43E2560", VA = "0x43E2560")]
	public XmlSchemaCollectionEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001581")]
	[Address(RVA = "0x43E25E0", Offset = "0x43E25E0", VA = "0x43E25E0", Slot = "4")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6001585")]
	[Address(RVA = "0x43DC7A0", Offset = "0x43DC7A0", VA = "0x43DC7A0")]
	internal SchemaInfo GetSchemaInfo(string ns)
	{
		return null;
	}

	[Token(Token = "0x6001586")]
	[Address(RVA = "0x43E29B0", Offset = "0x43E29B0", VA = "0x43E29B0")]
	internal SchemaNames GetSchemaNames(XmlNameTable nt)
	{
		return null;
	}

	[Token(Token = "0x6001587")]
	[Address(RVA = "0x43DA7C0", Offset = "0x43DA7C0", VA = "0x43DA7C0")]
	internal XmlSchema Add(string ns, SchemaInfo schemaInfo, XmlSchema schema, bool compile)
	{
		return null;
	}

	[Token(Token = "0x6001588")]
	[Address(RVA = "0x43E2A50", Offset = "0x43E2A50", VA = "0x43E2A50")]
	private XmlSchema Add(string ns, SchemaInfo schemaInfo, XmlSchema schema, bool compile, XmlResolver resolver)
	{
		return null;
	}

	[Token(Token = "0x6001589")]
	[Address(RVA = "0x43E2BD0", Offset = "0x43E2BD0", VA = "0x43E2BD0")]
	private void Add(string ns, XmlSchemaCollectionNode node)
	{
	}
}
