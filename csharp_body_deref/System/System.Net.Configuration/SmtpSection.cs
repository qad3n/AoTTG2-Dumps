// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Configuration.SmtpSection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Configuration;
using System.Net.Mail;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x2000398")]
public sealed class SmtpSection : ConfigurationSection
{
	[Token(Token = "0x1700054D")]
	public SmtpDeliveryFormat DeliveryFormat
	{
		[Token(Token = "0x60017C9")]
		[Address(RVA = "0x48F4010", Offset = "0x48F4010", VA = "0x48F4010")]
		get
		{
			return default(SmtpDeliveryFormat);
		}
		[Token(Token = "0x60017CA")]
		[Address(RVA = "0x48F4040", Offset = "0x48F4040", VA = "0x48F4040")]
		set
		{
		}
	}

	[Token(Token = "0x1700054E")]
	public SmtpDeliveryMethod DeliveryMethod
	{
		[Token(Token = "0x60017CB")]
		[Address(RVA = "0x48F4070", Offset = "0x48F4070", VA = "0x48F4070")]
		get
		{
			return default(SmtpDeliveryMethod);
		}
		[Token(Token = "0x60017CC")]
		[Address(RVA = "0x48F40A0", Offset = "0x48F40A0", VA = "0x48F40A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700054F")]
	public string From
	{
		[Token(Token = "0x60017CD")]
		[Address(RVA = "0x48F40D0", Offset = "0x48F40D0", VA = "0x48F40D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60017CE")]
		[Address(RVA = "0x48F4100", Offset = "0x48F4100", VA = "0x48F4100")]
		set
		{
		}
	}

	[Token(Token = "0x17000550")]
	public SmtpNetworkElement Network
	{
		[Token(Token = "0x60017CF")]
		[Address(RVA = "0x48F4130", Offset = "0x48F4130", VA = "0x48F4130")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000551")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x60017D0")]
		[Address(RVA = "0x48F4160", Offset = "0x48F4160", VA = "0x48F4160", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000552")]
	public SmtpSpecifiedPickupDirectoryElement SpecifiedPickupDirectory
	{
		[Token(Token = "0x60017D1")]
		[Address(RVA = "0x48F4190", Offset = "0x48F4190", VA = "0x48F4190")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60017C8")]
	[Address(RVA = "0x48F3FE0", Offset = "0x48F3FE0", VA = "0x48F3FE0")]
	public SmtpSection()
	{
	}
}
