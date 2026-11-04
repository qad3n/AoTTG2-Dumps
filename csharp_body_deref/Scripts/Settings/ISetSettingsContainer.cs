// ==================== AoTTG2 cross-reference ====================
// Type: Settings.ISetSettingsContainer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/ISetSettingsContainer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000D2")]
internal interface ISetSettingsContainer
{
	[Token(Token = "0x600041B")]
	BaseSetSetting GetSelectedSet();

	[Token(Token = "0x600041C")]
	IntSetting GetSelectedSetIndex();

	[Token(Token = "0x600041D")]
	IListSetting GetSets();

	[Token(Token = "0x600041E")]
	string[] GetSetNames();

	[Token(Token = "0x600041F")]
	void CreateSet(string name);

	[Token(Token = "0x6000420")]
	void CopySelectedSet(string name);

	[Token(Token = "0x6000421")]
	void DeleteSelectedSet();

	[Token(Token = "0x6000422")]
	bool CanDeleteSelectedSet();

	[Token(Token = "0x6000423")]
	bool CanEditSelectedSet();

	[Token(Token = "0x6000424")]
	void SetPresetsFromJsonString(string json);
}
