// ==================== AoTTG2 cross-reference ====================
// Type: Settings.ErenShifterInputSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/ErenShifterInputSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/ErenShifterInputSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x200009A")]
internal class ErenShifterInputSettings : SaveableSettingsContainer
{
	[Token(Token = "0x400038C")]
	[FieldOffset(Offset = "0x20")]
	public KeybindSetting Kick;

	[Token(Token = "0x400038D")]
	[FieldOffset(Offset = "0x28")]
	public KeybindSetting Jump;

	[Token(Token = "0x400038E")]
	[FieldOffset(Offset = "0x30")]
	public KeybindSetting Walk;

	[Token(Token = "0x400038F")]
	[FieldOffset(Offset = "0x38")]
	public KeybindSetting AttackCombo;

	[Token(Token = "0x17000090")]
	protected override string FileName
	{
		[Token(Token = "0x600033C")]
		[Address(RVA = "0x3F8D630", Offset = "0x3F8D630", VA = "0x3F8D630", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600033D")]
	[Address(RVA = "0x3F8D660", Offset = "0x3F8D660", VA = "0x3F8D660")]
	public ErenShifterInputSettings()
	{
	}
}
