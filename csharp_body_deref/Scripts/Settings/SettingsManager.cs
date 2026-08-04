// ==================== AoTTG2 cross-reference ====================
// Type: Settings.SettingsManager
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Settings/SettingsManager.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingsManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000AA")]
internal class SettingsManager
{
	[Token(Token = "0x4000469")]
	[FieldOffset(Offset = "0x0")]
	public static MultiplayerSettings MultiplayerSettings;

	[Token(Token = "0x400046A")]
	[FieldOffset(Offset = "0x8")]
	public static ProfileSettings ProfileSettings;

	[Token(Token = "0x400046B")]
	[FieldOffset(Offset = "0x10")]
	public static CustomSkinSettings CustomSkinSettings;

	[Token(Token = "0x400046C")]
	[FieldOffset(Offset = "0x18")]
	public static GraphicsSettings GraphicsSettings;

	[Token(Token = "0x400046D")]
	[FieldOffset(Offset = "0x20")]
	public static GeneralSettings GeneralSettings;

	[Token(Token = "0x400046E")]
	[FieldOffset(Offset = "0x28")]
	public static UISettings UISettings;

	[Token(Token = "0x400046F")]
	[FieldOffset(Offset = "0x30")]
	public static AbilitySettings AbilitySettings;

	[Token(Token = "0x4000470")]
	[FieldOffset(Offset = "0x38")]
	public static InputSettings InputSettings;

	[Token(Token = "0x4000471")]
	[FieldOffset(Offset = "0x40")]
	public static InGameSettings InGameSettings;

	[Token(Token = "0x4000472")]
	[FieldOffset(Offset = "0x48")]
	public static WeatherSettings WeatherSettings;

	[Token(Token = "0x4000473")]
	[FieldOffset(Offset = "0x50")]
	public static InGameSet InGameCurrent;

	[Token(Token = "0x4000474")]
	[FieldOffset(Offset = "0x58")]
	public static InGameSet InGameUI;

	[Token(Token = "0x4000475")]
	[FieldOffset(Offset = "0x60")]
	public static HumanCustomSettings HumanCustomSettings;

	[Token(Token = "0x4000476")]
	[FieldOffset(Offset = "0x68")]
	public static TitanCustomSettings TitanCustomSettings;

	[Token(Token = "0x4000477")]
	[FieldOffset(Offset = "0x70")]
	public static InGameCharacterSettings InGameCharacterSettings;

	[Token(Token = "0x4000478")]
	[FieldOffset(Offset = "0x78")]
	public static MapEditorSettings MapEditorSettings;

	[Token(Token = "0x4000479")]
	[FieldOffset(Offset = "0x80")]
	public static SoundSettings SoundSettings;

	[Token(Token = "0x400047A")]
	[FieldOffset(Offset = "0x88")]
	public static EmoteSettings EmoteSettings;

	[Token(Token = "0x400047B")]
	[FieldOffset(Offset = "0x90")]
	public static AdvancedSettings AdvancedSettings;

	[Token(Token = "0x14000001")]
	public static event Action OnSettingsChanged
	{
		[Token(Token = "0x600035F")]
		[Address(RVA = "0x40FA6B0", Offset = "0x40FA6B0", VA = "0x40FA6B0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000360")]
		[Address(RVA = "0x40FA770", Offset = "0x40FA770", VA = "0x40FA770")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000361")]
	[Address(RVA = "0x40FA830", Offset = "0x40FA830", VA = "0x40FA830")]
	public static void Init()
	{
	}

	[Token(Token = "0x6000362")]
	[Address(RVA = "0x40FCC10", Offset = "0x40FCC10", VA = "0x40FCC10")]
	public static void NotifySettingsChanged()
	{
	}

	[Token(Token = "0x6000363")]
	[Address(RVA = "0x40FCC60", Offset = "0x40FCC60", VA = "0x40FCC60")]
	public SettingsManager()
	{
	}
}
