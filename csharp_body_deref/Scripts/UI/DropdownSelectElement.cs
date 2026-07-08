using Il2CppDummyDll;
using Settings;
using UnityEngine.Events;

namespace UI;

[Token(Token = "0x20005A9")]
internal class DropdownSelectElement : DropdownSettingElement
{
	[Token(Token = "0x6003A3D")]
	[Address(RVA = "0x3F812D0", Offset = "0x3F812D0", VA = "0x3F812D0", Slot = "7")]
	public override void Setup(BaseSetting setting, ElementStyle style, string title, string[] options, string tooltip, float elementWidth, float elementHeight, float optionsWidth, float maxScrollHeight, UnityAction onDropdownOptionSelect)
	{
	}

	[Token(Token = "0x6003A3E")]
	[Address(RVA = "0x3F81F70", Offset = "0x3F81F70", VA = "0x3F81F70", Slot = "8")]
	protected override void OnDropdownOptionClick(string option, int index)
	{
	}

	[Token(Token = "0x6003A3F")]
	[Address(RVA = "0x3F82100", Offset = "0x3F82100", VA = "0x3F82100", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6003A40")]
	[Address(RVA = "0x3F82110", Offset = "0x3F82110", VA = "0x3F82110")]
	public DropdownSelectElement()
	{
	}
}
