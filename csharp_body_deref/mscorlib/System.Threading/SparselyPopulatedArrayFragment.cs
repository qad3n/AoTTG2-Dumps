// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.SparselyPopulatedArrayFragment
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x2000216")]
internal class SparselyPopulatedArrayFragment<T> where T : class
{
	[Token(Token = "0x40009D2")]
	[FieldOffset(Offset = "0x0")]
	internal readonly T[] _elements;

	[Token(Token = "0x40009D3")]
	[FieldOffset(Offset = "0x0")]
	internal int _freeCount;

	[Token(Token = "0x40009D4")]
	[FieldOffset(Offset = "0x0")]
	internal System.Threading.SparselyPopulatedArrayFragment<T> _next;

	[Token(Token = "0x40009D5")]
	[FieldOffset(Offset = "0x0")]
	internal System.Threading.SparselyPopulatedArrayFragment<T> _prev;

	[Token(Token = "0x170001AE")]
	internal T this[int index]
	{
		[Token(Token = "0x6001247")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001AF")]
	internal int Length
	{
		[Token(Token = "0x6001248")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001B0")]
	internal System.Threading.SparselyPopulatedArrayFragment<T> Prev
	{
		[Token(Token = "0x6001249")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001245")]
	internal SparselyPopulatedArrayFragment(int size)
	{
	}

	[Token(Token = "0x6001246")]
	internal SparselyPopulatedArrayFragment(int size, System.Threading.SparselyPopulatedArrayFragment<T> prev)
	{
	}

	[Token(Token = "0x600124A")]
	internal T SafeAtomicRemove(int index, T expectedElement)
	{
		return null;
	}
}
