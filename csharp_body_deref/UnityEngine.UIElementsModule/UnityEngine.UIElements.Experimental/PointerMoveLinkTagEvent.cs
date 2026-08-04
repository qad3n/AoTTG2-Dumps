// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Experimental.PointerMoveLinkTagEvent
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4FD4430", Offset = "0x4FD4430", VA = "0x4FD4430")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000861")]
	private string linkText
	{
		[Token(Token = "0x60020BA")]
		[Address(RVA = "0x4FD4450", Offset = "0x4FD4450", VA = "0x4FD4450")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60020B8")]
	[Address(RVA = "0x4FD4360", Offset = "0x4FD4360", VA = "0x4FD4360")]
	static PointerMoveLinkTagEvent()
	{
	}

	[Token(Token = "0x60020BB")]
	[Address(RVA = "0x4FD4470", Offset = "0x4FD4470", VA = "0x4FD4470", Slot = "13")]
	protected override void Init()
	{
	}

	[Token(Token = "0x60020BC")]
	[Address(RVA = "0x4FD44B0", Offset = "0x4FD44B0", VA = "0x4FD44B0")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x60020BD")]
	[Address(RVA = "0x4FD44C0", Offset = "0x4FD44C0", VA = "0x4FD44C0")]
	public static PointerMoveLinkTagEvent GetPooled(IPointerEvent evt, string linkID, string linkText)
	{
		return null;
	}

	[Token(Token = "0x60020BE")]
	[Address(RVA = "0x4FD4550", Offset = "0x4FD4550", VA = "0x4FD4550")]
	public PointerMoveLinkTagEvent()
	{
	}
}
