// ==================== AoTTG2 cross-reference ====================
// Type: UI.IconPickSettingElement
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/IconPickSettingElement.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/IconPickSettingElement.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20005F4")]
internal class IconPickSettingElement : BaseSettingElement
{
	[Token(Token = "0x4001C9C")]
	[FieldOffset(Offset = "0x38")]
	private Text _label;

	[Token(Token = "0x4001C9D")]
	[FieldOffset(Offset = "0x40")]
	protected string[] _options;

	[Token(Token = "0x17000B83")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6003C76")]
		[Address(RVA = "0x42916F0", Offset = "0x42916F0", VA = "0x42916F0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003C77")]
	[Address(RVA = "0x4291790", Offset = "0x4291790", VA = "0x4291790")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, string[] options, string[] iconPaths, string[] tooltips, IconPickPopup iconPickPopup, string tooltip, float elementWidth, float elementHeight, UnityAction onSelect, TooltipPopup tooltipPopup)
	{
	}

	[Token(Token = "0x6003C78")]
	[Address(RVA = "0x4291CA0", Offset = "0x4291CA0", VA = "0x4291CA0", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6003C79")]
	[Address(RVA = "0x4291E60", Offset = "0x4291E60", VA = "0x4291E60")]
	public IconPickSettingElement()
	{
	}
}
