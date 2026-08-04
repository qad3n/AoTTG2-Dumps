// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaObjectTable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000247")]
public class XmlSchemaObjectTable
{
	[Token(Token = "0x2000248")]
	internal enum EnumeratorType
	{
		[Token(Token = "0x4000BCA")]
		Keys,
		[Token(Token = "0x4000BCB")]
		Values,
		[Token(Token = "0x4000BCC")]
		DictionaryEntry
	}

	[Token(Token = "0x2000249")]
	internal struct XmlSchemaObjectEntry
	{
		[Token(Token = "0x4000BCD")]
		[FieldOffset(Offset = "0x0")]
		internal XmlQualifiedName qname;

		[Token(Token = "0x4000BCE")]
		[FieldOffset(Offset = "0x8")]
		internal XmlSchemaObject xso;

		[Token(Token = "0x60016F7")]
		[Address(RVA = "0x4726300", Offset = "0x4726300", VA = "0x4726300")]
		public XmlSchemaObjectEntry(XmlQualifiedName name, XmlSchemaObject value)
		{
		}
	}

	[Token(Token = "0x200024A")]
	internal class ValuesCollection : ICollection, IEnumerable
	{
		[Token(Token = "0x4000BCF")]
		[FieldOffset(Offset = "0x10")]
		private List<XmlSchemaObjectEntry> entries;

		[Token(Token = "0x4000BD0")]
		[FieldOffset(Offset = "0x18")]
		private int size;

		[Token(Token = "0x17000657")]
		public int Count
		{
			[Token(Token = "0x60016F9")]
			[Address(RVA = "0x4726B50", Offset = "0x4726B50", VA = "0x4726B50", Slot = "5")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000658")]
		public object SyncRoot
		{
			[Token(Token = "0x60016FA")]
			[Address(RVA = "0x4726B60", Offset = "0x4726B60", VA = "0x4726B60", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000659")]
		public bool IsSynchronized
		{
			[Token(Token = "0x60016FB")]
			[Address(RVA = "0x4726C00", Offset = "0x4726C00", VA = "0x4726C00", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60016F8")]
		[Address(RVA = "0x4726A30", Offset = "0x4726A30", VA = "0x4726A30")]
		internal ValuesCollection(List<XmlSchemaObjectEntry> entries, int size)
		{
		}

		[Token(Token = "0x60016FC")]
		[Address(RVA = "0x4726CA0", Offset = "0x4726CA0", VA = "0x4726CA0", Slot = "4")]
		public void CopyTo(Array array, int arrayIndex)
		{
		}

		[Token(Token = "0x60016FD")]
		[Address(RVA = "0x4726DB0", Offset = "0x4726DB0", VA = "0x4726DB0", Slot = "8")]
		public IEnumerator GetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x200024B")]
	internal class XSOEnumerator : IEnumerator
	{
		[Token(Token = "0x4000BD1")]
		[FieldOffset(Offset = "0x10")]
		private List<XmlSchemaObjectEntry> entries;

		[Token(Token = "0x4000BD2")]
		[FieldOffset(Offset = "0x18")]
		private EnumeratorType enumType;

		[Token(Token = "0x4000BD3")]
		[FieldOffset(Offset = "0x1C")]
		protected int currentIndex;

		[Token(Token = "0x4000BD4")]
		[FieldOffset(Offset = "0x20")]
		protected int size;

		[Token(Token = "0x4000BD5")]
		[FieldOffset(Offset = "0x28")]
		protected XmlQualifiedName currentKey;

		[Token(Token = "0x4000BD6")]
		[FieldOffset(Offset = "0x30")]
		protected XmlSchemaObject currentValue;

		[Token(Token = "0x1700065A")]
		public object Current
		{
			[Token(Token = "0x60016FF")]
			[Address(RVA = "0x4726E70", Offset = "0x4726E70", VA = "0x4726E70", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60016FE")]
		[Address(RVA = "0x4726E20", Offset = "0x4726E20", VA = "0x4726E20")]
		internal XSOEnumerator(List<XmlSchemaObjectEntry> entries, int size, EnumeratorType enumType)
		{
		}

		[Token(Token = "0x6001700")]
		[Address(RVA = "0x4727020", Offset = "0x4727020", VA = "0x4727020", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001701")]
		[Address(RVA = "0x47270F0", Offset = "0x47270F0", VA = "0x47270F0", Slot = "6")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x200024C")]
	internal class XSODictionaryEnumerator : XSOEnumerator, IDictionaryEnumerator, IEnumerator
	{
		[Token(Token = "0x1700065B")]
		public DictionaryEntry Entry
		{
			[Token(Token = "0x6001703")]
			[Address(RVA = "0x4727130", Offset = "0x4727130", VA = "0x4727130", Slot = "9")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x1700065C")]
		public object Key
		{
			[Token(Token = "0x6001704")]
			[Address(RVA = "0x4727280", Offset = "0x4727280", VA = "0x4727280", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700065D")]
		public object Value
		{
			[Token(Token = "0x6001705")]
			[Address(RVA = "0x47273B0", Offset = "0x47273B0", VA = "0x47273B0", Slot = "8")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001702")]
		[Address(RVA = "0x4726B00", Offset = "0x4726B00", VA = "0x4726B00")]
		internal XSODictionaryEnumerator(List<XmlSchemaObjectEntry> entries, int size, EnumeratorType enumType)
		{
		}
	}

	[Token(Token = "0x4000BC7")]
	[FieldOffset(Offset = "0x10")]
	private Dictionary<XmlQualifiedName, XmlSchemaObject> table;

	[Token(Token = "0x4000BC8")]
	[FieldOffset(Offset = "0x18")]
	private List<XmlSchemaObjectEntry> entries;

	[Token(Token = "0x17000654")]
	public int Count
	{
		[Token(Token = "0x60016F2")]
		[Address(RVA = "0x47268A0", Offset = "0x47268A0", VA = "0x47268A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000655")]
	public XmlSchemaObject this[XmlQualifiedName name]
	{
		[Token(Token = "0x60016F4")]
		[Address(RVA = "0x4726930", Offset = "0x4726930", VA = "0x4726930")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000656")]
	public ICollection Values
	{
		[Token(Token = "0x60016F5")]
		[Address(RVA = "0x47269A0", Offset = "0x47269A0", VA = "0x47269A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60016EB")]
	[Address(RVA = "0x4726130", Offset = "0x4726130", VA = "0x4726130")]
	internal XmlSchemaObjectTable()
	{
	}

	[Token(Token = "0x60016EC")]
	[Address(RVA = "0x47261F0", Offset = "0x47261F0", VA = "0x47261F0")]
	internal void Add(XmlQualifiedName name, XmlSchemaObject value)
	{
	}

	[Token(Token = "0x60016ED")]
	[Address(RVA = "0x4726330", Offset = "0x4726330", VA = "0x4726330")]
	internal void Insert(XmlQualifiedName name, XmlSchemaObject value)
	{
	}

	[Token(Token = "0x60016EE")]
	[Address(RVA = "0x4726560", Offset = "0x4726560", VA = "0x4726560")]
	internal void Replace(XmlQualifiedName name, XmlSchemaObject value)
	{
	}

	[Token(Token = "0x60016EF")]
	[Address(RVA = "0x47266F0", Offset = "0x47266F0", VA = "0x47266F0")]
	internal void Clear()
	{
	}

	[Token(Token = "0x60016F0")]
	[Address(RVA = "0x4726770", Offset = "0x4726770", VA = "0x4726770")]
	internal void Remove(XmlQualifiedName name)
	{
	}

	[Token(Token = "0x60016F1")]
	[Address(RVA = "0x47264D0", Offset = "0x47264D0", VA = "0x47264D0")]
	private int FindIndexByValue(XmlSchemaObject xso)
	{
		return default(int);
	}

	[Token(Token = "0x60016F3")]
	[Address(RVA = "0x47268E0", Offset = "0x47268E0", VA = "0x47268E0")]
	public bool Contains(XmlQualifiedName name)
	{
		return default(bool);
	}

	[Token(Token = "0x60016F6")]
	[Address(RVA = "0x4726A60", Offset = "0x4726A60", VA = "0x4726A60")]
	public IDictionaryEnumerator GetEnumerator()
	{
		return null;
	}
}
