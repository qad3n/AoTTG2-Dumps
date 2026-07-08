using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.Experimental;

[Token(Token = "0x200055A")]
[EventCategory(EventCategory.PointerMove)]
public class PointerMoveLinkTagEvent : PointerEventBase<PointerMoveLinkTagEvent>
{
	[Token(Token = "0x17000860")]
	private string linkID
	{
		[Token(Token = "0x60020B9")]
		[Address(RVA = "0x4CACB00", Offset = "0x4CACB00", VA = "0x4CACB00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000861")]
	private string linkText
	{
		[Token(Token = "0x60020BA")]
		[Address(RVA = "0x4CACB20", Offset = "0x4CACB20", VA = "0x4CACB20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60020B8")]
	[Address(RVA = "0x4CACA30", Offset = "0x4CACA30", VA = "0x4CACA30")]
	static PointerMoveLinkTagEvent()
	{
	}

	[Token(Token = "0x60020BB")]
	[Address(RVA = "0x4CACB40", Offset = "0x4CACB40", VA = "0x4CACB40", Slot = "13")]
	protected override void Init()
	{
	}

	[Token(Token = "0x60020BC")]
	[Address(RVA = "0x4CACB80", Offset = "0x4CACB80", VA = "0x4CACB80")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x60020BD")]
	[Address(RVA = "0x4CACB90", Offset = "0x4CACB90", VA = "0x4CACB90")]
	public static PointerMoveLinkTagEvent GetPooled(IPointerEvent evt, string linkID, string linkText)
	{
		return null;
	}

	[Token(Token = "0x60020BE")]
	[Address(RVA = "0x4CACC20", Offset = "0x4CACC20", VA = "0x4CACC20")]
	public PointerMoveLinkTagEvent()
	{
	}
}
