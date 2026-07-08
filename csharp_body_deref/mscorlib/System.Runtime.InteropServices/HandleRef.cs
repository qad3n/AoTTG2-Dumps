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
		[Address(RVA = "0x4ED7380", Offset = "0x4ED7380", VA = "0x4ED7380")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x60021B0")]
	[Address(RVA = "0x4ED7360", Offset = "0x4ED7360", VA = "0x4ED7360")]
	public HandleRef(object wrapper, IntPtr handle)
	{
	}
}
