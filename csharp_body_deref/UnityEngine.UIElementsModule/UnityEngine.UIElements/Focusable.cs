// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Focusable
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000256")]
public abstract class Focusable : CallbackEventHandler
{
	[Token(Token = "0x400088B")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly BindingId focusableProperty;

	[Token(Token = "0x400088C")]
	[FieldOffset(Offset = "0x98")]
	internal static readonly BindingId tabIndexProperty;

	[Token(Token = "0x400088D")]
	[FieldOffset(Offset = "0x130")]
	internal static readonly BindingId delegatesFocusProperty;

	[Token(Token = "0x400088E")]
	[FieldOffset(Offset = "0x1C8")]
	internal static readonly BindingId canGrabFocusProperty;

	[Token(Token = "0x400088F")]
	[FieldOffset(Offset = "0x20")]
	private bool m_Focusable;

	[Token(Token = "0x4000890")]
	[FieldOffset(Offset = "0x24")]
	private int m_TabIndex;

	[Token(Token = "0x4000891")]
	[FieldOffset(Offset = "0x28")]
	private bool m_DelegatesFocus;

	[Token(Token = "0x4000892")]
	[FieldOffset(Offset = "0x29")]
	private bool m_ExcludeFromFocusRing;

	[Token(Token = "0x17000305")]
	public abstract FocusController focusController
	{
		[Token(Token = "0x6000F82")]
		get;
	}

	[Token(Token = "0x17000306")]
	[CreateProperty]
	public virtual bool focusable
	{
		[Token(Token = "0x6000F83")]
		[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "16")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000F84")]
		[Address(RVA = "0x3265CB0", Offset = "0x32642B0", VA = "0x183265CB0", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x17000307")]
	[CreateProperty]
	public int tabIndex
	{
		[Token(Token = "0x6000F85")]
		[Address(RVA = "0xBDB280", Offset = "0xBD9880", VA = "0x180BDB280")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000F86")]
		[Address(RVA = "0x3265D30", Offset = "0x3264330", VA = "0x183265D30")]
		set
		{
		}
	}

	[Token(Token = "0x17000308")]
	[CreateProperty]
	public bool delegatesFocus
	{
		[Token(Token = "0x6000F87")]
		[Address(RVA = "0x3265B30", Offset = "0x3264130", VA = "0x183265B30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000F88")]
		[Address(RVA = "0x3265B50", Offset = "0x3264150", VA = "0x183265B50")]
		set
		{
		}
	}

	[Token(Token = "0x17000309")]
	internal bool excludeFromFocusRing
	{
		[Token(Token = "0x6000F89")]
		[Address(RVA = "0x3265B40", Offset = "0x3264140", VA = "0x183265B40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000F8A")]
		[Address(RVA = "0x3265BD0", Offset = "0x32641D0", VA = "0x183265BD0")]
		set
		{
		}
	}

	[Token(Token = "0x1700030A")]
	internal bool isEligibleToReceiveFocusFromDisabledChild
	{
		[Token(Token = "0x6000F8B")]
		[Address(RVA = "0x1573430", Offset = "0x1571A30", VA = "0x181573430")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000F8C")]
		[Address(RVA = "0x15736B0", Offset = "0x1571CB0", VA = "0x1815736B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700030B")]
	[CreateProperty(ReadOnly = true)]
	public virtual bool canGrabFocus
	{
		[Token(Token = "0x6000F8D")]
		[Address(RVA = "0x1A4A9D0", Offset = "0x1A48FD0", VA = "0x181A4A9D0", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F81")]
	[Address(RVA = "0x3265A90", Offset = "0x3264090", VA = "0x183265A90")]
	protected Focusable()
	{
	}

	[Token(Token = "0x6000F8E")]
	[Address(RVA = "0x3265390", Offset = "0x3263990", VA = "0x183265390", Slot = "19")]
	public virtual void Focus()
	{
	}

	[Token(Token = "0x6000F8F")]
	[Address(RVA = "0x3265340", Offset = "0x3263940", VA = "0x183265340", Slot = "20")]
	public virtual void Blur()
	{
	}

	[Token(Token = "0x6000F90")]
	[Address(RVA = "0x32652F0", Offset = "0x32638F0", VA = "0x1832652F0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void BlurImmediately()
	{
	}

	[Token(Token = "0x6000F91")]
	[Address(RVA = "0x3265670", Offset = "0x3263C70", VA = "0x183265670")]
	internal Focusable GetFocusDelegate()
	{
		return null;
	}

	[Token(Token = "0x6000F92")]
	[Address(RVA = "0x32654E0", Offset = "0x3263AE0", VA = "0x1832654E0")]
	private static Focusable GetFirstFocusableChild(VisualElement ve)
	{
		return null;
	}
}
