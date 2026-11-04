// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.InteropServices.HandleRef
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.InteropServices;

[Token(Token = "0x2000461")]
public readonly struct HandleRef
{
	[Token(Token = "0x4001244")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly object _wrapper;

	[Token(Token = "0x4001245")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private readonly IntPtr _handle;

	[Token(Token = "0x17000460")]
	public IntPtr Handle
	{
		[Token(Token = "0x6002220")]
		[Address(RVA = "0xADC170", Offset = "0xADA770", VA = "0x180ADC170")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x600221F")]
	[Address(RVA = "0x180F490", Offset = "0x180DA90", VA = "0x18180F490")]
	public HandleRef(object wrapper, IntPtr handle)
	{
	}
}
