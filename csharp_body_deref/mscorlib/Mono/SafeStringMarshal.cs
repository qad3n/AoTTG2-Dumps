using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Mono;

[Token(Token = "0x2000028")]
internal struct SafeStringMarshal : IDisposable
{
	[Token(Token = "0x40000BB")]
	[FieldOffset(Offset = "0x0")]
	private readonly string str;

	[Token(Token = "0x40000BC")]
	[FieldOffset(Offset = "0x8")]
	private IntPtr marshaled_string;

	[Token(Token = "0x1700000F")]
	public IntPtr Value
	{
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x4DE87F0", Offset = "0x4DE87F0", VA = "0x4DE87F0")]
		get
		{
			return default(IntPtr);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000063")]
	[Address(RVA = "0x4DE87C0", Offset = "0x4DE87C0", VA = "0x4DE87C0")]
	private static extern IntPtr StringToUtf8_icall(ref string str);

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x4DE87D0", Offset = "0x4DE87D0", VA = "0x4DE87D0")]
	public static IntPtr StringToUtf8(string str)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000065")]
	[Address(RVA = "0x4DE87E0", Offset = "0x4DE87E0", VA = "0x4DE87E0")]
	public static extern void GFree(IntPtr ptr);

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x4DE8560", Offset = "0x4DE8560", VA = "0x4DE8560")]
	public SafeStringMarshal(string str)
	{
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x4DE8830", Offset = "0x4DE8830", VA = "0x4DE8830", Slot = "4")]
	public void Dispose()
	{
	}
}
