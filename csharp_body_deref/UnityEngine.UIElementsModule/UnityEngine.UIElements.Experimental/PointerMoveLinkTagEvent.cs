// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Experimental.PointerMoveLinkTagEvent
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x2CF3F20", Offset = "0x2CF2520", VA = "0x182CF3F20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000B7E")]
	private string linkText
	{
		[Token(Token = "0x6002E28")]
		[Address(RVA = "0x3182970", Offset = "0x3180F70", VA = "0x183182970")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6002E26")]
	[Address(RVA = "0x3207540", Offset = "0x3205B40", VA = "0x183207540")]
	static PointerMoveLinkTagEvent()
	{
	}

	[Token(Token = "0x6002E29")]
	[Address(RVA = "0x32074F0", Offset = "0x3205AF0", VA = "0x1832074F0", Slot = "13")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6002E2A")]
	[Address(RVA = "0x31ED2A0", Offset = "0x31EB8A0", VA = "0x1831ED2A0")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6002E2B")]
	[Address(RVA = "0x3207460", Offset = "0x3205A60", VA = "0x183207460")]
	public static PointerMoveLinkTagEvent GetPooled(IPointerEvent evt, string linkID, string linkText)
	{
		return null;
	}

	[Token(Token = "0x6002E2C")]
	[Address(RVA = "0x3207620", Offset = "0x3205C20", VA = "0x183207620")]
	public PointerMoveLinkTagEvent()
	{
	}

	[Token(Token = "0x6002E2D")]
	[Address(RVA = "0x31ED1B0", Offset = "0x31EB7B0", VA = "0x1831ED1B0", Slot = "10")]
	internal override void Dispatch(BaseVisualElementPanel panel)
	{
	}
}
