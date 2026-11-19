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

[Token(Token = "0x20003AF")]
public sealed class SmtpSection : ConfigurationSection
{
	[Token(Token = "0x17000589")]
	public SmtpDeliveryFormat DeliveryFormat
	{
		[Token(Token = "0x60018B3")]
		[Address(RVA = "0x61D0B00", Offset = "0x61CFB00", VA = "0x61D0B00")]
		get
		{
			return default(SmtpDeliveryFormat);
		}
		[Token(Token = "0x60018B4")]
		[Address(RVA = "0x61D0B30", Offset = "0x61CFB30", VA = "0x61D0B30")]
		set
		{
		}
	}

	[Token(Token = "0x1700058A")]
	public SmtpDeliveryMethod DeliveryMethod
	{
		[Token(Token = "0x60018B5")]
		[Address(RVA = "0x61D0B60", Offset = "0x61CFB60", VA = "0x61D0B60")]
		get
		{
			return default(SmtpDeliveryMethod);
		}
		[Token(Token = "0x60018B6")]
		[Address(RVA = "0x61D0B90", Offset = "0x61CFB90", VA = "0x61D0B90")]
		set
		{
		}
	}

	[Token(Token = "0x1700058B")]
	public string From
	{
		[Token(Token = "0x60018B7")]
		[Address(RVA = "0x61D0BC0", Offset = "0x61CFBC0", VA = "0x61D0BC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60018B8")]
		[Address(RVA = "0x61D0BF0", Offset = "0x61CFBF0", VA = "0x61D0BF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700058C")]
	public SmtpNetworkElement Network
	{
		[Token(Token = "0x60018B9")]
		[Address(RVA = "0x61D0C20", Offset = "0x61CFC20", VA = "0x61D0C20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700058D")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x60018BA")]
		[Address(RVA = "0x61D0C50", Offset = "0x61CFC50", VA = "0x61D0C50", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700058E")]
	public SmtpSpecifiedPickupDirectoryElement SpecifiedPickupDirectory
	{
		[Token(Token = "0x60018BB")]
		[Address(RVA = "0x61D0C80", Offset = "0x61CFC80", VA = "0x61D0C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60018B2")]
	[Address(RVA = "0x61D0AD0", Offset = "0x61CFAD0", VA = "0x61D0AD0")]
	public SmtpSection()
	{
	}
}
