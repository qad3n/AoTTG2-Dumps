// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.AesCryptoServiceProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000014")]
public sealed class AesCryptoServiceProvider : Aes
{
	[Token(Token = "0x17000007")]
	public override byte[] IV
	{
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x23FFAB0", Offset = "0x23FE0B0", VA = "0x1823FFAB0", Slot = "10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x23FFAE0", Offset = "0x23FE0E0", VA = "0x1823FFAE0", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public override byte[] Key
	{
		[Token(Token = "0x6000041")]
		[Address(RVA = "0x23FFAC0", Offset = "0x23FE0C0", VA = "0x1823FFAC0", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000042")]
		[Address(RVA = "0x23FFB00", Offset = "0x23FE100", VA = "0x1823FFB00", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public override int KeySize
	{
		[Token(Token = "0x6000043")]
		[Address(RVA = "0x172E4A0", Offset = "0x172CAA0", VA = "0x18172E4A0", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000044")]
		[Address(RVA = "0x23FFAF0", Offset = "0x23FE0F0", VA = "0x1823FFAF0", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public override int FeedbackSize
	{
		[Token(Token = "0x6000045")]
		[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0", Slot = "8")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000046")]
		[Address(RVA = "0x23FFAD0", Offset = "0x23FE0D0", VA = "0x1823FFAD0", Slot = "9")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public override CipherMode Mode
	{
		[Token(Token = "0x6000047")]
		[Address(RVA = "0x19CF1C0", Offset = "0x19CD7C0", VA = "0x1819CF1C0", Slot = "18")]
		get
		{
			return default(CipherMode);
		}
		[Token(Token = "0x6000048")]
		[Address(RVA = "0x23FFB10", Offset = "0x23FE110", VA = "0x1823FFB10", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public override PaddingMode Padding
	{
		[Token(Token = "0x6000049")]
		[Address(RVA = "0x58A8B0", Offset = "0x588EB0", VA = "0x18058A8B0", Slot = "20")]
		get
		{
			return default(PaddingMode);
		}
		[Token(Token = "0x600004A")]
		[Address(RVA = "0x23FFB80", Offset = "0x23FE180", VA = "0x1823FFB80", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x23FFA50", Offset = "0x23FE050", VA = "0x1823FFA50")]
	public AesCryptoServiceProvider()
	{
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x23FF9F0", Offset = "0x23FDFF0", VA = "0x1823FF9F0", Slot = "27")]
	public override void GenerateIV()
	{
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x23FFA20", Offset = "0x23FE020", VA = "0x1823FFA20", Slot = "26")]
	public override void GenerateKey()
	{
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x23FF7E0", Offset = "0x23FDDE0", VA = "0x1823FF7E0", Slot = "25")]
	public override ICryptoTransform CreateDecryptor(byte[] key, byte[] iv)
	{
		return null;
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x23FF8E0", Offset = "0x23FDEE0", VA = "0x1823FF8E0", Slot = "23")]
	public override ICryptoTransform CreateEncryptor(byte[] key, byte[] iv)
	{
		return null;
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x19CEBE0", Offset = "0x19CD1E0", VA = "0x1819CEBE0", Slot = "24")]
	public override ICryptoTransform CreateDecryptor()
	{
		return null;
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x19CEC40", Offset = "0x19CD240", VA = "0x1819CEC40", Slot = "22")]
	public override ICryptoTransform CreateEncryptor()
	{
		return null;
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x23FF9E0", Offset = "0x23FDFE0", VA = "0x1823FF9E0", Slot = "5")]
	protected override void Dispose(bool disposing)
	{
	}
}
