using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000585")]
internal class CreateGameSelectMapPanel : CategoryPanel
{
	[Token(Token = "0x4001B18")]
	protected const int Columns = 4;

	[Token(Token = "0x4001B19")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private bool IsCustom;

	[Token(Token = "0x17000AFE")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6003963")]
		[Address(RVA = "0x3F6FA80", Offset = "0x3F6FA80", VA = "0x3F6FA80", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000AFF")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003964")]
		[Address(RVA = "0x3F6FA90", Offset = "0x3F6FA90", VA = "0x3F6FA90", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B00")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6003965")]
		[Address(RVA = "0x3F6FAA0", Offset = "0x3F6FAA0", VA = "0x3F6FAA0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000B01")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003966")]
		[Address(RVA = "0x3F6FAB0", Offset = "0x3F6FAB0", VA = "0x3F6FAB0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000B02")]
	protected virtual float CustomListButtonHeight
	{
		[Token(Token = "0x6003967")]
		[Address(RVA = "0x3F6FAC0", Offset = "0x3F6FAC0", VA = "0x3F6FAC0", Slot = "35")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003968")]
	[Address(RVA = "0x3F6FAD0", Offset = "0x3F6FAD0", VA = "0x3F6FAD0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003969")]
	[Address(RVA = "0x3F70950", Offset = "0x3F70950", VA = "0x3F70950", Slot = "36")]
	protected virtual List<string> GetItems(string category)
	{
		return null;
	}

	[Token(Token = "0x600396A")]
	[Address(RVA = "0x3F70070", Offset = "0x3F70070", VA = "0x3F70070")]
	protected void CreateRow(List<string> items)
	{
	}

	[Token(Token = "0x600396B")]
	[Address(RVA = "0x3F70C40", Offset = "0x3F70C40", VA = "0x3F70C40", Slot = "37")]
	protected virtual string GetPreviewName(string item)
	{
		return null;
	}

	[Token(Token = "0x600396C")]
	[Address(RVA = "0x3F70C80", Offset = "0x3F70C80", VA = "0x3F70C80", Slot = "38")]
	protected virtual void OnSelectObject(string name)
	{
	}

	[Token(Token = "0x600396D")]
	[Address(RVA = "0x3F6FE60", Offset = "0x3F6FE60", VA = "0x3F6FE60")]
	protected void CreateCustomTextList(List<string> items)
	{
	}

	[Token(Token = "0x600396E")]
	[Address(RVA = "0x3F70ED0", Offset = "0x3F70ED0", VA = "0x3F70ED0")]
	private void CreateCustomTextRow(ElementStyle style, string item, float width)
	{
	}

	[Token(Token = "0x600396F")]
	[Address(RVA = "0x3F71760", Offset = "0x3F71760", VA = "0x3F71760")]
	private Color DarkenColor(Color color, float amount)
	{
		return default(Color);
	}

	[Token(Token = "0x6003970")]
	[Address(RVA = "0x3F717A0", Offset = "0x3F717A0", VA = "0x3F717A0")]
	public CreateGameSelectMapPanel()
	{
	}
}
