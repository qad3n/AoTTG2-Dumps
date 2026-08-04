// ==================== AoTTG2 cross-reference ====================
// Type: PatreonEffects.RoleSpriteHelpers
// Update status: CHANGED in this game update
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

[Token(Token = "0x20000FA")]
public static class RoleSpriteHelpers
{
	[Token(Token = "0x40005F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Regex SpriteTagRegex;

	[Token(Token = "0x40005F6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static readonly RoleSpriteDefinition[] Definitions;

	[Token(Token = "0x600050B")]
	[Address(RVA = "0x42314D0", Offset = "0x42314D0", VA = "0x42314D0")]
	public static IEnumerable<RoleSpriteDefinition> GetEligibleRoleSprites([Optional] Player player)
	{
		return null;
	}

	[Token(Token = "0x600050C")]
	[Address(RVA = "0x42315E0", Offset = "0x42315E0", VA = "0x42315E0")]
	public static bool HasRole(Player player, string roleName)
	{
		return default(bool);
	}

	[Token(Token = "0x600050D")]
	[Address(RVA = "0x4231900", Offset = "0x4231900", VA = "0x4231900")]
	public static string ComposeGuildWithRoleSprite(Player player, string guildText, string selectedRoleName)
	{
		return null;
	}

	[Token(Token = "0x600050E")]
	[Address(RVA = "0x4231B70", Offset = "0x4231B70", VA = "0x4231B70")]
	public static string GetRoleSpriteDisplayText(string selectedRoleName, [Optional] Player player)
	{
		return null;
	}

	[Token(Token = "0x600050F")]
	[Address(RVA = "0x4231C70", Offset = "0x4231C70", VA = "0x4231C70")]
	public static string SanitizePlayerText(Player player, string text)
	{
		return null;
	}

	[Token(Token = "0x6000510")]
	[Address(RVA = "0x4231710", Offset = "0x4231710", VA = "0x4231710")]
	public static IEnumerable<string> GetRoles([Optional] Player player)
	{
		return null;
	}

	[Token(Token = "0x6000511")]
	[Address(RVA = "0x4231DA0", Offset = "0x4231DA0", VA = "0x4231DA0")]
	private static bool TryReadRoles(object raw, out string[] roles)
	{
		return default(bool);
	}

	[Token(Token = "0x6000512")]
	[Address(RVA = "0x42326E0", Offset = "0x42326E0", VA = "0x42326E0")]
	private static string[] RoleArray(IEnumerable<string> roles)
	{
		return null;
	}

	[Token(Token = "0x6000513")]
	[Address(RVA = "0x4231A40", Offset = "0x4231A40", VA = "0x4231A40")]
	public static bool TryGetDefinitionByRole(string roleName, out RoleSpriteDefinition definition)
	{
		return default(bool);
	}

	[Token(Token = "0x6000514")]
	[Address(RVA = "0x42328E0", Offset = "0x42328E0", VA = "0x42328E0")]
	public static bool TryGetDefinitionBySpriteIndex(int spriteIndex, out RoleSpriteDefinition definition)
	{
		return default(bool);
	}
}
