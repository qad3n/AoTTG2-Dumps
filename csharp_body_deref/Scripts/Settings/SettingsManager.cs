// ==================== AoTTG2 cross-reference ====================
// Type: Settings.SettingsManager
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/SettingsManager.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingsManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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
		}
		[Token(Token = "0x600061E")]
		[Address(RVA = "0x5B7D470", Offset = "0x5B7C470", VA = "0x5B7D470")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600061F")]
	[Address(RVA = "0x5B7D520", Offset = "0x5B7C520", VA = "0x5B7D520")]
	public static void Init()
	{
	}

	[Token(Token = "0x6000620")]
	[Address(RVA = "0x5B7EB50", Offset = "0x5B7DB50", VA = "0x5B7EB50")]
	public static void NotifySettingsChanged()
	{
	}

	[Token(Token = "0x6000621")]
	[Address(RVA = "0x5B7EBA0", Offset = "0x5B7DBA0", VA = "0x5B7EBA0")]
	public SettingsManager()
	{
	}
}
