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

[Token(Token = "0x2000654")]
public struct MemoryHandle : IDisposable
{
	[Token(Token = "0x4001979")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private unsafe void* _pointer;

	[Token(Token = "0x400197A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private GCHandle _handle;

	[Token(Token = "0x400197B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IPinnable _pinnable;

	[Token(Token = "0x170007DC")]
	[CLSCompliant(false)]
	public unsafe void* Pointer
	{
		[Token(Token = "0x600306B")]
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		get
		{
			//IL_0002: Expected I, but got O
			return (void*)unchecked((nint)null);
		}
	}

	[Token(Token = "0x600306A")]
	[Address(RVA = "0x1AD5BE0", Offset = "0x1AD41E0", VA = "0x181AD5BE0")]
	[CLSCompliant(false)]
	public unsafe MemoryHandle(void* pointer, [Optional] GCHandle handle, [Optional] IPinnable pinnable)
	{
	}

	[Token(Token = "0x600306C")]
	[Address(RVA = "0x1AD5B70", Offset = "0x1AD4170", VA = "0x181AD5B70", Slot = "4")]
	public void Dispose()
	{
	}
}
