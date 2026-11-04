// ==================== AoTTG2 cross-reference ====================
// Type: Settings.HumanCustomSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/HumanCustomSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/HumanCustomSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000A4")]
internal class HumanCustomSettings : PresetSettingsContainer
{
	[Token(Token = "0x4000363")]
	[FieldOffset(Offset = "0x38")]
	public SetSettingsContainer<HumanCustomSet> CustomSets;

	[Token(Token = "0x4000364")]
	[FieldOffset(Offset = "0x40")]
	public SetSettingsContainer<HumanCustomSet> Costume1Sets;

	[Token(Token = "0x4000365")]
	[FieldOffset(Offset = "0x48")]
	public SetSettingsContainer<HumanCustomSet> Costume2Sets;

	[Token(Token = "0x4000366")]
	[FieldOffset(Offset = "0x50")]
	public SetSettingsContainer<HumanCustomSet> Costume3Sets;

	[Token(Token = "0x17000096")]
	protected override string FileName
	{
		[Token(Token = "0x60003A5")]
		[Address(RVA = "0x1F17F10", Offset = "0x1F16510", VA = "0x181F17F10", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x1F17DF0", Offset = "0x1F163F0", VA = "0x181F17DF0")]
	public HumanCustomSettings()
	{
	}
}
