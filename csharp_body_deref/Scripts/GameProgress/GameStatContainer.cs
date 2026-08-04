// ==================== AoTTG2 cross-reference ====================
// Type: GameProgress.GameStatContainer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameProgress/GameStatContainer.c
// Prior real C# source (older reference): Assets/Scripts/GameProgress/GameStatContainer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace GameProgress;

[Token(Token = "0x20001FB")]
internal class GameStatContainer : BaseSettingsContainer
{
	[Token(Token = "0x4000A97")]
	[FieldOffset(Offset = "0x20")]
	public IntSetting Level;

	[Token(Token = "0x4000A98")]
	[FieldOffset(Offset = "0x28")]
	public IntSetting Exp;

	[Token(Token = "0x4000A99")]
	[FieldOffset(Offset = "0x30")]
	public FloatSetting PlayTime;

	[Token(Token = "0x4000A9A")]
	[FieldOffset(Offset = "0x38")]
	public FloatSetting HighestSpeed;

	[Token(Token = "0x4000A9B")]
	[FieldOffset(Offset = "0x40")]
	public IntSetting TitansKilledTotal;

	[Token(Token = "0x4000A9C")]
	[FieldOffset(Offset = "0x48")]
	public IntSetting TitansKilledBlade;

	[Token(Token = "0x4000A9D")]
	[FieldOffset(Offset = "0x50")]
	public IntSetting TitansKilledAHSS;

	[Token(Token = "0x4000A9E")]
	[FieldOffset(Offset = "0x58")]
	public IntSetting TitansKilledThunderspear;

	[Token(Token = "0x4000A9F")]
	[FieldOffset(Offset = "0x60")]
	public IntSetting TitansKilledAPG;

	[Token(Token = "0x4000AA0")]
	[FieldOffset(Offset = "0x68")]
	public IntSetting TitansKilledOther;

	[Token(Token = "0x4000AA1")]
	[FieldOffset(Offset = "0x70")]
	public IntSetting HumansKilledTotal;

	[Token(Token = "0x4000AA2")]
	[FieldOffset(Offset = "0x78")]
	public IntSetting HumansKilledBlade;

	[Token(Token = "0x4000AA3")]
	[FieldOffset(Offset = "0x80")]
	public IntSetting HumansKilledAHSS;

	[Token(Token = "0x4000AA4")]
	[FieldOffset(Offset = "0x88")]
	public IntSetting HumansKilledThunderspear;

	[Token(Token = "0x4000AA5")]
	[FieldOffset(Offset = "0x90")]
	public IntSetting HumansKilledAPG;

	[Token(Token = "0x4000AA6")]
	[FieldOffset(Offset = "0x98")]
	public IntSetting HumansKilledTitan;

	[Token(Token = "0x4000AA7")]
	[FieldOffset(Offset = "0xA0")]
	public IntSetting HumansKilledOther;

	[Token(Token = "0x4000AA8")]
	[FieldOffset(Offset = "0xA8")]
	public DamageSetting Damage;

	[Token(Token = "0x6000BC6")]
	[Address(RVA = "0x443D5F0", Offset = "0x443D5F0", VA = "0x443D5F0")]
	public GameStatContainer()
	{
	}
}
