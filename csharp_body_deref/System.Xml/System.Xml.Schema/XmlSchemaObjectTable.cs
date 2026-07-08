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
		[Address(RVA = "0x43E8BA0", Offset = "0x43E8BA0", VA = "0x43E8BA0")]
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
			[Address(RVA = "0x43E93F0", Offset = "0x43E93F0", VA = "0x43E93F0", Slot = "5")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000658")]
		public object SyncRoot
		{
			[Token(Token = "0x60016FA")]
			[Address(RVA = "0x43E9400", Offset = "0x43E9400", VA = "0x43E9400", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000659")]
		public bool IsSynchronized
		{
			[Token(Token = "0x60016FB")]
			[Address(RVA = "0x43E94A0", Offset = "0x43E94A0", VA = "0x43E94A0", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60016F8")]
		[Address(RVA = "0x43E92D0", Offset = "0x43E92D0", VA = "0x43E92D0")]
		internal ValuesCollection(List<XmlSchemaObjectEntry> entries, int size)
		{
		}

		[Token(Token = "0x60016FC")]
		[Address(RVA = "0x43E9540", Offset = "0x43E9540", VA = "0x43E9540", Slot = "4")]
		public void CopyTo(Array array, int arrayIndex)
		{
		}

		[Token(Token = "0x60016FD")]
		[Address(RVA = "0x43E9650", Offset = "0x43E9650", VA = "0x43E9650", Slot = "8")]
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
			[Address(RVA = "0x43E9710", Offset = "0x43E9710", VA = "0x43E9710", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60016FE")]
		[Address(RVA = "0x43E96C0", Offset = "0x43E96C0", VA = "0x43E96C0")]
		internal XSOEnumerator(List<XmlSchemaObjectEntry> entries, int size, EnumeratorType enumType)
		{
		}

		[Token(Token = "0x6001700")]
		[Address(RVA = "0x43E98C0", Offset = "0x43E98C0", VA = "0x43E98C0", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001701")]
		[Address(RVA = "0x43E9990", Offset = "0x43E9990", VA = "0x43E9990", Slot = "6")]
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
			[Address(RVA = "0x43E99D0", Offset = "0x43E99D0", VA = "0x43E99D0", Slot = "9")]
			get
			{
				return default(DictionaryEntry);
			}
		}

		[Token(Token = "0x1700065C")]
		public object Key
		{
			[Token(Token = "0x6001704")]
			[Address(RVA = "0x43E9B20", Offset = "0x43E9B20", VA = "0x43E9B20", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700065D")]
		public object Value
		{
			[Token(Token = "0x6001705")]
			[Address(RVA = "0x43E9C50", Offset = "0x43E9C50", VA = "0x43E9C50", Slot = "8")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001702")]
		[Address(RVA = "0x43E93A0", Offset = "0x43E93A0", VA = "0x43E93A0")]
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
		[Address(RVA = "0x43E9140", Offset = "0x43E9140", VA = "0x43E9140")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000655")]
	public XmlSchemaObject this[XmlQualifiedName name]
	{
		[Token(Token = "0x60016F4")]
		[Address(RVA = "0x43E91D0", Offset = "0x43E91D0", VA = "0x43E91D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000656")]
	public ICollection Values
	{
		[Token(Token = "0x60016F5")]
		[Address(RVA = "0x43E9240", Offset = "0x43E9240", VA = "0x43E9240")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60016EB")]
	[Address(RVA = "0x43E89D0", Offset = "0x43E89D0", VA = "0x43E89D0")]
	internal XmlSchemaObjectTable()
	{
	}

	[Token(Token = "0x60016EC")]
	[Address(RVA = "0x43E8A90", Offset = "0x43E8A90", VA = "0x43E8A90")]
	internal void Add(XmlQualifiedName name, XmlSchemaObject value)
	{
	}

	[Token(Token = "0x60016ED")]
	[Address(RVA = "0x43E8BD0", Offset = "0x43E8BD0", VA = "0x43E8BD0")]
	internal void Insert(XmlQualifiedName name, XmlSchemaObject value)
	{
	}

	[Token(Token = "0x60016EE")]
	[Address(RVA = "0x43E8E00", Offset = "0x43E8E00", VA = "0x43E8E00")]
	internal void Replace(XmlQualifiedName name, XmlSchemaObject value)
	{
	}

	[Token(Token = "0x60016EF")]
	[Address(RVA = "0x43E8F90", Offset = "0x43E8F90", VA = "0x43E8F90")]
	internal void Clear()
	{
	}

	[Token(Token = "0x60016F0")]
	[Address(RVA = "0x43E9010", Offset = "0x43E9010", VA = "0x43E9010")]
	internal void Remove(XmlQualifiedName name)
	{
	}

	[Token(Token = "0x60016F1")]
	[Address(RVA = "0x43E8D70", Offset = "0x43E8D70", VA = "0x43E8D70")]
	private int FindIndexByValue(XmlSchemaObject xso)
	{
		return default(int);
	}

	[Token(Token = "0x60016F3")]
	[Address(RVA = "0x43E9180", Offset = "0x43E9180", VA = "0x43E9180")]
	public bool Contains(XmlQualifiedName name)
	{
		return default(bool);
	}

	[Token(Token = "0x60016F6")]
	[Address(RVA = "0x43E9300", Offset = "0x43E9300", VA = "0x43E9300")]
	public IDictionaryEnumerator GetEnumerator()
	{
		return null;
	}
}
