// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.FixedList32BytesDebugView
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Collections;

[Token(Token = "0x200004F")]
internal sealed class FixedList32BytesDebugView<T> where T : struct
{
	[Token(Token = "0x40000BD")]
	[FieldOffset(Offset = "0x0")]
	private FixedList32Bytes<T> m_List;

	[Token(Token = "0x1700004E")]
	public T[] Items
	{
		[Token(Token = "0x6000267")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000266")]
	public FixedList32BytesDebugView(FixedList32Bytes<T> list)
	{
	}
}
