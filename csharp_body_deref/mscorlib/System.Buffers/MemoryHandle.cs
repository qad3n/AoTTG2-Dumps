using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Buffers;

[Token(Token = "0x2000680")]
public struct MemoryHandle : IDisposable
{
	[Token(Token = "0x4001B77")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private unsafe void* _pointer;

	[Token(Token = "0x4001B78")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private GCHandle _handle;

	[Token(Token = "0x4001B79")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IPinnable _pinnable;

	[Token(Token = "0x1700084D")]
	[CLSCompliant(false)]
	public unsafe void* Pointer
	{
		[Token(Token = "0x6003351")]
		[Address(RVA = "0x4FA98F0", Offset = "0x4FA98F0", VA = "0x4FA98F0")]
		get
		{
			//IL_0002: Expected I, but got O
			return (void*)unchecked((nint)null);
		}
	}

	[Token(Token = "0x6003350")]
	[Address(RVA = "0x4FA98D0", Offset = "0x4FA98D0", VA = "0x4FA98D0")]
	[CLSCompliant(false)]
	public unsafe MemoryHandle(void* pointer, [Optional] GCHandle handle, [Optional] IPinnable pinnable)
	{
	}

	[Token(Token = "0x6003352")]
	[Address(RVA = "0x4FA9900", Offset = "0x4FA9900", VA = "0x4FA9900", Slot = "4")]
	public void Dispose()
	{
	}
}
