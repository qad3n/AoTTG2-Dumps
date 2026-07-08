using System.Collections.Generic;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000150")]
internal static class AottgActiveProfile
{
	[Token(Token = "0x170000E2")]
	public static bool UsesRemote
	{
		[Token(Token = "0x6000718")]
		[Address(RVA = "0x40C7EF0", Offset = "0x40C7EF0", VA = "0x40C7EF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000719")]
	[Address(RVA = "0x40C7F50", Offset = "0x40C7F50", VA = "0x40C7F50")]
	public static string PlayerName()
	{
		return null;
	}

	[Token(Token = "0x600071A")]
	[Address(RVA = "0x40C80D0", Offset = "0x40C80D0", VA = "0x40C80D0")]
	public static string CharacterName()
	{
		return null;
	}

	[Token(Token = "0x600071B")]
	[Address(RVA = "0x40C8320", Offset = "0x40C8320", VA = "0x40C8320")]
	public static string AccountName()
	{
		return null;
	}

	[Token(Token = "0x600071C")]
	[Address(RVA = "0x40C8430", Offset = "0x40C8430", VA = "0x40C8430")]
	public static string AuthHandle()
	{
		return null;
	}

	[Token(Token = "0x600071D")]
	[Address(RVA = "0x40C8540", Offset = "0x40C8540", VA = "0x40C8540")]
	public static string AvatarKey()
	{
		return null;
	}

	[Token(Token = "0x600071E")]
	[Address(RVA = "0x40C8720", Offset = "0x40C8720", VA = "0x40C8720")]
	public static string BannerKey()
	{
		return null;
	}

	[Token(Token = "0x600071F")]
	[Address(RVA = "0x40C88F0", Offset = "0x40C88F0", VA = "0x40C88F0")]
	public static string AvatarSprite()
	{
		return null;
	}

	[Token(Token = "0x6000720")]
	[Address(RVA = "0x40C8910", Offset = "0x40C8910", VA = "0x40C8910")]
	public static string BannerSprite()
	{
		return null;
	}

	[Token(Token = "0x6000721")]
	[Address(RVA = "0x40C8930", Offset = "0x40C8930", VA = "0x40C8930")]
	public static string Bio()
	{
		return null;
	}

	[Token(Token = "0x6000722")]
	[Address(RVA = "0x40C8AA0", Offset = "0x40C8AA0", VA = "0x40C8AA0")]
	public static string[] SocialLinks()
	{
		return null;
	}

	[Token(Token = "0x6000723")]
	[Address(RVA = "0x40C8E20", Offset = "0x40C8E20", VA = "0x40C8E20")]
	public static List<string> LocalSocialLinks()
	{
		return null;
	}

	[Token(Token = "0x6000724")]
	[Address(RVA = "0x40C94C0", Offset = "0x40C94C0", VA = "0x40C94C0")]
	public static string SerializeSocialLinks(IEnumerable<string> links)
	{
		return null;
	}
}
