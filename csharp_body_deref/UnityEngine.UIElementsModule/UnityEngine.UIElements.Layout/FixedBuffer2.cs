// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Layout.FixedBuffer2
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x2000517")]
internal struct FixedBuffer2<T> where T : struct
{
	[Token(Token = "0x4001108")]
	[FieldOffset(Offset = "0x0")]
	private T __0;

	[Token(Token = "0x4001109")]
	[FieldOffset(Offset = "0x0")]
	private T __1;

	[Token(Token = "0x170007F4")]
	public unsafe ref T this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001F4E")]
		get
		{
			return ref *(T*)null;
		}
	}
}
