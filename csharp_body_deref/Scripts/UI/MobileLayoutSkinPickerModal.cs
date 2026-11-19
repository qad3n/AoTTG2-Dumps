// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileLayoutSkinPickerModal
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileLayoutSkinPickerModal.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000773")]
internal class MobileLayoutSkinPickerModal : BasePopup
{
	[Token(Token = "0x4002590")]
	[FieldOffset(Offset = "0xA8")]
	private string _current;

	[Token(Token = "0x4002591")]
	[FieldOffset(Offset = "0xB0")]
	private Action<string> _onSelect;

	[Token(Token = "0x4002592")]
	[FieldOffset(Offset = "0xB8")]
	private RectTransform _rowsRoot;

	[Token(Token = "0x4002593")]
	[FieldOffset(Offset = "0xC0")]
	private InputField _searchInput;

	[Token(Token = "0x4002594")]
	[FieldOffset(Offset = "0xC8")]
	private IntSetting _sourceFilter;

	[Token(Token = "0x4002595")]
	[FieldOffset(Offset = "0xD0")]
	private string[] _options;

	[Token(Token = "0x4002596")]
	[FieldOffset(Offset = "0xD8")]
	private string[] _sourceOptions;

	[Token(Token = "0x4002597")]
	[FieldOffset(Offset = "0xE0")]
	private Font _font;

	[Token(Token = "0x17000C0E")]
	protected override string Title
	{
		[Token(Token = "0x60047CD")]
		[Address(RVA = "0x5BABD50", Offset = "0x5BAAD50", VA = "0x5BABD50", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C0F")]
	protected override float Width
	{
		[Token(Token = "0x60047CE")]
		[Address(RVA = "0x5BABDF0", Offset = "0x5BAADF0", VA = "0x5BABDF0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C10")]
	protected override float Height
	{
		[Token(Token = "0x60047CF")]
		[Address(RVA = "0x5BABE00", Offset = "0x5BAAE00", VA = "0x5BABE00", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C11")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x60047D0")]
		[Address(RVA = "0x5BABE10", Offset = "0x5BAAE10", VA = "0x5BABE10", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C12")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x60047D1")]
		[Address(RVA = "0x5BABE20", Offset = "0x5BAAE20", VA = "0x5BABE20", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C13")]
	protected override int TitleFontSize
	{
		[Token(Token = "0x60047D2")]
		[Address(RVA = "0x5BABE30", Offset = "0x5BAAE30", VA = "0x5BABE30", Slot = "40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C14")]
	protected override int ButtonFontSize
	{
		[Token(Token = "0x60047D3")]
		[Address(RVA = "0x5BABE40", Offset = "0x5BAAE40", VA = "0x5BABE40", Slot = "41")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C15")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60047D4")]
		[Address(RVA = "0x5BABE50", Offset = "0x5BAAE50", VA = "0x5BABE50", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C16")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60047D5")]
		[Address(RVA = "0x5BABE60", Offset = "0x5BAAE60", VA = "0x5BABE60", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C17")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60047D6")]
		[Address(RVA = "0x5BABE70", Offset = "0x5BAAE70", VA = "0x5BABE70", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C18")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x60047D7")]
		[Address(RVA = "0x5BABE80", Offset = "0x5BAAE80", VA = "0x5BABE80", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C19")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x60047D8")]
		[Address(RVA = "0x5BABE90", Offset = "0x5BAAE90", VA = "0x5BABE90", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x60047D9")]
	[Address(RVA = "0x5BAB600", Offset = "0x5BAA600", VA = "0x5BAB600")]
	public static void Open(Transform parent, string current, Action<string> onSelect)
	{
	}

	[Token(Token = "0x60047DA")]
	[Address(RVA = "0x5BABEA0", Offset = "0x5BAAEA0", VA = "0x5BABEA0")]
	private void SetupPicker(string current, Action<string> onSelect)
	{
	}

	[Token(Token = "0x60047DB")]
	[Address(RVA = "0x5BAC410", Offset = "0x5BAB410", VA = "0x5BAC410")]
	private void CreateSearchInput()
	{
	}

	[Token(Token = "0x60047DC")]
	[Address(RVA = "0x5BACF30", Offset = "0x5BABF30", VA = "0x5BACF30")]
	private void Populate()
	{
	}

	[Token(Token = "0x60047DD")]
	[Address(RVA = "0x5BAD5C0", Offset = "0x5BAC5C0", VA = "0x5BAD5C0")]
	private bool MatchesSourceFilter(string option)
	{
		return default(bool);
	}

	[Token(Token = "0x60047DE")]
	[Address(RVA = "0x5BAC330", Offset = "0x5BAB330", VA = "0x5BAC330")]
	private int GetSourceFilterValue(string path)
	{
		return default(int);
	}

	[Token(Token = "0x60047DF")]
	[Address(RVA = "0x5BADB00", Offset = "0x5BACB00", VA = "0x5BADB00")]
	private string GetSelectedSource()
	{
		return null;
	}

	[Token(Token = "0x60047E0")]
	[Address(RVA = "0x5BAD6D0", Offset = "0x5BAC6D0", VA = "0x5BAD6D0")]
	private void CreateOptionRow(string option, string displayName)
	{
	}

	[Token(Token = "0x60047E1")]
	[Address(RVA = "0x5BAD400", Offset = "0x5BAC400", VA = "0x5BAD400")]
	private Text CreateText(string name, RectTransform parent, string value, TextAnchor alignment)
	{
		return null;
	}

	[Token(Token = "0x60047E2")]
	[Address(RVA = "0x5BACCC0", Offset = "0x5BABCC0", VA = "0x5BACCC0")]
	private GameObject CreateRect(string name, RectTransform parent)
	{
		return null;
	}

	[Token(Token = "0x60047E3")]
	[Address(RVA = "0x5BADBA0", Offset = "0x5BACBA0", VA = "0x5BADBA0")]
	public MobileLayoutSkinPickerModal()
	{
	}
}
