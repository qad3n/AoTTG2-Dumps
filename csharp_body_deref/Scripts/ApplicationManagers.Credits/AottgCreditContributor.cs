using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace ApplicationManagers.Credits;

[Token(Token = "0x2000759")]
public sealed class AottgCreditContributor
{
	[Token(Token = "0x17000DA9")]
	public string Name
	{
		[Token(Token = "0x6004753")]
		[Address(RVA = "0x40AD2D0", Offset = "0x40AD2D0", VA = "0x40AD2D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004754")]
		[Address(RVA = "0x40AD2E0", Offset = "0x40AD2E0", VA = "0x40AD2E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DAA")]
	public string AccountId
	{
		[Token(Token = "0x6004755")]
		[Address(RVA = "0x40AD2F0", Offset = "0x40AD2F0", VA = "0x40AD2F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004756")]
		[Address(RVA = "0x40AD300", Offset = "0x40AD300", VA = "0x40AD300")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DAB")]
	public bool IsLinked
	{
		[Token(Token = "0x6004757")]
		[Address(RVA = "0x40AD310", Offset = "0x40AD310", VA = "0x40AD310")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004752")]
	[Address(RVA = "0x40AD290", Offset = "0x40AD290", VA = "0x40AD290")]
	public AottgCreditContributor(string name, string accountId)
	{
	}
}
