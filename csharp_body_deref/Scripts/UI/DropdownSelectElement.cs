// ==================== AoTTG2 cross-reference ====================
// Type: UI.DropdownSelectElement
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/DropdownSelectElement.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/DropdownSelectElement.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine.Events;

namespace UI;

[Token(Token = "0x2000744")]
internal class DropdownSelectElement : DropdownSettingElement
{
	[Token(Token = "0x6004705")]
	[Address(RVA = "0x2209A70", Offset = "0x2208070", VA = "0x182209A70", Slot = "7")]
	public override void Setup(BaseSetting setting, ElementStyle style, string title, string[] options, string tooltip, float elementWidth, float elementHeight, float optionsWidth, float maxScrollHeight, UnityAction onDropdownOptionSelect, [Optional] int[] intOptionValues)
	{
	}

	[Token(Token = "0x6004706")]
	[Address(RVA = "0x2209900", Offset = "0x2207F00", VA = "0x182209900", Slot = "8")]
	protected override void OnDropdownOptionClick(string option, int index)
	{
	}

	[Token(Token = "0x6004707")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6004708")]
	[Address(RVA = "0x2209BA0", Offset = "0x22081A0", VA = "0x182209BA0")]
	public DropdownSelectElement()
	{
	}
}
