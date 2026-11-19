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

[Token(Token = "0x200036E")]
internal class GameStatContainer : BaseSettingsContainer
{
	[Token(Token = "0x4001119")]
	[FieldOffset(Offset = "0x30")]
	public IntSetting Level;

	[Token(Token = "0x400111A")]
	[FieldOffset(Offset = "0x38")]
	public IntSetting Exp;

	[Token(Token = "0x400111B")]
	[FieldOffset(Offset = "0x40")]
	public FloatSetting PlayTime;

	[Token(Token = "0x400111C")]
	[FieldOffset(Offset = "0x48")]
	public FloatSetting HighestSpeed;

	[Token(Token = "0x400111D")]
	[FieldOffset(Offset = "0x50")]
	public IntSetting TitansKilledTotal;

	[Token(Token = "0x400111E")]
	[FieldOffset(Offset = "0x58")]
	public IntSetting TitansKilledBlade;

	[Token(Token = "0x400111F")]
	[FieldOffset(Offset = "0x60")]
	public IntSetting TitansKilledAHSS;

	[Token(Token = "0x4001120")]
	[FieldOffset(Offset = "0x68")]
	public IntSetting TitansKilledThunderspear;

	[Token(Token = "0x4001121")]
	[FieldOffset(Offset = "0x70")]
	public IntSetting TitansKilledAPG;

	[Token(Token = "0x4001122")]
	[FieldOffset(Offset = "0x78")]
	public IntSetting TitansKilledOther;

	[Token(Token = "0x4001123")]
	[FieldOffset(Offset = "0x80")]
	public IntSetting HumansKilledTotal;

	[Token(Token = "0x4001124")]
	[FieldOffset(Offset = "0x88")]
	public IntSetting HumansKilledBlade;

	[Token(Token = "0x4001125")]
	[FieldOffset(Offset = "0x90")]
	public IntSetting HumansKilledAHSS;

	[Token(Token = "0x4001126")]
	[FieldOffset(Offset = "0x98")]
	public IntSetting HumansKilledThunderspear;

	[Token(Token = "0x4001127")]
	[FieldOffset(Offset = "0xA0")]
	public IntSetting HumansKilledAPG;

	[Token(Token = "0x4001128")]
	[FieldOffset(Offset = "0xA8")]
	public IntSetting HumansKilledTitan;

	[Token(Token = "0x4001129")]
	[FieldOffset(Offset = "0xB0")]
	public IntSetting HumansKilledOther;

	[Token(Token = "0x400112A")]
	[FieldOffset(Offset = "0xB8")]
	public DamageSetting Damage;

	[Token(Token = "0x6001548")]
	[Address(RVA = "0x58207F0", Offset = "0x581F7F0", VA = "0x58207F0")]
	public void Clear(GameStatRecord record)
	{
	}

	[Token(Token = "0x6001549")]
	[Address(RVA = "0x5820B90", Offset = "0x581FB90", VA = "0x5820B90")]
	public void ClearAll()
	{
	}

	[Token(Token = "0x600154A")]
	[Address(RVA = "0x581F700", Offset = "0x581E700", VA = "0x581F700")]
	public GameStatContainer()
	{
	}
}
