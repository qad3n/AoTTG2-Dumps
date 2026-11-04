// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeListDebugView
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Collections.LowLevel.Unsafe;

namespace Unity.Collections;

[Token(Token = "0x200009C")]
internal sealed class NativeListDebugView<T> where T : struct
{
	[Token(Token = "0x40003C3")]
	[FieldOffset(Offset = "0x0")]
	private unsafe UnsafeList<T>* Data;

	[Token(Token = "0x170000D6")]
	public T[] Items
	{
		[Token(Token = "0x60007D3")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007D2")]
	public NativeListDebugView(NativeList<T> array)
	{
	}
}
