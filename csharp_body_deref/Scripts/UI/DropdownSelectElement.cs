// ==================== AoTTG2 cross-reference ====================
// Type: UI.DropdownSelectElement
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/DropdownSelectElement.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/DropdownSelectElement.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Settings;
using UnityEngine.Events;

namespace UI;

[Token(Token = "0x20005EE")]
internal class DropdownSelectElement : DropdownSettingElement
{
	[Token(Token = "0x6003C4D")]
	[Address(RVA = "0x428F100", Offset = "0x428F100", VA = "0x428F100", Slot = "7")]
	public override void Setup(BaseSetting setting, ElementStyle style, string title, string[] options, string tooltip, float elementWidth, float elementHeight, float optionsWidth, float maxScrollHeight, UnityAction onDropdownOptionSelect)
	{
	}

	[Token(Token = "0x6003C4E")]
	[Address(RVA = "0x428FDA0", Offset = "0x428FDA0", VA = "0x428FDA0", Slot = "8")]
	protected override void OnDropdownOptionClick(string option, int index)
	{
	}

	[Token(Token = "0x6003C4F")]
	[Address(RVA = "0x428FF30", Offset = "0x428FF30", VA = "0x428FF30", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6003C50")]
	[Address(RVA = "0x428FF40", Offset = "0x428FF40", VA = "0x428FF40")]
	public DropdownSelectElement()
	{
	}
}
