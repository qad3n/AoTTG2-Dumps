using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Text.RegularExpressions;
using Il2CppDummyDll;
using Photon.Realtime;

namespace PatreonEffects;

[Token(Token = "0x20000F9")]
public static class RoleSpriteHelpers
{
	[Token(Token = "0x40005ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Regex SpriteTagRegex;

	[Token(Token = "0x40005EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static readonly RoleSpriteDefinition[] Definitions;

	[Token(Token = "0x60004FE")]
	[Address(RVA = "0x3F3C200", Offset = "0x3F3C200", VA = "0x3F3C200")]
	public static IEnumerable<RoleSpriteDefinition> GetEligibleRoleSprites([Optional] Player player)
	{
		return null;
	}

	[Token(Token = "0x60004FF")]
	[Address(RVA = "0x3F3C310", Offset = "0x3F3C310", VA = "0x3F3C310")]
	public static bool HasRole(Player player, string roleName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000500")]
	[Address(RVA = "0x3F3C690", Offset = "0x3F3C690", VA = "0x3F3C690")]
	public static string ComposeGuildWithRoleSprite(Player player, string guildText, string selectedRoleName)
	{
		return null;
	}

	[Token(Token = "0x6000501")]
	[Address(RVA = "0x3F3C900", Offset = "0x3F3C900", VA = "0x3F3C900")]
	public static string GetRoleSpriteDisplayText(string selectedRoleName, [Optional] Player player)
	{
		return null;
	}

	[Token(Token = "0x6000502")]
	[Address(RVA = "0x3F3CA00", Offset = "0x3F3CA00", VA = "0x3F3CA00")]
	public static string SanitizePlayerText(Player player, string text)
	{
		return null;
	}

	[Token(Token = "0x6000503")]
	[Address(RVA = "0x3F3CB30", Offset = "0x3F3CB30", VA = "0x3F3CB30")]
	public static string SerializeRoles(IEnumerable<string> roles)
	{
		return null;
	}

	[Token(Token = "0x6000504")]
	[Address(RVA = "0x3F3C440", Offset = "0x3F3C440", VA = "0x3F3C440")]
	public static IEnumerable<string> GetRoles([Optional] Player player)
	{
		return null;
	}

	[Token(Token = "0x6000505")]
	[Address(RVA = "0x3F3CF60", Offset = "0x3F3CF60", VA = "0x3F3CF60")]
	private static bool TryReadRoles(object raw, out string[] roles)
	{
		return default(bool);
	}

	[Token(Token = "0x6000506")]
	[Address(RVA = "0x3F3D8A0", Offset = "0x3F3D8A0", VA = "0x3F3D8A0")]
	private static string[] RoleArray(IEnumerable<string> roles)
	{
		return null;
	}

	[Token(Token = "0x6000507")]
	[Address(RVA = "0x3F3C7D0", Offset = "0x3F3C7D0", VA = "0x3F3C7D0")]
	public static bool TryGetDefinitionByRole(string roleName, out RoleSpriteDefinition definition)
	{
		return default(bool);
	}

	[Token(Token = "0x6000508")]
	[Address(RVA = "0x3F3DAA0", Offset = "0x3F3DAA0", VA = "0x3F3DAA0")]
	public static bool TryGetDefinitionBySpriteIndex(int spriteIndex, out RoleSpriteDefinition definition)
	{
		return default(bool);
	}
}
