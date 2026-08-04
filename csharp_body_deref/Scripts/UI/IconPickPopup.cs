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

[Token(Token = "0x200057B")]
internal class IconPickPopup : PromptPopup
{
	[Token(Token = "0x4001B23")]
	protected const int Columns = 7;

	[Token(Token = "0x4001B24")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected string[] _options;

	[Token(Token = "0x4001B25")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected BaseSetting _setting;

	[Token(Token = "0x4001B26")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected UnityAction _onSelect;

	[Token(Token = "0x4001B27")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	protected Text _label;

	[Token(Token = "0x4001B28")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	protected List<GameObject> _groups;

	[Token(Token = "0x4001B29")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	protected int _currentIndex;

	[Token(Token = "0x17000AB8")]
	protected override string Title
	{
		[Token(Token = "0x60038F8")]
		[Address(RVA = "0x424D390", Offset = "0x424D390", VA = "0x424D390", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000AB9")]
	protected override float Width
	{
		[Token(Token = "0x60038F9")]
		[Address(RVA = "0x424D3B0", Offset = "0x424D3B0", VA = "0x424D3B0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000ABA")]
	protected override float Height
	{
		[Token(Token = "0x60038FA")]
		[Address(RVA = "0x424D3C0", Offset = "0x424D3C0", VA = "0x424D3C0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000ABB")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x60038FB")]
		[Address(RVA = "0x424D3D0", Offset = "0x424D3D0", VA = "0x424D3D0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000ABC")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60038FC")]
		[Address(RVA = "0x424D3E0", Offset = "0x424D3E0", VA = "0x424D3E0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000ABD")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60038FD")]
		[Address(RVA = "0x424D3F0", Offset = "0x424D3F0", VA = "0x424D3F0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000ABE")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60038FE")]
		[Address(RVA = "0x424D400", Offset = "0x424D400", VA = "0x424D400", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60038FF")]
	[Address(RVA = "0x424D410", Offset = "0x424D410", VA = "0x424D410", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003900")]
	[Address(RVA = "0x424D540", Offset = "0x424D540", VA = "0x424D540")]
	public void Show(BaseSetting setting, Text label, string[] options, string[] icons, string[] tooltips, UnityAction onSelect, TooltipPopup tooltipPopup)
	{
	}

	[Token(Token = "0x6003901")]
	[Address(RVA = "0x424E2F0", Offset = "0x424E2F0", VA = "0x424E2F0")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6003902")]
	[Address(RVA = "0x424DB10", Offset = "0x424DB10", VA = "0x424DB10")]
	protected void CreateRow(List<string> items, List<string> icons, List<string> tooltips, TooltipPopup tooltipPopup)
	{
	}

	[Token(Token = "0x6003903")]
	[Address(RVA = "0x424E320", Offset = "0x424E320", VA = "0x424E320", Slot = "59")]
	protected virtual void OnSelectObject(string name, int index)
	{
	}

	[Token(Token = "0x6003904")]
	[Address(RVA = "0x424E460", Offset = "0x424E460", VA = "0x424E460")]
	public IconPickPopup()
	{
	}
}
