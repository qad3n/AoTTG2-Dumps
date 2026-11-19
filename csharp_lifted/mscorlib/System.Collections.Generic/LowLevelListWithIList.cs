// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.LowLevelListWithIList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x2000617")]
internal sealed class LowLevelListWithIList<T> : System.Collections.Generic.LowLevelList<T>, IList<T>, ICollection<T>, IEnumerable<T>, IEnumerable
{
	[Token(Token = "0x2000618")]
	private struct Enumerator : IEnumerator<T>, IDisposable, IEnumerator
	{
		[Token(Token = "0x40018D2")]
		[FieldOffset(Offset = "0x0")]
		private System.Collections.Generic.LowLevelListWithIList<T> _list;

		[Token(Token = "0x40018D3")]
		[FieldOffset(Offset = "0x0")]
		private int _index;

		[Token(Token = "0x40018D4")]
		[FieldOffset(Offset = "0x0")]
		private int _version;

		[Token(Token = "0x40018D5")]
		[FieldOffset(Offset = "0x0")]
		private T _current;

		[Token(Token = "0x170007D4")]
		public T Current
		{
			[Token(Token = "0x6002FCC")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x170007D5")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6002FCD")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002FC8")]
		internal Enumerator(System.Collections.Generic.LowLevelListWithIList<T> list)
		{
		}

		[Token(Token = "0x6002FC9")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6002FCA")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002FCB")]
		private bool MoveNextRare()
		{
			return default(bool);
		}

		[Token(Token = "0x6002FCE")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x170007D3")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EIsReadOnly
	{
		[Token(Token = "0x6002FC5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002FC3")]
	public LowLevelListWithIList()
	{
	}

	[Token(Token = "0x6002FC4")]
	public LowLevelListWithIList(int capacity)
	{
	}

	[Token(Token = "0x6002FC6")]
	private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002FC7")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}
}
