// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.AesManaged
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000013")]
public sealed class AesManaged : Aes
{
	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x48")]
	private RijndaelManaged m_rijndael;

	[Token(Token = "0x17000001")]
	public override int FeedbackSize
	{
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x5DA1590", Offset = "0x5DA0590", VA = "0x5DA1590", Slot = "8")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x5DA15C0", Offset = "0x5DA05C0", VA = "0x5DA15C0", Slot = "9")]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public override byte[] IV
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x5DA15F0", Offset = "0x5DA05F0", VA = "0x5DA15F0", Slot = "10")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x5DA1620", Offset = "0x5DA0620", VA = "0x5DA1620", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public override byte[] Key
	{
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x5DA1650", Offset = "0x5DA0650", VA = "0x5DA1650", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x5DA1680", Offset = "0x5DA0680", VA = "0x5DA1680", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public override int KeySize
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x5DA16B0", Offset = "0x5DA06B0", VA = "0x5DA16B0", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x5DA16E0", Offset = "0x5DA06E0", VA = "0x5DA16E0", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public override CipherMode Mode
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x5DA1710", Offset = "0x5DA0710", VA = "0x5DA1710", Slot = "18")]
		get
		{
			return default(CipherMode);
		}
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x5DA1740", Offset = "0x5DA0740", VA = "0x5DA1740", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public override PaddingMode Padding
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x5DA17C0", Offset = "0x5DA07C0", VA = "0x5DA17C0", Slot = "20")]
		get
		{
			return default(PaddingMode);
		}
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x5DA17F0", Offset = "0x5DA07F0", VA = "0x5DA17F0", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x5DA1420", Offset = "0x5DA0420", VA = "0x5DA1420")]
	public AesManaged()
	{
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x5DA1820", Offset = "0x5DA0820", VA = "0x5DA1820", Slot = "24")]
	public override ICryptoTransform CreateDecryptor()
	{
		return null;
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x5DA1850", Offset = "0x5DA0850", VA = "0x5DA1850", Slot = "25")]
	public override ICryptoTransform CreateDecryptor(byte[] key, byte[] iv)
	{
		return null;
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x5DA1980", Offset = "0x5DA0980", VA = "0x5DA1980", Slot = "22")]
	public override ICryptoTransform CreateEncryptor()
	{
		return null;
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x5DA19B0", Offset = "0x5DA09B0", VA = "0x5DA19B0", Slot = "23")]
	public override ICryptoTransform CreateEncryptor(byte[] key, byte[] iv)
	{
		return null;
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x5DA1AE0", Offset = "0x5DA0AE0", VA = "0x5DA1AE0", Slot = "5")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x5DA1C10", Offset = "0x5DA0C10", VA = "0x5DA1C10", Slot = "27")]
	public override void GenerateIV()
	{
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x5DA1C40", Offset = "0x5DA0C40", VA = "0x5DA1C40", Slot = "26")]
	public override void GenerateKey()
	{
	}
}
