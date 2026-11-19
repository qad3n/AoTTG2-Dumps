// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PointerMoveEvent
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6C6F140", Offset = "0x6C6E140", VA = "0x6C6F140")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EA6")]
		[Address(RVA = "0x6C6F150", Offset = "0x6C6E150", VA = "0x6C6F150")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002E2")]
	internal bool isPointerDown
	{
		[Token(Token = "0x6000EA7")]
		[Address(RVA = "0x6C6F160", Offset = "0x6C6E160", VA = "0x6C6F160")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002E3")]
	internal bool isPointerUp
	{
		[Token(Token = "0x6000EA8")]
		[Address(RVA = "0x6C6F1B0", Offset = "0x6C6E1B0", VA = "0x6C6F1B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000EA4")]
	[Address(RVA = "0x6C6F070", Offset = "0x6C6E070", VA = "0x6C6F070")]
	static PointerMoveEvent()
	{
	}

	[Token(Token = "0x6000EA9")]
	[Address(RVA = "0x6C6F200", Offset = "0x6C6E200", VA = "0x6C6F200", Slot = "13")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000EAA")]
	[Address(RVA = "0x6C6F270", Offset = "0x6C6E270", VA = "0x6C6F270")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000EAB")]
	[Address(RVA = "0x6C6F2B0", Offset = "0x6C6E2B0", VA = "0x6C6F2B0")]
	public PointerMoveEvent()
	{
	}

	[Token(Token = "0x6000EAC")]
	[Address(RVA = "0x6C6F320", Offset = "0x6C6E320", VA = "0x6C6F320", Slot = "45")]
	internal override IMouseEvent GetPooledCompatibilityMouseEvent()
	{
		return null;
	}

	[Token(Token = "0x6000EAD")]
	[Address(RVA = "0x6C6F530", Offset = "0x6C6E530", VA = "0x6C6F530", Slot = "7")]
	protected internal override void PreDispatch(IPanel panel)
	{
	}

	[Token(Token = "0x6000EAE")]
	[Address(RVA = "0x6C6F580", Offset = "0x6C6E580", VA = "0x6C6F580", Slot = "9")]
	protected internal override void PostDispatch(IPanel panel)
	{
	}

	[Token(Token = "0x6000EAF")]
	[Address(RVA = "0x6C6F680", Offset = "0x6C6E680", VA = "0x6C6F680", Slot = "10")]
	internal override void Dispatch(BaseVisualElementPanel panel)
	{
	}
}
