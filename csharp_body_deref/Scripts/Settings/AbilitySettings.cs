using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000064")]
internal class AbilitySettings : SaveableSettingsContainer
{
	[Token(Token = "0x40001F2")]
	[FieldOffset(Offset = "0x20")]
	public ColorSetting BombColor;

	[Token(Token = "0x40001F3")]
	[FieldOffset(Offset = "0x28")]
	public IntSetting BombRadius;

	[Token(Token = "0x40001F4")]
	[FieldOffset(Offset = "0x30")]
	public IntSetting BombRange;

	[Token(Token = "0x40001F5")]
	[FieldOffset(Offset = "0x38")]
	public IntSetting BombSpeed;

	[Token(Token = "0x40001F6")]
	[FieldOffset(Offset = "0x40")]
	public IntSetting BombCooldown;

	[Token(Token = "0x40001F7")]
	[FieldOffset(Offset = "0x48")]
	public BoolSetting CursorCooldown;

	[Token(Token = "0x40001F8")]
	[FieldOffset(Offset = "0x50")]
	public BoolSetting ShowBombColors;

	[Token(Token = "0x40001F9")]
	[FieldOffset(Offset = "0x58")]
	public BoolSetting UseOldEffect;

	[Token(Token = "0x40001FA")]
	[FieldOffset(Offset = "0x60")]
	public BoolSetting BombCollision;

	[Token(Token = "0x17000084")]
	protected override string FileName
	{
		[Token(Token = "0x60002FD")]
		[Address(RVA = "0x3C8F2C0", Offset = "0x3C8F2C0", VA = "0x3C8F2C0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x3C8F2F0", Offset = "0x3C8F2F0", VA = "0x3C8F2F0")]
	public AbilitySettings()
	{
	}
}
