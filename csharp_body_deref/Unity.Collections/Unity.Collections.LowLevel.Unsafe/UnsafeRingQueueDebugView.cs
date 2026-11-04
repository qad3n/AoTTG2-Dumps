// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeRingQueueDebugView
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x200013B")]
internal sealed class UnsafeRingQueueDebugView<T> where T : struct
{
	[Token(Token = "0x400052B")]
	[FieldOffset(Offset = "0x0")]
	private UnsafeRingQueue<T> Data;

	[Token(Token = "0x17000199")]
	public T[] Items
	{
		[Token(Token = "0x6000D90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D8F")]
	public UnsafeRingQueueDebugView(UnsafeRingQueue<T> data)
	{
	}
}
