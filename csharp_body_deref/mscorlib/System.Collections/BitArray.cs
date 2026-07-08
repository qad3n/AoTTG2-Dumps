using Il2CppDummyDll;

namespace System.Collections;

[Serializable]
[Token(Token = "0x2000618")]
public sealed class BitArray : ICollection, IEnumerable, ICloneable
{
	[Serializable]
	[Token(Token = "0x2000619")]
	private class BitArrayEnumeratorSimple : IEnumerator, ICloneable
	{
		[Token(Token = "0x4001A94")]
		[FieldOffset(Offset = "0x10")]
		private BitArray bitarray;

		[Token(Token = "0x4001A95")]
		[FieldOffset(Offset = "0x18")]
		private int index;

		[Token(Token = "0x4001A96")]
		[FieldOffset(Offset = "0x1C")]
		private int version;

		[Token(Token = "0x4001A97")]
		[FieldOffset(Offset = "0x20")]
		private bool currentElement;

		[Token(Token = "0x17000778")]
		public virtual object Current
		{
			[Token(Token = "0x6002FC9")]
			[Address(RVA = "0x4FA08C0", Offset = "0x4FA08C0", VA = "0x4FA08C0", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002FC6")]
		[Address(RVA = "0x4FA06C0", Offset = "0x4FA06C0", VA = "0x4FA06C0")]
		internal BitArrayEnumeratorSimple(BitArray bitarray)
		{
		}

		[Token(Token = "0x6002FC7")]
		[Address(RVA = "0x4FA0710", Offset = "0x4FA0710", VA = "0x4FA0710", Slot = "7")]
		public object Clone()
		{
			return null;
		}

		[Token(Token = "0x6002FC8")]
		[Address(RVA = "0x4FA0720", Offset = "0x4FA0720", VA = "0x4FA0720", Slot = "8")]
		public virtual bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002FCA")]
		[Address(RVA = "0x4FA0A10", Offset = "0x4FA0A10", VA = "0x4FA0A10", Slot = "6")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x4001A90")]
	[FieldOffset(Offset = "0x10")]
	private int[] m_array;

	[Token(Token = "0x4001A91")]
	[FieldOffset(Offset = "0x18")]
	private int m_length;

	[Token(Token = "0x4001A92")]
	[FieldOffset(Offset = "0x1C")]
	private int _version;

	[NonSerialized]
	[Token(Token = "0x4001A93")]
	[FieldOffset(Offset = "0x20")]
	private object _syncRoot;

	[Token(Token = "0x17000773")]
	public bool this[int index]
	{
		[Token(Token = "0x6002FB7")]
		[Address(RVA = "0x4F9FB30", Offset = "0x4F9FB30", VA = "0x4F9FB30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002FB8")]
		[Address(RVA = "0x4F9FC10", Offset = "0x4F9FC10", VA = "0x4F9FC10")]
		set
		{
		}
	}

	[Token(Token = "0x17000774")]
	public int Length
	{
		[Token(Token = "0x6002FBD")]
		[Address(RVA = "0x4F9FE60", Offset = "0x4F9FE60", VA = "0x4F9FE60")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002FBE")]
		[Address(RVA = "0x4F9FE70", Offset = "0x4F9FE70", VA = "0x4F9FE70")]
		set
		{
		}
	}

	[Token(Token = "0x17000775")]
	public int Count
	{
		[Token(Token = "0x6002FC0")]
		[Address(RVA = "0x4FA0550", Offset = "0x4FA0550", VA = "0x4FA0550", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000776")]
	public object SyncRoot
	{
		[Token(Token = "0x6002FC1")]
		[Address(RVA = "0x4FA0560", Offset = "0x4FA0560", VA = "0x4FA0560", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000777")]
	public bool IsSynchronized
	{
		[Token(Token = "0x6002FC2")]
		[Address(RVA = "0x4FA05E0", Offset = "0x4FA05E0", VA = "0x4FA05E0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002FB4")]
	[Address(RVA = "0x4F9F8B0", Offset = "0x4F9F8B0", VA = "0x4F9F8B0")]
	public BitArray(int length)
	{
	}

	[Token(Token = "0x6002FB5")]
	[Address(RVA = "0x4F9F8C0", Offset = "0x4F9F8C0", VA = "0x4F9F8C0")]
	public BitArray(int length, bool defaultValue)
	{
	}

	[Token(Token = "0x6002FB6")]
	[Address(RVA = "0x4F9FA40", Offset = "0x4F9FA40", VA = "0x4F9FA40")]
	public BitArray(BitArray bits)
	{
	}

	[Token(Token = "0x6002FB9")]
	[Address(RVA = "0x4F9FB40", Offset = "0x4F9FB40", VA = "0x4F9FB40")]
	public bool Get(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6002FBA")]
	[Address(RVA = "0x4F9FC20", Offset = "0x4F9FC20", VA = "0x4F9FC20")]
	public void Set(int index, bool value)
	{
	}

	[Token(Token = "0x6002FBB")]
	[Address(RVA = "0x4F9FD00", Offset = "0x4F9FD00", VA = "0x4F9FD00")]
	public void SetAll(bool value)
	{
	}

	[Token(Token = "0x6002FBC")]
	[Address(RVA = "0x4F9FD60", Offset = "0x4F9FD60", VA = "0x4F9FD60")]
	public BitArray Or(BitArray value)
	{
		return null;
	}

	[Token(Token = "0x6002FBF")]
	[Address(RVA = "0x4FA0020", Offset = "0x4FA0020", VA = "0x4FA0020", Slot = "4")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6002FC3")]
	[Address(RVA = "0x4FA05F0", Offset = "0x4FA05F0", VA = "0x4FA05F0", Slot = "9")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002FC4")]
	[Address(RVA = "0x4FA0640", Offset = "0x4FA0640", VA = "0x4FA0640", Slot = "8")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002FC5")]
	[Address(RVA = "0x4F9FA20", Offset = "0x4F9FA20", VA = "0x4F9FA20")]
	private static int GetArrayLength(int n, int div)
	{
		return default(int);
	}
}
