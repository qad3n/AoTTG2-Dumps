// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.InteropServices.SafeBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3BBCF20", Offset = "0x3BBCF20", VA = "0x3BBCF20")]
	[CLSCompliant(false)]
	public unsafe void AcquirePointer(ref byte* pointer)
	{
	}

	[Token(Token = "0x60021BF")]
	[Address(RVA = "0x3BBD120", Offset = "0x3BBD120", VA = "0x3BBD120")]
	public void ReleasePointer()
	{
	}

	[Token(Token = "0x60021C0")]
	[Address(RVA = "0x3BBCFF0", Offset = "0x3BBCFF0", VA = "0x3BBCFF0")]
	private static InvalidOperationException NotInitialized()
	{
		return null;
	}
}
