// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.SparselyPopulatedArray
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x2000214")]
internal class SparselyPopulatedArray<T> where T : class
{
	[Token(Token = "0x40009CE")]
	[FieldOffset(Offset = "0x0")]
	private readonly System.Threading.SparselyPopulatedArrayFragment<T> _head;

	[Token(Token = "0x40009CF")]
	[FieldOffset(Offset = "0x0")]
	private System.Threading.SparselyPopulatedArrayFragment<T> _tail;

	[Token(Token = "0x170001AB")]
	internal System.Threading.SparselyPopulatedArrayFragment<T> Tail
	{
		[Token(Token = "0x6001240")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600123F")]
	internal SparselyPopulatedArray(int initialSize)
	{
	}

	[Token(Token = "0x6001241")]
	internal System.Threading.SparselyPopulatedArrayAddInfo<T> Add(T element)
	{
		return default(System.Threading.SparselyPopulatedArrayAddInfo<T>);
	}
}
