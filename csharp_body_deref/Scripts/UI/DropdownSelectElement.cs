// ==================== AoTTG2 cross-reference ====================
// Type: UI.DropdownSelectElement
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/DropdownSelectElement.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/DropdownSelectElement.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine.Events;

namespace UI;

[Token(Token = "0x20007EC")]
internal class DropdownSelectElement : DropdownSettingElement
{
	[Token(Token = "0x6004C25")]
	[Address(RVA = "0x5BEE300", Offset = "0x5BED300", VA = "0x5BEE300", Slot = "7")]
	public override void Setup(BaseSetting setting, ElementStyle style, string title, string[] options, string tooltip, float elementWidth, float elementHeight, float optionsWidth, float maxScrollHeight, UnityAction onDropdownOptionSelect, [Optional] int[] intOptionValues)
	{
	}

	[Token(Token = "0x6004C26")]
	[Address(RVA = "0x5BEEF70", Offset = "0x5BEDF70", VA = "0x5BEEF70", Slot = "8")]
	protected override void OnDropdownOptionClick(string option, int index)
	{
	}

	[Token(Token = "0x6004C27")]
	[Address(RVA = "0x5BEF100", Offset = "0x5BEE100", VA = "0x5BEF100", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6004C28")]
	[Address(RVA = "0x5BEF110", Offset = "0x5BEE110", VA = "0x5BEF110")]
	public DropdownSelectElement()
	{
	}
}
