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
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000259")]
public class FocusController
{
	[Token(Token = "0x200025A")]
	private struct FocusedElement
	{
		[Token(Token = "0x400089F")]
		[FieldOffset(Offset = "0x0")]
		public VisualElement m_SubTreeRoot;

		[Token(Token = "0x40008A0")]
		[FieldOffset(Offset = "0x8")]
		public VisualElement m_FocusedElement;
	}

	[Token(Token = "0x4000899")]
	[FieldOffset(Offset = "0x18")]
	private TextElement m_SelectedTextElement;

	[Token(Token = "0x400089A")]
	[FieldOffset(Offset = "0x20")]
	private List<FocusedElement> m_FocusedElements;

	[Token(Token = "0x400089B")]
	[FieldOffset(Offset = "0x28")]
	private Focusable m_LastFocusedElement;

	[Token(Token = "0x400089C")]
	[FieldOffset(Offset = "0x30")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal Focusable m_LastPendingFocusedElement;

	[Token(Token = "0x400089D")]
	[FieldOffset(Offset = "0x38")]
	private int m_PendingFocusCount;

	[Token(Token = "0x1700030F")]
	private IFocusRing focusRing
	{
		[Token(Token = "0x6000FA0")]
		[Address(RVA = "0x6C760C0", Offset = "0x6C750C0", VA = "0x6C760C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000310")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal TextElement selectedTextElement
	{
		[Token(Token = "0x6000FA1")]
		[Address(RVA = "0x6C760D0", Offset = "0x6C750D0", VA = "0x6C760D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000311")]
	public Focusable focusedElement
	{
		[Token(Token = "0x6000FA2")]
		[Address(RVA = "0x6C761A0", Offset = "0x6C751A0", VA = "0x6C761A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000312")]
	internal int imguiKeyboardControl
	{
		[Token(Token = "0x6000FB9")]
		[Address(RVA = "0x6C77990", Offset = "0x6C76990", VA = "0x6C77990")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000FBA")]
		[Address(RVA = "0x6C779A0", Offset = "0x6C769A0", VA = "0x6C779A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000F9F")]
	[Address(RVA = "0x6C76020", Offset = "0x6C75020", VA = "0x6C76020")]
	public FocusController(IFocusRing focusRing)
	{
	}

	[Token(Token = "0x6000FA3")]
	[Address(RVA = "0x6C76430", Offset = "0x6C75430", VA = "0x6C76430")]
	public void IgnoreEvent(EventBase evt)
	{
	}

	[Token(Token = "0x6000FA4")]
	[Address(RVA = "0x6C76540", Offset = "0x6C75540", VA = "0x6C76540")]
	internal bool IsFocused(Focusable f)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FA5")]
	[Address(RVA = "0x6C761E0", Offset = "0x6C751E0", VA = "0x6C761E0")]
	internal Focusable GetRetargetedFocusedElement(VisualElement retargetAgainst)
	{
		return null;
	}

	[Token(Token = "0x6000FA6")]
	[Address(RVA = "0x6C64BC0", Offset = "0x6C63BC0", VA = "0x6C64BC0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal Focusable GetLeafFocusedElement()
	{
		return null;
	}

	[Token(Token = "0x6000FA7")]
	[Address(RVA = "0x6C763F0", Offset = "0x6C753F0", VA = "0x6C763F0")]
	private bool IsLocalElement(Focusable f)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FA8")]
	[Address(RVA = "0x6C766C0", Offset = "0x6C756C0", VA = "0x6C766C0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal bool IsPendingFocus(Focusable f)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FA9")]
	[Address(RVA = "0x6C76760", Offset = "0x6C75760", VA = "0x6C76760")]
	internal void SetFocusToLastFocusedElement()
	{
	}

	[Token(Token = "0x6000FAA")]
	[Address(RVA = "0x6C767D0", Offset = "0x6C757D0", VA = "0x6C767D0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void BlurLastFocusedElement()
	{
	}

	[Token(Token = "0x6000FAB")]
	[Address(RVA = "0x6C76870", Offset = "0x6C75870", VA = "0x6C76870")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void DoFocusChange(Focusable f)
	{
	}

	[Token(Token = "0x6000FAC")]
	[Address(RVA = "0x6C65AE0", Offset = "0x6C64AE0", VA = "0x6C65AE0")]
	internal void ProcessPendingFocusChange(Focusable f)
	{
	}

	[Token(Token = "0x6000FAD")]
	[Address(RVA = "0x6C768E0", Offset = "0x6C758E0", VA = "0x6C768E0")]
	private static void GetFocusTargets(Focusable f, List<FocusedElement> outTargets)
	{
	}

	[Token(Token = "0x6000FAE")]
	[Address(RVA = "0x6C76AF0", Offset = "0x6C75AF0", VA = "0x6C76AF0")]
	internal Focusable FocusNextInDirection(Focusable currentFocusable, FocusChangeDirection direction)
	{
		return null;
	}

	[Token(Token = "0x6000FAF")]
	[Address(RVA = "0x6C76BE0", Offset = "0x6C75BE0", VA = "0x6C76BE0")]
	private void AboutToReleaseFocus(Focusable focusable, Focusable willGiveFocusTo, FocusChangeDirection direction, DispatchMode dispatchMode)
	{
	}

	[Token(Token = "0x6000FB0")]
	[Address(RVA = "0x6C76D50", Offset = "0x6C75D50", VA = "0x6C76D50")]
	private void ReleaseFocus(Focusable focusable, Focusable willGiveFocusTo, FocusChangeDirection direction, DispatchMode dispatchMode)
	{
	}

	[Token(Token = "0x6000FB1")]
	[Address(RVA = "0x6C77190", Offset = "0x6C76190", VA = "0x6C77190")]
	private void AboutToGrabFocus(Focusable focusable, Focusable willTakeFocusFrom, FocusChangeDirection direction, DispatchMode dispatchMode)
	{
	}

	[Token(Token = "0x6000FB2")]
	[Address(RVA = "0x6C77300", Offset = "0x6C76300", VA = "0x6C77300")]
	private void GrabFocus(Focusable focusable, Focusable willTakeFocusFrom, FocusChangeDirection direction, bool bIsFocusDelegated, DispatchMode dispatchMode)
	{
	}

	[Token(Token = "0x6000FB3")]
	[Address(RVA = "0x6C753A0", Offset = "0x6C743A0", VA = "0x6C753A0")]
	internal void Blur(Focusable focusable, bool bIsFocusDelegated = false, DispatchMode dispatchMode = DispatchMode.Default)
	{
	}

	[Token(Token = "0x6000FB4")]
	[Address(RVA = "0x6C752A0", Offset = "0x6C742A0", VA = "0x6C752A0")]
	internal void SwitchFocus(Focusable newFocusedElement, bool bIsFocusDelegated = false, DispatchMode dispatchMode = DispatchMode.Default)
	{
	}

	[Token(Token = "0x6000FB5")]
	[Address(RVA = "0x6C75A70", Offset = "0x6C74A70", VA = "0x6C75A70")]
	internal void SwitchFocus(Focusable newFocusedElement, FocusChangeDirection direction, bool bIsFocusDelegated = false, DispatchMode dispatchMode = DispatchMode.Default)
	{
	}

	[Token(Token = "0x6000FB6")]
	[Address(RVA = "0x6C6BA50", Offset = "0x6C6AA50", VA = "0x6C6BA50")]
	internal void SwitchFocusOnEvent(Focusable currentFocusable, EventBase e)
	{
	}

	[Token(Token = "0x6000FB7")]
	[Address(RVA = "0x6C77760", Offset = "0x6C76760", VA = "0x6C77760")]
	internal void ReevaluateFocus()
	{
	}

	[Token(Token = "0x6000FB8")]
	[Address(RVA = "0x6C77820", Offset = "0x6C76820", VA = "0x6C77820")]
	internal bool GetFocusableParentForPointerEvent(Focusable target, out Focusable effectiveTarget)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FBB")]
	[Address(RVA = "0x6C779B0", Offset = "0x6C769B0", VA = "0x6C779B0")]
	internal void SyncIMGUIFocus(int imguiKeyboardControlID, Focusable imguiContainerHavingKeyboardControl, bool forceSwitch)
	{
	}
}
