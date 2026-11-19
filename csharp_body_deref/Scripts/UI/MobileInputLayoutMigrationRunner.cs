// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileInputLayoutMigrationRunner
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileInputLayoutMigrationRunner.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000762")]
internal static class MobileInputLayoutMigrationRunner
{
	[Token(Token = "0x4002516")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, string> _legacyAliases;

	[Token(Token = "0x4002517")]
	[FieldOffset(Offset = "0x8")]
	private static bool _aliasesLoaded;

	[Token(Token = "0x6004740")]
	[Address(RVA = "0x5B9A4D0", Offset = "0x5B994D0", VA = "0x5B9A4D0")]
	public static void MigrateCustomLayouts(string folder, int currentVersion)
	{
	}

	[Token(Token = "0x6004741")]
	[Address(RVA = "0x5B9B000", Offset = "0x5B9A000", VA = "0x5B9B000")]
	private static void MigrateCustomLayout(string path, int currentVersion)
	{
	}

	[Token(Token = "0x6004742")]
	[Address(RVA = "0x5B9B1F0", Offset = "0x5B9A1F0", VA = "0x5B9B1F0")]
	private static void MigrateControls(List<MobileInputControlLayout> controls, MobileInputLayoutRole role)
	{
	}

	[Token(Token = "0x6004743")]
	[Address(RVA = "0x5B9B3E0", Offset = "0x5B9A3E0", VA = "0x5B9B3E0")]
	private static void MigrateControl(MobileInputControlLayout control, MobileInputLayoutRole role)
	{
	}

	[Token(Token = "0x6004744")]
	[Address(RVA = "0x5B9B470", Offset = "0x5B9A470", VA = "0x5B9B470")]
	private static string NormalizeActionString(string actions, MobileInputLayoutRole role)
	{
		return null;
	}

	[Token(Token = "0x6004745")]
	[Address(RVA = "0x5B9B7C0", Offset = "0x5B9A7C0", VA = "0x5B9B7C0")]
	private static bool TryNormalizeId(string value, MobileInputLayoutRole role, out string id)
	{
		return default(bool);
	}

	[Token(Token = "0x6004746")]
	[Address(RVA = "0x5B9B880", Offset = "0x5B9A880", VA = "0x5B9B880")]
	private static string NormalizeId(string value, MobileInputLayoutRole role)
	{
		return null;
	}

	[Token(Token = "0x6004747")]
	[Address(RVA = "0x5B9A610", Offset = "0x5B99610", VA = "0x5B9A610")]
	private static void RegisterLegacyAliases()
	{
	}

	[Token(Token = "0x6004748")]
	[Address(RVA = "0x5B9BD20", Offset = "0x5B9AD20", VA = "0x5B9BD20")]
	private static void RegisterCommonAliases(MobileInputLayoutRole role, string group)
	{
	}

	[Token(Token = "0x6004749")]
	[Address(RVA = "0x5B9C0C0", Offset = "0x5B9B0C0", VA = "0x5B9C0C0")]
	private static void AddMapEditorAliases()
	{
	}

	[Token(Token = "0x600474A")]
	[Address(RVA = "0x5B9BEC0", Offset = "0x5B9AEC0", VA = "0x5B9BEC0")]
	private static void AddAlias(string legacy, string id)
	{
	}

	[Token(Token = "0x600474B")]
	[Address(RVA = "0x5B9BF90", Offset = "0x5B9AF90", VA = "0x5B9BF90")]
	private static void AddRoleAlias(MobileInputLayoutRole role, string legacy, string id)
	{
	}

	[Token(Token = "0x600474C")]
	[Address(RVA = "0x5B9BC10", Offset = "0x5B9AC10", VA = "0x5B9BC10")]
	private static bool IsValidActionIdString(string id)
	{
		return default(bool);
	}

	[Token(Token = "0x600474D")]
	[Address(RVA = "0x5B9B350", Offset = "0x5B9A350", VA = "0x5B9B350")]
	private static void Backup(string path, int version)
	{
	}
}
