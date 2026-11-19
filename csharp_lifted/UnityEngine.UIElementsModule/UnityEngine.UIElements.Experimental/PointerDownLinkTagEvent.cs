// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Experimental.PointerDownLinkTagEvent
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.Experimental;

[Token(Token = "0x2000654")]
[EventCategory(EventCategory.PointerDown)]
public sealed class PointerDownLinkTagEvent : PointerEventBase<PointerDownLinkTagEvent>
{
	[Token(Token = "0x17000B7F")]
	private string linkID
	{
		[Token(Token = "0x6002E3B")]
		[Address(RVA = "0x6BFED70", Offset = "0x6BFDD70", VA = "0x6BFED70")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000B80")]
	private string linkText
	{
		[Token(Token = "0x6002E3C")]
		[Address(RVA = "0x6BFED90", Offset = "0x6BFDD90", VA = "0x6BFED90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6002E3A")]
	[Address(RVA = "0x6BFECA0", Offset = "0x6BFDCA0", VA = "0x6BFECA0")]
	static PointerDownLinkTagEvent()
	{
	}

	[Token(Token = "0x6002E3D")]
	[Address(RVA = "0x6BFEDB0", Offset = "0x6BFDDB0", VA = "0x6BFEDB0", Slot = "13")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6002E3E")]
	[Address(RVA = "0x6BFEDF0", Offset = "0x6BFDDF0", VA = "0x6BFEDF0")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6002E3F")]
	[Address(RVA = "0x6BFEE00", Offset = "0x6BFDE00", VA = "0x6BFEE00")]
	public static PointerDownLinkTagEvent GetPooled(IPointerEvent evt, string linkID, string linkText)
	{
		return null;
	}

	[Token(Token = "0x6002E40")]
	[Address(RVA = "0x6BFEE90", Offset = "0x6BFDE90", VA = "0x6BFEE90")]
	public PointerDownLinkTagEvent()
	{
	}

	[Token(Token = "0x6002E41")]
	[Address(RVA = "0x6BFEED0", Offset = "0x6BFDED0", VA = "0x6BFEED0", Slot = "10")]
	internal override void Dispatch(BaseVisualElementPanel panel)
	{
	}
}
