using System.Collections.Generic;
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000B1")]
internal interface IListSetting
{
	[Token(Token = "0x6000385")]
	int GetCount();

	[Token(Token = "0x6000386")]
	BaseSetting GetItemAt(int index);

	[Token(Token = "0x6000387")]
	List<BaseSetting> GetItems();

	[Token(Token = "0x6000388")]
	void AddItem(BaseSetting item);

	[Token(Token = "0x6000389")]
	void Clear();
}
