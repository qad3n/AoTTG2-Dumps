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
		[Address(RVA = "0x45CEF10", Offset = "0x45CEF10", VA = "0x45CEF10")]
		get
		{
			return default(SmtpDeliveryFormat);
		}
		[Token(Token = "0x60017CA")]
		[Address(RVA = "0x45CEF40", Offset = "0x45CEF40", VA = "0x45CEF40")]
		set
		{
		}
	}

	[Token(Token = "0x1700054E")]
	public SmtpDeliveryMethod DeliveryMethod
	{
		[Token(Token = "0x60017CB")]
		[Address(RVA = "0x45CEF70", Offset = "0x45CEF70", VA = "0x45CEF70")]
		get
		{
			return default(SmtpDeliveryMethod);
		}
		[Token(Token = "0x60017CC")]
		[Address(RVA = "0x45CEFA0", Offset = "0x45CEFA0", VA = "0x45CEFA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700054F")]
	public string From
	{
		[Token(Token = "0x60017CD")]
		[Address(RVA = "0x45CEFD0", Offset = "0x45CEFD0", VA = "0x45CEFD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60017CE")]
		[Address(RVA = "0x45CF000", Offset = "0x45CF000", VA = "0x45CF000")]
		set
		{
		}
	}

	[Token(Token = "0x17000550")]
	public SmtpNetworkElement Network
	{
		[Token(Token = "0x60017CF")]
		[Address(RVA = "0x45CF030", Offset = "0x45CF030", VA = "0x45CF030")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000551")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x60017D0")]
		[Address(RVA = "0x45CF060", Offset = "0x45CF060", VA = "0x45CF060", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000552")]
	public SmtpSpecifiedPickupDirectoryElement SpecifiedPickupDirectory
	{
		[Token(Token = "0x60017D1")]
		[Address(RVA = "0x45CF090", Offset = "0x45CF090", VA = "0x45CF090")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60017C8")]
	[Address(RVA = "0x45CEEE0", Offset = "0x45CEEE0", VA = "0x45CEEE0")]
	public SmtpSection()
	{
	}
}
