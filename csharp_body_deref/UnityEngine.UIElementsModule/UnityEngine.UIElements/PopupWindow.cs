using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000F0")]
public class PopupWindow : TextElement
{
	[Token(Token = "0x20000F1")]
	public new class UxmlFactory : UxmlFactory<PopupWindow, UxmlTraits>
	{
		[Token(Token = "0x600068A")]
		[Address(RVA = "0x4CC9550", Offset = "0x4CC9550", VA = "0x4CC9550")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000F2")]
	public new class UxmlTraits : TextElement.UxmlTraits
	{
		[Token(Token = "0x600068B")]
		[Address(RVA = "0x4CC9590", Offset = "0x4CC9590", VA = "0x4CC9590")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x40003E0")]
	[FieldOffset(Offset = "0x4D8")]
	private VisualElement m_ContentContainer;

	[Token(Token = "0x40003E1")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x40003E2")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string contentUssClassName;

	[Token(Token = "0x17000122")]
	public override VisualElement contentContainer
	{
		[Token(Token = "0x6000688")]
		[Address(RVA = "0x4CC94A0", Offset = "0x4CC94A0", VA = "0x4CC94A0", Slot = "97")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000687")]
	[Address(RVA = "0x4CC9360", Offset = "0x4CC9360", VA = "0x4CC9360")]
	public PopupWindow()
	{
	}
}
