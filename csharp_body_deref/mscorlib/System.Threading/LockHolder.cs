using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001EC")]
[System.Runtime.CompilerServices.ReflectionBlocked]
public struct LockHolder : IDisposable
{
	[Token(Token = "0x4000983")]
	[FieldOffset(Offset = "0x0")]
	private Lock _lock;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011F0")]
	[Address(RVA = "0x5048590", Offset = "0x5048590", VA = "0x5048590")]
	public static LockHolder Hold(Lock l)
	{
		return default(LockHolder);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011F1")]
	[Address(RVA = "0x50485F0", Offset = "0x50485F0", VA = "0x50485F0", Slot = "4")]
	public void Dispose()
	{
	}
}
