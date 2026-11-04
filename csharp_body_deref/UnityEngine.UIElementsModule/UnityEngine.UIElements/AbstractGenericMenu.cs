// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.AbstractGenericMenu
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000D2")]
public abstract class AbstractGenericMenu
{
	[Token(Token = "0x60005E2")]
	public abstract void AddItem(string itemName, bool isChecked, Action action);

	[Token(Token = "0x60005E3")]
	public abstract void AddItem(string itemName, bool isChecked, Action<object> action, object data);

	[Token(Token = "0x60005E4")]
	public abstract void AddSeparator(string path);

	[Token(Token = "0x60005E5")]
	public abstract void DropDown(Rect position, VisualElement targetElement, DropdownMenuSizeMode dropdownMenuSizeMode = DropdownMenuSizeMode.Auto);

	[Token(Token = "0x60005E6")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected AbstractGenericMenu()
	{
	}
}
