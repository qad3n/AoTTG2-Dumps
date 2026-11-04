// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.FixedList128BytesDebugView
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Collections;

[Token(Token = "0x2000057")]
internal sealed class FixedList128BytesDebugView<T> where T : struct
{
	[Token(Token = "0x40000C5")]
	[FieldOffset(Offset = "0x0")]
	private FixedList128Bytes<T> m_List;

	[Token(Token = "0x17000066")]
	public T[] Items
	{
		[Token(Token = "0x6000303")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000302")]
	public FixedList128BytesDebugView(FixedList128Bytes<T> list)
	{
	}
}
