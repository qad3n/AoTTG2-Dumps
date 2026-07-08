using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x2000668")]
internal sealed class LowLevelListWithIList<T> : System.Collections.Generic.LowLevelList<T>, IList<T>, ICollection<T>, IEnumerable<T>, IEnumerable
{
	[Token(Token = "0x2000669")]
	private struct Enumerator : IEnumerator<T>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4001B69")]
		[FieldOffset(Offset = "0x0")]
		private System.Collections.Generic.LowLevelListWithIList<T> _list;

		[Token(Token = "0x4001B6A")]
		[FieldOffset(Offset = "0x0")]
		private int _index;

		[Token(Token = "0x4001B6B")]
		[FieldOffset(Offset = "0x0")]
		private int _version;

		[Token(Token = "0x4001B6C")]
		[FieldOffset(Offset = "0x0")]
		private T _current;

		[Token(Token = "0x17000846")]
		public T Current
		{
			[Token(Token = "0x60032D3")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x17000847")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60032D4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60032CF")]
		internal Enumerator(System.Collections.Generic.LowLevelListWithIList<T> list)
		{
		}

		[Token(Token = "0x60032D0")]
		public void Dispose()
		{
		}

		[Token(Token = "0x60032D1")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60032D2")]
		private bool MoveNextRare()
		{
			return default(bool);
		}

		[Token(Token = "0x60032D5")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x17000845")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EIsReadOnly
	{
		[Token(Token = "0x60032CC")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60032CA")]
	public LowLevelListWithIList()
	{
	}

	[Token(Token = "0x60032CB")]
	public LowLevelListWithIList(int capacity)
	{
	}

	[Token(Token = "0x60032CD")]
	private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60032CE")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}
}
