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

[Token(Token = "0x200043E")]
public abstract class SafeBuffer : SafeHandleZeroOrMinusOneIsInvalid
{
	[Token(Token = "0x40011AB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly UIntPtr Uninitialized;

	[Token(Token = "0x40011AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private UIntPtr _numBytes;

	[Token(Token = "0x6002204")]
	[Address(RVA = "0x53C45A0", Offset = "0x53C35A0", VA = "0x53C45A0")]
	[CLSCompliant(false)]
	public unsafe void AcquirePointer(ref byte* pointer)
	{
	}

	[Token(Token = "0x6002205")]
	[Address(RVA = "0x53C4790", Offset = "0x53C3790", VA = "0x53C4790")]
	public void ReleasePointer()
	{
	}

	[Token(Token = "0x6002206")]
	[Address(RVA = "0x53C4670", Offset = "0x53C3670", VA = "0x53C4670")]
	private static InvalidOperationException NotInitialized()
	{
		return null;
	}
}
