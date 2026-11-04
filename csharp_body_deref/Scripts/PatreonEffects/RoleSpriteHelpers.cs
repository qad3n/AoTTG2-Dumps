// ==================== AoTTG2 cross-reference ====================
// Type: PatreonEffects.RoleSpriteHelpers
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/PatreonEffects/RoleSpriteHelpers.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Text.RegularExpressions;
using Il2CppDummyDll;
using Photon.Realtime;

namespace PatreonEffects;

[Token(Token = "0x200011B")]
public static class RoleSpriteHelpers
{
	[Token(Token = "0x4000694")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Regex SpriteTagRegex;

	[Token(Token = "0x4000695")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static readonly RoleSpriteDefinition[] Definitions;

	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x20CF690", Offset = "0x20CDC90", VA = "0x1820CF690")]
	public static IEnumerable<RoleSpriteDefinition> GetEligibleRoleSprites([Optional] Player player)
	{
		return null;
	}

	[Token(Token = "0x60005AB")]
	[Address(RVA = "0x20CFA00", Offset = "0x20CE000", VA = "0x1820CFA00")]
	public static bool HasRole(Player player, string roleName)
	{
		return default(bool);
	}

	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x20CF530", Offset = "0x20CDB30", VA = "0x1820CF530")]
	public static string ComposeGuildWithRoleSprite(Player player, string guildText, string selectedRoleName)
	{
		return null;
	}

	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x20CF7A0", Offset = "0x20CDDA0", VA = "0x1820CF7A0")]
	public static string GetRoleSpriteDisplayText(string selectedRoleName, [Optional] Player player)
	{
		return null;
	}

	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x20CFE10", Offset = "0x20CE410", VA = "0x1820CFE10")]
	public static string SanitizePlayerText(Player player, string text)
	{
		return null;
	}

	[Token(Token = "0x60005AF")]
	[Address(RVA = "0x20CF8A0", Offset = "0x20CDEA0", VA = "0x1820CF8A0")]
	public static IEnumerable<string> GetRoles([Optional] Player player)
	{
		return null;
	}

	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x20D01A0", Offset = "0x20CE7A0", VA = "0x1820D01A0")]
	private static bool TryReadRoles(object raw, out string[] roles)
	{
		return default(bool);
	}

	[Token(Token = "0x60005B1")]
	[Address(RVA = "0x20CFC60", Offset = "0x20CE260", VA = "0x1820CFC60")]
	private static string[] RoleArray(IEnumerable<string> roles)
	{
		return null;
	}

	[Token(Token = "0x60005B2")]
	[Address(RVA = "0x20CFF30", Offset = "0x20CE530", VA = "0x1820CFF30")]
	public static bool TryGetDefinitionByRole(string roleName, out RoleSpriteDefinition definition)
	{
		return default(bool);
	}

	[Token(Token = "0x60005B3")]
	[Address(RVA = "0x20D0070", Offset = "0x20CE670", VA = "0x1820D0070")]
	public static bool TryGetDefinitionBySpriteIndex(int spriteIndex, out RoleSpriteDefinition definition)
	{
		return default(bool);
	}
}
