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

[Token(Token = "0x20006F5")]
internal class RoleSpritePickPopup : PromptPopup
{
	[Token(Token = "0x40022FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private readonly List<GameObject> _items;

	[Token(Token = "0x40022FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private StringSetting _setting;

	[Token(Token = "0x40022FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private TextMeshProUGUI _label;

	[Token(Token = "0x40022FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private UnityAction _onSelect;

	[Token(Token = "0x17000C38")]
	protected override string Title
	{
		[Token(Token = "0x6004478")]
		[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C39")]
	protected override float Width
	{
		[Token(Token = "0x6004479")]
		[Address(RVA = "0x21C7920", Offset = "0x21C5F20", VA = "0x1821C7920", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C3A")]
	protected override float Height
	{
		[Token(Token = "0x600447A")]
		[Address(RVA = "0x21C7910", Offset = "0x21C5F10", VA = "0x1821C7910", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C3B")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x600447B")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C3C")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x600447C")]
		[Address(RVA = "0x847040", Offset = "0x845640", VA = "0x180847040", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C3D")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600447D")]
		[Address(RVA = "0x847040", Offset = "0x845640", VA = "0x180847040", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C3E")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600447E")]
		[Address(RVA = "0x20B9980", Offset = "0x20B7F80", VA = "0x1820B9980", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600447F")]
	[Address(RVA = "0x21C7580", Offset = "0x21C5B80", VA = "0x1821C7580", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004480")]
	[Address(RVA = "0x21C76B0", Offset = "0x21C5CB0", VA = "0x1821C76B0")]
	public void Show(StringSetting setting, TextMeshProUGUI label, [Optional] UnityAction onSelect)
	{
	}

	[Token(Token = "0x6004481")]
	[Address(RVA = "0x21C6630", Offset = "0x21C4C30", VA = "0x1821C6630")]
	private void BuildItems()
	{
	}

	[Token(Token = "0x6004482")]
	[Address(RVA = "0x21C6960", Offset = "0x21C4F60", VA = "0x1821C6960")]
	private void CreateItem(ElementStyle style, string displayName, string value)
	{
	}

	[Token(Token = "0x6004483")]
	[Address(RVA = "0x21C7470", Offset = "0x21C5A70", VA = "0x1821C7470")]
	private void OnSelect(string value, string displayText)
	{
	}

	[Token(Token = "0x6004484")]
	[Address(RVA = "0x21C7890", Offset = "0x21C5E90", VA = "0x1821C7890")]
	public RoleSpritePickPopup()
	{
	}
}
