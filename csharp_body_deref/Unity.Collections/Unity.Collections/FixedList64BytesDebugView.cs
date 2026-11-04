// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.FixedList64BytesDebugView
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Collections;

[Token(Token = "0x2000053")]
internal sealed class FixedList64BytesDebugView<T> where T : struct
{
	[Token(Token = "0x40000C1")]
	[FieldOffset(Offset = "0x0")]
	private FixedList64Bytes<T> m_List;

	[Token(Token = "0x1700005A")]
	public T[] Items
	{
		[Token(Token = "0x60002B5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002B4")]
	public FixedList64BytesDebugView(FixedList64Bytes<T> list)
	{
	}
}
