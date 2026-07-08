using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000673")]
internal class MapEditorAddVariantPopup : BasePopup
{
	[Token(Token = "0x4001F58")]
	protected const int Columns = 8;

	[Token(Token = "0x4001F59")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected List<GameObject> _rows;

	[Token(Token = "0x17000C99")]
	protected override string Title
	{
		[Token(Token = "0x60040B7")]
		[Address(RVA = "0x4006290", Offset = "0x4006290", VA = "0x4006290", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C9A")]
	protected override float Width
	{
		[Token(Token = "0x60040B8")]
		[Address(RVA = "0x40062C0", Offset = "0x40062C0", VA = "0x40062C0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C9B")]
	protected override float Height
	{
		[Token(Token = "0x60040B9")]
		[Address(RVA = "0x40062D0", Offset = "0x40062D0", VA = "0x40062D0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C9C")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x60040BA")]
		[Address(RVA = "0x40062E0", Offset = "0x40062E0", VA = "0x40062E0", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C9D")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x60040BB")]
		[Address(RVA = "0x40062F0", Offset = "0x40062F0", VA = "0x40062F0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C9E")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60040BC")]
		[Address(RVA = "0x4006300", Offset = "0x4006300", VA = "0x4006300", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C9F")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60040BD")]
		[Address(RVA = "0x4006310", Offset = "0x4006310", VA = "0x4006310", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CA0")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60040BE")]
		[Address(RVA = "0x4006320", Offset = "0x4006320", VA = "0x4006320", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60040BF")]
	[Address(RVA = "0x4006330", Offset = "0x4006330", VA = "0x4006330", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60040C0")]
	[Address(RVA = "0x4006460", Offset = "0x4006460", VA = "0x4006460")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x60040C1")]
	[Address(RVA = "0x40046E0", Offset = "0x40046E0", VA = "0x40046E0")]
	public void Show(string prefab)
	{
	}

	[Token(Token = "0x60040C2")]
	[Address(RVA = "0x4006480", Offset = "0x4006480", VA = "0x4006480")]
	protected void CreateRow(List<string> items)
	{
	}

	[Token(Token = "0x60040C3")]
	[Address(RVA = "0x4006E70", Offset = "0x4006E70", VA = "0x4006E70", Slot = "59")]
	protected virtual string GetPreviewName(string item)
	{
		return null;
	}

	[Token(Token = "0x60040C4")]
	[Address(RVA = "0x4006F80", Offset = "0x4006F80", VA = "0x4006F80", Slot = "60")]
	protected virtual void OnSelectObject(string name)
	{
	}

	[Token(Token = "0x60040C5")]
	[Address(RVA = "0x4007030", Offset = "0x4007030", VA = "0x4007030")]
	public MapEditorAddVariantPopup()
	{
	}
}
