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
		[Address(RVA = "0x471FAF0", Offset = "0x471FAF0", VA = "0x471FAF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170005C4")]
	public XmlNameTable NameTable
	{
		[Token(Token = "0x600157C")]
		[Address(RVA = "0x471FB20", Offset = "0x471FB20", VA = "0x471FB20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005C5")]
	internal XmlResolver XmlResolver
	{
		[Token(Token = "0x600157D")]
		[Address(RVA = "0x471FB30", Offset = "0x471FB30", VA = "0x471FB30")]
		set
		{
		}
	}

	[Token(Token = "0x170005C6")]
	public XmlSchema this[string ns]
	{
		[Token(Token = "0x600157E")]
		[Address(RVA = "0x471FB40", Offset = "0x471FB40", VA = "0x471FB40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005C7")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6001582")]
		[Address(RVA = "0x47200C0", Offset = "0x47200C0", VA = "0x47200C0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170005C8")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6001583")]
		[Address(RVA = "0x47200D0", Offset = "0x47200D0", VA = "0x47200D0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005C9")]
	private int System_002ECollections_002EICollection_002ECount
	{
		[Token(Token = "0x6001584")]
		[Address(RVA = "0x47200E0", Offset = "0x47200E0", VA = "0x47200E0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170005CA")]
	internal ValidationEventHandler EventHandler
	{
		[Token(Token = "0x600158A")]
		[Address(RVA = "0x4720480", Offset = "0x4720480", VA = "0x4720480")]
		get
		{
			return null;
		}
		[Token(Token = "0x600158B")]
		[Address(RVA = "0x4720490", Offset = "0x4720490", VA = "0x4720490")]
		set
		{
		}
	}

	[Token(Token = "0x600157A")]
	[Address(RVA = "0x471F9C0", Offset = "0x471F9C0", VA = "0x471F9C0")]
	public XmlSchemaCollection(XmlNameTable nametable)
	{
	}

	[Token(Token = "0x600157F")]
	[Address(RVA = "0x471FBF0", Offset = "0x471FBF0", VA = "0x471FBF0", Slot = "8")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001580")]
	[Address(RVA = "0x471FCC0", Offset = "0x471FCC0", VA = "0x471FCC0")]
	public XmlSchemaCollectionEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001581")]
	[Address(RVA = "0x471FD40", Offset = "0x471FD40", VA = "0x471FD40", Slot = "4")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6001585")]
	[Address(RVA = "0x4719F00", Offset = "0x4719F00", VA = "0x4719F00")]
	internal SchemaInfo GetSchemaInfo(string ns)
	{
		return null;
	}

	[Token(Token = "0x6001586")]
	[Address(RVA = "0x4720110", Offset = "0x4720110", VA = "0x4720110")]
	internal SchemaNames GetSchemaNames(XmlNameTable nt)
	{
		return null;
	}

	[Token(Token = "0x6001587")]
	[Address(RVA = "0x4717F20", Offset = "0x4717F20", VA = "0x4717F20")]
	internal XmlSchema Add(string ns, SchemaInfo schemaInfo, XmlSchema schema, bool compile)
	{
		return null;
	}

	[Token(Token = "0x6001588")]
	[Address(RVA = "0x47201B0", Offset = "0x47201B0", VA = "0x47201B0")]
	private XmlSchema Add(string ns, SchemaInfo schemaInfo, XmlSchema schema, bool compile, XmlResolver resolver)
	{
		return null;
	}

	[Token(Token = "0x6001589")]
	[Address(RVA = "0x4720330", Offset = "0x4720330", VA = "0x4720330")]
	private void Add(string ns, XmlSchemaCollectionNode node)
	{
	}
}
