using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000060")]
public class Button : TextElement
{
	[Token(Token = "0x2000061")]
	public new class UxmlFactory : UxmlFactory<Button, UxmlTraits>
	{
		[Token(Token = "0x6000348")]
		[Address(RVA = "0x4C09EA0", Offset = "0x4C09EA0", VA = "0x4C09EA0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000062")]
	public new class UxmlTraits : TextElement.UxmlTraits
	{
		[Token(Token = "0x6000349")]
		[Address(RVA = "0x4C09EE0", Offset = "0x4C09EE0", VA = "0x4C09EE0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x40001BC")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x40001BD")]
	[FieldOffset(Offset = "0x4D8")]
	private Clickable m_Clickable;

	[Token(Token = "0x40001BE")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string NonEmptyString;

	[Token(Token = "0x17000087")]
	public Clickable clickable
	{
		[Token(Token = "0x6000341")]
		[Address(RVA = "0x4C09B00", Offset = "0x4C09B00", VA = "0x4C09B00")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000342")]
		[Address(RVA = "0x4C09B10", Offset = "0x4C09B10", VA = "0x4C09B10")]
		set
		{
		}
	}

	[Token(Token = "0x6000343")]
	[Address(RVA = "0x4C09B80", Offset = "0x4C09B80", VA = "0x4C09B80")]
	public Button()
	{
	}

	[Token(Token = "0x6000344")]
	[Address(RVA = "0x4C09B90", Offset = "0x4C09B90", VA = "0x4C09B90")]
	public Button(Action clickEvent)
	{
	}

	[Token(Token = "0x6000345")]
	[Address(RVA = "0x4C09D20", Offset = "0x4C09D20", VA = "0x4C09D20")]
	private void OnNavigationSubmit(NavigationSubmitEvent evt)
	{
	}

	[Token(Token = "0x6000346")]
	[Address(RVA = "0x4C09D60", Offset = "0x4C09D60", VA = "0x4C09D60", Slot = "96")]
	protected internal override Vector2 DoMeasure(float desiredWidth, MeasureMode widthMode, float desiredHeight, MeasureMode heightMode)
	{
		return default(Vector2);
	}
}
