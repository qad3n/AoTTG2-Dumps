// ==================== AoTTG2 cross-reference ====================
// Type: Settings.ISetSettingsContainer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/ISetSettingsContainer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x200010D")]
internal interface ISetSettingsContainer
{
	[Token(Token = "0x6000599")]
	BaseSetSetting GetSelectedSet();

	[Token(Token = "0x600059A")]
	IntSetting GetSelectedSetIndex();

	[Token(Token = "0x600059B")]
	IListSetting GetSets();

	[Token(Token = "0x600059C")]
	string[] GetSetNames();

	[Token(Token = "0x600059D")]
	void CreateSet(string name);

	[Token(Token = "0x600059E")]
	void CopySelectedSet(string name);

	[Token(Token = "0x600059F")]
	void DeleteSelectedSet();

	[Token(Token = "0x60005A0")]
	bool CanDeleteSelectedSet();

	[Token(Token = "0x60005A1")]
	bool CanEditSelectedSet();

	[Token(Token = "0x60005A2")]
	void SetPresetsFromJsonString(string json);
}
