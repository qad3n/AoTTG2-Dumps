using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x2000397")]
public sealed class MailSettingsSectionGroup : ConfigurationSectionGroup
{
	[Token(Token = "0x1700054C")]
	public SmtpSection Smtp
	{
		[Token(Token = "0x60017C7")]
		[Address(RVA = "0x45CEEB0", Offset = "0x45CEEB0", VA = "0x45CEEB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60017C6")]
	[Address(RVA = "0x45CEE80", Offset = "0x45CEE80", VA = "0x45CEE80")]
	public MailSettingsSectionGroup()
	{
	}
}
