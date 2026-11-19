// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.SparselyPopulatedArrayFragment
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001EE")]
internal class SparselyPopulatedArrayFragment<T> where T : class
{
	[Token(Token = "0x4000930")]
	[FieldOffset(Offset = "0x0")]
	internal readonly T[] _elements;

	[Token(Token = "0x4000931")]
	[FieldOffset(Offset = "0x0")]
	internal int _freeCount;

	[Token(Token = "0x4000932")]
	[FieldOffset(Offset = "0x0")]
	internal System.Threading.SparselyPopulatedArrayFragment<T> _next;

	[Token(Token = "0x4000933")]
	[FieldOffset(Offset = "0x0")]
	internal System.Threading.SparselyPopulatedArrayFragment<T> _prev;

	[Token(Token = "0x170001AD")]
	internal T this[int index]
	{
		[Token(Token = "0x600121E")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001AE")]
	internal int Length
	{
		[Token(Token = "0x600121F")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001AF")]
	internal System.Threading.SparselyPopulatedArrayFragment<T> Prev
	{
		[Token(Token = "0x6001220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600121C")]
	internal SparselyPopulatedArrayFragment(int size)
	{
	}

	[Token(Token = "0x600121D")]
	internal SparselyPopulatedArrayFragment(int size, System.Threading.SparselyPopulatedArrayFragment<T> prev)
	{
	}

	[Token(Token = "0x6001221")]
	internal T SafeAtomicRemove(int index, T expectedElement)
	{
		return null;
	}
}
