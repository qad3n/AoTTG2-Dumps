// ==================== AoTTG2 cross-reference ====================
// Type: Settings.AbilitySettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/AbilitySettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/AbilitySettings.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
			// Lifted from source/cpp/Settings/AbilitySettings.c (Settings.AbilitySettings$$get_FileName): clean
			return "Ability_001.json";
		}
	}

	[Token(Token = "0x600047B")]
	[Address(RVA = "0x58D1180", Offset = "0x58D0180", VA = "0x58D1180")]
	public AbilitySettings()
	{
		// Lifted from source/cpp/Settings/AbilitySettings.c (Settings.AbilitySettings$$.ctor): clean
		Color255 __this_00;
		ColorSetting __this_01;
		IntSetting pSVar1;
		BoolSetting pSVar2;

		__this_00 = new Color255(0xff, 0xff, 0xff, 0xff);
		__this_01 = new ColorSetting(__this_00, 0x80);
		this.BombColor = __this_01;
		pSVar1 = new IntSetting(6, 0, 10);
		this.BombRadius = pSVar1;
		pSVar1 = new IntSetting(4, 0, 10);
		this.BombRange = pSVar1;
		pSVar1 = new IntSetting(6, 0, 10);
		this.BombSpeed = pSVar1;
		pSVar1 = new IntSetting(4, 0, 10);
		this.BombCooldown = pSVar1;
		pSVar2 = new BoolSetting(false);
		this.CursorCooldown = pSVar2;
		pSVar2 = new BoolSetting(false);
		this.ShowBombColors = pSVar2;
		pSVar2 = new BoolSetting(false);
		this.UseOldEffect = pSVar2;
		pSVar2 = new BoolSetting(false);
		this.BombCollision = pSVar2;
		base();
		return;
	}
}
