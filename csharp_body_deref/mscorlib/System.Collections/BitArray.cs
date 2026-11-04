// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.BitArray
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections;

[Serializable]
[Token(Token = "0x20005EC")]
public sealed class BitArray : ICollection, IEnumerable, ICloneable
{
	[Serializable]
	[Token(Token = "0x20005ED")]
	private class BitArrayEnumeratorSimple : IEnumerator, ICloneable
	{
		[Token(Token = "0x40018AE")]
		[FieldOffset(Offset = "0x10")]
		private BitArray bitarray;

		[Token(Token = "0x40018AF")]
		[FieldOffset(Offset = "0x18")]
		private int index;

		[Token(Token = "0x40018B0")]
		[FieldOffset(Offset = "0x1C")]
		private int version;

		[Token(Token = "0x40018B1")]
		[FieldOffset(Offset = "0x20")]
		private bool currentElement;

		[Token(Token = "0x17000707")]
		public virtual object Current
		{
			[Token(Token = "0x6002CDA")]
			[Address(RVA = "0x1ACD120", Offset = "0x1ACB720", VA = "0x181ACD120", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002CD7")]
		[Address(RVA = "0x1ACD0D0", Offset = "0x1ACB6D0", VA = "0x181ACD0D0")]
		internal BitArrayEnumeratorSimple(BitArray bitarray)
		{
		}

		[Token(Token = "0x6002CD8")]
		[Address(RVA = "0x1A7BC80", Offset = "0x1A7A280", VA = "0x181A7BC80", Slot = "7")]
		public object Clone()
		{
			return null;
		}

		[Token(Token = "0x6002CD9")]
		[Address(RVA = "0x1ACCF40", Offset = "0x1ACB540", VA = "0x181ACCF40", Slot = "8")]
		public virtual bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002CDB")]
		[Address(RVA = "0x1ACD050", Offset = "0x1ACB650", VA = "0x181ACD050", Slot = "6")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x40018AA")]
	[FieldOffset(Offset = "0x10")]
	private int[] m_array;

	[Token(Token = "0x40018AB")]
	[FieldOffset(Offset = "0x18")]
	private int m_length;

	[Token(Token = "0x40018AC")]
	[FieldOffset(Offset = "0x1C")]
	private int _version;

	[NonSerialized]
	[Token(Token = "0x40018AD")]
	[FieldOffset(Offset = "0x20")]
	private object _syncRoot;

	[Token(Token = "0x17000702")]
	public bool this[int index]
	{
		[Token(Token = "0x6002CC8")]
		[Address(RVA = "0x1AB68A0", Offset = "0x1AB4EA0", VA = "0x181AB68A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002CC9")]
		[Address(RVA = "0x1AB7090", Offset = "0x1AB5690", VA = "0x181AB7090")]
		set
		{
		}
	}

	[Token(Token = "0x17000703")]
	public int Length
	{
		[Token(Token = "0x6002CCE")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002CCF")]
		[Address(RVA = "0x1AB71B0", Offset = "0x1AB57B0", VA = "0x181AB71B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000704")]
	public int Count
	{
		[Token(Token = "0x6002CD1")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000705")]
	public object SyncRoot
	{
		[Token(Token = "0x6002CD2")]
		[Address(RVA = "0x1AB7020", Offset = "0x1AB5620", VA = "0x181AB7020", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000706")]
	public bool IsSynchronized
	{
		[Token(Token = "0x6002CD3")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002CC5")]
	[Address(RVA = "0x1AB6DB0", Offset = "0x1AB53B0", VA = "0x181AB6DB0")]
	public BitArray(int length)
	{
	}

	[Token(Token = "0x6002CC6")]
	[Address(RVA = "0x1AB6C40", Offset = "0x1AB5240", VA = "0x181AB6C40")]
	public BitArray(int length, bool defaultValue)
	{
	}

	[Token(Token = "0x6002CC7")]
	[Address(RVA = "0x1AB6F20", Offset = "0x1AB5520", VA = "0x181AB6F20")]
	public BitArray(BitArray bits)
	{
	}

	[Token(Token = "0x6002CCA")]
	[Address(RVA = "0x1AB68A0", Offset = "0x1AB4EA0", VA = "0x181AB68A0")]
	public bool Get(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6002CCB")]
	[Address(RVA = "0x1AB6B20", Offset = "0x1AB5120", VA = "0x181AB6B20")]
	public void Set(int index, bool value)
	{
	}

	[Token(Token = "0x6002CCC")]
	[Address(RVA = "0x1AB6AB0", Offset = "0x1AB50B0", VA = "0x181AB6AB0")]
	public void SetAll(bool value)
	{
	}

	[Token(Token = "0x6002CCD")]
	[Address(RVA = "0x1AB6990", Offset = "0x1AB4F90", VA = "0x181AB6990")]
	public BitArray Or(BitArray value)
	{
		return null;
	}

	[Token(Token = "0x6002CD0")]
	[Address(RVA = "0x1AB6220", Offset = "0x1AB4820", VA = "0x181AB6220", Slot = "4")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6002CD4")]
	[Address(RVA = "0x1AB60F0", Offset = "0x1AB46F0", VA = "0x181AB60F0", Slot = "9")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002CD5")]
	[Address(RVA = "0x1AB6840", Offset = "0x1AB4E40", VA = "0x181AB6840", Slot = "8")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002CD6")]
	[Address(RVA = "0x1AB6820", Offset = "0x1AB4E20", VA = "0x181AB6820")]
	private static int GetArrayLength(int n, int div)
	{
		return default(int);
	}
}
