// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileLayoutEditorModal
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileLayoutEditorModal.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x200077A")]
internal class MobileLayoutEditorModal : BasePopup
{
	[Token(Token = "0x40025B6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private string _title;

	[Token(Token = "0x40025B7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private float _width;

	[Token(Token = "0x40025B8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB4")]
	private float _height;

	[Token(Token = "0x40025B9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private bool _scrollBar;

	[Token(Token = "0x17000C26")]
	public Transform Content
	{
		[Token(Token = "0x6004816")]
		[Address(RVA = "0x5BB0930", Offset = "0x5BAF930", VA = "0x5BB0930")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutEditorModal.c (UI.MobileLayoutEditorModal$$get_Content): clean
			return this.SinglePanel;
		}
	}

	[Token(Token = "0x17000C27")]
	public Transform Buttons
	{
		[Token(Token = "0x6004817")]
		[Address(RVA = "0x5BB0940", Offset = "0x5BAF940", VA = "0x5BB0940")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutEditorModal.c (UI.MobileLayoutEditorModal$$get_Buttons): clean
			return this.BottomBar;
		}
	}

	[Token(Token = "0x17000C28")]
	protected override string Title
	{
		[Token(Token = "0x6004818")]
		[Address(RVA = "0x5BB0950", Offset = "0x5BAF950", VA = "0x5BB0950", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutEditorModal.c (UI.MobileLayoutEditorModal$$get_Title): clean
			return this._title;
		}
	}

	[Token(Token = "0x17000C29")]
	protected override float Width
	{
		[Token(Token = "0x6004819")]
		[Address(RVA = "0x5BB0960", Offset = "0x5BAF960", VA = "0x5BB0960", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutEditorModal.c (UI.MobileLayoutEditorModal$$get_Width): clean
			return this._width;
		}
	}

	[Token(Token = "0x17000C2A")]
	protected override float Height
	{
		[Token(Token = "0x600481A")]
		[Address(RVA = "0x5BB0970", Offset = "0x5BAF970", VA = "0x5BB0970", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutEditorModal.c (UI.MobileLayoutEditorModal$$get_Height): clean
			return this._height;
		}
	}

	[Token(Token = "0x17000C2B")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x600481B")]
		[Address(RVA = "0x5BB0980", Offset = "0x5BAF980", VA = "0x5BB0980", Slot = "36")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutEditorModal.c (UI.MobileLayoutEditorModal$$get_TopBarHeight): clean
			return 56.0;
		}
	}

	[Token(Token = "0x17000C2C")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x600481C")]
		[Address(RVA = "0x5BB0990", Offset = "0x5BAF990", VA = "0x5BB0990", Slot = "37")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutEditorModal.c (UI.MobileLayoutEditorModal$$get_BottomBarHeight): clean
			return 58.0;
		}
	}

	[Token(Token = "0x17000C2D")]
	protected override float BorderVerticalPadding
	{
		[Token(Token = "0x600481D")]
		[Address(RVA = "0x5BB09A0", Offset = "0x5BAF9A0", VA = "0x5BB09A0", Slot = "7")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutEditorModal.c (UI.MobileLayoutEditorModal$$get_BorderVerticalPadding): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000C2E")]
	protected override float BorderHorizontalPadding
	{
		[Token(Token = "0x600481E")]
		[Address(RVA = "0x5BB09B0", Offset = "0x5BAF9B0", VA = "0x5BB09B0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutEditorModal.c (UI.MobileLayoutEditorModal$$get_BorderHorizontalPadding): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000C2F")]
	protected override int TitleFontSize
	{
		[Token(Token = "0x600481F")]
		[Address(RVA = "0x5BB09C0", Offset = "0x5BAF9C0", VA = "0x5BB09C0", Slot = "40")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutEditorModal.c (UI.MobileLayoutEditorModal$$get_TitleFontSize): clean
			return 0x1a;
		}
	}

	[Token(Token = "0x17000C30")]
	protected override int ButtonFontSize
	{
		[Token(Token = "0x6004820")]
		[Address(RVA = "0x5BB09D0", Offset = "0x5BAF9D0", VA = "0x5BB09D0", Slot = "41")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutEditorModal.c (UI.MobileLayoutEditorModal$$get_ButtonFontSize): clean
			return 0x14;
		}
	}

	[Token(Token = "0x17000C31")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004821")]
		[Address(RVA = "0x5BB09E0", Offset = "0x5BAF9E0", VA = "0x5BB09E0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutEditorModal.c (UI.MobileLayoutEditorModal$$get_VerticalPadding): clean
			return 0x12;
		}
	}

	[Token(Token = "0x17000C32")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004822")]
		[Address(RVA = "0x5BB09F0", Offset = "0x5BAF9F0", VA = "0x5BB09F0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutEditorModal.c (UI.MobileLayoutEditorModal$$get_HorizontalPadding): clean
			return 0x14;
		}
	}

	[Token(Token = "0x17000C33")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004823")]
		[Address(RVA = "0x5BB0A00", Offset = "0x5BAFA00", VA = "0x5BB0A00", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutEditorModal.c (UI.MobileLayoutEditorModal$$get_VerticalSpacing): clean
			return 10.0;
		}
	}

	[Token(Token = "0x17000C34")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004824")]
		[Address(RVA = "0x5BB0A10", Offset = "0x5BAFA10", VA = "0x5BB0A10", Slot = "15")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutEditorModal.c (UI.MobileLayoutEditorModal$$get_ScrollBar): clean
			return this._scrollBar;
		}
	}

	[Token(Token = "0x17000C35")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6004825")]
		[Address(RVA = "0x5BB0A20", Offset = "0x5BAFA20", VA = "0x5BB0A20", Slot = "54")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutEditorModal.c (UI.MobileLayoutEditorModal$$get_PopupAnimationType): clean
			return 0;
		}
	}

	[Token(Token = "0x6004826")]
	[Address(RVA = "0x5BA79A0", Offset = "0x5BA69A0", VA = "0x5BA79A0")]
	public void SetupModal(string title, float width, float height, bool scrollBar)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorModal.c (UI.MobileLayoutEditorModal$$SetupModal): clean
		this._title = title;
		this._width = width;
		this._height = height;
		this._scrollBar = scrollBar;
		this.Setup(null);
		this.ShowImmediate();
		return;
	}

	[Token(Token = "0x6004827")]
	[Address(RVA = "0x5BB0A30", Offset = "0x5BAFA30", VA = "0x5BB0A30", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorModal.c (UI.MobileLayoutEditorModal$$Setup): clean
		Transform pUVar1;
		bool bVar2;
		VerticalLayoutGroup __this_00;
		HorizontalLayoutGroup __this_01;

		this.Setup(parent);
		pUVar1 = this.SinglePanel;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this.SinglePanel;
			if (pUVar1 == null) goto label_05cb0b02;
			__this_00 = pUVar1.GetComponent<VerticalLayoutGroup>();
			if (__this_00 == null) goto label_05cb0b02;
			__this_00.childForceExpandHeight = false;
		}
		pUVar1 = this.BottomBar;
		if (pUVar1 != null) {
			__this_01 = pUVar1.GetComponent<HorizontalLayoutGroup>();
			if (__this_01 != null) {
				__this_01.childAlignment = 4;
				return;
			}
		}
	label_05cb0b02: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004828")]
	[Address(RVA = "0x5BB0B10", Offset = "0x5BAFB10", VA = "0x5BB0B10")]
	public MobileLayoutEditorModal()
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorModal.c (UI.MobileLayoutEditorModal$$.ctor): clean
		this._width = 580.0;
		this._height = 640.0;
		this._scrollBar = true;
		base();
		return;
	}
}
