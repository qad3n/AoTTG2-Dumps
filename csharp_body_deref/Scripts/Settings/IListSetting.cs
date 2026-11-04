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

[Token(Token = "0x20000D1")]
internal interface IListSetting
{
	[Token(Token = "0x6000416")]
	int GetCount();

	[Token(Token = "0x6000417")]
	BaseSetting GetItemAt(int index);

	[Token(Token = "0x6000418")]
	List<BaseSetting> GetItems();

	[Token(Token = "0x6000419")]
	void AddItem(BaseSetting item);

	[Token(Token = "0x600041A")]
	void Clear();
}
