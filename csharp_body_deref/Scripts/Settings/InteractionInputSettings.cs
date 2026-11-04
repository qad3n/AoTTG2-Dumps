// ==================== AoTTG2 cross-reference ====================
// Type: Settings.InteractionInputSettings
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Settings/InteractionInputSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/InteractionInputSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000BD")]
internal class InteractionInputSettings : SaveableSettingsContainer
{
	[Token(Token = "0x4000452")]
	[FieldOffset(Offset = "0x38")]
	public KeybindSetting Interact;

	[Token(Token = "0x4000453")]
	[FieldOffset(Offset = "0x40")]
	public KeybindSetting Interact2;

	[Token(Token = "0x4000454")]
	[FieldOffset(Offset = "0x48")]
	public KeybindSetting Interact3;

	[Token(Token = "0x4000455")]
	[FieldOffset(Offset = "0x50")]
	public KeybindSetting ItemMenu;

	[Token(Token = "0x4000456")]
	[FieldOffset(Offset = "0x58")]
	public KeybindSetting ActionMenu;

	[Token(Token = "0x4000457")]
	[FieldOffset(Offset = "0x60")]
	public KeybindSetting EmoteMenu;

	[Token(Token = "0x4000458")]
	[FieldOffset(Offset = "0x68")]
	public KeybindSetting MenuNext;

	[Token(Token = "0x4000459")]
	[FieldOffset(Offset = "0x70")]
	public KeybindSetting QuickSelect1;

	[Token(Token = "0x400045A")]
	[FieldOffset(Offset = "0x78")]
	public KeybindSetting QuickSelect2;

	[Token(Token = "0x400045B")]
	[FieldOffset(Offset = "0x80")]
	public KeybindSetting QuickSelect3;

	[Token(Token = "0x400045C")]
	[FieldOffset(Offset = "0x88")]
	public KeybindSetting QuickSelect4;

	[Token(Token = "0x400045D")]
	[FieldOffset(Offset = "0x90")]
	public KeybindSetting QuickSelect5;

	[Token(Token = "0x400045E")]
	[FieldOffset(Offset = "0x98")]
	public KeybindSetting QuickSelect6;

	[Token(Token = "0x400045F")]
	[FieldOffset(Offset = "0xA0")]
	public KeybindSetting QuickSelect7;

	[Token(Token = "0x4000460")]
	[FieldOffset(Offset = "0xA8")]
	public KeybindSetting QuickSelect8;

	[Token(Token = "0x4000461")]
	[FieldOffset(Offset = "0xB0")]
	public KeybindSetting Function1;

	[Token(Token = "0x4000462")]
	[FieldOffset(Offset = "0xB8")]
	public KeybindSetting Function2;

	[Token(Token = "0x4000463")]
	[FieldOffset(Offset = "0xC0")]
	public KeybindSetting Function3;

	[Token(Token = "0x4000464")]
	[FieldOffset(Offset = "0xC8")]
	public KeybindSetting Function4;

	[Token(Token = "0x1700009F")]
	protected override string FileName
	{
		[Token(Token = "0x60003CB")]
		[Address(RVA = "0x1F1EA60", Offset = "0x1F1D060", VA = "0x181F1EA60", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x1F1DEE0", Offset = "0x1F1C4E0", VA = "0x181F1DEE0")]
	public InteractionInputSettings()
	{
	}
}
