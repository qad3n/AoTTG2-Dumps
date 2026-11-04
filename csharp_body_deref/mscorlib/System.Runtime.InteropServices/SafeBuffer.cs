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

[Token(Token = "0x2000465")]
public abstract class SafeBuffer : SafeHandleZeroOrMinusOneIsInvalid
{
	[Token(Token = "0x400124B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly UIntPtr Uninitialized;

	[Token(Token = "0x400124C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private UIntPtr _numBytes;

	[Token(Token = "0x600222E")]
	[Address(RVA = "0x1A36E30", Offset = "0x1A35430", VA = "0x181A36E30")]
	[CLSCompliant(false)]
	public unsafe void AcquirePointer(ref byte* pointer)
	{
	}

	[Token(Token = "0x600222F")]
	[Address(RVA = "0x1A36F80", Offset = "0x1A35580", VA = "0x181A36F80")]
	public void ReleasePointer()
	{
	}

	[Token(Token = "0x6002230")]
	[Address(RVA = "0x1A36F20", Offset = "0x1A35520", VA = "0x181A36F20")]
	private static InvalidOperationException NotInitialized()
	{
		return null;
	}
}
