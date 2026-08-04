// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.InteropServices;

[Token(Token = "0x200043A")]
[AttributeUsage(AttributeTargets.Delegate, AllowMultiple = false, Inherited = false)]
[ComVisible(true)]
public sealed class UnmanagedFunctionPointerAttribute : Attribute
{
	[Token(Token = "0x400124C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private CallingConvention m_callingConvention;

	[Token(Token = "0x60021CA")]
	[Address(RVA = "0x3BBD450", Offset = "0x3BBD450", VA = "0x3BBD450")]
	public UnmanagedFunctionPointerAttribute(CallingConvention callingConvention)
	{
	}
}
