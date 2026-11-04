// ==================== AoTTG2 cross-reference ====================
// Type: System.Buffers.ArrayPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Buffers;

[Token(Token = "0x2000650")]
public abstract class ArrayPool<T>
{
	[Token(Token = "0x170007DB")]
	public static ArrayPool<T> Shared
	{
		[Token(Token = "0x600305D")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600305E")]
	public abstract T[] Rent(int minimumLength);

	[Token(Token = "0x600305F")]
	public abstract void Return(T[] array, bool clearArray = false);

	[Token(Token = "0x6003060")]
	protected ArrayPool()
	{
	}
}
