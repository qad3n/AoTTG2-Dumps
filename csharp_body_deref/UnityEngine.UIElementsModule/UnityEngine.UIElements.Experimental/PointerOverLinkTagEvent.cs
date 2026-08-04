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

[Token(Token = "0x2000558")]
[EventCategory(EventCategory.EnterLeave)]
public class PointerOverLinkTagEvent : PointerEventBase<PointerOverLinkTagEvent>
{
	[Token(Token = "0x1700085E")]
	private string linkID
	{
		[Token(Token = "0x60020AF")]
		[Address(RVA = "0x4FD4110", Offset = "0x4FD4110", VA = "0x4FD4110")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700085F")]
	private string linkText
	{
		[Token(Token = "0x60020B0")]
		[Address(RVA = "0x4FD4130", Offset = "0x4FD4130", VA = "0x4FD4130")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60020AE")]
	[Address(RVA = "0x4FD4040", Offset = "0x4FD4040", VA = "0x4FD4040")]
	static PointerOverLinkTagEvent()
	{
	}

	[Token(Token = "0x60020B1")]
	[Address(RVA = "0x4FD4150", Offset = "0x4FD4150", VA = "0x4FD4150", Slot = "13")]
	protected override void Init()
	{
	}

	[Token(Token = "0x60020B2")]
	[Address(RVA = "0x4FD4190", Offset = "0x4FD4190", VA = "0x4FD4190")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x60020B3")]
	[Address(RVA = "0x4FD41A0", Offset = "0x4FD41A0", VA = "0x4FD41A0")]
	public static PointerOverLinkTagEvent GetPooled(IPointerEvent evt, string linkID, string linkText)
	{
		return null;
	}

	[Token(Token = "0x60020B4")]
	[Address(RVA = "0x4FD4230", Offset = "0x4FD4230", VA = "0x4FD4230")]
	public PointerOverLinkTagEvent()
	{
	}
}
