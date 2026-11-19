// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.InteropServices;

[Token(Token = "0x2000442")]
[AttributeUsage(AttributeTargets.Delegate, AllowMultiple = false, Inherited = false)]
[ComVisible(true)]
public sealed class UnmanagedFunctionPointerAttribute : Attribute
{
	[Token(Token = "0x40011AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private CallingConvention m_callingConvention;

	[Token(Token = "0x17000460")]
	public CallingConvention CallingConvention
	{
		[Token(Token = "0x6002211")]
		[Address(RVA = "0x53C4AD0", Offset = "0x53C3AD0", VA = "0x53C4AD0")]
		get
		{
			return default(CallingConvention);
		}
	}

	[Token(Token = "0x6002210")]
	[Address(RVA = "0x53C4AB0", Offset = "0x53C3AB0", VA = "0x53C4AB0")]
	public UnmanagedFunctionPointerAttribute(CallingConvention callingConvention)
	{
	}
}
