// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeListTDebugView
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x2000119")]
internal sealed class UnsafeListTDebugView<T> where T : struct
{
	[Token(Token = "0x40004DD")]
	[FieldOffset(Offset = "0x0")]
	private UnsafeList<T> Data;

	[Token(Token = "0x17000165")]
	public T[] Items
	{
		[Token(Token = "0x6000C03")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C02")]
	public UnsafeListTDebugView(UnsafeList<T> data)
	{
	}
}
