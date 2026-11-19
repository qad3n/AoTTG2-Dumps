// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Configuration.SmtpNetworkElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x20003B0")]
public sealed class SmtpNetworkElement : ConfigurationElement
{
	[Token(Token = "0x1700058F")]
	public string ClientDomain
	{
		[Token(Token = "0x60018BD")]
		[Address(RVA = "0x61D0CE0", Offset = "0x61CFCE0", VA = "0x61D0CE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60018BE")]
		[Address(RVA = "0x61D0D10", Offset = "0x61CFD10", VA = "0x61D0D10")]
		set
		{
		}
	}

	[Token(Token = "0x17000590")]
	public bool DefaultCredentials
	{
		[Token(Token = "0x60018BF")]
		[Address(RVA = "0x61D0D40", Offset = "0x61CFD40", VA = "0x61D0D40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60018C0")]
		[Address(RVA = "0x61D0D70", Offset = "0x61CFD70", VA = "0x61D0D70")]
		set
		{
		}
	}

	[Token(Token = "0x17000591")]
	public bool EnableSsl
	{
		[Token(Token = "0x60018C1")]
		[Address(RVA = "0x61D0DA0", Offset = "0x61CFDA0", VA = "0x61D0DA0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60018C2")]
		[Address(RVA = "0x61D0DD0", Offset = "0x61CFDD0", VA = "0x61D0DD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000592")]
	public string Host
	{
		[Token(Token = "0x60018C3")]
		[Address(RVA = "0x61D0E00", Offset = "0x61CFE00", VA = "0x61D0E00")]
		get
		{
			return null;
		}
		[Token(Token = "0x60018C4")]
		[Address(RVA = "0x61D0E30", Offset = "0x61CFE30", VA = "0x61D0E30")]
		set
		{
		}
	}

	[Token(Token = "0x17000593")]
	public string Password
	{
		[Token(Token = "0x60018C5")]
		[Address(RVA = "0x61D0E60", Offset = "0x61CFE60", VA = "0x61D0E60")]
		get
		{
			return null;
		}
		[Token(Token = "0x60018C6")]
		[Address(RVA = "0x61D0E90", Offset = "0x61CFE90", VA = "0x61D0E90")]
		set
		{
		}
	}

	[Token(Token = "0x17000594")]
	public int Port
	{
		[Token(Token = "0x60018C7")]
		[Address(RVA = "0x61D0EC0", Offset = "0x61CFEC0", VA = "0x61D0EC0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60018C8")]
		[Address(RVA = "0x61D0EF0", Offset = "0x61CFEF0", VA = "0x61D0EF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000595")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x60018C9")]
		[Address(RVA = "0x61D0F20", Offset = "0x61CFF20", VA = "0x61D0F20", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000596")]
	public string TargetName
	{
		[Token(Token = "0x60018CA")]
		[Address(RVA = "0x61D0F50", Offset = "0x61CFF50", VA = "0x61D0F50")]
		get
		{
			return null;
		}
		[Token(Token = "0x60018CB")]
		[Address(RVA = "0x61D0F80", Offset = "0x61CFF80", VA = "0x61D0F80")]
		set
		{
		}
	}

	[Token(Token = "0x17000597")]
	public string UserName
	{
		[Token(Token = "0x60018CC")]
		[Address(RVA = "0x61D0FB0", Offset = "0x61CFFB0", VA = "0x61D0FB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60018CD")]
		[Address(RVA = "0x61D0FE0", Offset = "0x61CFFE0", VA = "0x61D0FE0")]
		set
		{
		}
	}

	[Token(Token = "0x60018BC")]
	[Address(RVA = "0x61D0CB0", Offset = "0x61CFCB0", VA = "0x61D0CB0")]
	public SmtpNetworkElement()
	{
	}

	[Token(Token = "0x60018CE")]
	[Address(RVA = "0x61D1010", Offset = "0x61D0010", VA = "0x61D1010", Slot = "8")]
	protected override void PostDeserialize()
	{
	}
}
