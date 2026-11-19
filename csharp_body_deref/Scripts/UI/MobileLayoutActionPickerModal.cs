// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileLayoutActionPickerModal
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileLayoutActionPickerModal.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000777")]
internal class MobileLayoutActionPickerModal : BasePopup
{
	[Token(Token = "0x40025A7")]
	[FieldOffset(Offset = "0xA8")]
	private string _current;

	[Token(Token = "0x40025A8")]
	[FieldOffset(Offset = "0xB0")]
	private Action<string> _onSelect;

	[Token(Token = "0x40025A9")]
	[FieldOffset(Offset = "0xB8")]
	private RectTransform _rowsRoot;

	[Token(Token = "0x40025AA")]
	[FieldOffset(Offset = "0xC0")]
	private InputField _searchInput;

	[Token(Token = "0x40025AB")]
	[FieldOffset(Offset = "0xC8")]
	private string[] _options;

	[Token(Token = "0x40025AC")]
	[FieldOffset(Offset = "0xD0")]
	private string[] _groupOptions;

	[Token(Token = "0x40025AD")]
	[FieldOffset(Offset = "0xD8")]
	private StringSetting _groupFilter;

	[Token(Token = "0x40025AE")]
	[FieldOffset(Offset = "0xE0")]
	private MobileLayoutDropdownOverlay _groupDropdownOverlay;

	[Token(Token = "0x40025AF")]
	[FieldOffset(Offset = "0xE8")]
	private Font _font;

	[Token(Token = "0x40025B0")]
	[FieldOffset(Offset = "0xF0")]
	private string _title;

	[Token(Token = "0x40025B1")]
	[FieldOffset(Offset = "0xF8")]
	private MobileInputLayoutRole _role;

	[Token(Token = "0x17000C1A")]
	protected override string Title
	{
		[Token(Token = "0x60047F7")]
		[Address(RVA = "0x5BAEA10", Offset = "0x5BADA10", VA = "0x5BAEA10", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C1B")]
	protected override float Width
	{
		[Token(Token = "0x60047F8")]
		[Address(RVA = "0x5BAEA20", Offset = "0x5BADA20", VA = "0x5BAEA20", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C1C")]
	protected override float Height
	{
		[Token(Token = "0x60047F9")]
		[Address(RVA = "0x5BAEA30", Offset = "0x5BADA30", VA = "0x5BAEA30", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C1D")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x60047FA")]
		[Address(RVA = "0x5BAEA40", Offset = "0x5BADA40", VA = "0x5BAEA40", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C1E")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x60047FB")]
		[Address(RVA = "0x5BAEA50", Offset = "0x5BADA50", VA = "0x5BAEA50", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C1F")]
	protected override int TitleFontSize
	{
		[Token(Token = "0x60047FC")]
		[Address(RVA = "0x5BAEA60", Offset = "0x5BADA60", VA = "0x5BAEA60", Slot = "40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C20")]
	protected override int ButtonFontSize
	{
		[Token(Token = "0x60047FD")]
		[Address(RVA = "0x5BAEA70", Offset = "0x5BADA70", VA = "0x5BAEA70", Slot = "41")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C21")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60047FE")]
		[Address(RVA = "0x5BAEA80", Offset = "0x5BADA80", VA = "0x5BAEA80", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C22")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60047FF")]
		[Address(RVA = "0x5BAEA90", Offset = "0x5BADA90", VA = "0x5BAEA90", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C23")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004800")]
		[Address(RVA = "0x5BAEAA0", Offset = "0x5BADAA0", VA = "0x5BAEAA0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C24")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004801")]
		[Address(RVA = "0x5BAEAB0", Offset = "0x5BADAB0", VA = "0x5BAEAB0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C25")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6004802")]
		[Address(RVA = "0x5BAEAC0", Offset = "0x5BADAC0", VA = "0x5BAEAC0", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x6004803")]
	[Address(RVA = "0x5BAE7A0", Offset = "0x5BAD7A0", VA = "0x5BAE7A0")]
	public static void Open(Transform parent, string current, MobileInputLayoutRole role, Action<string> onSelect)
	{
	}

	[Token(Token = "0x6004804")]
	[Address(RVA = "0x5BAEAD0", Offset = "0x5BADAD0", VA = "0x5BAEAD0")]
	private void SetupPicker(string current, MobileInputLayoutRole role, Action<string> onSelect)
	{
	}

	[Token(Token = "0x6004805")]
	[Address(RVA = "0x5BAF1E0", Offset = "0x5BAE1E0", VA = "0x5BAF1E0")]
	private void CreateSearchInput()
	{
	}

	[Token(Token = "0x6004806")]
	[Address(RVA = "0x5BAFD30", Offset = "0x5BAED30", VA = "0x5BAFD30")]
	private void Populate()
	{
	}

	[Token(Token = "0x6004807")]
	[Address(RVA = "0x5BB0640", Offset = "0x5BAF640", VA = "0x5BB0640")]
	private string GetSelectedGroup()
	{
		return null;
	}

	[Token(Token = "0x6004808")]
	[Address(RVA = "0x5BAEFA0", Offset = "0x5BADFA0", VA = "0x5BAEFA0")]
	private string[] GetGroupOptions()
	{
		return null;
	}

	[Token(Token = "0x6004809")]
	[Address(RVA = "0x5BAF170", Offset = "0x5BAE170", VA = "0x5BAF170")]
	private string GetInitialGroup(string current, string[] groups)
	{
		return null;
	}

	[Token(Token = "0x600480A")]
	[Address(RVA = "0x5BB0480", Offset = "0x5BAF480", VA = "0x5BB0480")]
	private Text CreateText(string name, RectTransform parent, string value, TextAnchor alignment)
	{
		return null;
	}

	[Token(Token = "0x600480B")]
	[Address(RVA = "0x5BAFAC0", Offset = "0x5BAEAC0", VA = "0x5BAFAC0")]
	private GameObject CreateRect(string name, RectTransform parent)
	{
		return null;
	}

	[Token(Token = "0x600480C")]
	[Address(RVA = "0x5BB06A0", Offset = "0x5BAF6A0", VA = "0x5BB06A0")]
	public MobileLayoutActionPickerModal()
	{
	}
}
