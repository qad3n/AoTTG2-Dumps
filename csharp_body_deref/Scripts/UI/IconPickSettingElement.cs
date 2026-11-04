// ==================== AoTTG2 cross-reference ====================
// Type: UI.IconPickSettingElement
// Update status: CHANGED in this game update
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

[Token(Token = "0x200074A")]
internal class IconPickSettingElement : BaseSettingElement
{
	[Token(Token = "0x400242C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Text _label;

	[Token(Token = "0x400242D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected string[] _options;

	[Token(Token = "0x400242E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	protected int[] _intOptionValues;

	[Token(Token = "0x17000CC8")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x600472E")]
		[Address(RVA = "0x2212080", Offset = "0x2210680", VA = "0x182212080", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600472F")]
	[Address(RVA = "0x22119B0", Offset = "0x220FFB0", VA = "0x1822119B0")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, string[] options, string[] iconPaths, string[] tooltips, IconPickPopup iconPickPopup, string tooltip, float elementWidth, float elementHeight, UnityAction onSelect, TooltipPopup tooltipPopup, [Optional] int[] intOptionValues)
	{
	}

	[Token(Token = "0x6004730")]
	[Address(RVA = "0x2211EA0", Offset = "0x22104A0", VA = "0x182211EA0", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6004731")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public IconPickSettingElement()
	{
	}
}
