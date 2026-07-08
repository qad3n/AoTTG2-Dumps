using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000C4")]
internal class SettingsManager
{
	[Token(Token = "0x4000491")]
	[FieldOffset(Offset = "0x0")]
	public static MultiplayerSettings MultiplayerSettings;

	[Token(Token = "0x4000492")]
	[FieldOffset(Offset = "0x8")]
	public static ProfileSettings ProfileSettings;

	[Token(Token = "0x4000493")]
	[FieldOffset(Offset = "0x10")]
	public static CustomSkinSettings CustomSkinSettings;

	[Token(Token = "0x4000494")]
	[FieldOffset(Offset = "0x18")]
	public static GraphicsSettings GraphicsSettings;

	[Token(Token = "0x4000495")]
	[FieldOffset(Offset = "0x20")]
	public static GeneralSettings GeneralSettings;

	[Token(Token = "0x4000496")]
	[FieldOffset(Offset = "0x28")]
	public static UISettings UISettings;

	[Token(Token = "0x4000497")]
	[FieldOffset(Offset = "0x30")]
	public static AbilitySettings AbilitySettings;

	[Token(Token = "0x4000498")]
	[FieldOffset(Offset = "0x38")]
	public static InputSettings InputSettings;

	[Token(Token = "0x4000499")]
	[FieldOffset(Offset = "0x40")]
	public static InGameSettings InGameSettings;

	[Token(Token = "0x400049A")]
	[FieldOffset(Offset = "0x48")]
	public static WeatherSettings WeatherSettings;

	[Token(Token = "0x400049B")]
	[FieldOffset(Offset = "0x50")]
	public static InGameSet InGameCurrent;

	[Token(Token = "0x400049C")]
	[FieldOffset(Offset = "0x58")]
	public static InGameSet InGameUI;

	[Token(Token = "0x400049D")]
	[FieldOffset(Offset = "0x60")]
	public static HumanCustomSettings HumanCustomSettings;

	[Token(Token = "0x400049E")]
	[FieldOffset(Offset = "0x68")]
	public static TitanCustomSettings TitanCustomSettings;

	[Token(Token = "0x400049F")]
	[FieldOffset(Offset = "0x70")]
	public static InGameCharacterSettings InGameCharacterSettings;

	[Token(Token = "0x40004A0")]
	[FieldOffset(Offset = "0x78")]
	public static MapEditorSettings MapEditorSettings;

	[Token(Token = "0x40004A1")]
	[FieldOffset(Offset = "0x80")]
	public static SoundSettings SoundSettings;

	[Token(Token = "0x40004A2")]
	[FieldOffset(Offset = "0x88")]
	public static EmoteSettings EmoteSettings;

	[Token(Token = "0x14000001")]
	public static event Action OnSettingsChanged
	{
		[Token(Token = "0x6000400")]
		[Address(RVA = "0x3E11F70", Offset = "0x3E11F70", VA = "0x3E11F70")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000401")]
		[Address(RVA = "0x3E12030", Offset = "0x3E12030", VA = "0x3E12030")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000402")]
	[Address(RVA = "0x3E120F0", Offset = "0x3E120F0", VA = "0x3E120F0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6000403")]
	[Address(RVA = "0x3E14490", Offset = "0x3E14490", VA = "0x3E14490")]
	public static void NotifySettingsChanged()
	{
	}

	[Token(Token = "0x6000404")]
	[Address(RVA = "0x3E144E0", Offset = "0x3E144E0", VA = "0x3E144E0")]
	public SettingsManager()
	{
	}
}
