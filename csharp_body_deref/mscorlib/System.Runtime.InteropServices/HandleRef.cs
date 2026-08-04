// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.InteropServices.HandleRef
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.InteropServices;

[Token(Token = "0x2000432")]
public readonly struct HandleRef
{
	[Token(Token = "0x4001242")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly object _wrapper;

	[Token(Token = "0x4001243")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private readonly IntPtr _handle;

	[Token(Token = "0x1700045E")]
	public IntPtr Handle
	{
		[Token(Token = "0x60021B1")]
		[Address(RVA = "0x3BBCEA0", Offset = "0x3BBCEA0", VA = "0x3BBCEA0")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x60021B0")]
	[Address(RVA = "0x3BBCE80", Offset = "0x3BBCE80", VA = "0x3BBCE80")]
	public HandleRef(object wrapper, IntPtr handle)
	{
	}
}
