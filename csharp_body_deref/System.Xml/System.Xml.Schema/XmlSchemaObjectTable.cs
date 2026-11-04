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
		[Address(RVA = "0xB5D000", Offset = "0xB5B600", VA = "0x180B5D000")]
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
			[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390", Slot = "5")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000658")]
		public object SyncRoot
		{
			[Token(Token = "0x60016FA")]
			[Address(RVA = "0x266EB00", Offset = "0x266D100", VA = "0x18266EB00", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000659")]
		public bool IsSynchronized
		{
			[Token(Token = "0x60016FB")]
			[Address(RVA = "0x266EAB0", Offset = "0x266D0B0", VA = "0x18266EAB0", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60016F8")]
		[Address(RVA = "0x8FB340", Offset = "0x8F9940", VA = "0x1808FB340")]
		internal ValuesCollection(List<XmlSchemaObjectEntry> entries, int size)
		{
		}

		[Token(Token = "0x60016FC")]
		[Address(RVA = "0x266E8E0", Offset = "0x266CEE0", VA = "0x18266E8E0", Slot = "4")]
		public void CopyTo(Array array, int arrayIndex)
		{
		}

		[Token(Token = "0x60016FD")]
		[Address(RVA = "0x266EA20", Offset = "0x266D020", VA = "0x18266EA20", Slot = "8")]
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
			[Address(RVA = "0x266F150", Offset = "0x266D750", VA = "0x18266F150", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60016FE")]
		[Address(RVA = "0x266EB50", Offset = "0x266D150", VA = "0x18266EB50")]
		internal XSOEnumerator(List<XmlSchemaObjectEntry> entries, int size, EnumeratorType enumType)
		{
		}

		[Token(Token = "0x6001700")]
		[Address(RVA = "0x266F030", Offset = "0x266D630", VA = "0x18266F030", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001701")]
		[Address(RVA = "0x266F110", Offset = "0x266D710", VA = "0x18266F110", Slot = "6")]
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
			[Address(RVA = "0x266EBA0", Offset = "0x266D1A0", VA = "0x18266EBA0", Slot = "9")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x1700065C")]
		public object Key
		{
			[Token(Token = "0x6001704")]
			[Address(RVA = "0x266ED30", Offset = "0x266D330", VA = "0x18266ED30", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700065D")]
		public object Value
		{
			[Token(Token = "0x6001705")]
			[Address(RVA = "0x266EEB0", Offset = "0x266D4B0", VA = "0x18266EEB0", Slot = "8")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001702")]
		[Address(RVA = "0x266EB50", Offset = "0x266D150", VA = "0x18266EB50")]
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
		[Address(RVA = "0x2676180", Offset = "0x2674780", VA = "0x182676180")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000655")]
	public XmlSchemaObject this[XmlQualifiedName name]
	{
		[Token(Token = "0x60016F4")]
		[Address(RVA = "0x26761D0", Offset = "0x26747D0", VA = "0x1826761D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000656")]
	public ICollection Values
	{
		[Token(Token = "0x60016F5")]
		[Address(RVA = "0x2676250", Offset = "0x2674850", VA = "0x182676250")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60016EB")]
	[Address(RVA = "0x26760C0", Offset = "0x26746C0", VA = "0x1826760C0")]
	internal XmlSchemaObjectTable()
	{
	}

	[Token(Token = "0x60016EC")]
	[Address(RVA = "0x26759F0", Offset = "0x2673FF0", VA = "0x1826759F0")]
	internal void Add(XmlQualifiedName name, XmlSchemaObject value)
	{
	}

	[Token(Token = "0x60016ED")]
	[Address(RVA = "0x2675D80", Offset = "0x2674380", VA = "0x182675D80")]
	internal void Insert(XmlQualifiedName name, XmlSchemaObject value)
	{
	}

	[Token(Token = "0x60016EE")]
	[Address(RVA = "0x2675F90", Offset = "0x2674590", VA = "0x182675F90")]
	internal void Replace(XmlQualifiedName name, XmlSchemaObject value)
	{
	}

	[Token(Token = "0x60016EF")]
	[Address(RVA = "0x2675B20", Offset = "0x2674120", VA = "0x182675B20")]
	internal void Clear()
	{
	}

	[Token(Token = "0x60016F0")]
	[Address(RVA = "0x2675ED0", Offset = "0x26744D0", VA = "0x182675ED0")]
	internal void Remove(XmlQualifiedName name)
	{
	}

	[Token(Token = "0x60016F1")]
	[Address(RVA = "0x2675C10", Offset = "0x2674210", VA = "0x182675C10")]
	private int FindIndexByValue(XmlSchemaObject xso)
	{
		return default(int);
	}

	[Token(Token = "0x60016F3")]
	[Address(RVA = "0x2675BB0", Offset = "0x26741B0", VA = "0x182675BB0")]
	public bool Contains(XmlQualifiedName name)
	{
		return default(bool);
	}

	[Token(Token = "0x60016F6")]
	[Address(RVA = "0x2675CD0", Offset = "0x26742D0", VA = "0x182675CD0")]
	public IDictionaryEnumerator GetEnumerator()
	{
		return null;
	}
}
