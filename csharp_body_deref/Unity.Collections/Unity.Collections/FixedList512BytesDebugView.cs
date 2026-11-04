// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.FixedList512BytesDebugView
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Collections;

[Token(Token = "0x200005B")]
internal sealed class FixedList512BytesDebugView<T> where T : struct
{
	[Token(Token = "0x40000C9")]
	[FieldOffset(Offset = "0x0")]
	private FixedList512Bytes<T> m_List;

	[Token(Token = "0x17000072")]
	public T[] Items
	{
		[Token(Token = "0x6000351")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000350")]
	public FixedList512BytesDebugView(FixedList512Bytes<T> list)
	{
	}
}
