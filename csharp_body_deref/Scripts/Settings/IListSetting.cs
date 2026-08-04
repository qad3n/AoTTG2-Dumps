// ==================== AoTTG2 cross-reference ====================
// Type: Settings.IListSetting
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/IListSetting.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000B4")]
internal interface IListSetting
{
	[Token(Token = "0x6000395")]
	int GetCount();

	[Token(Token = "0x6000396")]
	BaseSetting GetItemAt(int index);

	[Token(Token = "0x6000397")]
	List<BaseSetting> GetItems();

	[Token(Token = "0x6000398")]
	void AddItem(BaseSetting item);

	[Token(Token = "0x6000399")]
	void Clear();
}
