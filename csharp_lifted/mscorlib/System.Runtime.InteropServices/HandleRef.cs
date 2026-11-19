// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.InteropServices.HandleRef
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.InteropServices;

[Token(Token = "0x200043A")]
public readonly struct HandleRef
{
	[Token(Token = "0x40011A4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly object _wrapper;

	[Token(Token = "0x40011A5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private readonly IntPtr _handle;

	[Token(Token = "0x1700045F")]
	public IntPtr Handle
	{
		[Token(Token = "0x60021F6")]
		[Address(RVA = "0x53C4520", Offset = "0x53C3520", VA = "0x53C4520")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x60021F5")]
	[Address(RVA = "0x53C4500", Offset = "0x53C3500", VA = "0x53C4500")]
	public HandleRef(object wrapper, IntPtr handle)
	{
	}
}
