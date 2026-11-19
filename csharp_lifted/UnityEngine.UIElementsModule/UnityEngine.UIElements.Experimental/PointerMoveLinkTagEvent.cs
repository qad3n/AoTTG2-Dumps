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

[Token(Token = "0x2000650")]
[EventCategory(EventCategory.PointerMove)]
public class PointerMoveLinkTagEvent : PointerEventBase<PointerMoveLinkTagEvent>
{
	[Token(Token = "0x17000B7D")]
	private string linkID
	{
		[Token(Token = "0x6002E27")]
		[Address(RVA = "0x6BFE7A0", Offset = "0x6BFD7A0", VA = "0x6BFE7A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000B7E")]
	private string linkText
	{
		[Token(Token = "0x6002E28")]
		[Address(RVA = "0x6BFE7C0", Offset = "0x6BFD7C0", VA = "0x6BFE7C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6002E26")]
	[Address(RVA = "0x6BFE6D0", Offset = "0x6BFD6D0", VA = "0x6BFE6D0")]
	static PointerMoveLinkTagEvent()
	{
	}

	[Token(Token = "0x6002E29")]
	[Address(RVA = "0x6BFE7E0", Offset = "0x6BFD7E0", VA = "0x6BFE7E0", Slot = "13")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6002E2A")]
	[Address(RVA = "0x6BFE820", Offset = "0x6BFD820", VA = "0x6BFE820")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6002E2B")]
	[Address(RVA = "0x6BFE830", Offset = "0x6BFD830", VA = "0x6BFE830")]
	public static PointerMoveLinkTagEvent GetPooled(IPointerEvent evt, string linkID, string linkText)
	{
		return null;
	}

	[Token(Token = "0x6002E2C")]
	[Address(RVA = "0x6BFE8C0", Offset = "0x6BFD8C0", VA = "0x6BFE8C0")]
	public PointerMoveLinkTagEvent()
	{
	}

	[Token(Token = "0x6002E2D")]
	[Address(RVA = "0x6BFE900", Offset = "0x6BFD900", VA = "0x6BFE900", Slot = "10")]
	internal override void Dispatch(BaseVisualElementPanel panel)
	{
	}
}
