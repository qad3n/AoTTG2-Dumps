using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x200031A")]
public sealed class RNGCryptoServiceProvider : RandomNumberGenerator
{
	[Token(Token = "0x4000E01")]
	[FieldOffset(Offset = "0x0")]
	private static object _lock;

	[Token(Token = "0x4000E02")]
	[FieldOffset(Offset = "0x10")]
	private IntPtr _handle;

	[Token(Token = "0x6001B43")]
	[Address(RVA = "0x4E6F650", Offset = "0x4E6F650", VA = "0x4E6F650")]
	static RNGCryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001B44")]
	[Address(RVA = "0x4E6F6E0", Offset = "0x4E6F6E0", VA = "0x4E6F6E0")]
	public RNGCryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001B45")]
	[Address(RVA = "0x4E6F820", Offset = "0x4E6F820", VA = "0x4E6F820")]
	public RNGCryptoServiceProvider(byte[] rgb)
	{
	}

	[Token(Token = "0x6001B46")]
	[Address(RVA = "0x4E6F920", Offset = "0x4E6F920", VA = "0x4E6F920")]
	public RNGCryptoServiceProvider(CspParameters cspParams)
	{
	}

	[Token(Token = "0x6001B47")]
	[Address(RVA = "0x4E6F9E0", Offset = "0x4E6F9E0", VA = "0x4E6F9E0")]
	public RNGCryptoServiceProvider(string str)
	{
	}

	[Token(Token = "0x6001B48")]
	[Address(RVA = "0x4E6F7B0", Offset = "0x4E6F7B0", VA = "0x4E6F7B0")]
	private void Check()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001B49")]
	[Address(RVA = "0x4E6F6D0", Offset = "0x4E6F6D0", VA = "0x4E6F6D0")]
	private static extern bool RngOpen();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001B4A")]
	[Address(RVA = "0x4E6F7A0", Offset = "0x4E6F7A0", VA = "0x4E6F7A0")]
	private unsafe static extern IntPtr RngInitialize(byte* seed, IntPtr seed_length);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001B4B")]
	[Address(RVA = "0x4E6FB20", Offset = "0x4E6FB20", VA = "0x4E6FB20")]
	private unsafe static extern IntPtr RngGetBytes(IntPtr handle, byte* data, IntPtr data_length);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001B4C")]
	[Address(RVA = "0x4E6FB30", Offset = "0x4E6FB30", VA = "0x4E6FB30")]
	private static extern void RngClose(IntPtr handle);

	[Token(Token = "0x6001B4D")]
	[Address(RVA = "0x4E6FB40", Offset = "0x4E6FB40", VA = "0x4E6FB40", Slot = "6")]
	public override void GetBytes(byte[] data)
	{
	}

	[Token(Token = "0x6001B4E")]
	[Address(RVA = "0x4E6FDD0", Offset = "0x4E6FDD0", VA = "0x4E6FDD0")]
	internal unsafe void GetBytes(byte* data, IntPtr data_length)
	{
	}

	[Token(Token = "0x6001B4F")]
	[Address(RVA = "0x4E6FFE0", Offset = "0x4E6FFE0", VA = "0x4E6FFE0", Slot = "8")]
	public override void GetNonZeroBytes(byte[] data)
	{
	}

	[Token(Token = "0x6001B50")]
	[Address(RVA = "0x4E70200", Offset = "0x4E70200", VA = "0x4E70200", Slot = "1")]
	~RNGCryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001B51")]
	[Address(RVA = "0x4E702E0", Offset = "0x4E702E0", VA = "0x4E702E0", Slot = "5")]
	protected override void Dispose(bool disposing)
	{
	}
}
