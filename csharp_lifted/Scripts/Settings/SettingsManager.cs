// ==================== AoTTG2 cross-reference ====================
// Type: Settings.SettingsManager
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/SettingsManager.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingsManager.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000120")]
internal class SettingsManager
{
	[Token(Token = "0x4000675")]
	[FieldOffset(Offset = "0x0")]
	public static MultiplayerSettings MultiplayerSettings;

	[Token(Token = "0x4000676")]
	[FieldOffset(Offset = "0x8")]
	public static ProfileSettings ProfileSettings;

	[Token(Token = "0x4000677")]
	[FieldOffset(Offset = "0x10")]
	public static CustomSkinSettings CustomSkinSettings;

	[Token(Token = "0x4000678")]
	[FieldOffset(Offset = "0x18")]
	public static GraphicsSettings GraphicsSettings;

	[Token(Token = "0x4000679")]
	[FieldOffset(Offset = "0x20")]
	public static GeneralSettings GeneralSettings;

	[Token(Token = "0x400067A")]
	[FieldOffset(Offset = "0x28")]
	public static UISettings UISettings;

	[Token(Token = "0x400067B")]
	[FieldOffset(Offset = "0x30")]
	public static AbilitySettings AbilitySettings;

	[Token(Token = "0x400067C")]
	[FieldOffset(Offset = "0x38")]
	public static InputSettings InputSettings;

	[Token(Token = "0x400067D")]
	[FieldOffset(Offset = "0x40")]
	public static InGameSettings InGameSettings;

	[Token(Token = "0x400067E")]
	[FieldOffset(Offset = "0x48")]
	public static WeatherSettings WeatherSettings;

	[Token(Token = "0x400067F")]
	[FieldOffset(Offset = "0x50")]
	public static InGameSet InGameCurrent;

	[Token(Token = "0x4000680")]
	[FieldOffset(Offset = "0x58")]
	public static InGameSet InGameUI;

	[Token(Token = "0x4000681")]
	[FieldOffset(Offset = "0x60")]
	public static HumanCustomSettings HumanCustomSettings;

	[Token(Token = "0x4000682")]
	[FieldOffset(Offset = "0x68")]
	public static TitanCustomSettings TitanCustomSettings;

	[Token(Token = "0x4000683")]
	[FieldOffset(Offset = "0x70")]
	public static InGameCharacterSettings InGameCharacterSettings;

	[Token(Token = "0x4000684")]
	[FieldOffset(Offset = "0x78")]
	public static MapEditorSettings MapEditorSettings;

	[Token(Token = "0x4000685")]
	[FieldOffset(Offset = "0x80")]
	public static SoundSettings SoundSettings;

	[Token(Token = "0x4000686")]
	[FieldOffset(Offset = "0x88")]
	public static EmoteSettings EmoteSettings;

	[Token(Token = "0x4000687")]
	[FieldOffset(Offset = "0x90")]
	public static AdvancedSettings AdvancedSettings;

	[Token(Token = "0x4000688")]
	[FieldOffset(Offset = "0x98")]
	[CompilerGenerated]
	private static Action m_OnSettingsChanged;

	[Token(Token = "0x14000002")]
	public static event Action OnSettingsChanged
	{
		[Token(Token = "0x600061D")]
		[Address(RVA = "0x5B7D3C0", Offset = "0x5B7C3C0", VA = "0x5B7D3C0")]
		[CompilerGenerated]
		add
		{
			// Lifted from source/cpp/Settings/SettingsManager.c (Settings.SettingsManager$$add_OnSettingsChanged): 2 lines keep C-only constructs
			Action pSVar1;
			Delegate value_00;
			Action a;
			bool bVar2;

			a = SettingsManager.OnSettingsChanged;
			while(true) {
				value_00 = Delegate.Combine((Delegate)a, (Delegate)value);
				if ((value_00 != null) &&((Action)value_00.klass != typeof(Action))) break;
				pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref(&SettingsManager.OnSettingsChanged, value_00, a);
				bVar2 = pSVar1 == a;
				a = pSVar1;
				if (bVar2) {
					return;
				}
			}
			throw new InvalidCastException();
		}
		[Token(Token = "0x600061E")]
		[Address(RVA = "0x5B7D470", Offset = "0x5B7C470", VA = "0x5B7D470")]
		[CompilerGenerated]
		remove
		{
			// Lifted from source/cpp/Settings/SettingsManager.c (Settings.SettingsManager$$remove_OnSettingsChanged): 2 lines keep C-only constructs
			Action pSVar1;
			Delegate value_00;
			Action source;
			bool bVar2;

			source = SettingsManager.OnSettingsChanged;
			while(true) {
				value_00 = Delegate.Remove((Delegate)source, (Delegate)value);
				if ((value_00 != null) &&((Action)value_00.klass != typeof(Action))) break;
				pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref(&SettingsManager.OnSettingsChanged, value_00, source);
				bVar2 = pSVar1 == source;
				source = pSVar1;
				if (bVar2) {
					return;
				}
			}
			throw new InvalidCastException();
		}
	}

	[Token(Token = "0x600061F")]
	[Address(RVA = "0x5B7D520", Offset = "0x5B7C520", VA = "0x5B7D520")]
	public static void Init()
	{
		// Lifted from source/cpp/Settings/SettingsManager.c (Settings.SettingsManager$$Init): clean
		Settings_SettingsManager_StaticFields pSVar1;
		MultiplayerSettings __this;
		ProfileSettings __this_00;
		CustomSkinSettings __this_01;
		GraphicsSettings __this_02;
		GeneralSettings __this_03;
		UISettings __this_04;
		AbilitySettings __this_05;
		InputSettings __this_06;
		InGameSettings __this_07;
		WeatherSettings __this_08;
		InGameSet pSVar2;
		HumanCustomSettings __this_09;
		TitanCustomSettings __this_10;
		InGameCharacterSettings __this_11;
		MapEditorSettings __this_12;
		SoundSettings __this_13;
		EmoteSettings __this_14;
		AdvancedSettings __this_15;

		__this = new MultiplayerSettings();
		SettingsManager.MultiplayerSettings = __this;
		__this_00 = new ProfileSettings();
		pSVar1 = typeof(SettingsManager).static_fields;
		pSVar1.ProfileSettings = __this_00;
		__this_01 = new CustomSkinSettings();
		pSVar1 = typeof(SettingsManager).static_fields;
		pSVar1.CustomSkinSettings = __this_01;
		__this_02 = new GraphicsSettings();
		pSVar1 = typeof(SettingsManager).static_fields;
		pSVar1.GraphicsSettings = __this_02;
		__this_03 = new GeneralSettings();
		pSVar1 = typeof(SettingsManager).static_fields;
		pSVar1.GeneralSettings = __this_03;
		__this_04 = new UISettings();
		pSVar1 = typeof(SettingsManager).static_fields;
		pSVar1.UISettings = __this_04;
		__this_05 = new AbilitySettings();
		pSVar1 = typeof(SettingsManager).static_fields;
		pSVar1.AbilitySettings = __this_05;
		__this_06 = new InputSettings();
		pSVar1 = typeof(SettingsManager).static_fields;
		pSVar1.InputSettings = __this_06;
		__this_07 = new InGameSettings();
		pSVar1 = typeof(SettingsManager).static_fields;
		pSVar1.InGameSettings = __this_07;
		__this_08 = new WeatherSettings();
		pSVar1 = typeof(SettingsManager).static_fields;
		pSVar1.WeatherSettings = __this_08;
		pSVar2 = new InGameSet();
		pSVar1 = typeof(SettingsManager).static_fields;
		pSVar1.InGameCurrent = pSVar2;
		pSVar2 = new InGameSet();
		pSVar1 = typeof(SettingsManager).static_fields;
		pSVar1.InGameUI = pSVar2;
		__this_09 = new HumanCustomSettings();
		pSVar1 = typeof(SettingsManager).static_fields;
		pSVar1.HumanCustomSettings = __this_09;
		__this_10 = new TitanCustomSettings();
		pSVar1 = typeof(SettingsManager).static_fields;
		pSVar1.TitanCustomSettings = __this_10;
		__this_11 = new InGameCharacterSettings();
		pSVar1 = typeof(SettingsManager).static_fields;
		pSVar1.InGameCharacterSettings = __this_11;
		__this_12 = new MapEditorSettings();
		pSVar1 = typeof(SettingsManager).static_fields;
		pSVar1.MapEditorSettings = __this_12;
		__this_13 = new SoundSettings();
		pSVar1 = typeof(SettingsManager).static_fields;
		pSVar1.SoundSettings = __this_13;
		__this_14 = new EmoteSettings();
		pSVar1 = typeof(SettingsManager).static_fields;
		pSVar1.EmoteSettings = __this_14;
		__this_15 = new AdvancedSettings();
		pSVar1 = typeof(SettingsManager).static_fields;
		pSVar1.AdvancedSettings = __this_15;
		return;
	}

	[Token(Token = "0x6000620")]
	[Address(RVA = "0x5B7EB50", Offset = "0x5B7DB50", VA = "0x5B7EB50")]
	public static void NotifySettingsChanged()
	{
		// Lifted from source/cpp/Settings/SettingsManager.c (Settings.SettingsManager$$NotifySettingsChanged): 2 lines keep C-only constructs
		Action pSVar1;
		code *vtableDispatch;
		ulong in_RDX;

		pSVar1 = SettingsManager.OnSettingsChanged;
		if (pSVar1 == null) {
			return;
		}
		vtableDispatch = (code)pSVar1.invoke_impl;
		(*vtableDispatch)(pSVar1.method_code,pSVar1.method,in_RDX,vtableDispatch);
		return;
	}

	[Token(Token = "0x6000621")]
	[Address(RVA = "0x5B7EBA0", Offset = "0x5B7DBA0", VA = "0x5B7EBA0")]
	public SettingsManager()
	{
		// Lifted from source/cpp/Settings/SettingsManager.c (Settings.SettingsManager$$.ctor): clean
		base();
		return;
	}
}
