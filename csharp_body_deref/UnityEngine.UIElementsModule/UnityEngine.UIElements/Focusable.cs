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
		[Address(RVA = "0x4D16120", Offset = "0x4D16120", VA = "0x4D16120")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000D03")]
		[Address(RVA = "0x4D15FE0", Offset = "0x4D15FE0", VA = "0x4D15FE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000263")]
	[CreateProperty]
	public int tabIndex
	{
		[Token(Token = "0x6000D04")]
		[Address(RVA = "0x4D16130", Offset = "0x4D16130", VA = "0x4D16130")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000D05")]
		[Address(RVA = "0x4D16090", Offset = "0x4D16090", VA = "0x4D16090")]
		set
		{
		}
	}

	[Token(Token = "0x17000264")]
	[CreateProperty]
	public bool delegatesFocus
	{
		[Token(Token = "0x6000D06")]
		[Address(RVA = "0x4D16140", Offset = "0x4D16140", VA = "0x4D16140")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000D07")]
		[Address(RVA = "0x4D16150", Offset = "0x4D16150", VA = "0x4D16150")]
		set
		{
		}
	}

	[Token(Token = "0x17000265")]
	internal bool excludeFromFocusRing
	{
		[Token(Token = "0x6000D08")]
		[Address(RVA = "0x4D161F0", Offset = "0x4D161F0", VA = "0x4D161F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000D09")]
		[Address(RVA = "0x4D16200", Offset = "0x4D16200", VA = "0x4D16200")]
		set
		{
		}
	}

	[Token(Token = "0x17000266")]
	[CreateProperty(ReadOnly = true)]
	public virtual bool canGrabFocus
	{
		[Token(Token = "0x6000D0A")]
		[Address(RVA = "0x4D162C0", Offset = "0x4D162C0", VA = "0x4D162C0", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000D00")]
	[Address(RVA = "0x4D15EB0", Offset = "0x4D15EB0", VA = "0x4D15EB0")]
	protected Focusable()
	{
	}

	[Token(Token = "0x6000D0B")]
	[Address(RVA = "0x4D162D0", Offset = "0x4D162D0", VA = "0x4D162D0", Slot = "15")]
	public virtual void Focus()
	{
	}

	[Token(Token = "0x6000D0C")]
	[Address(RVA = "0x4D16700", Offset = "0x4D16700", VA = "0x4D16700", Slot = "16")]
	public virtual void Blur()
	{
	}

	[Token(Token = "0x6000D0D")]
	[Address(RVA = "0x4D168B0", Offset = "0x4D168B0", VA = "0x4D168B0")]
	internal void BlurImmediately()
	{
	}

	[Token(Token = "0x6000D0E")]
	[Address(RVA = "0x4D16580", Offset = "0x4D16580", VA = "0x4D16580")]
	private Focusable GetFocusDelegate()
	{
		return null;
	}

	[Token(Token = "0x6000D0F")]
	[Address(RVA = "0x4D168E0", Offset = "0x4D168E0", VA = "0x4D168E0")]
	private static Focusable GetFirstFocusableChild(VisualElement ve)
	{
		return null;
	}

	[Token(Token = "0x6000D10")]
	[Address(RVA = "0x4D16A60", Offset = "0x4D16A60", VA = "0x4D16A60", Slot = "10")]
	[EventInterest(new Type[]
	{
		typeof(PointerDownEvent),
		typeof(NavigationMoveEvent)
	})]
	protected override void ExecuteDefaultAction(EventBase evt)
	{
	}

	[Token(Token = "0x6000D11")]
	[Address(RVA = "0x4D16B00", Offset = "0x4D16B00", VA = "0x4D16B00", Slot = "12")]
	[EventInterest(new Type[]
	{
		typeof(PointerDownEvent),
		typeof(NavigationMoveEvent)
	})]
	internal override void ExecuteDefaultActionDisabled(EventBase evt)
	{
	}

	[Token(Token = "0x6000D12")]
	[Address(RVA = "0x4D16AC0", Offset = "0x4D16AC0", VA = "0x4D16AC0")]
	private void ProcessEvent(EventBase evt)
	{
	}
}
