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

[Token(Token = "0x200067C")]
public abstract class ArrayPool<T>
{
	[Token(Token = "0x1700084C")]
	public static ArrayPool<T> Shared
	{
		[Token(Token = "0x6003343")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003344")]
	public abstract T[] Rent(int minimumLength);

	[Token(Token = "0x6003345")]
	public abstract void Return(T[] array, bool clearArray = false);

	[Token(Token = "0x6003346")]
	protected ArrayPool()
	{
	}
}
