// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.InteropServices;

[Token(Token = "0x2000469")]
[ComVisible(true)]
[AttributeUsage(AttributeTargets.Delegate, AllowMultiple = false, Inherited = false)]
public sealed class UnmanagedFunctionPointerAttribute : Attribute
{
	[Token(Token = "0x400124E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private CallingConvention m_callingConvention;

	[Token(Token = "0x17000461")]
	public CallingConvention CallingConvention
	{
		[Token(Token = "0x600223B")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		get
		{
			return default(CallingConvention);
		}
	}

	[Token(Token = "0x600223A")]
	[Address(RVA = "0x1A29130", Offset = "0x1A27730", VA = "0x181A29130")]
	public UnmanagedFunctionPointerAttribute(CallingConvention callingConvention)
	{
	}
}
