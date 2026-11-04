// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.FixedList4096BytesDebugView
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Collections;

[Token(Token = "0x200005F")]
internal sealed class FixedList4096BytesDebugView<T> where T : struct
{
	[Token(Token = "0x40000CD")]
	[FieldOffset(Offset = "0x0")]
	private FixedList4096Bytes<T> m_List;

	[Token(Token = "0x1700007E")]
	public T[] Items
	{
		[Token(Token = "0x600039F")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600039E")]
	public FixedList4096BytesDebugView(FixedList4096Bytes<T> list)
	{
	}
}
