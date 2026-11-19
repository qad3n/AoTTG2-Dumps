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
[Token(Token = "0x20005C7")]
public sealed class BitArray : ICollection, IEnumerable, ICloneable
{
	[Serializable]
	[Token(Token = "0x20005C8")]
	private class BitArrayEnumeratorSimple : IEnumerator, ICloneable
	{
		[Token(Token = "0x4001815")]
		[FieldOffset(Offset = "0x10")]
		private BitArray bitarray;

		[Token(Token = "0x4001816")]
		[FieldOffset(Offset = "0x18")]
		private int index;

		[Token(Token = "0x4001817")]
		[FieldOffset(Offset = "0x1C")]
		private int version;

		[Token(Token = "0x4001818")]
		[FieldOffset(Offset = "0x20")]
		private bool currentElement;

		[Token(Token = "0x17000706")]
		public virtual object Current
		{
			[Token(Token = "0x6002CB7")]
			[Address(RVA = "0x5459320", Offset = "0x5458320", VA = "0x5459320", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002CB4")]
		[Address(RVA = "0x5459120", Offset = "0x5458120", VA = "0x5459120")]
		internal BitArrayEnumeratorSimple(BitArray bitarray)
		{
		}

		[Token(Token = "0x6002CB5")]
		[Address(RVA = "0x5459170", Offset = "0x5458170", VA = "0x5459170", Slot = "7")]
		public object Clone()
		{
			return null;
		}

		[Token(Token = "0x6002CB6")]
		[Address(RVA = "0x5459180", Offset = "0x5458180", VA = "0x5459180", Slot = "8")]
		public virtual bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002CB8")]
		[Address(RVA = "0x5459470", Offset = "0x5458470", VA = "0x5459470", Slot = "6")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x4001811")]
	[FieldOffset(Offset = "0x10")]
	private int[] m_array;

	[Token(Token = "0x4001812")]
	[FieldOffset(Offset = "0x18")]
	private int m_length;

	[Token(Token = "0x4001813")]
	[FieldOffset(Offset = "0x1C")]
	private int _version;

	[NonSerialized]
	[Token(Token = "0x4001814")]
	[FieldOffset(Offset = "0x20")]
	private object _syncRoot;

	[Token(Token = "0x17000701")]
	public bool this[int index]
	{
		[Token(Token = "0x6002CA5")]
		[Address(RVA = "0x54585E0", Offset = "0x54575E0", VA = "0x54585E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002CA6")]
		[Address(RVA = "0x54586C0", Offset = "0x54576C0", VA = "0x54586C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000702")]
	public int Length
	{
		[Token(Token = "0x6002CAB")]
		[Address(RVA = "0x5458960", Offset = "0x5457960", VA = "0x5458960")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002CAC")]
		[Address(RVA = "0x5458970", Offset = "0x5457970", VA = "0x5458970")]
		set
		{
		}
	}

	[Token(Token = "0x17000703")]
	public int Count
	{
		[Token(Token = "0x6002CAE")]
		[Address(RVA = "0x5458FE0", Offset = "0x5457FE0", VA = "0x5458FE0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000704")]
	public object SyncRoot
	{
		[Token(Token = "0x6002CAF")]
		[Address(RVA = "0x5458FF0", Offset = "0x5457FF0", VA = "0x5458FF0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000705")]
	public bool IsSynchronized
	{
		[Token(Token = "0x6002CB0")]
		[Address(RVA = "0x5459070", Offset = "0x5458070", VA = "0x5459070", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002CA2")]
	[Address(RVA = "0x5458360", Offset = "0x5457360", VA = "0x5458360")]
	public BitArray(int length)
	{
	}

	[Token(Token = "0x6002CA3")]
	[Address(RVA = "0x5458370", Offset = "0x5457370", VA = "0x5458370")]
	public BitArray(int length, bool defaultValue)
	{
	}

	[Token(Token = "0x6002CA4")]
	[Address(RVA = "0x5458500", Offset = "0x5457500", VA = "0x5458500")]
	public BitArray(BitArray bits)
	{
	}

	[Token(Token = "0x6002CA7")]
	[Address(RVA = "0x54585F0", Offset = "0x54575F0", VA = "0x54585F0")]
	public bool Get(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6002CA8")]
	[Address(RVA = "0x54586D0", Offset = "0x54576D0", VA = "0x54586D0")]
	public void Set(int index, bool value)
	{
	}

	[Token(Token = "0x6002CA9")]
	[Address(RVA = "0x54587D0", Offset = "0x54577D0", VA = "0x54587D0")]
	public void SetAll(bool value)
	{
	}

	[Token(Token = "0x6002CAA")]
	[Address(RVA = "0x5458870", Offset = "0x5457870", VA = "0x5458870")]
	public BitArray Or(BitArray value)
	{
		return null;
	}

	[Token(Token = "0x6002CAD")]
	[Address(RVA = "0x5458AF0", Offset = "0x5457AF0", VA = "0x5458AF0", Slot = "4")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6002CB1")]
	[Address(RVA = "0x5459080", Offset = "0x5458080", VA = "0x5459080", Slot = "9")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002CB2")]
	[Address(RVA = "0x54590D0", Offset = "0x54580D0", VA = "0x54590D0", Slot = "8")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002CB3")]
	[Address(RVA = "0x54584E0", Offset = "0x54574E0", VA = "0x54584E0")]
	private static int GetArrayLength(int n, int div)
	{
		return default(int);
	}
}
