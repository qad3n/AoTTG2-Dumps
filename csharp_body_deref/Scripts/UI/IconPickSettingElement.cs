// ==================== AoTTG2 cross-reference ====================
// Type: UI.IconPickSettingElement
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/IconPickSettingElement.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/IconPickSettingElement.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20007F2")]
internal class IconPickSettingElement : BaseSettingElement
{
	[Token(Token = "0x400279D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Text _label;

	[Token(Token = "0x400279E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected string[] _options;

	[Token(Token = "0x400279F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	protected int[] _intOptionValues;

	[Token(Token = "0x17000D4B")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6004C50")]
		[Address(RVA = "0x5BF0B20", Offset = "0x5BEFB20", VA = "0x5BF0B20", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004C51")]
	[Address(RVA = "0x5BF0BC0", Offset = "0x5BEFBC0", VA = "0x5BF0BC0")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, string[] options, string[] iconPaths, string[] tooltips, IconPickPopup iconPickPopup, string tooltip, float elementWidth, float elementHeight, UnityAction onSelect, TooltipPopup tooltipPopup, [Optional] int[] intOptionValues)
	{
	}

	[Token(Token = "0x6004C52")]
	[Address(RVA = "0x5BF1080", Offset = "0x5BF0080", VA = "0x5BF1080", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6004C53")]
	[Address(RVA = "0x5BF1250", Offset = "0x5BF0250", VA = "0x5BF1250")]
	public IconPickSettingElement()
	{
	}
}
