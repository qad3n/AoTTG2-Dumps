using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000558")]
internal class CharacterEditorEditPerksPopup : BasePopup
{
	[Token(Token = "0x4001A92")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _pointsLeftLabel;

	[Token(Token = "0x4001A93")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Dictionary<string, GameObject> _perkButtons;

	[Token(Token = "0x4001A94")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Dictionary<string, string> _perkDescriptions;

	[Token(Token = "0x17000AAF")]
	protected override string Title
	{
		[Token(Token = "0x6003818")]
		[Address(RVA = "0x3F50A10", Offset = "0x3F50A10", VA = "0x3F50A10", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000AB0")]
	protected override float Width
	{
		[Token(Token = "0x6003819")]
		[Address(RVA = "0x3F50AB0", Offset = "0x3F50AB0", VA = "0x3F50AB0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AB1")]
	protected override float Height
	{
		[Token(Token = "0x600381A")]
		[Address(RVA = "0x3F50AC0", Offset = "0x3F50AC0", VA = "0x3F50AC0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AB2")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600381B")]
		[Address(RVA = "0x3F50AD0", Offset = "0x3F50AD0", VA = "0x3F50AD0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AB3")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x600381C")]
		[Address(RVA = "0x3F50AE0", Offset = "0x3F50AE0", VA = "0x3F50AE0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000AB4")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600381D")]
		[Address(RVA = "0x3F50AF0", Offset = "0x3F50AF0", VA = "0x3F50AF0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600381E")]
	[Address(RVA = "0x3F50B00", Offset = "0x3F50B00", VA = "0x3F50B00", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600381F")]
	[Address(RVA = "0x3F51070", Offset = "0x3F51070", VA = "0x3F51070")]
	protected void CreatePerkButton(Transform group, ElementStyle style, string name, string desc)
	{
	}

	[Token(Token = "0x6003820")]
	[Address(RVA = "0x3F511E0", Offset = "0x3F511E0", VA = "0x3F511E0")]
	protected void CreateArrow(Transform group, ElementStyle style)
	{
	}

	[Token(Token = "0x6003821")]
	[Address(RVA = "0x3F51A30", Offset = "0x3F51A30", VA = "0x3F51A30")]
	protected void OnButtonClick(string button)
	{
	}

	[Token(Token = "0x6003822")]
	[Address(RVA = "0x3F51230", Offset = "0x3F51230", VA = "0x3F51230")]
	protected void OnPerkChanged(string perkName)
	{
	}

	[Token(Token = "0x6003823")]
	[Address(RVA = "0x3F51CD0", Offset = "0x3F51CD0", VA = "0x3F51CD0")]
	public CharacterEditorEditPerksPopup()
	{
	}
}
