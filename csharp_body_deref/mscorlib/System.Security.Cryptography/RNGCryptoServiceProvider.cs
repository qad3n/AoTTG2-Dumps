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

[Token(Token = "0x2000349")]
public sealed class RNGCryptoServiceProvider : RandomNumberGenerator
{
	[Token(Token = "0x4000E0E")]
	[FieldOffset(Offset = "0x0")]
	private static object _lock;

	[Token(Token = "0x4000E0F")]
	[FieldOffset(Offset = "0x10")]
	private IntPtr _handle;

	[Token(Token = "0x6001BAB")]
	[Address(RVA = "0x19DD260", Offset = "0x19DB860", VA = "0x1819DD260")]
	static RNGCryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001BAC")]
	[Address(RVA = "0x19DD350", Offset = "0x19DB950", VA = "0x1819DD350")]
	public RNGCryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001BAD")]
	[Address(RVA = "0x19DD4B0", Offset = "0x19DBAB0", VA = "0x1819DD4B0")]
	public RNGCryptoServiceProvider(byte[] rgb)
	{
	}

	[Token(Token = "0x6001BAE")]
	[Address(RVA = "0x19DD2F0", Offset = "0x19DB8F0", VA = "0x1819DD2F0")]
	public RNGCryptoServiceProvider(CspParameters cspParams)
	{
	}

	[Token(Token = "0x6001BAF")]
	[Address(RVA = "0x19DD3B0", Offset = "0x19DB9B0", VA = "0x1819DD3B0")]
	public RNGCryptoServiceProvider(string str)
	{
	}

	[Token(Token = "0x6001BB0")]
	[Address(RVA = "0x19DCB90", Offset = "0x19DB190", VA = "0x1819DCB90")]
	private void Check()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001BB1")]
	[Address(RVA = "0x19DD250", Offset = "0x19DB850", VA = "0x1819DD250")]
	private static extern bool RngOpen();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001BB2")]
	[Address(RVA = "0x19DD240", Offset = "0x19DB840", VA = "0x1819DD240")]
	private unsafe static extern IntPtr RngInitialize(byte* seed, IntPtr seed_length);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001BB3")]
	[Address(RVA = "0x19DD230", Offset = "0x19DB830", VA = "0x1819DD230")]
	private unsafe static extern IntPtr RngGetBytes(IntPtr handle, byte* data, IntPtr data_length);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001BB4")]
	[Address(RVA = "0x19DD220", Offset = "0x19DB820", VA = "0x1819DD220")]
	private static extern void RngClose(IntPtr handle);

	[Token(Token = "0x6001BB5")]
	[Address(RVA = "0x19DCCD0", Offset = "0x19DB2D0", VA = "0x1819DCCD0", Slot = "6")]
	public override void GetBytes(byte[] data)
	{
	}

	[Token(Token = "0x6001BB6")]
	[Address(RVA = "0x19DCED0", Offset = "0x19DB4D0", VA = "0x1819DCED0")]
	internal unsafe void GetBytes(byte* data, IntPtr data_length)
	{
	}

	[Token(Token = "0x6001BB7")]
	[Address(RVA = "0x19DD040", Offset = "0x19DB640", VA = "0x1819DD040", Slot = "8")]
	public override void GetNonZeroBytes(byte[] data)
	{
	}

	[Token(Token = "0x6001BB8")]
	[Address(RVA = "0x19DCC20", Offset = "0x19DB220", VA = "0x1819DCC20", Slot = "1")]
	~RNGCryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001BB9")]
	[Address(RVA = "0x19DCC10", Offset = "0x19DB210", VA = "0x1819DCC10", Slot = "5")]
	protected override void Dispose(bool disposing)
	{
	}
}
