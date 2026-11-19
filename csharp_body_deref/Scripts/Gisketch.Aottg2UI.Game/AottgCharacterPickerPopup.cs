// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCharacterPickerPopup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterPickerPopup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using TMPro;
using UI;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000284")]
internal sealed class AottgCharacterPickerPopup : PromptPopup
{
	[Token(Token = "0x4000CF1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private AottgInGameView _view;

	[Token(Token = "0x4000CF2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private TMP_Text _title;

	[Token(Token = "0x4000CF3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private ScrollRect _scroll;

	[Token(Token = "0x4000CF4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private SkillTooltipPopup _skillTooltip;

	[Token(Token = "0x4000CF5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private RectTransform _dim;

	[Token(Token = "0x4000CF6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private BaseSetting _setting;

	[Token(Token = "0x4000CF7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private string[] _options;

	[Token(Token = "0x4000CF8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private Action<int> _onSelect;

	[Token(Token = "0x1700018F")]
	protected override float Width
	{
		[Token(Token = "0x6000F51")]
		[Address(RVA = "0x57AEEC0", Offset = "0x57ADEC0", VA = "0x57AEEC0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000190")]
	protected override float Height
	{
		[Token(Token = "0x6000F52")]
		[Address(RVA = "0x57AEED0", Offset = "0x57ADED0", VA = "0x57AEED0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000191")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6000F53")]
		[Address(RVA = "0x57AEEE0", Offset = "0x57ADEE0", VA = "0x57AEEE0", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x6000F54")]
	[Address(RVA = "0x57AEEF0", Offset = "0x57ADEF0", VA = "0x57AEEF0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6000F55")]
	[Address(RVA = "0x57B08E0", Offset = "0x57AF8E0", VA = "0x57B08E0")]
	public void Show(BaseSetting setting, string title, string[] options, string[] icons, string[] tooltips, Action<int> onSelect, [Optional][DefaultParameterValue(144f)] float previewSize, [Optional] string[] labels)
	{
	}

	[Token(Token = "0x6000F56")]
	[Address(RVA = "0x57B1780", Offset = "0x57B0780", VA = "0x57B1780")]
	public void Select(int index)
	{
	}

	[Token(Token = "0x6000F57")]
	[Address(RVA = "0x57B14F0", Offset = "0x57B04F0", VA = "0x57B14F0")]
	public static int GetIndex(BaseSetting setting, string[] options)
	{
		return default(int);
	}

	[Token(Token = "0x6000F58")]
	[Address(RVA = "0x57B17F0", Offset = "0x57B07F0", VA = "0x57B17F0")]
	public static void SetIndex(BaseSetting setting, string[] options, int index)
	{
	}

	[Token(Token = "0x6000F59")]
	[Address(RVA = "0x57B18F0", Offset = "0x57B08F0", VA = "0x57B18F0")]
	public AottgCharacterPickerPopup()
	{
	}
}
