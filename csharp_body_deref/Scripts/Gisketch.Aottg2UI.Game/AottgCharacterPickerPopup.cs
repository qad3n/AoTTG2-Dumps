// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCharacterPickerPopup
// Update status: NEW in this game update
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

[Token(Token = "0x200025E")]
internal sealed class AottgCharacterPickerPopup : PromptPopup
{
	[Token(Token = "0x4000C44")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private AottgInGameView _view;

	[Token(Token = "0x4000C45")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private TMP_Text _title;

	[Token(Token = "0x4000C46")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private ScrollRect _scroll;

	[Token(Token = "0x4000C47")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private SkillTooltipPopup _skillTooltip;

	[Token(Token = "0x4000C48")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private RectTransform _dim;

	[Token(Token = "0x4000C49")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private BaseSetting _setting;

	[Token(Token = "0x4000C4A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private string[] _options;

	[Token(Token = "0x4000C4B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private Action<int> _onSelect;

	[Token(Token = "0x17000184")]
	protected override float Width
	{
		[Token(Token = "0x6000E42")]
		[Address(RVA = "0x1DD9CF0", Offset = "0x1DD82F0", VA = "0x181DD9CF0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000185")]
	protected override float Height
	{
		[Token(Token = "0x6000E43")]
		[Address(RVA = "0x1DD9CE0", Offset = "0x1DD82E0", VA = "0x181DD9CE0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000186")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6000E44")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x6000E45")]
	[Address(RVA = "0x1DD8750", Offset = "0x1DD6D50", VA = "0x181DD8750", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6000E46")]
	[Address(RVA = "0x1DD9030", Offset = "0x1DD7630", VA = "0x181DD9030")]
	public void Show(BaseSetting setting, string title, string[] options, string[] icons, string[] tooltips, Action<int> onSelect, float previewSize = 144f)
	{
	}

	[Token(Token = "0x6000E47")]
	[Address(RVA = "0x1DD84B0", Offset = "0x1DD6AB0", VA = "0x181DD84B0")]
	public void Select(int index)
	{
	}

	[Token(Token = "0x6000E48")]
	[Address(RVA = "0x1DD83C0", Offset = "0x1DD69C0", VA = "0x181DD83C0")]
	public static int GetIndex(BaseSetting setting, string[] options)
	{
		return default(int);
	}

	[Token(Token = "0x6000E49")]
	[Address(RVA = "0x1DD8630", Offset = "0x1DD6C30", VA = "0x181DD8630")]
	public static void SetIndex(BaseSetting setting, string[] options, int index)
	{
	}

	[Token(Token = "0x6000E4A")]
	[Address(RVA = "0x1DD9CD0", Offset = "0x1DD82D0", VA = "0x181DD9CD0")]
	public AottgCharacterPickerPopup()
	{
	}
}
