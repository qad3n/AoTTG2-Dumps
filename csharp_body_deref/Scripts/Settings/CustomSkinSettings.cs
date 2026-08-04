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
	[Token(Token = "0x4000207")]
	[FieldOffset(Offset = "0x20")]
	public HumanCustomSkinSettings Human;

	[Token(Token = "0x4000208")]
	[FieldOffset(Offset = "0x28")]
	public BaseCustomSkinSettings<TitanCustomSkinSet> Titan;

	[Token(Token = "0x4000209")]
	[FieldOffset(Offset = "0x30")]
	public BaseCustomSkinSettings<ShifterCustomSkinSet> Shifter;

	[Token(Token = "0x400020A")]
	[FieldOffset(Offset = "0x38")]
	public BaseCustomSkinSettings<SkyboxCustomSkinSet> Skybox;

	[Token(Token = "0x17000087")]
	protected override string FileName
	{
		[Token(Token = "0x600030B")]
		[Address(RVA = "0x3F854D0", Offset = "0x3F854D0", VA = "0x3F854D0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600030C")]
	[Address(RVA = "0x3F85500", Offset = "0x3F85500", VA = "0x3F85500")]
	public CustomSkinSettings()
	{
	}
}
