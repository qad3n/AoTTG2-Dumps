// ==================== AoTTG2 cross-reference ====================
// Type: Settings.AbilitySettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/AbilitySettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/AbilitySettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x200009D")]
internal class AbilitySettings : SaveableSettingsContainer
{
	[Token(Token = "0x4000333")]
	[FieldOffset(Offset = "0x38")]
	public ColorSetting BombColor;

	[Token(Token = "0x4000334")]
	[FieldOffset(Offset = "0x40")]
	public IntSetting BombRadius;

	[Token(Token = "0x4000335")]
	[FieldOffset(Offset = "0x48")]
	public IntSetting BombRange;

	[Token(Token = "0x4000336")]
	[FieldOffset(Offset = "0x50")]
	public IntSetting BombSpeed;

	[Token(Token = "0x4000337")]
	[FieldOffset(Offset = "0x58")]
	public IntSetting BombCooldown;

	[Token(Token = "0x4000338")]
	[FieldOffset(Offset = "0x60")]
	public BoolSetting CursorCooldown;

	[Token(Token = "0x4000339")]
	[FieldOffset(Offset = "0x68")]
	public BoolSetting ShowBombColors;

	[Token(Token = "0x400033A")]
	[FieldOffset(Offset = "0x70")]
	public BoolSetting UseOldEffect;

	[Token(Token = "0x400033B")]
	[FieldOffset(Offset = "0x78")]
	public BoolSetting BombCollision;

	[Token(Token = "0x170000A3")]
	protected override string FileName
	{
		[Token(Token = "0x600047A")]
		[Address(RVA = "0x58D1150", Offset = "0x58D0150", VA = "0x58D1150", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600047B")]
	[Address(RVA = "0x58D1180", Offset = "0x58D0180", VA = "0x58D1180")]
	public AbilitySettings()
	{
	}
}
