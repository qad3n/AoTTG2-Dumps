// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IGenericMenu
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
