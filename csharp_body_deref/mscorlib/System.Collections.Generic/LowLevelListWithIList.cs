// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.LowLevelListWithIList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x200063C")]
internal sealed class LowLevelListWithIList<T> : System.Collections.Generic.LowLevelList<T>, IList<T>, ICollection<T>, IEnumerable<T>, IEnumerable
{
	[Token(Token = "0x200063D")]
	private struct Enumerator : IEnumerator<T>, IDisposable, IEnumerator
	{
		[Token(Token = "0x400196B")]
		[FieldOffset(Offset = "0x0")]
		private System.Collections.Generic.LowLevelListWithIList<T> _list;

		[Token(Token = "0x400196C")]
		[FieldOffset(Offset = "0x0")]
		private int _index;

		[Token(Token = "0x400196D")]
		[FieldOffset(Offset = "0x0")]
		private int _version;

		[Token(Token = "0x400196E")]
		[FieldOffset(Offset = "0x0")]
		private T _current;

		[Token(Token = "0x170007D5")]
		public T Current
		{
			[Token(Token = "0x6002FED")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x170007D6")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6002FEE")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002FE9")]
		internal Enumerator(System.Collections.Generic.LowLevelListWithIList<T> list)
		{
		}

		[Token(Token = "0x6002FEA")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6002FEB")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002FEC")]
		private bool MoveNextRare()
		{
			return default(bool);
		}

		[Token(Token = "0x6002FEF")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x170007D4")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EIsReadOnly
	{
		[Token(Token = "0x6002FE6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002FE4")]
	public LowLevelListWithIList()
	{
	}

	[Token(Token = "0x6002FE5")]
	public LowLevelListWithIList(int capacity)
	{
	}

	[Token(Token = "0x6002FE7")]
	private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002FE8")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}
}
