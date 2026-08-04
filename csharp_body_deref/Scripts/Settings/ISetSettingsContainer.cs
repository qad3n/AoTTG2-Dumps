// ==================== AoTTG2 cross-reference ====================
// Type: Settings.ISetSettingsContainer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/ISetSettingsContainer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000B8")]
internal interface ISetSettingsContainer
{
	[Token(Token = "0x60003AD")]
	BaseSetSetting GetSelectedSet();

	[Token(Token = "0x60003AE")]
	IntSetting GetSelectedSetIndex();

	[Token(Token = "0x60003AF")]
	IListSetting GetSets();

	[Token(Token = "0x60003B0")]
	string[] GetSetNames();

	[Token(Token = "0x60003B1")]
	void CreateSet(string name);

	[Token(Token = "0x60003B2")]
	void CopySelectedSet(string name);

	[Token(Token = "0x60003B3")]
	void DeleteSelectedSet();

	[Token(Token = "0x60003B4")]
	bool CanDeleteSelectedSet();

	[Token(Token = "0x60003B5")]
	bool CanEditSelectedSet();

	[Token(Token = "0x60003B6")]
	void SetPresetsFromJsonString(string json);
}
