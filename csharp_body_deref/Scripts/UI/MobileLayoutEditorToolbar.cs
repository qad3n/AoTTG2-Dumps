// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileLayoutEditorToolbar
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileLayoutEditorToolbar.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x200077B")]
internal class MobileLayoutEditorToolbar : HeadedPanel
{
	[Token(Token = "0x40025BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private string _title;

	[Token(Token = "0x40025BB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private Action _loadPreset;

	[Token(Token = "0x40025BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private Action _savePreset;

	[Token(Token = "0x40025BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private Action _add;

	[Token(Token = "0x40025BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private Action _edit;

	[Token(Token = "0x40025BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Action _delete;

	[Token(Token = "0x40025C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Action _copy;

	[Token(Token = "0x40025C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Action _back;

	[Token(Token = "0x17000C36")]
	public Transform Buttons
	{
		[Token(Token = "0x6004829")]
		[Address(RVA = "0x5BB0B30", Offset = "0x5BAFB30", VA = "0x5BB0B30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C37")]
	public GameObject ReturnButton
	{
		[Token(Token = "0x600482A")]
		[Address(RVA = "0x5BB0B40", Offset = "0x5BAFB40", VA = "0x5BB0B40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600482B")]
		[Address(RVA = "0x5BB0B50", Offset = "0x5BAFB50", VA = "0x5BB0B50")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000C38")]
	protected override string Title
	{
		[Token(Token = "0x600482C")]
		[Address(RVA = "0x5BB0B70", Offset = "0x5BAFB70", VA = "0x5BB0B70", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C39")]
	protected override float Width
	{
		[Token(Token = "0x600482D")]
		[Address(RVA = "0x5BB0B80", Offset = "0x5BAFB80", VA = "0x5BB0B80", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C3A")]
	protected override float Height
	{
		[Token(Token = "0x600482E")]
		[Address(RVA = "0x5BB0B90", Offset = "0x5BAFB90", VA = "0x5BB0B90", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C3B")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x600482F")]
		[Address(RVA = "0x5BB0BA0", Offset = "0x5BAFBA0", VA = "0x5BB0BA0", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C3C")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6004830")]
		[Address(RVA = "0x5BB0BB0", Offset = "0x5BAFBB0", VA = "0x5BB0BB0", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C3D")]
	protected override int TitleFontSize
	{
		[Token(Token = "0x6004831")]
		[Address(RVA = "0x5BB0BC0", Offset = "0x5BAFBC0", VA = "0x5BB0BC0", Slot = "40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C3E")]
	protected override int ButtonFontSize
	{
		[Token(Token = "0x6004832")]
		[Address(RVA = "0x5BB0BD0", Offset = "0x5BAFBD0", VA = "0x5BB0BD0", Slot = "41")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C3F")]
	protected override int BottomBarPadding
	{
		[Token(Token = "0x6004833")]
		[Address(RVA = "0x5BB0BE0", Offset = "0x5BAFBE0", VA = "0x5BB0BE0", Slot = "39")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C40")]
	protected override float BottomBarSpacing
	{
		[Token(Token = "0x6004834")]
		[Address(RVA = "0x5BB0BF0", Offset = "0x5BAFBF0", VA = "0x5BB0BF0", Slot = "38")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C41")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004835")]
		[Address(RVA = "0x5BB0C00", Offset = "0x5BAFC00", VA = "0x5BB0C00", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004836")]
	[Address(RVA = "0x5B9E750", Offset = "0x5B9D750", VA = "0x5B9E750")]
	public void SetupToolbar(string title, Action loadPreset, Action savePreset, Action add, Action edit, Action delete, Action copy, Action back)
	{
	}

	[Token(Token = "0x6004837")]
	[Address(RVA = "0x5BB0C10", Offset = "0x5BAFC10", VA = "0x5BB0C10", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004838")]
	[Address(RVA = "0x5BB1110", Offset = "0x5BB0110", VA = "0x5BB1110")]
	public MobileLayoutEditorToolbar()
	{
	}
}
