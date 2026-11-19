// ==================== AoTTG2 cross-reference ====================
// Type: Settings.CustomSkinSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/CustomSkinSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/CustomSkins/CustomSkinSettings.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
			// Lifted from source/cpp/Settings/CustomSkinSettings.c (Settings.CustomSkinSettings$$get_FileName): clean
			return "CustomSkins.json";
		}
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x58D1860", Offset = "0x58D0860", VA = "0x58D1860")]
	public CustomSkinSettings()
	{
		// Lifted from source/cpp/Settings/CustomSkinSettings.c (Settings.CustomSkinSettings$$.ctor): 1 lines keep C-only constructs
		HumanCustomSkinSettings __this_00;
		BaseCustomSkinSettings<TitanCustomSkinSet> __this_01;
		BaseCustomSkinSettings<ShifterCustomSkinSet> __this_02;
		BaseCustomSkinSettings<SkyboxCustomSkinSet> __this_03;

		if (Il2CppMethodInitialized_07545c7d == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(BaseCustomSkinSettings<ShifterCustomSkinSet>)) ;
			Il2CppMethodInitialized_07545c7d = true;
		}
		__this_00 = new HumanCustomSkinSettings();
		this.Human = __this_00;
		__this_01 = new BaseCustomSkinSettings<TitanCustomSkinSet>();
		this.Titan = __this_01;
		__this_02 = new BaseCustomSkinSettings<ShifterCustomSkinSet>();
		this.Shifter = __this_02;
		__this_03 = new BaseCustomSkinSettings<SkyboxCustomSkinSet>();
		this.Skybox = __this_03;
		base();
		return;
	}
}
