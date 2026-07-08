using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000FE")]
public class RepeatButton : TextElement
{
	[Token(Token = "0x20000FF")]
	public new class UxmlFactory : UxmlFactory<RepeatButton, UxmlTraits>
	{
		[Token(Token = "0x60006C9")]
		[Address(RVA = "0x4CCD250", Offset = "0x4CCD250", VA = "0x4CCD250")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000100")]
	public new class UxmlTraits : TextElement.UxmlTraits
	{
		[Token(Token = "0x400040E")]
		[FieldOffset(Offset = "0xB0")]
		private UxmlLongAttributeDescription m_Delay;

		[Token(Token = "0x400040F")]
		[FieldOffset(Offset = "0xB8")]
		private UxmlLongAttributeDescription m_Interval;

		[Token(Token = "0x60006CA")]
		[Address(RVA = "0x4CCD290", Offset = "0x4CCD290", VA = "0x4CCD290", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60006CB")]
		[Address(RVA = "0x4CCD460", Offset = "0x4CCD460", VA = "0x4CCD460")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x400040C")]
	[FieldOffset(Offset = "0x4D8")]
	private Clickable m_Clickable;

	[Token(Token = "0x400040D")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x60006C5")]
	[Address(RVA = "0x4CCD000", Offset = "0x4CCD000", VA = "0x4CCD000")]
	public RepeatButton()
	{
	}

	[Token(Token = "0x60006C6")]
	[Address(RVA = "0x4CCD090", Offset = "0x4CCD090", VA = "0x4CCD090")]
	public RepeatButton(Action clickEvent, long delay, long interval)
	{
	}

	[Token(Token = "0x60006C7")]
	[Address(RVA = "0x4CCD140", Offset = "0x4CCD140", VA = "0x4CCD140")]
	public void SetAction(Action clickEvent, long delay, long interval)
	{
	}
}
