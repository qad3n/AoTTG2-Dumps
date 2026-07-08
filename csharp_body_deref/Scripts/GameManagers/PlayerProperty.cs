using Il2CppDummyDll;

namespace GameManagers;

[Token(Token = "0x20001F1")]
internal class PlayerProperty
{
	[Token(Token = "0x4000AE2")]
	[FieldOffset(Offset = "0x0")]
	public static string Name;

	[Token(Token = "0x4000AE3")]
	[FieldOffset(Offset = "0x8")]
	public static string Guild;

	[Token(Token = "0x4000AE4")]
	[FieldOffset(Offset = "0x10")]
	public static string Roles;

	[Token(Token = "0x4000AE5")]
	[FieldOffset(Offset = "0x18")]
	public static string Status;

	[Token(Token = "0x4000AE6")]
	[FieldOffset(Offset = "0x20")]
	public static string CharacterViewId;

	[Token(Token = "0x4000AE7")]
	[FieldOffset(Offset = "0x28")]
	public static string Character;

	[Token(Token = "0x4000AE8")]
	[FieldOffset(Offset = "0x30")]
	public static string CustomMapHash;

	[Token(Token = "0x4000AE9")]
	[FieldOffset(Offset = "0x38")]
	public static string CustomLogicHash;

	[Token(Token = "0x4000AEA")]
	[FieldOffset(Offset = "0x40")]
	public static string Team;

	[Token(Token = "0x4000AEB")]
	[FieldOffset(Offset = "0x48")]
	public static string Loadout;

	[Token(Token = "0x4000AEC")]
	[FieldOffset(Offset = "0x50")]
	public static string Kills;

	[Token(Token = "0x4000AED")]
	[FieldOffset(Offset = "0x58")]
	public static string Deaths;

	[Token(Token = "0x4000AEE")]
	[FieldOffset(Offset = "0x60")]
	public static string HighestDamage;

	[Token(Token = "0x4000AEF")]
	[FieldOffset(Offset = "0x68")]
	public static string TotalDamage;

	[Token(Token = "0x4000AF0")]
	[FieldOffset(Offset = "0x70")]
	public static string SpawnPoint;

	[Token(Token = "0x4000AF1")]
	[FieldOffset(Offset = "0x78")]
	public static string CameraDistance;

	[Token(Token = "0x4000AF2")]
	[FieldOffset(Offset = "0x80")]
	public static string Ping;

	[Token(Token = "0x4000AF3")]
	[FieldOffset(Offset = "0x88")]
	public static string SpectateID;

	[Token(Token = "0x4000AF4")]
	[FieldOffset(Offset = "0x90")]
	public static string AccountId;

	[Token(Token = "0x4000AF5")]
	[FieldOffset(Offset = "0x98")]
	public static string DisplayName;

	[Token(Token = "0x4000AF6")]
	[FieldOffset(Offset = "0xA0")]
	public static string EmailVerified;

	[Token(Token = "0x4000AF7")]
	[FieldOffset(Offset = "0xA8")]
	public static string AuthoritativeRoles;

	[Token(Token = "0x4000AF8")]
	[FieldOffset(Offset = "0xB0")]
	public static string PatreonStatus;

	[Token(Token = "0x4000AF9")]
	[FieldOffset(Offset = "0xB8")]
	public static string PatreonLinked;

	[Token(Token = "0x4000AFA")]
	[FieldOffset(Offset = "0xC0")]
	public static string TierIds;

	[Token(Token = "0x4000AFB")]
	[FieldOffset(Offset = "0xC8")]
	public static string Entitlements;

	[Token(Token = "0x6000BF2")]
	[Address(RVA = "0x413AC60", Offset = "0x413AC60", VA = "0x413AC60")]
	public PlayerProperty()
	{
	}
}
