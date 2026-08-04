// ==================== AoTTG2 cross-reference ====================
// Type: Settings.ICustomSkinSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Scripts/Settings/CustomSkins/ICustomSkinSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x200006C")]
internal interface ICustomSkinSettings : ISetSettingsContainer
{
	[Token(Token = "0x6000311")]
	BoolSetting GetSkinsLocal();

	[Token(Token = "0x6000312")]
	BoolSetting GetSkinsEnabled();

	[Token(Token = "0x6000313")]
	IListSetting GetSkinSets();
}
