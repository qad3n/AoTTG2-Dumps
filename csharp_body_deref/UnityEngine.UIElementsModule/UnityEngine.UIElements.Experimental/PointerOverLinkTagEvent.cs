using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.Experimental;

[Token(Token = "0x2000558")]
[EventCategory(EventCategory.EnterLeave)]
public class PointerOverLinkTagEvent : PointerEventBase<PointerOverLinkTagEvent>
{
	[Token(Token = "0x1700085E")]
	private string linkID
	{
		[Token(Token = "0x60020AF")]
		[Address(RVA = "0x4CAC7E0", Offset = "0x4CAC7E0", VA = "0x4CAC7E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700085F")]
	private string linkText
	{
		[Token(Token = "0x60020B0")]
		[Address(RVA = "0x4CAC800", Offset = "0x4CAC800", VA = "0x4CAC800")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60020AE")]
	[Address(RVA = "0x4CAC710", Offset = "0x4CAC710", VA = "0x4CAC710")]
	static PointerOverLinkTagEvent()
	{
	}

	[Token(Token = "0x60020B1")]
	[Address(RVA = "0x4CAC820", Offset = "0x4CAC820", VA = "0x4CAC820", Slot = "13")]
	protected override void Init()
	{
	}

	[Token(Token = "0x60020B2")]
	[Address(RVA = "0x4CAC860", Offset = "0x4CAC860", VA = "0x4CAC860")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x60020B3")]
	[Address(RVA = "0x4CAC870", Offset = "0x4CAC870", VA = "0x4CAC870")]
	public static PointerOverLinkTagEvent GetPooled(IPointerEvent evt, string linkID, string linkText)
	{
		return null;
	}

	[Token(Token = "0x60020B4")]
	[Address(RVA = "0x4CAC900", Offset = "0x4CAC900", VA = "0x4CAC900")]
	public PointerOverLinkTagEvent()
	{
	}
}
