// ==================== AoTTG2 cross-reference ====================
// Type: UI.IconPickPopup
// Update status: CHANGED in this game update
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

[Token(Token = "0x20006ED")]
internal class IconPickPopup : PromptPopup
{
	[Token(Token = "0x40022DA")]
	protected const int Columns = 7;

	[Token(Token = "0x40022DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected string[] _options;

	[Token(Token = "0x40022DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected BaseSetting _setting;

	[Token(Token = "0x40022DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected UnityAction _onSelect;

	[Token(Token = "0x40022DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	protected Text _label;

	[Token(Token = "0x40022DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	protected List<GameObject> _groups;

	[Token(Token = "0x40022E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	protected int _currentIndex;

	[Token(Token = "0x40022E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	protected int[] _intOptionValues;

	[Token(Token = "0x17000C0E")]
	protected override string Title
	{
		[Token(Token = "0x6004422")]
		[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C0F")]
	protected override float Width
	{
		[Token(Token = "0x6004423")]
		[Address(RVA = "0x210FA90", Offset = "0x210E090", VA = "0x18210FA90", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C10")]
	protected override float Height
	{
		[Token(Token = "0x6004424")]
		[Address(RVA = "0x21BB440", Offset = "0x21B9A40", VA = "0x1821BB440", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C11")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004425")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C12")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004426")]
		[Address(RVA = "0x20B9980", Offset = "0x20B7F80", VA = "0x1820B9980", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C13")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004427")]
		[Address(RVA = "0x1B56090", Offset = "0x1B54690", VA = "0x181B56090", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C14")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004428")]
		[Address(RVA = "0x1B56090", Offset = "0x1B54690", VA = "0x181B56090", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6004429")]
	[Address(RVA = "0x21C3FF0", Offset = "0x21C25F0", VA = "0x1821C3FF0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600442A")]
	[Address(RVA = "0x21C4130", Offset = "0x21C2730", VA = "0x1821C4130")]
	public void Show(BaseSetting setting, Text label, string[] options, string[] icons, string[] tooltips, UnityAction onSelect, TooltipPopup tooltipPopup, [Optional] int[] intOptionValues)
	{
	}

	[Token(Token = "0x600442B")]
	[Address(RVA = "0xA37400", Offset = "0xA35A00", VA = "0x180A37400")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x600442C")]
	[Address(RVA = "0x21C3760", Offset = "0x21C1D60", VA = "0x1821C3760")]
	protected void CreateRow(List<string> items, List<string> icons, List<string> tooltips, TooltipPopup tooltipPopup)
	{
	}

	[Token(Token = "0x600442D")]
	[Address(RVA = "0x21C3DC0", Offset = "0x21C23C0", VA = "0x1821C3DC0", Slot = "62")]
	protected virtual void OnSelectObject(string name, int index)
	{
	}

	[Token(Token = "0x600442E")]
	[Address(RVA = "0x21C4690", Offset = "0x21C2C90", VA = "0x1821C4690")]
	public IconPickPopup()
	{
	}
}
