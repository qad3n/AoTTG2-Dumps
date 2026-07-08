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
