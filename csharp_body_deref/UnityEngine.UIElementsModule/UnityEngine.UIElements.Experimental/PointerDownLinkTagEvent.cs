// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Experimental.PointerDownLinkTagEvent
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x2CF3F20", Offset = "0x2CF2520", VA = "0x182CF3F20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000B80")]
	private string linkText
	{
		[Token(Token = "0x6002E3C")]
		[Address(RVA = "0x3182970", Offset = "0x3180F70", VA = "0x183182970")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6002E3A")]
	[Address(RVA = "0x3207330", Offset = "0x3205930", VA = "0x183207330")]
	static PointerDownLinkTagEvent()
	{
	}

	[Token(Token = "0x6002E3D")]
	[Address(RVA = "0x32072E0", Offset = "0x32058E0", VA = "0x1832072E0", Slot = "13")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6002E3E")]
	[Address(RVA = "0x31ED2A0", Offset = "0x31EB8A0", VA = "0x1831ED2A0")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6002E3F")]
	[Address(RVA = "0x3207250", Offset = "0x3205850", VA = "0x183207250")]
	public static PointerDownLinkTagEvent GetPooled(IPointerEvent evt, string linkID, string linkText)
	{
		return null;
	}

	[Token(Token = "0x6002E40")]
	[Address(RVA = "0x3207410", Offset = "0x3205A10", VA = "0x183207410")]
	public PointerDownLinkTagEvent()
	{
	}

	[Token(Token = "0x6002E41")]
	[Address(RVA = "0x31ED1B0", Offset = "0x31EB7B0", VA = "0x1831ED1B0", Slot = "10")]
	internal override void Dispatch(BaseVisualElementPanel panel)
	{
	}
}
