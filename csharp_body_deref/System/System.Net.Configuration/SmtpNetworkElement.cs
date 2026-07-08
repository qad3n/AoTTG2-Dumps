using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x2000399")]
public sealed class SmtpNetworkElement : ConfigurationElement
{
	[Token(Token = "0x17000553")]
	public string ClientDomain
	{
		[Token(Token = "0x60017D3")]
		[Address(RVA = "0x45CF0F0", Offset = "0x45CF0F0", VA = "0x45CF0F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60017D4")]
		[Address(RVA = "0x45CF120", Offset = "0x45CF120", VA = "0x45CF120")]
		set
		{
		}
	}

	[Token(Token = "0x17000554")]
	public bool DefaultCredentials
	{
		[Token(Token = "0x60017D5")]
		[Address(RVA = "0x45CF150", Offset = "0x45CF150", VA = "0x45CF150")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60017D6")]
		[Address(RVA = "0x45CF180", Offset = "0x45CF180", VA = "0x45CF180")]
		set
		{
		}
	}

	[Token(Token = "0x17000555")]
	public bool EnableSsl
	{
		[Token(Token = "0x60017D7")]
		[Address(RVA = "0x45CF1B0", Offset = "0x45CF1B0", VA = "0x45CF1B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60017D8")]
		[Address(RVA = "0x45CF1E0", Offset = "0x45CF1E0", VA = "0x45CF1E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000556")]
	public string Host
	{
		[Token(Token = "0x60017D9")]
		[Address(RVA = "0x45CF210", Offset = "0x45CF210", VA = "0x45CF210")]
		get
		{
			return null;
		}
		[Token(Token = "0x60017DA")]
		[Address(RVA = "0x45CF240", Offset = "0x45CF240", VA = "0x45CF240")]
		set
		{
		}
	}

	[Token(Token = "0x17000557")]
	public string Password
	{
		[Token(Token = "0x60017DB")]
		[Address(RVA = "0x45CF270", Offset = "0x45CF270", VA = "0x45CF270")]
		get
		{
			return null;
		}
		[Token(Token = "0x60017DC")]
		[Address(RVA = "0x45CF2A0", Offset = "0x45CF2A0", VA = "0x45CF2A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000558")]
	public int Port
	{
		[Token(Token = "0x60017DD")]
		[Address(RVA = "0x45CF2D0", Offset = "0x45CF2D0", VA = "0x45CF2D0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60017DE")]
		[Address(RVA = "0x45CF300", Offset = "0x45CF300", VA = "0x45CF300")]
		set
		{
		}
	}

	[Token(Token = "0x17000559")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x60017DF")]
		[Address(RVA = "0x45CF330", Offset = "0x45CF330", VA = "0x45CF330", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700055A")]
	public string TargetName
	{
		[Token(Token = "0x60017E0")]
		[Address(RVA = "0x45CF360", Offset = "0x45CF360", VA = "0x45CF360")]
		get
		{
			return null;
		}
		[Token(Token = "0x60017E1")]
		[Address(RVA = "0x45CF390", Offset = "0x45CF390", VA = "0x45CF390")]
		set
		{
		}
	}

	[Token(Token = "0x1700055B")]
	public string UserName
	{
		[Token(Token = "0x60017E2")]
		[Address(RVA = "0x45CF3C0", Offset = "0x45CF3C0", VA = "0x45CF3C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60017E3")]
		[Address(RVA = "0x45CF3F0", Offset = "0x45CF3F0", VA = "0x45CF3F0")]
		set
		{
		}
	}

	[Token(Token = "0x60017D2")]
	[Address(RVA = "0x45CF0C0", Offset = "0x45CF0C0", VA = "0x45CF0C0")]
	public SmtpNetworkElement()
	{
	}

	[Token(Token = "0x60017E4")]
	[Address(RVA = "0x45CF420", Offset = "0x45CF420", VA = "0x45CF420", Slot = "8")]
	protected override void PostDeserialize()
	{
	}
}
