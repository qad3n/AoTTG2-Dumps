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
	[Address(RVA = "0x4ED7930", Offset = "0x4ED7930", VA = "0x4ED7930")]
	public UnmanagedFunctionPointerAttribute(CallingConvention callingConvention)
	{
	}
}
