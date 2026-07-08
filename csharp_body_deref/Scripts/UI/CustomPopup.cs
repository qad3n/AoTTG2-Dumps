using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x20005E4")]
internal class CustomPopup : BasePopup
{
	[Token(Token = "0x4001C8A")]
	[FieldOffset(Offset = "0xA8")]
	protected List<GameObject> _items;

	[Token(Token = "0x4001C8B")]
	[FieldOffset(Offset = "0xB0")]
	protected ElementStyle _style;

	[Token(Token = "0x4001C8C")]
	[FieldOffset(Offset = "0xB8")]
	protected float _width;

	[Token(Token = "0x4001C8D")]
	[FieldOffset(Offset = "0xBC")]
	protected float _height;

	[Token(Token = "0x17000B4D")]
	protected override string Title
	{
		[Token(Token = "0x6003BE5")]
		[Address(RVA = "0x3FA8FC0", Offset = "0x3FA8FC0", VA = "0x3FA8FC0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B4E")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003BE6")]
		[Address(RVA = "0x3FA8FE0", Offset = "0x3FA8FE0", VA = "0x3FA8FE0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B4F")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003BE7")]
		[Address(RVA = "0x3FA8FF0", Offset = "0x3FA8FF0", VA = "0x3FA8FF0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6003BE8")]
	[Address(RVA = "0x3FA9000", Offset = "0x3FA9000", VA = "0x3FA9000")]
	public void Setup(BasePanel parent, string title, float width, float height)
	{
	}

	[Token(Token = "0x6003BE9")]
	[Address(RVA = "0x3FA91A0", Offset = "0x3FA91A0", VA = "0x3FA91A0")]
	public void AddBottomButton(string name, string title)
	{
	}

	[Token(Token = "0x6003BEA")]
	[Address(RVA = "0x3FA92C0", Offset = "0x3FA92C0", VA = "0x3FA92C0", Slot = "34")]
	protected override float GetHeight()
	{
		return default(float);
	}

	[Token(Token = "0x6003BEB")]
	[Address(RVA = "0x3FA92D0", Offset = "0x3FA92D0", VA = "0x3FA92D0", Slot = "33")]
	protected override float GetWidth()
	{
		return default(float);
	}

	[Token(Token = "0x6003BEC")]
	[Address(RVA = "0x3FA92E0", Offset = "0x3FA92E0", VA = "0x3FA92E0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6003BED")]
	[Address(RVA = "0x3FA9490", Offset = "0x3FA9490", VA = "0x3FA9490")]
	public void AddLabel(string label)
	{
	}

	[Token(Token = "0x6003BEE")]
	[Address(RVA = "0x3FA9550", Offset = "0x3FA9550", VA = "0x3FA9550")]
	public void AddButton(string name, string title)
	{
	}

	[Token(Token = "0x6003BEF")]
	[Address(RVA = "0x3FA96D0", Offset = "0x3FA96D0", VA = "0x3FA96D0")]
	public void AddButtons(List<object> names, List<object> titles)
	{
	}

	[Token(Token = "0x6003BF0")]
	[Address(RVA = "0x3FA97D0", Offset = "0x3FA97D0", VA = "0x3FA97D0")]
	protected void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003BF1")]
	[Address(RVA = "0x3FA98A0", Offset = "0x3FA98A0", VA = "0x3FA98A0")]
	public CustomPopup()
	{
	}
}
