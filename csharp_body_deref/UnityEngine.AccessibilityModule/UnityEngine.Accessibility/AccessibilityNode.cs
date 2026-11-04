// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Accessibility.AccessibilityNode
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Accessibility;

[Token(Token = "0x2000013")]
public class AccessibilityNode
{
	[Token(Token = "0x4000050")]
	[FieldOffset(Offset = "0x10")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action<AccessibilityNode, bool> focusChanged;

	[Token(Token = "0x4000051")]
	[FieldOffset(Offset = "0x18")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Func<bool> invoked;

	[Token(Token = "0x4000052")]
	[FieldOffset(Offset = "0x20")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action incremented;

	[Token(Token = "0x4000053")]
	[FieldOffset(Offset = "0x28")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action decremented;

	[Token(Token = "0x4000054")]
	[FieldOffset(Offset = "0x30")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Func<AccessibilityScrollDirection, bool> scrolled;

	[Token(Token = "0x4000055")]
	[FieldOffset(Offset = "0x38")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Func<bool> dismissed;

	[Token(Token = "0x4000056")]
	[FieldOffset(Offset = "0x40")]
	private AccessibilityHierarchy m_Hierarchy;

	[Token(Token = "0x4000057")]
	[FieldOffset(Offset = "0x48")]
	internal List<AccessibilityNode> childList;

	[Token(Token = "0x4000059")]
	[FieldOffset(Offset = "0x58")]
	private string m_Label;

	[Token(Token = "0x400005A")]
	[FieldOffset(Offset = "0x60")]
	private string m_Value;

	[Token(Token = "0x400005B")]
	[FieldOffset(Offset = "0x68")]
	private string m_Hint;

	[Token(Token = "0x400005C")]
	[FieldOffset(Offset = "0x70")]
	private Rect m_Frame;

	[Token(Token = "0x400005D")]
	[FieldOffset(Offset = "0x80")]
	private Func<Rect> m_FrameGetter;

	[Token(Token = "0x400005F")]
	[FieldOffset(Offset = "0x8C")]
	private AccessibilityRole m_Role;

	[Token(Token = "0x4000060")]
	[FieldOffset(Offset = "0x8D")]
	private AccessibilityState m_State;

	[Token(Token = "0x4000061")]
	[FieldOffset(Offset = "0x8E")]
	private bool m_IsActive;

	[Token(Token = "0x4000062")]
	[FieldOffset(Offset = "0x8F")]
	private bool m_AllowsDirectInteraction;

	[Token(Token = "0x1700001D")]
	public IReadOnlyList<AccessibilityNode> children
	{
		[Token(Token = "0x600006A")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001E")]
	public AccessibilityNode parent
	{
		[Token(Token = "0x600006B")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001F")]
	public string label
	{
		[Token(Token = "0x600006C")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000020")]
	public string value
	{
		[Token(Token = "0x600006D")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000021")]
	public string hint
	{
		[Token(Token = "0x600006E")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000022")]
	public Rect frame
	{
		[Token(Token = "0x600006F")]
		[Address(RVA = "0x2E7F860", Offset = "0x2E7DE60", VA = "0x182E7F860")]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x6000070")]
		[Address(RVA = "0x2E7FA10", Offset = "0x2E7E010", VA = "0x182E7FA10")]
		set
		{
		}
	}

	[Token(Token = "0x17000023")]
	public Func<Rect> frameGetter
	{
		[Token(Token = "0x6000071")]
		[Address(RVA = "0x58A5D0", Offset = "0x588BD0", VA = "0x18058A5D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000024")]
	public int id
	{
		[Token(Token = "0x6000072")]
		[Address(RVA = "0xA4D4B0", Offset = "0xA4BAB0", VA = "0x180A4D4B0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000025")]
	public AccessibilityRole role
	{
		[Token(Token = "0x6000073")]
		[Address(RVA = "0x1CD39F0", Offset = "0x1CD1FF0", VA = "0x181CD39F0")]
		get
		{
			return default(AccessibilityRole);
		}
	}

	[Token(Token = "0x17000026")]
	public AccessibilityState state
	{
		[Token(Token = "0x6000074")]
		[Address(RVA = "0x2E7FA00", Offset = "0x2E7E000", VA = "0x182E7FA00")]
		get
		{
			return default(AccessibilityState);
		}
	}

	[Token(Token = "0x17000027")]
	public bool isActive
	{
		[Token(Token = "0x6000075")]
		[Address(RVA = "0x2E7F9F0", Offset = "0x2E7DFF0", VA = "0x182E7F9F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000028")]
	public bool allowsDirectInteraction
	{
		[Token(Token = "0x6000076")]
		[Address(RVA = "0x2E7F850", Offset = "0x2E7DE50", VA = "0x182E7F850")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x2E7EEF0", Offset = "0x2E7D4F0", VA = "0x182E7EEF0")]
	private void CreateNativeNodeWithData(ref AccessibilityNodeData nodeData)
	{
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x2E7F2D0", Offset = "0x2E7D8D0", VA = "0x182E7F2D0")]
	internal void GetNodeData(ref AccessibilityNodeData nodeData)
	{
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x2E7E9D0", Offset = "0x2E7CFD0", VA = "0x182E7E9D0")]
	internal void AllocateNative()
	{
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x2E7F070", Offset = "0x2E7D670", VA = "0x182E7F070")]
	internal void FreeNative(bool freeChildren)
	{
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x2E7F6A0", Offset = "0x2E7DCA0", VA = "0x182E7F6A0")]
	private bool IsInActiveHierarchy()
	{
		return default(bool);
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x2E7F730", Offset = "0x2E7DD30", VA = "0x182E7F730")]
	internal void NotifyFocusChanged(bool isNodeFocused)
	{
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x2E7F5F0", Offset = "0x2E7DBF0", VA = "0x182E7F5F0")]
	internal void InvokeFocusChanged(bool isNodeFocused)
	{
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x2E7F640", Offset = "0x2E7DC40", VA = "0x182E7F640")]
	internal bool InvokeNodeInvoked()
	{
		return default(bool);
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x2E7F610", Offset = "0x2E7DC10", VA = "0x182E7F610")]
	internal bool InvokeIncremented()
	{
		return default(bool);
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x2E7F590", Offset = "0x2E7DB90", VA = "0x182E7F590")]
	internal bool InvokeDecremented()
	{
		return default(bool);
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x2E7F670", Offset = "0x2E7DC70", VA = "0x182E7F670")]
	internal bool InvokeScrolled(AccessibilityScrollDirection direction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x2E7F5C0", Offset = "0x2E7DBC0", VA = "0x182E7F5C0")]
	internal bool InvokeDismissed()
	{
		return default(bool);
	}
}
