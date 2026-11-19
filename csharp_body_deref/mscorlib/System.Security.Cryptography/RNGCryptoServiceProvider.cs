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

[Token(Token = "0x2000322")]
public sealed class RNGCryptoServiceProvider : RandomNumberGenerator
{
	[Token(Token = "0x4000D6E")]
	[FieldOffset(Offset = "0x0")]
	private static object _lock;

	[Token(Token = "0x4000D6F")]
	[FieldOffset(Offset = "0x10")]
	private IntPtr _handle;

	[Token(Token = "0x6001B88")]
	[Address(RVA = "0x535E8C0", Offset = "0x535D8C0", VA = "0x535E8C0")]
	static RNGCryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001B89")]
	[Address(RVA = "0x535E950", Offset = "0x535D950", VA = "0x535E950")]
	public RNGCryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001B8A")]
	[Address(RVA = "0x535EA90", Offset = "0x535DA90", VA = "0x535EA90")]
	public RNGCryptoServiceProvider(byte[] rgb)
	{
	}

	[Token(Token = "0x6001B8B")]
	[Address(RVA = "0x535EB90", Offset = "0x535DB90", VA = "0x535EB90")]
	public RNGCryptoServiceProvider(CspParameters cspParams)
	{
	}

	[Token(Token = "0x6001B8C")]
	[Address(RVA = "0x535EC50", Offset = "0x535DC50", VA = "0x535EC50")]
	public RNGCryptoServiceProvider(string str)
	{
	}

	[Token(Token = "0x6001B8D")]
	[Address(RVA = "0x535EA20", Offset = "0x535DA20", VA = "0x535EA20")]
	private void Check()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001B8E")]
	[Address(RVA = "0x535E940", Offset = "0x535D940", VA = "0x535E940")]
	private static extern bool RngOpen();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001B8F")]
	[Address(RVA = "0x535EA10", Offset = "0x535DA10", VA = "0x535EA10")]
	private unsafe static extern IntPtr RngInitialize(byte* seed, IntPtr seed_length);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001B90")]
	[Address(RVA = "0x535ED90", Offset = "0x535DD90", VA = "0x535ED90")]
	private unsafe static extern IntPtr RngGetBytes(IntPtr handle, byte* data, IntPtr data_length);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001B91")]
	[Address(RVA = "0x535EDA0", Offset = "0x535DDA0", VA = "0x535EDA0")]
	private static extern void RngClose(IntPtr handle);

	[Token(Token = "0x6001B92")]
	[Address(RVA = "0x535EDB0", Offset = "0x535DDB0", VA = "0x535EDB0", Slot = "6")]
	public override void GetBytes(byte[] data)
	{
	}

	[Token(Token = "0x6001B93")]
	[Address(RVA = "0x535F030", Offset = "0x535E030", VA = "0x535F030")]
	internal unsafe void GetBytes(byte* data, IntPtr data_length)
	{
	}

	[Token(Token = "0x6001B94")]
	[Address(RVA = "0x535F240", Offset = "0x535E240", VA = "0x535F240", Slot = "8")]
	public override void GetNonZeroBytes(byte[] data)
	{
	}

	[Token(Token = "0x6001B95")]
	[Address(RVA = "0x535F460", Offset = "0x535E460", VA = "0x535F460", Slot = "1")]
	~RNGCryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001B96")]
	[Address(RVA = "0x535F540", Offset = "0x535E540", VA = "0x535F540", Slot = "5")]
	protected override void Dispose(bool disposing)
	{
	}
}
