// ==================== AoTTG2 cross-reference ====================
// Type: UI.IconPickPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/IconPickPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/IconPickPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000796")]
internal class IconPickPopup : PromptPopup
{
	[Token(Token = "0x4002654")]
	protected const int Columns = 7;

	[Token(Token = "0x4002655")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected string[] _options;

	[Token(Token = "0x4002656")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected BaseSetting _setting;

	[Token(Token = "0x4002657")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected UnityAction _onSelect;

	[Token(Token = "0x4002658")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	protected Text _label;

	[Token(Token = "0x4002659")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	protected List<GameObject> _groups;

	[Token(Token = "0x400265A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	protected int _currentIndex;

	[Token(Token = "0x400265B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	protected int[] _intOptionValues;

	[Token(Token = "0x17000C92")]
	protected override string Title
	{
		[Token(Token = "0x6004947")]
		[Address(RVA = "0x5BBF390", Offset = "0x5BBE390", VA = "0x5BBF390", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C93")]
	protected override float Width
	{
		[Token(Token = "0x6004948")]
		[Address(RVA = "0x5BBF3B0", Offset = "0x5BBE3B0", VA = "0x5BBF3B0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C94")]
	protected override float Height
	{
		[Token(Token = "0x6004949")]
		[Address(RVA = "0x5BBF3C0", Offset = "0x5BBE3C0", VA = "0x5BBF3C0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C95")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x600494A")]
		[Address(RVA = "0x5BBF3D0", Offset = "0x5BBE3D0", VA = "0x5BBF3D0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C96")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600494B")]
		[Address(RVA = "0x5BBF3E0", Offset = "0x5BBE3E0", VA = "0x5BBF3E0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C97")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x600494C")]
		[Address(RVA = "0x5BBF3F0", Offset = "0x5BBE3F0", VA = "0x5BBF3F0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C98")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600494D")]
		[Address(RVA = "0x5BBF400", Offset = "0x5BBE400", VA = "0x5BBF400", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600494E")]
	[Address(RVA = "0x5BBF410", Offset = "0x5BBE410", VA = "0x5BBF410", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600494F")]
	[Address(RVA = "0x5BBF540", Offset = "0x5BBE540", VA = "0x5BBF540")]
	public void Show(BaseSetting setting, Text label, string[] options, string[] icons, string[] tooltips, UnityAction onSelect, TooltipPopup tooltipPopup, [Optional] int[] intOptionValues)
	{
	}

	[Token(Token = "0x6004950")]
	[Address(RVA = "0x5BC02E0", Offset = "0x5BBF2E0", VA = "0x5BC02E0")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6004951")]
	[Address(RVA = "0x5BBFB70", Offset = "0x5BBEB70", VA = "0x5BBFB70")]
	protected void CreateRow(List<string> items, List<string> icons, List<string> tooltips, TooltipPopup tooltipPopup)
	{
	}

	[Token(Token = "0x6004952")]
	[Address(RVA = "0x5BC0310", Offset = "0x5BBF310", VA = "0x5BC0310", Slot = "62")]
	protected virtual void OnSelectObject(string name, int index)
	{
	}

	[Token(Token = "0x6004953")]
	[Address(RVA = "0x5BC0480", Offset = "0x5BBF480", VA = "0x5BC0480")]
	public IconPickPopup()
	{
	}
}
