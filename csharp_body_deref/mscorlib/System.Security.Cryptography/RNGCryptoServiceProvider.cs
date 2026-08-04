// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.RNGCryptoServiceProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3B55170", Offset = "0x3B55170", VA = "0x3B55170")]
	static RNGCryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001B44")]
	[Address(RVA = "0x3B55200", Offset = "0x3B55200", VA = "0x3B55200")]
	public RNGCryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001B45")]
	[Address(RVA = "0x3B55340", Offset = "0x3B55340", VA = "0x3B55340")]
	public RNGCryptoServiceProvider(byte[] rgb)
	{
	}

	[Token(Token = "0x6001B46")]
	[Address(RVA = "0x3B55440", Offset = "0x3B55440", VA = "0x3B55440")]
	public RNGCryptoServiceProvider(CspParameters cspParams)
	{
	}

	[Token(Token = "0x6001B47")]
	[Address(RVA = "0x3B55500", Offset = "0x3B55500", VA = "0x3B55500")]
	public RNGCryptoServiceProvider(string str)
	{
	}

	[Token(Token = "0x6001B48")]
	[Address(RVA = "0x3B552D0", Offset = "0x3B552D0", VA = "0x3B552D0")]
	private void Check()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001B49")]
	[Address(RVA = "0x3B551F0", Offset = "0x3B551F0", VA = "0x3B551F0")]
	private static extern bool RngOpen();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001B4A")]
	[Address(RVA = "0x3B552C0", Offset = "0x3B552C0", VA = "0x3B552C0")]
	private unsafe static extern IntPtr RngInitialize(byte* seed, IntPtr seed_length);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001B4B")]
	[Address(RVA = "0x3B55640", Offset = "0x3B55640", VA = "0x3B55640")]
	private unsafe static extern IntPtr RngGetBytes(IntPtr handle, byte* data, IntPtr data_length);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001B4C")]
	[Address(RVA = "0x3B55650", Offset = "0x3B55650", VA = "0x3B55650")]
	private static extern void RngClose(IntPtr handle);

	[Token(Token = "0x6001B4D")]
	[Address(RVA = "0x3B55660", Offset = "0x3B55660", VA = "0x3B55660", Slot = "6")]
	public override void GetBytes(byte[] data)
	{
	}

	[Token(Token = "0x6001B4E")]
	[Address(RVA = "0x3B558F0", Offset = "0x3B558F0", VA = "0x3B558F0")]
	internal unsafe void GetBytes(byte* data, IntPtr data_length)
	{
	}

	[Token(Token = "0x6001B4F")]
	[Address(RVA = "0x3B55B00", Offset = "0x3B55B00", VA = "0x3B55B00", Slot = "8")]
	public override void GetNonZeroBytes(byte[] data)
	{
	}

	[Token(Token = "0x6001B50")]
	[Address(RVA = "0x3B55D20", Offset = "0x3B55D20", VA = "0x3B55D20", Slot = "1")]
	~RNGCryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001B51")]
	[Address(RVA = "0x3B55E00", Offset = "0x3B55E00", VA = "0x3B55E00", Slot = "5")]
	protected override void Dispose(bool disposing)
	{
	}
}
