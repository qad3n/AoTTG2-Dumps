// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.FocusController
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000205")]
public class FocusController
{
	[Token(Token = "0x2000206")]
	private struct FocusedElement
	{
		[Token(Token = "0x400072E")]
		[FieldOffset(Offset = "0x0")]
		public VisualElement m_SubTreeRoot;

		[Token(Token = "0x400072F")]
		[FieldOffset(Offset = "0x8")]
		public Focusable m_FocusedElement;
	}

	[Token(Token = "0x4000728")]
	[FieldOffset(Offset = "0x18")]
	private TextElement m_SelectedTextElement;

	[Token(Token = "0x4000729")]
	[FieldOffset(Offset = "0x20")]
	private List<FocusedElement> m_FocusedElements;

	[Token(Token = "0x400072A")]
	[FieldOffset(Offset = "0x28")]
	private Focusable m_LastFocusedElement;

	[Token(Token = "0x400072B")]
	[FieldOffset(Offset = "0x30")]
	internal Focusable m_LastPendingFocusedElement;

	[Token(Token = "0x400072C")]
	[FieldOffset(Offset = "0x38")]
	private int m_PendingFocusCount;

	[Token(Token = "0x1700026A")]
	private IFocusRing focusRing
	{
		[Token(Token = "0x6000D20")]
		[Address(RVA = "0x503F080", Offset = "0x503F080", VA = "0x503F080")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700026B")]
	internal TextElement selectedTextElement
	{
		[Token(Token = "0x6000D21")]
		[Address(RVA = "0x503F090", Offset = "0x503F090", VA = "0x503F090")]
		set
		{
		}
	}

	[Token(Token = "0x1700026C")]
	public Focusable focusedElement
	{
		[Token(Token = "0x6000D22")]
		[Address(RVA = "0x503F160", Offset = "0x503F160", VA = "0x503F160")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700026D")]
	internal int imguiKeyboardControl
	{
		[Token(Token = "0x6000D37")]
		[Address(RVA = "0x5040500", Offset = "0x5040500", VA = "0x5040500")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000D38")]
		[Address(RVA = "0x5040510", Offset = "0x5040510", VA = "0x5040510")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000D1F")]
	[Address(RVA = "0x503EFE0", Offset = "0x503EFE0", VA = "0x503EFE0")]
	public FocusController(IFocusRing focusRing)
	{
	}

	[Token(Token = "0x6000D23")]
	[Address(RVA = "0x503F420", Offset = "0x503F420", VA = "0x503F420")]
	internal bool IsFocused(Focusable f)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D24")]
	[Address(RVA = "0x503F1A0", Offset = "0x503F1A0", VA = "0x503F1A0")]
	internal Focusable GetRetargetedFocusedElement(VisualElement retargetAgainst)
	{
		return null;
	}

	[Token(Token = "0x6000D25")]
	[Address(RVA = "0x503F5B0", Offset = "0x503F5B0", VA = "0x503F5B0")]
	internal Focusable GetLeafFocusedElement()
	{
		return null;
	}

	[Token(Token = "0x6000D26")]
	[Address(RVA = "0x503F3E0", Offset = "0x503F3E0", VA = "0x503F3E0")]
	private bool IsLocalElement(Focusable f)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D27")]
	[Address(RVA = "0x503F640", Offset = "0x503F640", VA = "0x503F640")]
	internal bool IsPendingFocus(Focusable f)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D28")]
	[Address(RVA = "0x503F6F0", Offset = "0x503F6F0", VA = "0x503F6F0")]
	internal void SetFocusToLastFocusedElement()
	{
	}

	[Token(Token = "0x6000D29")]
	[Address(RVA = "0x503F760", Offset = "0x503F760", VA = "0x503F760")]
	internal void BlurLastFocusedElement()
	{
	}

	[Token(Token = "0x6000D2A")]
	[Address(RVA = "0x503F800", Offset = "0x503F800", VA = "0x503F800")]
	internal void DoFocusChange(Focusable f)
	{
	}

	[Token(Token = "0x6000D2B")]
	[Address(RVA = "0x503F9E0", Offset = "0x503F9E0", VA = "0x503F9E0")]
	internal void ProcessPendingFocusChange(Focusable f)
	{
	}

	[Token(Token = "0x6000D2C")]
	[Address(RVA = "0x503FA20", Offset = "0x503FA20", VA = "0x503FA20")]
	internal Focusable FocusNextInDirection(FocusChangeDirection direction)
	{
		return null;
	}

	[Token(Token = "0x6000D2D")]
	[Address(RVA = "0x503FBC0", Offset = "0x503FBC0", VA = "0x503FBC0")]
	private void AboutToReleaseFocus(Focusable focusable, Focusable willGiveFocusTo, FocusChangeDirection direction, DispatchMode dispatchMode)
	{
	}

	[Token(Token = "0x6000D2E")]
	[Address(RVA = "0x503FD80", Offset = "0x503FD80", VA = "0x503FD80")]
	private void ReleaseFocus(Focusable focusable, Focusable willGiveFocusTo, FocusChangeDirection direction, DispatchMode dispatchMode)
	{
	}

	[Token(Token = "0x6000D2F")]
	[Address(RVA = "0x503FF40", Offset = "0x503FF40", VA = "0x503FF40")]
	private void AboutToGrabFocus(Focusable focusable, Focusable willTakeFocusFrom, FocusChangeDirection direction, DispatchMode dispatchMode)
	{
	}

	[Token(Token = "0x6000D30")]
	[Address(RVA = "0x5040100", Offset = "0x5040100", VA = "0x5040100")]
	private void GrabFocus(Focusable focusable, Focusable willTakeFocusFrom, FocusChangeDirection direction, bool bIsFocusDelegated, DispatchMode dispatchMode)
	{
	}

	[Token(Token = "0x6000D31")]
	[Address(RVA = "0x503E060", Offset = "0x503E060", VA = "0x503E060")]
	internal void Blur(Focusable focusable, bool bIsFocusDelegated = false, DispatchMode dispatchMode = DispatchMode.Default)
	{
	}

	[Token(Token = "0x6000D32")]
	[Address(RVA = "0x503DF60", Offset = "0x503DF60", VA = "0x503DF60")]
	internal void SwitchFocus(Focusable newFocusedElement, bool bIsFocusDelegated = false, DispatchMode dispatchMode = DispatchMode.Default)
	{
	}

	[Token(Token = "0x6000D33")]
	[Address(RVA = "0x503EBB0", Offset = "0x503EBB0", VA = "0x503EBB0")]
	internal void SwitchFocus(Focusable newFocusedElement, FocusChangeDirection direction, bool bIsFocusDelegated = false, DispatchMode dispatchMode = DispatchMode.Default)
	{
	}

	[Token(Token = "0x6000D34")]
	[Address(RVA = "0x503E480", Offset = "0x503E480", VA = "0x503E480")]
	internal void SwitchFocusOnEvent(EventBase e)
	{
	}

	[Token(Token = "0x6000D35")]
	[Address(RVA = "0x50402E0", Offset = "0x50402E0", VA = "0x50402E0")]
	internal void ReevaluateFocus()
	{
	}

	[Token(Token = "0x6000D36")]
	[Address(RVA = "0x50403C0", Offset = "0x50403C0", VA = "0x50403C0")]
	internal bool GetFocusableParentForPointerEvent(Focusable target, out Focusable effectiveTarget)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D39")]
	[Address(RVA = "0x5040520", Offset = "0x5040520", VA = "0x5040520")]
	internal void SyncIMGUIFocus(int imguiKeyboardControlID, Focusable imguiContainerHavingKeyboardControl, bool forceSwitch)
	{
	}
}
