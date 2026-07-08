using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x200039B")]
public sealed class NetSectionGroup : ConfigurationSectionGroup
{
	[Token(Token = "0x1700055E")]
	public AuthenticationModulesSection AuthenticationModules
	{
		[Token(Token = "0x60017EA")]
		[Address(RVA = "0x45CF540", Offset = "0x45CF540", VA = "0x45CF540")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700055F")]
	public ConnectionManagementSection ConnectionManagement
	{
		[Token(Token = "0x60017EB")]
		[Address(RVA = "0x45CF570", Offset = "0x45CF570", VA = "0x45CF570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000560")]
	public DefaultProxySection DefaultProxy
	{
		[Token(Token = "0x60017EC")]
		[Address(RVA = "0x45CF5A0", Offset = "0x45CF5A0", VA = "0x45CF5A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000561")]
	public MailSettingsSectionGroup MailSettings
	{
		[Token(Token = "0x60017ED")]
		[Address(RVA = "0x45CF5D0", Offset = "0x45CF5D0", VA = "0x45CF5D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000562")]
	public RequestCachingSection RequestCaching
	{
		[Token(Token = "0x60017EE")]
		[Address(RVA = "0x45CF600", Offset = "0x45CF600", VA = "0x45CF600")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000563")]
	public SettingsSection Settings
	{
		[Token(Token = "0x60017EF")]
		[Address(RVA = "0x45CF630", Offset = "0x45CF630", VA = "0x45CF630")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000564")]
	public WebRequestModulesSection WebRequestModules
	{
		[Token(Token = "0x60017F0")]
		[Address(RVA = "0x45CF660", Offset = "0x45CF660", VA = "0x45CF660")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60017E9")]
	[Address(RVA = "0x45CF510", Offset = "0x45CF510", VA = "0x45CF510")]
	public NetSectionGroup()
	{
	}

	[Token(Token = "0x60017F1")]
	[Address(RVA = "0x45CF690", Offset = "0x45CF690", VA = "0x45CF690")]
	public static NetSectionGroup GetSectionGroup(System.Configuration.Configuration config)
	{
		return null;
	}
}
