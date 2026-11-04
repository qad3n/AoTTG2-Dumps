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

[Token(Token = "0x20000E5")]
internal class SettingsManager
{
	[Token(Token = "0x4000536")]
	[FieldOffset(Offset = "0x0")]
	public static MultiplayerSettings MultiplayerSettings;

	[Token(Token = "0x4000537")]
	[FieldOffset(Offset = "0x8")]
	public static ProfileSettings ProfileSettings;

	[Token(Token = "0x4000538")]
	[FieldOffset(Offset = "0x10")]
	public static CustomSkinSettings CustomSkinSettings;

	[Token(Token = "0x4000539")]
	[FieldOffset(Offset = "0x18")]
	public static GraphicsSettings GraphicsSettings;

	[Token(Token = "0x400053A")]
	[FieldOffset(Offset = "0x20")]
	public static GeneralSettings GeneralSettings;

	[Token(Token = "0x400053B")]
	[FieldOffset(Offset = "0x28")]
	public static UISettings UISettings;

	[Token(Token = "0x400053C")]
	[FieldOffset(Offset = "0x30")]
	public static AbilitySettings AbilitySettings;

	[Token(Token = "0x400053D")]
	[FieldOffset(Offset = "0x38")]
	public static InputSettings InputSettings;

	[Token(Token = "0x400053E")]
	[FieldOffset(Offset = "0x40")]
	public static InGameSettings InGameSettings;

	[Token(Token = "0x400053F")]
	[FieldOffset(Offset = "0x48")]
	public static WeatherSettings WeatherSettings;

	[Token(Token = "0x4000540")]
	[FieldOffset(Offset = "0x50")]
	public static InGameSet InGameCurrent;

	[Token(Token = "0x4000541")]
	[FieldOffset(Offset = "0x58")]
	public static InGameSet InGameUI;

	[Token(Token = "0x4000542")]
	[FieldOffset(Offset = "0x60")]
	public static HumanCustomSettings HumanCustomSettings;

	[Token(Token = "0x4000543")]
	[FieldOffset(Offset = "0x68")]
	public static TitanCustomSettings TitanCustomSettings;

	[Token(Token = "0x4000544")]
	[FieldOffset(Offset = "0x70")]
	public static InGameCharacterSettings InGameCharacterSettings;

	[Token(Token = "0x4000545")]
	[FieldOffset(Offset = "0x78")]
	public static MapEditorSettings MapEditorSettings;

	[Token(Token = "0x4000546")]
	[FieldOffset(Offset = "0x80")]
	public static SoundSettings SoundSettings;

	[Token(Token = "0x4000547")]
	[FieldOffset(Offset = "0x88")]
	public static EmoteSettings EmoteSettings;

	[Token(Token = "0x4000548")]
	[FieldOffset(Offset = "0x90")]
	public static AdvancedSettings AdvancedSettings;

	[Token(Token = "0x4000549")]
	[FieldOffset(Offset = "0x98")]
	[CompilerGenerated]
	private static Action m_OnSettingsChanged;

	[Token(Token = "0x14000001")]
	public static event Action OnSettingsChanged
	{
		[Token(Token = "0x600049F")]
		[Address(RVA = "0x1F26560", Offset = "0x1F24B60", VA = "0x181F26560")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60004A0")]
		[Address(RVA = "0x1F26620", Offset = "0x1F24C20", VA = "0x181F26620")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x1F25B20", Offset = "0x1F24120", VA = "0x181F25B20")]
	public static void Init()
	{
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x1F26510", Offset = "0x1F24B10", VA = "0x181F26510")]
	public static void NotifySettingsChanged()
	{
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public SettingsManager()
	{
	}
}
