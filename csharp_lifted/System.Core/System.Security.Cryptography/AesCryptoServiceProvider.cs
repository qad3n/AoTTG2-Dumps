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
		[Address(RVA = "0x5DA2690", Offset = "0x5DA1690", VA = "0x5DA2690", Slot = "10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x5DA26A0", Offset = "0x5DA16A0", VA = "0x5DA26A0", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public override byte[] Key
	{
		[Token(Token = "0x6000041")]
		[Address(RVA = "0x5DA26B0", Offset = "0x5DA16B0", VA = "0x5DA26B0", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000042")]
		[Address(RVA = "0x5DA26C0", Offset = "0x5DA16C0", VA = "0x5DA26C0", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public override int KeySize
	{
		[Token(Token = "0x6000043")]
		[Address(RVA = "0x5DA26D0", Offset = "0x5DA16D0", VA = "0x5DA26D0", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000044")]
		[Address(RVA = "0x5DA26E0", Offset = "0x5DA16E0", VA = "0x5DA26E0", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public override int FeedbackSize
	{
		[Token(Token = "0x6000045")]
		[Address(RVA = "0x5DA26F0", Offset = "0x5DA16F0", VA = "0x5DA26F0", Slot = "8")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000046")]
		[Address(RVA = "0x5DA2700", Offset = "0x5DA1700", VA = "0x5DA2700", Slot = "9")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public override CipherMode Mode
	{
		[Token(Token = "0x6000047")]
		[Address(RVA = "0x5DA2710", Offset = "0x5DA1710", VA = "0x5DA2710", Slot = "18")]
		get
		{
			return default(CipherMode);
		}
		[Token(Token = "0x6000048")]
		[Address(RVA = "0x5DA2720", Offset = "0x5DA1720", VA = "0x5DA2720", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public override PaddingMode Padding
	{
		[Token(Token = "0x6000049")]
		[Address(RVA = "0x5DA2780", Offset = "0x5DA1780", VA = "0x5DA2780", Slot = "20")]
		get
		{
			return default(PaddingMode);
		}
		[Token(Token = "0x600004A")]
		[Address(RVA = "0x5DA2790", Offset = "0x5DA1790", VA = "0x5DA2790", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x5DA1C70", Offset = "0x5DA0C70", VA = "0x5DA1C70")]
	public AesCryptoServiceProvider()
	{
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x5DA1CC0", Offset = "0x5DA0CC0", VA = "0x5DA1CC0", Slot = "27")]
	public override void GenerateIV()
	{
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x5DA1CF0", Offset = "0x5DA0CF0", VA = "0x5DA1CF0", Slot = "26")]
	public override void GenerateKey()
	{
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x5DA1D20", Offset = "0x5DA0D20", VA = "0x5DA1D20", Slot = "25")]
	public override ICryptoTransform CreateDecryptor(byte[] key, byte[] iv)
	{
		return null;
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x5DA25B0", Offset = "0x5DA15B0", VA = "0x5DA25B0", Slot = "23")]
	public override ICryptoTransform CreateEncryptor(byte[] key, byte[] iv)
	{
		return null;
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x5DA27A0", Offset = "0x5DA17A0", VA = "0x5DA27A0", Slot = "24")]
	public override ICryptoTransform CreateDecryptor()
	{
		return null;
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x5DA2800", Offset = "0x5DA1800", VA = "0x5DA2800", Slot = "22")]
	public override ICryptoTransform CreateEncryptor()
	{
		return null;
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x5DA2860", Offset = "0x5DA1860", VA = "0x5DA2860", Slot = "5")]
	protected override void Dispose(bool disposing)
	{
	}
}
