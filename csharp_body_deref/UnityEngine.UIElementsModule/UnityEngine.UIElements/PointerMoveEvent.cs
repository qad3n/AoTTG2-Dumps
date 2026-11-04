// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PointerMoveEvent
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000227")]
[EventCategory(EventCategory.PointerMove)]
public sealed class PointerMoveEvent : PointerEventBase<PointerMoveEvent>
{
	[Token(Token = "0x170002E1")]
	internal bool isHandledByDraggable
	{
		[Token(Token = "0x6000EA5")]
		[Address(RVA = "0x1C41CE0", Offset = "0x1C402E0", VA = "0x181C41CE0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EA6")]
		[Address(RVA = "0x1C41DF0", Offset = "0x1C403F0", VA = "0x181C41DF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002E2")]
	internal bool isPointerDown
	{
		[Token(Token = "0x6000EA7")]
		[Address(RVA = "0x326D040", Offset = "0x326B640", VA = "0x18326D040")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002E3")]
	internal bool isPointerUp
	{
		[Token(Token = "0x6000EA8")]
		[Address(RVA = "0x326D0A0", Offset = "0x326B6A0", VA = "0x18326D0A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000EA4")]
	[Address(RVA = "0x326CEF0", Offset = "0x326B4F0", VA = "0x18326CEF0")]
	static PointerMoveEvent()
	{
	}

	[Token(Token = "0x6000EA9")]
	[Address(RVA = "0x326CD50", Offset = "0x326B350", VA = "0x18326CD50", Slot = "13")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000EAA")]
	[Address(RVA = "0x326CDC0", Offset = "0x326B3C0", VA = "0x18326CDC0")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000EAB")]
	[Address(RVA = "0x326CFD0", Offset = "0x326B5D0", VA = "0x18326CFD0")]
	public PointerMoveEvent()
	{
	}

	[Token(Token = "0x6000EAC")]
	[Address(RVA = "0x326CB90", Offset = "0x326B190", VA = "0x18326CB90", Slot = "45")]
	internal override IMouseEvent GetPooledCompatibilityMouseEvent()
	{
		return null;
	}

	[Token(Token = "0x6000EAD")]
	[Address(RVA = "0x326CEA0", Offset = "0x326B4A0", VA = "0x18326CEA0", Slot = "7")]
	protected internal override void PreDispatch(IPanel panel)
	{
	}

	[Token(Token = "0x6000EAE")]
	[Address(RVA = "0x326CE00", Offset = "0x326B400", VA = "0x18326CE00", Slot = "9")]
	protected internal override void PostDispatch(IPanel panel)
	{
	}

	[Token(Token = "0x6000EAF")]
	[Address(RVA = "0x326CB10", Offset = "0x326B110", VA = "0x18326CB10", Slot = "10")]
	internal override void Dispatch(BaseVisualElementPanel panel)
	{
	}
}
