// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeRingQueueDebugView
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Collections.LowLevel.Unsafe;

namespace Unity.Collections;

[Token(Token = "0x20000BE")]
internal sealed class NativeRingQueueDebugView<T> where T : struct
{
	[Token(Token = "0x40003EE")]
	[FieldOffset(Offset = "0x0")]
	private unsafe UnsafeRingQueue<T>* Data;

	[Token(Token = "0x1700010B")]
	public T[] Items
	{
		[Token(Token = "0x600090D")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600090C")]
	public NativeRingQueueDebugView(NativeRingQueue<T> data)
	{
	}
}
