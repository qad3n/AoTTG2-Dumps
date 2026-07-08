using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000014")]
public sealed class AesCryptoServiceProvider : Aes
{
	[Token(Token = "0x17000007")]
	public override byte[] IV
	{
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x4167050", Offset = "0x4167050", VA = "0x4167050", Slot = "10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x4167060", Offset = "0x4167060", VA = "0x4167060", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public override byte[] Key
	{
		[Token(Token = "0x6000041")]
		[Address(RVA = "0x4167070", Offset = "0x4167070", VA = "0x4167070", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000042")]
		[Address(RVA = "0x4167080", Offset = "0x4167080", VA = "0x4167080", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public override int KeySize
	{
		[Token(Token = "0x6000043")]
		[Address(RVA = "0x4167090", Offset = "0x4167090", VA = "0x4167090", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000044")]
		[Address(RVA = "0x41670A0", Offset = "0x41670A0", VA = "0x41670A0", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public override int FeedbackSize
	{
		[Token(Token = "0x6000045")]
		[Address(RVA = "0x41670B0", Offset = "0x41670B0", VA = "0x41670B0", Slot = "8")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000046")]
		[Address(RVA = "0x41670C0", Offset = "0x41670C0", VA = "0x41670C0", Slot = "9")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public override CipherMode Mode
	{
		[Token(Token = "0x6000047")]
		[Address(RVA = "0x41670D0", Offset = "0x41670D0", VA = "0x41670D0", Slot = "18")]
		get
		{
			return default(CipherMode);
		}
		[Token(Token = "0x6000048")]
		[Address(RVA = "0x41670E0", Offset = "0x41670E0", VA = "0x41670E0", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public override PaddingMode Padding
	{
		[Token(Token = "0x6000049")]
		[Address(RVA = "0x4167140", Offset = "0x4167140", VA = "0x4167140", Slot = "20")]
		get
		{
			return default(PaddingMode);
		}
		[Token(Token = "0x600004A")]
		[Address(RVA = "0x4167150", Offset = "0x4167150", VA = "0x4167150", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x4166610", Offset = "0x4166610", VA = "0x4166610")]
	public AesCryptoServiceProvider()
	{
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x4166660", Offset = "0x4166660", VA = "0x4166660", Slot = "27")]
	public override void GenerateIV()
	{
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x4166690", Offset = "0x4166690", VA = "0x4166690", Slot = "26")]
	public override void GenerateKey()
	{
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x41666C0", Offset = "0x41666C0", VA = "0x41666C0", Slot = "25")]
	public override ICryptoTransform CreateDecryptor(byte[] key, byte[] iv)
	{
		return null;
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x4166F70", Offset = "0x4166F70", VA = "0x4166F70", Slot = "23")]
	public override ICryptoTransform CreateEncryptor(byte[] key, byte[] iv)
	{
		return null;
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x4167160", Offset = "0x4167160", VA = "0x4167160", Slot = "24")]
	public override ICryptoTransform CreateDecryptor()
	{
		return null;
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x41671C0", Offset = "0x41671C0", VA = "0x41671C0", Slot = "22")]
	public override ICryptoTransform CreateEncryptor()
	{
		return null;
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x4167220", Offset = "0x4167220", VA = "0x4167220", Slot = "5")]
	protected override void Dispose(bool disposing)
	{
	}
}
