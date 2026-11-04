// ==================== AoTTG2 cross-reference ====================
// Type: Settings.CustomSkinSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/CustomSkinSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/CustomSkins/CustomSkinSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000068")]
internal class CustomSkinSettings : SaveableSettingsContainer
{
	[Token(Token = "0x4000213")]
	[FieldOffset(Offset = "0x38")]
	public HumanCustomSkinSettings Human;

	[Token(Token = "0x4000214")]
	[FieldOffset(Offset = "0x40")]
	public BaseCustomSkinSettings<TitanCustomSkinSet> Titan;

	[Token(Token = "0x4000215")]
	[FieldOffset(Offset = "0x48")]
	public BaseCustomSkinSettings<ShifterCustomSkinSet> Shifter;

	[Token(Token = "0x4000216")]
	[FieldOffset(Offset = "0x50")]
	public BaseCustomSkinSettings<SkyboxCustomSkinSet> Skybox;

	[Token(Token = "0x17000089")]
	protected override string FileName
	{
		[Token(Token = "0x600031B")]
		[Address(RVA = "0x1DBA500", Offset = "0x1DB8B00", VA = "0x181DBA500", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x1DBA3C0", Offset = "0x1DB89C0", VA = "0x181DBA3C0")]
	public CustomSkinSettings()
	{
	}
}
