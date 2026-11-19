// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Experimental.PointerOverLinkTagEvent
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6BFE4A0", Offset = "0x6BFD4A0", VA = "0x6BFE4A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000B7C")]
	private string linkText
	{
		[Token(Token = "0x6002E1D")]
		[Address(RVA = "0x6BFE4C0", Offset = "0x6BFD4C0", VA = "0x6BFE4C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6002E1B")]
	[Address(RVA = "0x6BFE3D0", Offset = "0x6BFD3D0", VA = "0x6BFE3D0")]
	static PointerOverLinkTagEvent()
	{
	}

	[Token(Token = "0x6002E1E")]
	[Address(RVA = "0x6BFE4E0", Offset = "0x6BFD4E0", VA = "0x6BFE4E0", Slot = "13")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6002E1F")]
	[Address(RVA = "0x6BFE520", Offset = "0x6BFD520", VA = "0x6BFE520")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6002E20")]
	[Address(RVA = "0x6BFE530", Offset = "0x6BFD530", VA = "0x6BFE530")]
	public static PointerOverLinkTagEvent GetPooled(IPointerEvent evt, string linkID, string linkText)
	{
		return null;
	}

	[Token(Token = "0x6002E21")]
	[Address(RVA = "0x6BFE5C0", Offset = "0x6BFD5C0", VA = "0x6BFE5C0")]
	public PointerOverLinkTagEvent()
	{
	}

	[Token(Token = "0x6002E22")]
	[Address(RVA = "0x6BFE600", Offset = "0x6BFD600", VA = "0x6BFE600", Slot = "10")]
	internal override void Dispatch(BaseVisualElementPanel panel)
	{
	}
}
