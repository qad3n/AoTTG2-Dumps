// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Focusable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000202")]
public abstract class Focusable : CallbackEventHandler
{
	[Token(Token = "0x400071B")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty focusableProperty;

	[Token(Token = "0x400071C")]
	[FieldOffset(Offset = "0xA0")]
	internal static readonly DataBindingProperty tabIndexProperty;

	[Token(Token = "0x400071D")]
	[FieldOffset(Offset = "0x140")]
	internal static readonly DataBindingProperty delegatesFocusProperty;

	[Token(Token = "0x400071E")]
	[FieldOffset(Offset = "0x1E0")]
	internal static readonly DataBindingProperty canGrabFocusProperty;

	[Token(Token = "0x400071F")]
	[FieldOffset(Offset = "0x20")]
	private bool m_Focusable;

	[Token(Token = "0x4000720")]
	[FieldOffset(Offset = "0x24")]
	private int m_TabIndex;

	[Token(Token = "0x4000721")]
	[FieldOffset(Offset = "0x28")]
	private bool m_DelegatesFocus;

	[Token(Token = "0x4000722")]
	[FieldOffset(Offset = "0x29")]
	private bool m_ExcludeFromFocusRing;

	[Token(Token = "0x17000261")]
	public abstract FocusController focusController
	{
		[Token(Token = "0x6000D01")]
		get;
	}

	[Token(Token = "0x17000262")]
	[CreateProperty]
	public bool focusable
	{
		[Token(Token = "0x6000D02")]
		[Address(RVA = "0x503DA50", Offset = "0x503DA50", VA = "0x503DA50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000D03")]
		[Address(RVA = "0x503D910", Offset = "0x503D910", VA = "0x503D910")]
		set
		{
		}
	}

	[Token(Token = "0x17000263")]
	[CreateProperty]
	public int tabIndex
	{
		[Token(Token = "0x6000D04")]
		[Address(RVA = "0x503DA60", Offset = "0x503DA60", VA = "0x503DA60")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000D05")]
		[Address(RVA = "0x503D9C0", Offset = "0x503D9C0", VA = "0x503D9C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000264")]
	[CreateProperty]
	public bool delegatesFocus
	{
		[Token(Token = "0x6000D06")]
		[Address(RVA = "0x503DA70", Offset = "0x503DA70", VA = "0x503DA70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000D07")]
		[Address(RVA = "0x503DA80", Offset = "0x503DA80", VA = "0x503DA80")]
		set
		{
		}
	}

	[Token(Token = "0x17000265")]
	internal bool excludeFromFocusRing
	{
		[Token(Token = "0x6000D08")]
		[Address(RVA = "0x503DB20", Offset = "0x503DB20", VA = "0x503DB20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000D09")]
		[Address(RVA = "0x503DB30", Offset = "0x503DB30", VA = "0x503DB30")]
		set
		{
		}
	}

	[Token(Token = "0x17000266")]
	[CreateProperty(ReadOnly = true)]
	public virtual bool canGrabFocus
	{
		[Token(Token = "0x6000D0A")]
		[Address(RVA = "0x503DBF0", Offset = "0x503DBF0", VA = "0x503DBF0", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000D00")]
	[Address(RVA = "0x503D7E0", Offset = "0x503D7E0", VA = "0x503D7E0")]
	protected Focusable()
	{
	}

	[Token(Token = "0x6000D0B")]
	[Address(RVA = "0x503DC00", Offset = "0x503DC00", VA = "0x503DC00", Slot = "15")]
	public virtual void Focus()
	{
	}

	[Token(Token = "0x6000D0C")]
	[Address(RVA = "0x503E030", Offset = "0x503E030", VA = "0x503E030", Slot = "16")]
	public virtual void Blur()
	{
	}

	[Token(Token = "0x6000D0D")]
	[Address(RVA = "0x503E1E0", Offset = "0x503E1E0", VA = "0x503E1E0")]
	internal void BlurImmediately()
	{
	}

	[Token(Token = "0x6000D0E")]
	[Address(RVA = "0x503DEB0", Offset = "0x503DEB0", VA = "0x503DEB0")]
	private Focusable GetFocusDelegate()
	{
		return null;
	}

	[Token(Token = "0x6000D0F")]
	[Address(RVA = "0x503E210", Offset = "0x503E210", VA = "0x503E210")]
	private static Focusable GetFirstFocusableChild(VisualElement ve)
	{
		return null;
	}

	[Token(Token = "0x6000D10")]
	[Address(RVA = "0x503E390", Offset = "0x503E390", VA = "0x503E390", Slot = "10")]
	[EventInterest(new Type[]
	{
		typeof(PointerDownEvent),
		typeof(NavigationMoveEvent)
	})]
	protected override void ExecuteDefaultAction(EventBase evt)
	{
	}

	[Token(Token = "0x6000D11")]
	[Address(RVA = "0x503E430", Offset = "0x503E430", VA = "0x503E430", Slot = "12")]
	[EventInterest(new Type[]
	{
		typeof(PointerDownEvent),
		typeof(NavigationMoveEvent)
	})]
	internal override void ExecuteDefaultActionDisabled(EventBase evt)
	{
	}

	[Token(Token = "0x6000D12")]
	[Address(RVA = "0x503E3F0", Offset = "0x503E3F0", VA = "0x503E3F0")]
	private void ProcessEvent(EventBase evt)
	{
	}
}
