// ==================== AoTTG2 cross-reference ====================
// Type: UI.RoleSpritePickPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/RoleSpritePickPopup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using TMPro;
using UnityEngine;
using UnityEngine.Events;

namespace UI;

[Token(Token = "0x200079E")]
internal class RoleSpritePickPopup : PromptPopup
{
	[Token(Token = "0x4002676")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private readonly List<GameObject> _items;

	[Token(Token = "0x4002677")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private StringSetting _setting;

	[Token(Token = "0x4002678")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private TextMeshProUGUI _label;

	[Token(Token = "0x4002679")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private UnityAction _onSelect;

	[Token(Token = "0x17000CBC")]
	protected override string Title
	{
		[Token(Token = "0x600499D")]
		[Address(RVA = "0x5BC2620", Offset = "0x5BC1620", VA = "0x5BC2620", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CBD")]
	protected override float Width
	{
		[Token(Token = "0x600499E")]
		[Address(RVA = "0x5BC2640", Offset = "0x5BC1640", VA = "0x5BC2640", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CBE")]
	protected override float Height
	{
		[Token(Token = "0x600499F")]
		[Address(RVA = "0x5BC2650", Offset = "0x5BC1650", VA = "0x5BC2650", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CBF")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x60049A0")]
		[Address(RVA = "0x5BC2660", Offset = "0x5BC1660", VA = "0x5BC2660", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000CC0")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60049A1")]
		[Address(RVA = "0x5BC2670", Offset = "0x5BC1670", VA = "0x5BC2670", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CC1")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60049A2")]
		[Address(RVA = "0x5BC2680", Offset = "0x5BC1680", VA = "0x5BC2680", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CC2")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60049A3")]
		[Address(RVA = "0x5BC2690", Offset = "0x5BC1690", VA = "0x5BC2690", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60049A4")]
	[Address(RVA = "0x5BC26A0", Offset = "0x5BC16A0", VA = "0x5BC26A0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60049A5")]
	[Address(RVA = "0x5BC27C0", Offset = "0x5BC17C0", VA = "0x5BC27C0")]
	public void Show(StringSetting setting, TextMeshProUGUI label, [Optional] UnityAction onSelect)
	{
	}

	[Token(Token = "0x60049A6")]
	[Address(RVA = "0x5BC29D0", Offset = "0x5BC19D0", VA = "0x5BC29D0")]
	private void BuildItems()
	{
	}

	[Token(Token = "0x60049A7")]
	[Address(RVA = "0x5BC2D40", Offset = "0x5BC1D40", VA = "0x5BC2D40")]
	private void CreateItem(ElementStyle style, string displayName, string value)
	{
	}

	[Token(Token = "0x60049A8")]
	[Address(RVA = "0x5BC38F0", Offset = "0x5BC28F0", VA = "0x5BC38F0")]
	private void OnSelect(string value, string displayText)
	{
	}

	[Token(Token = "0x60049A9")]
	[Address(RVA = "0x5BC3A30", Offset = "0x5BC2A30", VA = "0x5BC3A30")]
	public RoleSpritePickPopup()
	{
	}
}
