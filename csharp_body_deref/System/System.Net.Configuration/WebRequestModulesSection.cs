using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x20003A4")]
public sealed class WebRequestModulesSection : ConfigurationSection
{
	[Token(Token = "0x1700058C")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x600183B")]
		[Address(RVA = "0x45D0470", Offset = "0x45D0470", VA = "0x45D0470", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700058D")]
	public WebRequestModuleElementCollection WebRequestModules
	{
		[Token(Token = "0x600183C")]
		[Address(RVA = "0x45D04A0", Offset = "0x45D04A0", VA = "0x45D04A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600183A")]
	[Address(RVA = "0x45D0440", Offset = "0x45D0440", VA = "0x45D0440")]
	public WebRequestModulesSection()
	{
	}

	[Token(Token = "0x600183D")]
	[Address(RVA = "0x45D04D0", Offset = "0x45D04D0", VA = "0x45D04D0", Slot = "6")]
	protected override void InitializeDefault()
	{
	}

	[Token(Token = "0x600183E")]
	[Address(RVA = "0x45D0500", Offset = "0x45D0500", VA = "0x45D0500", Slot = "8")]
	protected override void PostDeserialize()
	{
	}
}
