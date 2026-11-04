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

[Token(Token = "0x20003F3")]
public sealed class SmtpSection : ConfigurationSection
{
	[Token(Token = "0x170005B7")]
	public SmtpDeliveryFormat DeliveryFormat
	{
		[Token(Token = "0x6001A6D")]
		[Address(RVA = "0x282C4C0", Offset = "0x282AAC0", VA = "0x18282C4C0")]
		get
		{
			return default(SmtpDeliveryFormat);
		}
		[Token(Token = "0x6001A6E")]
		[Address(RVA = "0x282C5E0", Offset = "0x282ABE0", VA = "0x18282C5E0")]
		set
		{
		}
	}

	[Token(Token = "0x170005B8")]
	public SmtpDeliveryMethod DeliveryMethod
	{
		[Token(Token = "0x6001A6F")]
		[Address(RVA = "0x282C4F0", Offset = "0x282AAF0", VA = "0x18282C4F0")]
		get
		{
			return default(SmtpDeliveryMethod);
		}
		[Token(Token = "0x6001A70")]
		[Address(RVA = "0x282C610", Offset = "0x282AC10", VA = "0x18282C610")]
		set
		{
		}
	}

	[Token(Token = "0x170005B9")]
	public string From
	{
		[Token(Token = "0x6001A71")]
		[Address(RVA = "0x282C520", Offset = "0x282AB20", VA = "0x18282C520")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A72")]
		[Address(RVA = "0x282C640", Offset = "0x282AC40", VA = "0x18282C640")]
		set
		{
		}
	}

	[Token(Token = "0x170005BA")]
	public SmtpNetworkElement Network
	{
		[Token(Token = "0x6001A73")]
		[Address(RVA = "0x282C550", Offset = "0x282AB50", VA = "0x18282C550")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005BB")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001A74")]
		[Address(RVA = "0x282C580", Offset = "0x282AB80", VA = "0x18282C580", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005BC")]
	public SmtpSpecifiedPickupDirectoryElement SpecifiedPickupDirectory
	{
		[Token(Token = "0x6001A75")]
		[Address(RVA = "0x282C5B0", Offset = "0x282ABB0", VA = "0x18282C5B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001A6C")]
	[Address(RVA = "0x282C490", Offset = "0x282AA90", VA = "0x18282C490")]
	public SmtpSection()
	{
	}
}
