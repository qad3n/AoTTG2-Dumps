// ==================== AoTTG2 cross-reference ====================
// Type: GameManagers.PlayerProperty
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameManagers/PlayerProperty.c
// Prior real C# source (older reference): Assets/Scripts/GameManagers/PlayerProperty.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace GameManagers;

[Token(Token = "0x20003A1")]
internal class PlayerProperty
{
	[Token(Token = "0x4001270")]
	[FieldOffset(Offset = "0x0")]
	public static string Name;

	[Token(Token = "0x4001271")]
	[FieldOffset(Offset = "0x8")]
	public static string Guild;

	[Token(Token = "0x4001272")]
	[FieldOffset(Offset = "0x10")]
	public static string Status;

	[Token(Token = "0x4001273")]
	[FieldOffset(Offset = "0x18")]
	public static string CharacterViewId;

	[Token(Token = "0x4001274")]
	[FieldOffset(Offset = "0x20")]
	public static string Character;

	[Token(Token = "0x4001275")]
	[FieldOffset(Offset = "0x28")]
	public static string CustomMapHash;

	[Token(Token = "0x4001276")]
	[FieldOffset(Offset = "0x30")]
	public static string CustomLogicHash;

	[Token(Token = "0x4001277")]
	[FieldOffset(Offset = "0x38")]
	public static string CustomAddonHash;

	[Token(Token = "0x4001278")]
	[FieldOffset(Offset = "0x40")]
	public static string Team;

	[Token(Token = "0x4001279")]
	[FieldOffset(Offset = "0x48")]
	public static string Loadout;

	[Token(Token = "0x400127A")]
	[FieldOffset(Offset = "0x50")]
	public static string Kills;

	[Token(Token = "0x400127B")]
	[FieldOffset(Offset = "0x58")]
	public static string Deaths;

	[Token(Token = "0x400127C")]
	[FieldOffset(Offset = "0x60")]
	public static string HighestDamage;

	[Token(Token = "0x400127D")]
	[FieldOffset(Offset = "0x68")]
	public static string TotalDamage;

	[Token(Token = "0x400127E")]
	[FieldOffset(Offset = "0x70")]
	public static string SpawnPoint;

	[Token(Token = "0x400127F")]
	[FieldOffset(Offset = "0x78")]
	public static string CameraDistance;

	[Token(Token = "0x4001280")]
	[FieldOffset(Offset = "0x80")]
	public static string Ping;

	[Token(Token = "0x4001281")]
	[FieldOffset(Offset = "0x88")]
	public static string SpectateID;

	[Token(Token = "0x4001282")]
	[FieldOffset(Offset = "0x90")]
	public static string AccountId;

	[Token(Token = "0x4001283")]
	[FieldOffset(Offset = "0x98")]
	public static string DisplayName;

	[Token(Token = "0x4001284")]
	[FieldOffset(Offset = "0xA0")]
	public static string EmailVerified;

	[Token(Token = "0x4001285")]
	[FieldOffset(Offset = "0xA8")]
	public static string AuthoritativeRoles;

	[Token(Token = "0x4001286")]
	[FieldOffset(Offset = "0xB0")]
	public static string PatreonStatus;

	[Token(Token = "0x4001287")]
	[FieldOffset(Offset = "0xB8")]
	public static string PatreonLinked;

	[Token(Token = "0x4001288")]
	[FieldOffset(Offset = "0xC0")]
	public static string TierIds;

	[Token(Token = "0x4001289")]
	[FieldOffset(Offset = "0xC8")]
	public static string Entitlements;

	[Token(Token = "0x600174C")]
	[Address(RVA = "0x58578F0", Offset = "0x58568F0", VA = "0x58578F0")]
	public PlayerProperty()
	{
		// Lifted from source/cpp/GameManagers/PlayerProperty.c (GameManagers.PlayerProperty$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/GameManagers/PlayerProperty.c.

	// GameManagers.PlayerProperty$$.cctor: clean
	static PlayerProperty()
	{
		GameManagers_PlayerProperty_StaticFields pGVar1;

		PlayerProperty.Name = "Name";
		pGVar1 = typeof(PlayerProperty).static_fields;
		pGVar1.Guild = "Guild";
		pGVar1 = typeof(PlayerProperty).static_fields;
		pGVar1.Status = "Status";
		pGVar1 = typeof(PlayerProperty).static_fields;
		pGVar1.CharacterViewId = "CharacterViewId";
		pGVar1 = typeof(PlayerProperty).static_fields;
		pGVar1.Character = "Character";
		pGVar1 = typeof(PlayerProperty).static_fields;
		pGVar1.CustomMapHash = "CustomMapHash";
		pGVar1 = typeof(PlayerProperty).static_fields;
		pGVar1.CustomLogicHash = "CustomLogicHash";
		pGVar1 = typeof(PlayerProperty).static_fields;
		pGVar1.CustomAddonHash = "CustomAddonHash";
		pGVar1 = typeof(PlayerProperty).static_fields;
		pGVar1.Team = "Team";
		pGVar1 = typeof(PlayerProperty).static_fields;
		pGVar1.Loadout = "Loadout";
		pGVar1 = typeof(PlayerProperty).static_fields;
		pGVar1.Kills = "Kills";
		pGVar1 = typeof(PlayerProperty).static_fields;
		pGVar1.Deaths = "Deaths";
		pGVar1 = typeof(PlayerProperty).static_fields;
		pGVar1.HighestDamage = "HighestDamage";
		pGVar1 = typeof(PlayerProperty).static_fields;
		pGVar1.TotalDamage = "TotalDamage";
		pGVar1 = typeof(PlayerProperty).static_fields;
		pGVar1.SpawnPoint = "SpawnPoint";
		pGVar1 = typeof(PlayerProperty).static_fields;
		pGVar1.CameraDistance = "CameraDistance";
		pGVar1 = typeof(PlayerProperty).static_fields;
		pGVar1.Ping = "Ping";
		pGVar1 = typeof(PlayerProperty).static_fields;
		pGVar1.SpectateID = "SpectateID";
		pGVar1 = typeof(PlayerProperty).static_fields;
		pGVar1.AccountId = "sub";
		pGVar1 = typeof(PlayerProperty).static_fields;
		pGVar1.DisplayName = "display_name";
		pGVar1 = typeof(PlayerProperty).static_fields;
		pGVar1.EmailVerified = "email_verified";
		pGVar1 = typeof(PlayerProperty).static_fields;
		pGVar1.AuthoritativeRoles = "roles";
		pGVar1 = typeof(PlayerProperty).static_fields;
		pGVar1.PatreonStatus = "patreon_status";
		pGVar1 = typeof(PlayerProperty).static_fields;
		pGVar1.PatreonLinked = "patreon_linked";
		pGVar1 = typeof(PlayerProperty).static_fields;
		pGVar1.TierIds = "tier_ids";
		pGVar1 = typeof(PlayerProperty).static_fields;
		pGVar1.Entitlements = "entitlements";
		return;
	}
}
