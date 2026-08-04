// ==================== AoTTG2 cross-reference ====================
// Type: Settings.TitanCustomSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/TitanCustomSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/TitanCustomSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000096")]
internal class TitanCustomSettings : PresetSettingsContainer
{
	[Token(Token = "0x4000368")]
	[FieldOffset(Offset = "0x20")]
	public SetSettingsContainer<TitanCustomSet> TitanCustomSets;

	[Token(Token = "0x1700008D")]
	protected override string FileName
	{
		[Token(Token = "0x6000335")]
		[Address(RVA = "0x3F8C6F0", Offset = "0x3F8C6F0", VA = "0x3F8C6F0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000336")]
	[Address(RVA = "0x3F8C720", Offset = "0x3F8C720", VA = "0x3F8C720")]
	public TitanCustomSettings()
	{
	}
}
