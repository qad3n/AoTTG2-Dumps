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

[Token(Token = "0x20003F4")]
public sealed class SmtpNetworkElement : ConfigurationElement
{
	[Token(Token = "0x170005BD")]
	public string ClientDomain
	{
		[Token(Token = "0x6001A77")]
		[Address(RVA = "0x282C160", Offset = "0x282A760", VA = "0x18282C160")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A78")]
		[Address(RVA = "0x282C310", Offset = "0x282A910", VA = "0x18282C310")]
		set
		{
		}
	}

	[Token(Token = "0x170005BE")]
	public bool DefaultCredentials
	{
		[Token(Token = "0x6001A79")]
		[Address(RVA = "0x282C190", Offset = "0x282A790", VA = "0x18282C190")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A7A")]
		[Address(RVA = "0x282C340", Offset = "0x282A940", VA = "0x18282C340")]
		set
		{
		}
	}

	[Token(Token = "0x170005BF")]
	public bool EnableSsl
	{
		[Token(Token = "0x6001A7B")]
		[Address(RVA = "0x282C1C0", Offset = "0x282A7C0", VA = "0x18282C1C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A7C")]
		[Address(RVA = "0x282C370", Offset = "0x282A970", VA = "0x18282C370")]
		set
		{
		}
	}

	[Token(Token = "0x170005C0")]
	public string Host
	{
		[Token(Token = "0x6001A7D")]
		[Address(RVA = "0x282C1F0", Offset = "0x282A7F0", VA = "0x18282C1F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A7E")]
		[Address(RVA = "0x282C3A0", Offset = "0x282A9A0", VA = "0x18282C3A0")]
		set
		{
		}
	}

	[Token(Token = "0x170005C1")]
	public string Password
	{
		[Token(Token = "0x6001A7F")]
		[Address(RVA = "0x282C220", Offset = "0x282A820", VA = "0x18282C220")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A80")]
		[Address(RVA = "0x282C3D0", Offset = "0x282A9D0", VA = "0x18282C3D0")]
		set
		{
		}
	}

	[Token(Token = "0x170005C2")]
	public int Port
	{
		[Token(Token = "0x6001A81")]
		[Address(RVA = "0x282C250", Offset = "0x282A850", VA = "0x18282C250")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001A82")]
		[Address(RVA = "0x282C400", Offset = "0x282AA00", VA = "0x18282C400")]
		set
		{
		}
	}

	[Token(Token = "0x170005C3")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001A83")]
		[Address(RVA = "0x282C280", Offset = "0x282A880", VA = "0x18282C280", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005C4")]
	public string TargetName
	{
		[Token(Token = "0x6001A84")]
		[Address(RVA = "0x282C2B0", Offset = "0x282A8B0", VA = "0x18282C2B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A85")]
		[Address(RVA = "0x282C430", Offset = "0x282AA30", VA = "0x18282C430")]
		set
		{
		}
	}

	[Token(Token = "0x170005C5")]
	public string UserName
	{
		[Token(Token = "0x6001A86")]
		[Address(RVA = "0x282C2E0", Offset = "0x282A8E0", VA = "0x18282C2E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A87")]
		[Address(RVA = "0x282C460", Offset = "0x282AA60", VA = "0x18282C460")]
		set
		{
		}
	}

	[Token(Token = "0x6001A76")]
	[Address(RVA = "0x282C130", Offset = "0x282A730", VA = "0x18282C130")]
	public SmtpNetworkElement()
	{
	}

	[Token(Token = "0x6001A88")]
	[Address(RVA = "0x282C100", Offset = "0x282A700", VA = "0x18282C100", Slot = "8")]
	protected override void PostDeserialize()
	{
	}
}
