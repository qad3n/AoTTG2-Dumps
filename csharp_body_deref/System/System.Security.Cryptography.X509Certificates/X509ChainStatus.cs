using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000108")]
public struct X509ChainStatus
{
	[Token(Token = "0x4000504")]
	[FieldOffset(Offset = "0x0")]
	private X509ChainStatusFlags status;

	[Token(Token = "0x4000505")]
	[FieldOffset(Offset = "0x8")]
	private string info;

	[Token(Token = "0x17000154")]
	public X509ChainStatusFlags Status
	{
		[Token(Token = "0x600063E")]
		[Address(RVA = "0x461C0D0", Offset = "0x461C0D0", VA = "0x461C0D0")]
		get
		{
			return default(X509ChainStatusFlags);
		}
		[Token(Token = "0x600063F")]
		[Address(RVA = "0x461C0E0", Offset = "0x461C0E0", VA = "0x461C0E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000155")]
	public string StatusInformation
	{
		[Token(Token = "0x6000640")]
		[Address(RVA = "0x461C0F0", Offset = "0x461C0F0", VA = "0x461C0F0")]
		set
		{
		}
	}

	[Token(Token = "0x600063D")]
	[Address(RVA = "0x46189D0", Offset = "0x46189D0", VA = "0x46189D0")]
	internal X509ChainStatus(X509ChainStatusFlags flag)
	{
	}

	[Token(Token = "0x6000641")]
	[Address(RVA = "0x4616290", Offset = "0x4616290", VA = "0x4616290")]
	internal static string GetInformation(X509ChainStatusFlags flags)
	{
		return null;
	}
}
