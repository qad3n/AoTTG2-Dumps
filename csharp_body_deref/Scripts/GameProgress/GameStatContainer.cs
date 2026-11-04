// ==================== AoTTG2 cross-reference ====================
// Type: GameProgress.GameStatContainer
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/GameProgress/GameStatContainer.c
// Prior real C# source (older reference): Assets/Scripts/GameProgress/GameStatContainer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace GameProgress;

[Token(Token = "0x200030D")]
internal class GameStatContainer : BaseSettingsContainer
{
	[Token(Token = "0x4000F7A")]
	[FieldOffset(Offset = "0x30")]
	public IntSetting Level;

	[Token(Token = "0x4000F7B")]
	[FieldOffset(Offset = "0x38")]
	public IntSetting Exp;

	[Token(Token = "0x4000F7C")]
	[FieldOffset(Offset = "0x40")]
	public FloatSetting PlayTime;

	[Token(Token = "0x4000F7D")]
	[FieldOffset(Offset = "0x48")]
	public FloatSetting HighestSpeed;

	[Token(Token = "0x4000F7E")]
	[FieldOffset(Offset = "0x50")]
	public IntSetting TitansKilledTotal;

	[Token(Token = "0x4000F7F")]
	[FieldOffset(Offset = "0x58")]
	public IntSetting TitansKilledBlade;

	[Token(Token = "0x4000F80")]
	[FieldOffset(Offset = "0x60")]
	public IntSetting TitansKilledAHSS;

	[Token(Token = "0x4000F81")]
	[FieldOffset(Offset = "0x68")]
	public IntSetting TitansKilledThunderspear;

	[Token(Token = "0x4000F82")]
	[FieldOffset(Offset = "0x70")]
	public IntSetting TitansKilledAPG;

	[Token(Token = "0x4000F83")]
	[FieldOffset(Offset = "0x78")]
	public IntSetting TitansKilledOther;

	[Token(Token = "0x4000F84")]
	[FieldOffset(Offset = "0x80")]
	public IntSetting HumansKilledTotal;

	[Token(Token = "0x4000F85")]
	[FieldOffset(Offset = "0x88")]
	public IntSetting HumansKilledBlade;

	[Token(Token = "0x4000F86")]
	[FieldOffset(Offset = "0x90")]
	public IntSetting HumansKilledAHSS;

	[Token(Token = "0x4000F87")]
	[FieldOffset(Offset = "0x98")]
	public IntSetting HumansKilledThunderspear;

	[Token(Token = "0x4000F88")]
	[FieldOffset(Offset = "0xA0")]
	public IntSetting HumansKilledAPG;

	[Token(Token = "0x4000F89")]
	[FieldOffset(Offset = "0xA8")]
	public IntSetting HumansKilledTitan;

	[Token(Token = "0x4000F8A")]
	[FieldOffset(Offset = "0xB0")]
	public IntSetting HumansKilledOther;

	[Token(Token = "0x4000F8B")]
	[FieldOffset(Offset = "0xB8")]
	public DamageSetting Damage;

	[Token(Token = "0x60012D6")]
	[Address(RVA = "0x1E35CC0", Offset = "0x1E342C0", VA = "0x181E35CC0")]
	public void Clear(GameStatRecord record)
	{
	}

	[Token(Token = "0x60012D7")]
	[Address(RVA = "0x1E35A50", Offset = "0x1E34050", VA = "0x181E35A50")]
	public void ClearAll()
	{
	}

	[Token(Token = "0x60012D8")]
	[Address(RVA = "0x1E35F50", Offset = "0x1E34550", VA = "0x181E35F50")]
	public GameStatContainer()
	{
	}
}
