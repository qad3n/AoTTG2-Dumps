// ==================== AoTTG2 cross-reference ====================
// Type: System.Buffers.MemoryHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3C8F410", Offset = "0x3C8F410", VA = "0x3C8F410")]
		get
		{
			//IL_0002: Expected I, but got O
			return (void*)unchecked((nint)null);
		}
	}

	[Token(Token = "0x6003350")]
	[Address(RVA = "0x3C8F3F0", Offset = "0x3C8F3F0", VA = "0x3C8F3F0")]
	[CLSCompliant(false)]
	public unsafe MemoryHandle(void* pointer, [Optional] GCHandle handle, [Optional] IPinnable pinnable)
	{
	}

	[Token(Token = "0x6003352")]
	[Address(RVA = "0x3C8F420", Offset = "0x3C8F420", VA = "0x3C8F420", Slot = "4")]
	public void Dispose()
	{
	}
}
