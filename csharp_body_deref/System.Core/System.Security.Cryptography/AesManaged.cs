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
		[Address(RVA = "0x448B040", Offset = "0x448B040", VA = "0x448B040", Slot = "8")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x448B070", Offset = "0x448B070", VA = "0x448B070", Slot = "9")]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public override byte[] IV
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x448B0A0", Offset = "0x448B0A0", VA = "0x448B0A0", Slot = "10")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x448B0D0", Offset = "0x448B0D0", VA = "0x448B0D0", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public override byte[] Key
	{
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x448B100", Offset = "0x448B100", VA = "0x448B100", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x448B130", Offset = "0x448B130", VA = "0x448B130", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public override int KeySize
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x448B160", Offset = "0x448B160", VA = "0x448B160", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x448B190", Offset = "0x448B190", VA = "0x448B190", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public override CipherMode Mode
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x448B1C0", Offset = "0x448B1C0", VA = "0x448B1C0", Slot = "18")]
		get
		{
			return default(CipherMode);
		}
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x448B1F0", Offset = "0x448B1F0", VA = "0x448B1F0", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public override PaddingMode Padding
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x448B270", Offset = "0x448B270", VA = "0x448B270", Slot = "20")]
		get
		{
			return default(PaddingMode);
		}
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x448B2A0", Offset = "0x448B2A0", VA = "0x448B2A0", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x448AED0", Offset = "0x448AED0", VA = "0x448AED0")]
	public AesManaged()
	{
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x448B2D0", Offset = "0x448B2D0", VA = "0x448B2D0", Slot = "24")]
	public override ICryptoTransform CreateDecryptor()
	{
		return null;
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x448B300", Offset = "0x448B300", VA = "0x448B300", Slot = "25")]
	public override ICryptoTransform CreateDecryptor(byte[] key, byte[] iv)
	{
		return null;
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x448B430", Offset = "0x448B430", VA = "0x448B430", Slot = "22")]
	public override ICryptoTransform CreateEncryptor()
	{
		return null;
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x448B460", Offset = "0x448B460", VA = "0x448B460", Slot = "23")]
	public override ICryptoTransform CreateEncryptor(byte[] key, byte[] iv)
	{
		return null;
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x448B590", Offset = "0x448B590", VA = "0x448B590", Slot = "5")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x448B6B0", Offset = "0x448B6B0", VA = "0x448B6B0", Slot = "27")]
	public override void GenerateIV()
	{
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x448B6E0", Offset = "0x448B6E0", VA = "0x448B6E0", Slot = "26")]
	public override void GenerateKey()
	{
	}
}
