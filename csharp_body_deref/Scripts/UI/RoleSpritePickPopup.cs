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

[Token(Token = "0x2000583")]
internal class RoleSpritePickPopup : PromptPopup
{
	[Token(Token = "0x4001B44")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private readonly List<GameObject> _items;

	[Token(Token = "0x4001B45")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private StringSetting _setting;

	[Token(Token = "0x4001B46")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private TextMeshProUGUI _label;

	[Token(Token = "0x4001B47")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private UnityAction _onSelect;

	[Token(Token = "0x17000AE1")]
	protected override string Title
	{
		[Token(Token = "0x600394D")]
		[Address(RVA = "0x42504A0", Offset = "0x42504A0", VA = "0x42504A0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000AE2")]
	protected override float Width
	{
		[Token(Token = "0x600394E")]
		[Address(RVA = "0x42504C0", Offset = "0x42504C0", VA = "0x42504C0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AE3")]
	protected override float Height
	{
		[Token(Token = "0x600394F")]
		[Address(RVA = "0x42504D0", Offset = "0x42504D0", VA = "0x42504D0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AE4")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6003950")]
		[Address(RVA = "0x42504E0", Offset = "0x42504E0", VA = "0x42504E0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000AE5")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6003951")]
		[Address(RVA = "0x42504F0", Offset = "0x42504F0", VA = "0x42504F0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000AE6")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003952")]
		[Address(RVA = "0x4250500", Offset = "0x4250500", VA = "0x4250500", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000AE7")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003953")]
		[Address(RVA = "0x4250510", Offset = "0x4250510", VA = "0x4250510", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003954")]
	[Address(RVA = "0x4250520", Offset = "0x4250520", VA = "0x4250520", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003955")]
	[Address(RVA = "0x4250640", Offset = "0x4250640", VA = "0x4250640")]
	public void Show(StringSetting setting, TextMeshProUGUI label, [Optional] UnityAction onSelect)
	{
	}

	[Token(Token = "0x6003956")]
	[Address(RVA = "0x4250850", Offset = "0x4250850", VA = "0x4250850")]
	private void BuildItems()
	{
	}

	[Token(Token = "0x6003957")]
	[Address(RVA = "0x4250C40", Offset = "0x4250C40", VA = "0x4250C40")]
	private void CreateItem(ElementStyle style, string displayName, string value)
	{
	}

	[Token(Token = "0x6003958")]
	[Address(RVA = "0x4251740", Offset = "0x4251740", VA = "0x4251740")]
	private void OnSelect(string value, string displayText)
	{
	}

	[Token(Token = "0x6003959")]
	[Address(RVA = "0x4251850", Offset = "0x4251850", VA = "0x4251850")]
	public RoleSpritePickPopup()
	{
	}
}
