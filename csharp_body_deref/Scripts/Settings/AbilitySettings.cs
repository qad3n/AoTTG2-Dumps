// ==================== AoTTG2 cross-reference ====================
// Type: Settings.AbilitySettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/AbilitySettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/AbilitySettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000064")]
internal class AbilitySettings : SaveableSettingsContainer
{
	[Token(Token = "0x40001FE")]
	[FieldOffset(Offset = "0x38")]
	public ColorSetting BombColor;

	[Token(Token = "0x40001FF")]
	[FieldOffset(Offset = "0x40")]
	public IntSetting BombRadius;

	[Token(Token = "0x4000200")]
	[FieldOffset(Offset = "0x48")]
	public IntSetting BombRange;

	[Token(Token = "0x4000201")]
	[FieldOffset(Offset = "0x50")]
	public IntSetting BombSpeed;

	[Token(Token = "0x4000202")]
	[FieldOffset(Offset = "0x58")]
	public IntSetting BombCooldown;

	[Token(Token = "0x4000203")]
	[FieldOffset(Offset = "0x60")]
	public BoolSetting CursorCooldown;

	[Token(Token = "0x4000204")]
	[FieldOffset(Offset = "0x68")]
	public BoolSetting ShowBombColors;

	[Token(Token = "0x4000205")]
	[FieldOffset(Offset = "0x70")]
	public BoolSetting UseOldEffect;

	[Token(Token = "0x4000206")]
	[FieldOffset(Offset = "0x78")]
	public BoolSetting BombCollision;

	[Token(Token = "0x17000086")]
	protected override string FileName
	{
		[Token(Token = "0x600030D")]
		[Address(RVA = "0x1DB9620", Offset = "0x1DB7C20", VA = "0x181DB9620", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x1DB93C0", Offset = "0x1DB79C0", VA = "0x181DB93C0")]
	public AbilitySettings()
	{
	}
}
