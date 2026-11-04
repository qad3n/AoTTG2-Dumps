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
		[Address(RVA = "0x243D420", Offset = "0x243BA20", VA = "0x18243D420")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170005C4")]
	public XmlNameTable NameTable
	{
		[Token(Token = "0x600157C")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005C5")]
	internal XmlResolver XmlResolver
	{
		[Token(Token = "0x600157D")]
		[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700")]
		set
		{
		}
	}

	[Token(Token = "0x170005C6")]
	public XmlSchema this[string ns]
	{
		[Token(Token = "0x600157E")]
		[Address(RVA = "0x2667360", Offset = "0x2665960", VA = "0x182667360")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005C7")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6001582")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170005C8")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6001583")]
		[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005C9")]
	private int System_002ECollections_002EICollection_002ECount
	{
		[Token(Token = "0x6001584")]
		[Address(RVA = "0x243D420", Offset = "0x243BA20", VA = "0x18243D420", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170005CA")]
	internal ValidationEventHandler EventHandler
	{
		[Token(Token = "0x600158A")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600158B")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
		set
		{
		}
	}

	[Token(Token = "0x600157A")]
	[Address(RVA = "0x2667220", Offset = "0x2665820", VA = "0x182667220")]
	public XmlSchemaCollection(XmlNameTable nametable)
	{
	}

	[Token(Token = "0x600157F")]
	[Address(RVA = "0x2667190", Offset = "0x2665790", VA = "0x182667190", Slot = "8")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001580")]
	[Address(RVA = "0x2666D80", Offset = "0x2665380", VA = "0x182666D80")]
	public XmlSchemaCollectionEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001581")]
	[Address(RVA = "0x2666F80", Offset = "0x2665580", VA = "0x182666F80", Slot = "4")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6001585")]
	[Address(RVA = "0x2666E10", Offset = "0x2665410", VA = "0x182666E10")]
	internal SchemaInfo GetSchemaInfo(string ns)
	{
		return null;
	}

	[Token(Token = "0x6001586")]
	[Address(RVA = "0x2666EC0", Offset = "0x26654C0", VA = "0x182666EC0")]
	internal SchemaNames GetSchemaNames(XmlNameTable nt)
	{
		return null;
	}

	[Token(Token = "0x6001587")]
	[Address(RVA = "0x2666A90", Offset = "0x2665090", VA = "0x182666A90")]
	internal XmlSchema Add(string ns, SchemaInfo schemaInfo, XmlSchema schema, bool compile)
	{
		return null;
	}

	[Token(Token = "0x6001588")]
	[Address(RVA = "0x2666C10", Offset = "0x2665210", VA = "0x182666C10")]
	private XmlSchema Add(string ns, SchemaInfo schemaInfo, XmlSchema schema, bool compile, XmlResolver resolver)
	{
		return null;
	}

	[Token(Token = "0x6001589")]
	[Address(RVA = "0x2666960", Offset = "0x2664F60", VA = "0x182666960")]
	private void Add(string ns, XmlSchemaCollectionNode node)
	{
	}
}
