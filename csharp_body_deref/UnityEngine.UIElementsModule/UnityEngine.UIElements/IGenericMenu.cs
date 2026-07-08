using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000095")]
internal interface IGenericMenu
{
	[Token(Token = "0x600040A")]
	void AddItem(string itemName, bool isChecked, Action action);

	[Token(Token = "0x600040B")]
	void AddItem(string itemName, bool isChecked, Action<object> action, object data);

	[Token(Token = "0x600040C")]
	void DropDown(Rect position, [Optional] VisualElement targetElement, bool anchored = false);
}
