using Il2CppDummyDll;
using Microsoft.Win32.SafeHandles;

namespace System.Runtime.InteropServices;

[Token(Token = "0x2000436")]
public abstract class SafeBuffer : SafeHandleZeroOrMinusOneIsInvalid
{
	[Token(Token = "0x4001249")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly UIntPtr Uninitialized;

	[Token(Token = "0x400124A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private UIntPtr _numBytes;

	[Token(Token = "0x60021BE")]
	[Address(RVA = "0x4ED7400", Offset = "0x4ED7400", VA = "0x4ED7400")]
	[CLSCompliant(false)]
	public unsafe void AcquirePointer(ref byte* pointer)
	{
	}

	[Token(Token = "0x60021BF")]
	[Address(RVA = "0x4ED7600", Offset = "0x4ED7600", VA = "0x4ED7600")]
	public void ReleasePointer()
	{
	}

	[Token(Token = "0x60021C0")]
	[Address(RVA = "0x4ED74D0", Offset = "0x4ED74D0", VA = "0x4ED74D0")]
	private static InvalidOperationException NotInitialized()
	{
		return null;
	}
}
