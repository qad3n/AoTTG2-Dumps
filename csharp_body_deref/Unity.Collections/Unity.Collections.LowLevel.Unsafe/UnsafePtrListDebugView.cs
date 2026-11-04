// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafePtrListDebugView
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x200011F")]
internal sealed class UnsafePtrListDebugView<T> where T : struct
{
	[Token(Token = "0x40004E9")]
	[FieldOffset(Offset = "0x0")]
	private UnsafePtrList<T> Data;

	[Token(Token = "0x1700016D")]
	public unsafe T*[] Items
	{
		[Token(Token = "0x6000C3A")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C39")]
	public UnsafePtrListDebugView(UnsafePtrList<T> data)
	{
	}
}
