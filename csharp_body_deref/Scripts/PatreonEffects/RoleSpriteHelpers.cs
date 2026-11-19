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

[Token(Token = "0x200008F")]
public static class RoleSpriteHelpers
{
	[Token(Token = "0x40002F9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Regex SpriteTagRegex;

	[Token(Token = "0x40002FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static readonly RoleSpriteDefinition[] Definitions;

	[Token(Token = "0x6000415")]
	[Address(RVA = "0x58C9CD0", Offset = "0x58C8CD0", VA = "0x58C9CD0")]
	public static IEnumerable<RoleSpriteDefinition> GetEligibleRoleSprites([Optional] Player player)
	{
		return null;
	}

	[Token(Token = "0x6000416")]
	[Address(RVA = "0x58C9DE0", Offset = "0x58C8DE0", VA = "0x58C9DE0")]
	public static bool HasRole(Player player, string roleName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000417")]
	[Address(RVA = "0x58CA0F0", Offset = "0x58C90F0", VA = "0x58CA0F0")]
	public static string ComposeGuildWithRoleSprite(Player player, string guildText, string selectedRoleName)
	{
		return null;
	}

	[Token(Token = "0x6000418")]
	[Address(RVA = "0x58CA360", Offset = "0x58C9360", VA = "0x58CA360")]
	public static string GetRoleSpriteDisplayText(string selectedRoleName, [Optional] Player player)
	{
		return null;
	}

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x58CA460", Offset = "0x58C9460", VA = "0x58CA460")]
	public static string SanitizePlayerText(Player player, string text)
	{
		return null;
	}

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x58C9F10", Offset = "0x58C8F10", VA = "0x58C9F10")]
	public static IEnumerable<string> GetRoles([Optional] Player player)
	{
		return null;
	}

	[Token(Token = "0x600041B")]
	[Address(RVA = "0x58CA590", Offset = "0x58C9590", VA = "0x58CA590")]
	private static bool TryReadRoles(object raw, out string[] roles)
	{
		return default(bool);
	}

	[Token(Token = "0x600041C")]
	[Address(RVA = "0x58CAD40", Offset = "0x58C9D40", VA = "0x58CAD40")]
	private static string[] RoleArray(IEnumerable<string> roles)
	{
		return null;
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x58CA230", Offset = "0x58C9230", VA = "0x58CA230")]
	public static bool TryGetDefinitionByRole(string roleName, out RoleSpriteDefinition definition)
	{
		return default(bool);
	}

	[Token(Token = "0x600041E")]
	[Address(RVA = "0x58CAF40", Offset = "0x58C9F40", VA = "0x58CAF40")]
	public static bool TryGetDefinitionBySpriteIndex(int spriteIndex, out RoleSpriteDefinition definition)
	{
		return default(bool);
	}
}
