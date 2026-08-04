// ==================== AoTTG2 cross-reference ====================
// Type: Settings.BaseCustomSkinSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/BaseCustomSkinSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/CustomSkins/BaseCustomSkinSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000066")]
internal class BaseCustomSkinSettings<T> : SetSettingsContainer<T>, ICustomSkinSettings, ISetSettingsContainer where T : BaseSetSetting, new()
{
	[Token(Token = "0x4000200")]
	[FieldOffset(Offset = "0x0")]
	public BoolSetting SkinsLocal;

	[Token(Token = "0x4000201")]
	[FieldOffset(Offset = "0x0")]
	public BoolSetting SkinsEnabled;

	[Token(Token = "0x4000202")]
	[FieldOffset(Offset = "0x0")]
	public ListSetting<T> SkinSets;

	[Token(Token = "0x6000305")]
	public BoolSetting GetSkinsEnabled()
	{
		return null;
	}

	[Token(Token = "0x6000306")]
	public IListSetting GetSkinSets()
	{
		return null;
	}

	[Token(Token = "0x6000307")]
	public BoolSetting GetSkinsLocal()
	{
		return null;
	}

	[Token(Token = "0x6000308")]
	public BaseCustomSkinSettings()
	{
	}
}
