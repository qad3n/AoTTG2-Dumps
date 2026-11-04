// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.FocusController
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
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
		[Address(RVA = "0x3264D70", Offset = "0x3263370", VA = "0x183264D70")]
		set
		{
		}
	}

	[Token(Token = "0x17000311")]
	public Focusable focusedElement
	{
		[Token(Token = "0x6000FA2")]
		[Address(RVA = "0x3264D20", Offset = "0x3263320", VA = "0x183264D20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000312")]
	internal int imguiKeyboardControl
	{
		[Token(Token = "0x6000FB9")]
		[Address(RVA = "0x19CF1C0", Offset = "0x19CD7C0", VA = "0x1819CF1C0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000FBA")]
		[Address(RVA = "0x1CFE070", Offset = "0x1CFC670", VA = "0x181CFE070")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000F9F")]
	[Address(RVA = "0x3264C80", Offset = "0x3263280", VA = "0x183264C80")]
	public FocusController(IFocusRing focusRing)
	{
	}

	[Token(Token = "0x6000FA3")]
	[Address(RVA = "0x32638A0", Offset = "0x3261EA0", VA = "0x1832638A0")]
	public void IgnoreEvent(EventBase evt)
	{
	}

	[Token(Token = "0x6000FA4")]
	[Address(RVA = "0x3263970", Offset = "0x3261F70", VA = "0x183263970")]
	internal bool IsFocused(Focusable f)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FA5")]
	[Address(RVA = "0x3263320", Offset = "0x3261920", VA = "0x183263320")]
	internal Focusable GetRetargetedFocusedElement(VisualElement retargetAgainst)
	{
		return null;
	}

	[Token(Token = "0x6000FA6")]
	[Address(RVA = "0x3263260", Offset = "0x3261860", VA = "0x183263260")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal Focusable GetLeafFocusedElement()
	{
		return null;
	}

	[Token(Token = "0x6000FA7")]
	[Address(RVA = "0x3263AC0", Offset = "0x32620C0", VA = "0x183263AC0")]
	private bool IsLocalElement(Focusable f)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FA8")]
	[Address(RVA = "0x3263B00", Offset = "0x3262100", VA = "0x183263B00")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal bool IsPendingFocus(Focusable f)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FA9")]
	[Address(RVA = "0x3264280", Offset = "0x3262880", VA = "0x183264280")]
	internal void SetFocusToLastFocusedElement()
	{
	}

	[Token(Token = "0x6000FAA")]
	[Address(RVA = "0x3262C30", Offset = "0x3261230", VA = "0x183262C30")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void BlurLastFocusedElement()
	{
	}

	[Token(Token = "0x6000FAB")]
	[Address(RVA = "0x3262E30", Offset = "0x3261430", VA = "0x183262E30")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void DoFocusChange(Focusable f)
	{
	}

	[Token(Token = "0x6000FAC")]
	[Address(RVA = "0x3263BD0", Offset = "0x32621D0", VA = "0x183263BD0")]
	internal void ProcessPendingFocusChange(Focusable f)
	{
	}

	[Token(Token = "0x6000FAD")]
	[Address(RVA = "0x3262FA0", Offset = "0x32615A0", VA = "0x183262FA0")]
	private static void GetFocusTargets(Focusable f, List<FocusedElement> outTargets)
	{
	}

	[Token(Token = "0x6000FAE")]
	[Address(RVA = "0x3262EB0", Offset = "0x32614B0", VA = "0x183262EB0")]
	internal Focusable FocusNextInDirection(Focusable currentFocusable, FocusChangeDirection direction)
	{
		return null;
	}

	[Token(Token = "0x6000FAF")]
	[Address(RVA = "0x3262B20", Offset = "0x3261120", VA = "0x183262B20")]
	private void AboutToReleaseFocus(Focusable focusable, Focusable willGiveFocusTo, FocusChangeDirection direction, DispatchMode dispatchMode)
	{
	}

	[Token(Token = "0x6000FB0")]
	[Address(RVA = "0x3263F40", Offset = "0x3262540", VA = "0x183263F40")]
	private void ReleaseFocus(Focusable focusable, Focusable willGiveFocusTo, FocusChangeDirection direction, DispatchMode dispatchMode)
	{
	}

	[Token(Token = "0x6000FB1")]
	[Address(RVA = "0x3262A10", Offset = "0x3261010", VA = "0x183262A10")]
	private void AboutToGrabFocus(Focusable focusable, Focusable willTakeFocusFrom, FocusChangeDirection direction, DispatchMode dispatchMode)
	{
	}

	[Token(Token = "0x6000FB2")]
	[Address(RVA = "0x3263560", Offset = "0x3261B60", VA = "0x183263560")]
	private void GrabFocus(Focusable focusable, Focusable willTakeFocusFrom, FocusChangeDirection direction, bool bIsFocusDelegated, DispatchMode dispatchMode)
	{
	}

	[Token(Token = "0x6000FB3")]
	[Address(RVA = "0x3262D30", Offset = "0x3261330", VA = "0x183262D30")]
	internal void Blur(Focusable focusable, bool bIsFocusDelegated = false, DispatchMode dispatchMode = DispatchMode.Default)
	{
	}

	[Token(Token = "0x6000FB4")]
	[Address(RVA = "0x32645B0", Offset = "0x3262BB0", VA = "0x1832645B0")]
	internal void SwitchFocus(Focusable newFocusedElement, bool bIsFocusDelegated = false, DispatchMode dispatchMode = DispatchMode.Default)
	{
	}

	[Token(Token = "0x6000FB5")]
	[Address(RVA = "0x3264660", Offset = "0x3262C60", VA = "0x183264660")]
	internal void SwitchFocus(Focusable newFocusedElement, FocusChangeDirection direction, bool bIsFocusDelegated = false, DispatchMode dispatchMode = DispatchMode.Default)
	{
	}

	[Token(Token = "0x6000FB6")]
	[Address(RVA = "0x3264300", Offset = "0x3262900", VA = "0x183264300")]
	internal void SwitchFocusOnEvent(Focusable currentFocusable, EventBase e)
	{
	}

	[Token(Token = "0x6000FB7")]
	[Address(RVA = "0x3263E70", Offset = "0x3262470", VA = "0x183263E70")]
	internal void ReevaluateFocus()
	{
	}

	[Token(Token = "0x6000FB8")]
	[Address(RVA = "0x3263100", Offset = "0x3261700", VA = "0x183263100")]
	internal bool GetFocusableParentForPointerEvent(Focusable target, out Focusable effectiveTarget)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FBB")]
	[Address(RVA = "0x3264B70", Offset = "0x3263170", VA = "0x183264B70")]
	internal void SyncIMGUIFocus(int imguiKeyboardControlID, Focusable imguiContainerHavingKeyboardControl, bool forceSwitch)
	{
	}
}
