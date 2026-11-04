// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Experimental.PointerOverLinkTagEvent
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.Experimental;

[Token(Token = "0x200064E")]
[EventCategory(EventCategory.EnterLeave)]
public class PointerOverLinkTagEvent : PointerEventBase<PointerOverLinkTagEvent>
{
	[Token(Token = "0x17000B7B")]
	private string linkID
	{
		[Token(Token = "0x6002E1C")]
		[Address(RVA = "0x2CF3F20", Offset = "0x2CF2520", VA = "0x182CF3F20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000B7C")]
	private string linkText
	{
		[Token(Token = "0x6002E1D")]
		[Address(RVA = "0x3182970", Offset = "0x3180F70", VA = "0x183182970")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6002E1B")]
	[Address(RVA = "0x31ED2B0", Offset = "0x31EB8B0", VA = "0x1831ED2B0")]
	static PointerOverLinkTagEvent()
	{
	}

	[Token(Token = "0x6002E1E")]
	[Address(RVA = "0x31ED250", Offset = "0x31EB850", VA = "0x1831ED250", Slot = "13")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6002E1F")]
	[Address(RVA = "0x31ED2A0", Offset = "0x31EB8A0", VA = "0x1831ED2A0")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6002E20")]
	[Address(RVA = "0x31ED1C0", Offset = "0x31EB7C0", VA = "0x1831ED1C0")]
	public static PointerOverLinkTagEvent GetPooled(IPointerEvent evt, string linkID, string linkText)
	{
		return null;
	}

	[Token(Token = "0x6002E21")]
	[Address(RVA = "0x31ED390", Offset = "0x31EB990", VA = "0x1831ED390")]
	public PointerOverLinkTagEvent()
	{
	}

	[Token(Token = "0x6002E22")]
	[Address(RVA = "0x31ED1B0", Offset = "0x31EB7B0", VA = "0x1831ED1B0", Slot = "10")]
	internal override void Dispatch(BaseVisualElementPanel panel)
	{
	}
}
