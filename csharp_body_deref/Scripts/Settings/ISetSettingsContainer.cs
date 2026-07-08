using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000B2")]
internal interface ISetSettingsContainer
{
	[Token(Token = "0x600038A")]
	BaseSetSetting GetSelectedSet();

	[Token(Token = "0x600038B")]
	IntSetting GetSelectedSetIndex();

	[Token(Token = "0x600038C")]
	IListSetting GetSets();

	[Token(Token = "0x600038D")]
	string[] GetSetNames();

	[Token(Token = "0x600038E")]
	void CreateSet(string name);

	[Token(Token = "0x600038F")]
	void CopySelectedSet(string name);

	[Token(Token = "0x6000390")]
	void DeleteSelectedSet();

	[Token(Token = "0x6000391")]
	bool CanDeleteSelectedSet();

	[Token(Token = "0x6000392")]
	bool CanEditSelectedSet();

	[Token(Token = "0x6000393")]
	void SetPresetsFromJsonString(string json);
}
