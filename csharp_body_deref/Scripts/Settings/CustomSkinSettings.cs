// ==================== AoTTG2 cross-reference ====================
// Type: Settings.CustomSkinSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/CustomSkinSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/CustomSkins/CustomSkinSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000A0")]
internal class CustomSkinSettings : SaveableSettingsContainer
{
	[Token(Token = "0x4000344")]
	[FieldOffset(Offset = "0x38")]
	public HumanCustomSkinSettings Human;

	[Token(Token = "0x4000345")]
	[FieldOffset(Offset = "0x40")]
	public BaseCustomSkinSettings<TitanCustomSkinSet> Titan;

	[Token(Token = "0x4000346")]
	[FieldOffset(Offset = "0x48")]
	public BaseCustomSkinSettings<ShifterCustomSkinSet> Shifter;

	[Token(Token = "0x4000347")]
	[FieldOffset(Offset = "0x50")]
	public BaseCustomSkinSettings<SkyboxCustomSkinSet> Skybox;

	[Token(Token = "0x170000A6")]
	protected override string FileName
	{
		[Token(Token = "0x6000486")]
		[Address(RVA = "0x58D1830", Offset = "0x58D0830", VA = "0x58D1830", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x58D1860", Offset = "0x58D0860", VA = "0x58D1860")]
	public CustomSkinSettings()
	{
	}
}
