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

[Token(Token = "0x200062F")]
public struct MemoryHandle : IDisposable
{
	[Token(Token = "0x40018E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private unsafe void* _pointer;

	[Token(Token = "0x40018E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private GCHandle _handle;

	[Token(Token = "0x40018E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IPinnable _pinnable;

	[Token(Token = "0x170007DB")]
	[CLSCompliant(false)]
	public unsafe void* Pointer
	{
		[Token(Token = "0x600304A")]
		[Address(RVA = "0x5462270", Offset = "0x5461270", VA = "0x5462270")]
		get
		{
			//IL_0002: Expected I, but got O
			return (void*)unchecked((nint)null);
		}
	}

	[Token(Token = "0x6003049")]
	[Address(RVA = "0x5462250", Offset = "0x5461250", VA = "0x5462250")]
	[CLSCompliant(false)]
	public unsafe MemoryHandle(void* pointer, [Optional] GCHandle handle, [Optional] IPinnable pinnable)
	{
	}

	[Token(Token = "0x600304B")]
	[Address(RVA = "0x5462280", Offset = "0x5461280", VA = "0x5462280", Slot = "4")]
	public void Dispose()
	{
	}
}
