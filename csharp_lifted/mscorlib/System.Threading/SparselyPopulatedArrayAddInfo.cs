// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.SparselyPopulatedArrayAddInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001ED")]
internal struct SparselyPopulatedArrayAddInfo<T> where T : class
{
	[Token(Token = "0x400092E")]
	[FieldOffset(Offset = "0x0")]
	private System.Threading.SparselyPopulatedArrayFragment<T> _source;

	[Token(Token = "0x400092F")]
	[FieldOffset(Offset = "0x0")]
	private int _index;

	[Token(Token = "0x170001AB")]
	internal System.Threading.SparselyPopulatedArrayFragment<T> Source
	{
		[Token(Token = "0x600121A")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001AC")]
	internal int Index
	{
		[Token(Token = "0x600121B")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001219")]
	internal SparselyPopulatedArrayAddInfo(System.Threading.SparselyPopulatedArrayFragment<T> source, int index)
	{
	}
}
