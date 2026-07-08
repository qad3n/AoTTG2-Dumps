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
		[Address(RVA = "0x4D17750", Offset = "0x4D17750", VA = "0x4D17750")]
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
		[Address(RVA = "0x4D17760", Offset = "0x4D17760", VA = "0x4D17760")]
		set
		{
		}
	}

	[Token(Token = "0x1700026C")]
	public Focusable focusedElement
	{
		[Token(Token = "0x6000D22")]
		[Address(RVA = "0x4D17830", Offset = "0x4D17830", VA = "0x4D17830")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700026D")]
	internal int imguiKeyboardControl
	{
		[Token(Token = "0x6000D37")]
		[Address(RVA = "0x4D18BD0", Offset = "0x4D18BD0", VA = "0x4D18BD0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000D38")]
		[Address(RVA = "0x4D18BE0", Offset = "0x4D18BE0", VA = "0x4D18BE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000D1F")]
	[Address(RVA = "0x4D176B0", Offset = "0x4D176B0", VA = "0x4D176B0")]
	public FocusController(IFocusRing focusRing)
	{
	}

	[Token(Token = "0x6000D23")]
	[Address(RVA = "0x4D17AF0", Offset = "0x4D17AF0", VA = "0x4D17AF0")]
	internal bool IsFocused(Focusable f)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D24")]
	[Address(RVA = "0x4D17870", Offset = "0x4D17870", VA = "0x4D17870")]
	internal Focusable GetRetargetedFocusedElement(VisualElement retargetAgainst)
	{
		return null;
	}

	[Token(Token = "0x6000D25")]
	[Address(RVA = "0x4D17C80", Offset = "0x4D17C80", VA = "0x4D17C80")]
	internal Focusable GetLeafFocusedElement()
	{
		return null;
	}

	[Token(Token = "0x6000D26")]
	[Address(RVA = "0x4D17AB0", Offset = "0x4D17AB0", VA = "0x4D17AB0")]
	private bool IsLocalElement(Focusable f)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D27")]
	[Address(RVA = "0x4D17D10", Offset = "0x4D17D10", VA = "0x4D17D10")]
	internal bool IsPendingFocus(Focusable f)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D28")]
	[Address(RVA = "0x4D17DC0", Offset = "0x4D17DC0", VA = "0x4D17DC0")]
	internal void SetFocusToLastFocusedElement()
	{
	}

	[Token(Token = "0x6000D29")]
	[Address(RVA = "0x4D17E30", Offset = "0x4D17E30", VA = "0x4D17E30")]
	internal void BlurLastFocusedElement()
	{
	}

	[Token(Token = "0x6000D2A")]
	[Address(RVA = "0x4D17ED0", Offset = "0x4D17ED0", VA = "0x4D17ED0")]
	internal void DoFocusChange(Focusable f)
	{
	}

	[Token(Token = "0x6000D2B")]
	[Address(RVA = "0x4D180B0", Offset = "0x4D180B0", VA = "0x4D180B0")]
	internal void ProcessPendingFocusChange(Focusable f)
	{
	}

	[Token(Token = "0x6000D2C")]
	[Address(RVA = "0x4D180F0", Offset = "0x4D180F0", VA = "0x4D180F0")]
	internal Focusable FocusNextInDirection(FocusChangeDirection direction)
	{
		return null;
	}

	[Token(Token = "0x6000D2D")]
	[Address(RVA = "0x4D18290", Offset = "0x4D18290", VA = "0x4D18290")]
	private void AboutToReleaseFocus(Focusable focusable, Focusable willGiveFocusTo, FocusChangeDirection direction, DispatchMode dispatchMode)
	{
	}

	[Token(Token = "0x6000D2E")]
	[Address(RVA = "0x4D18450", Offset = "0x4D18450", VA = "0x4D18450")]
	private void ReleaseFocus(Focusable focusable, Focusable willGiveFocusTo, FocusChangeDirection direction, DispatchMode dispatchMode)
	{
	}

	[Token(Token = "0x6000D2F")]
	[Address(RVA = "0x4D18610", Offset = "0x4D18610", VA = "0x4D18610")]
	private void AboutToGrabFocus(Focusable focusable, Focusable willTakeFocusFrom, FocusChangeDirection direction, DispatchMode dispatchMode)
	{
	}

	[Token(Token = "0x6000D30")]
	[Address(RVA = "0x4D187D0", Offset = "0x4D187D0", VA = "0x4D187D0")]
	private void GrabFocus(Focusable focusable, Focusable willTakeFocusFrom, FocusChangeDirection direction, bool bIsFocusDelegated, DispatchMode dispatchMode)
	{
	}

	[Token(Token = "0x6000D31")]
	[Address(RVA = "0x4D16730", Offset = "0x4D16730", VA = "0x4D16730")]
	internal void Blur(Focusable focusable, bool bIsFocusDelegated = false, DispatchMode dispatchMode = DispatchMode.Default)
	{
	}

	[Token(Token = "0x6000D32")]
	[Address(RVA = "0x4D16630", Offset = "0x4D16630", VA = "0x4D16630")]
	internal void SwitchFocus(Focusable newFocusedElement, bool bIsFocusDelegated = false, DispatchMode dispatchMode = DispatchMode.Default)
	{
	}

	[Token(Token = "0x6000D33")]
	[Address(RVA = "0x4D17280", Offset = "0x4D17280", VA = "0x4D17280")]
	internal void SwitchFocus(Focusable newFocusedElement, FocusChangeDirection direction, bool bIsFocusDelegated = false, DispatchMode dispatchMode = DispatchMode.Default)
	{
	}

	[Token(Token = "0x6000D34")]
	[Address(RVA = "0x4D16B50", Offset = "0x4D16B50", VA = "0x4D16B50")]
	internal void SwitchFocusOnEvent(EventBase e)
	{
	}

	[Token(Token = "0x6000D35")]
	[Address(RVA = "0x4D189B0", Offset = "0x4D189B0", VA = "0x4D189B0")]
	internal void ReevaluateFocus()
	{
	}

	[Token(Token = "0x6000D36")]
	[Address(RVA = "0x4D18A90", Offset = "0x4D18A90", VA = "0x4D18A90")]
	internal bool GetFocusableParentForPointerEvent(Focusable target, out Focusable effectiveTarget)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D39")]
	[Address(RVA = "0x4D18BF0", Offset = "0x4D18BF0", VA = "0x4D18BF0")]
	internal void SyncIMGUIFocus(int imguiKeyboardControlID, Focusable imguiContainerHavingKeyboardControl, bool forceSwitch)
	{
	}
}
