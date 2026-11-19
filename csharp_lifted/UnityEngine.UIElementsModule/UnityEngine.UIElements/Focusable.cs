// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Focusable
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6C74D20", Offset = "0x6C73D20", VA = "0x6C74D20", Slot = "16")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000F84")]
		[Address(RVA = "0x6C74D30", Offset = "0x6C73D30", VA = "0x6C74D30", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x17000307")]
	[CreateProperty]
	public int tabIndex
	{
		[Token(Token = "0x6000F85")]
		[Address(RVA = "0x6C74DA0", Offset = "0x6C73DA0", VA = "0x6C74DA0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000F86")]
		[Address(RVA = "0x6C74CB0", Offset = "0x6C73CB0", VA = "0x6C74CB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000308")]
	[CreateProperty]
	public bool delegatesFocus
	{
		[Token(Token = "0x6000F87")]
		[Address(RVA = "0x6C74DB0", Offset = "0x6C73DB0", VA = "0x6C74DB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000F88")]
		[Address(RVA = "0x6C74DC0", Offset = "0x6C73DC0", VA = "0x6C74DC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000309")]
	internal bool excludeFromFocusRing
	{
		[Token(Token = "0x6000F89")]
		[Address(RVA = "0x6C74E40", Offset = "0x6C73E40", VA = "0x6C74E40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000F8A")]
		[Address(RVA = "0x6C74E50", Offset = "0x6C73E50", VA = "0x6C74E50")]
		set
		{
		}
	}

	[Token(Token = "0x1700030A")]
	internal bool isEligibleToReceiveFocusFromDisabledChild
	{
		[Token(Token = "0x6000F8B")]
		[Address(RVA = "0x6C74F10", Offset = "0x6C73F10", VA = "0x6C74F10")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000F8C")]
		[Address(RVA = "0x6C74F20", Offset = "0x6C73F20", VA = "0x6C74F20")]
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
		[Address(RVA = "0x6C74F30", Offset = "0x6C73F30", VA = "0x6C74F30", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F81")]
	[Address(RVA = "0x6C74C10", Offset = "0x6C73C10", VA = "0x6C74C10")]
	protected Focusable()
	{
	}

	[Token(Token = "0x6000F8E")]
	[Address(RVA = "0x6C74F50", Offset = "0x6C73F50", VA = "0x6C74F50", Slot = "19")]
	public virtual void Focus()
	{
	}

	[Token(Token = "0x6000F8F")]
	[Address(RVA = "0x6C75370", Offset = "0x6C74370", VA = "0x6C75370", Slot = "20")]
	public virtual void Blur()
	{
	}

	[Token(Token = "0x6000F90")]
	[Address(RVA = "0x6C75530", Offset = "0x6C74530", VA = "0x6C75530")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void BlurImmediately()
	{
	}

	[Token(Token = "0x6000F91")]
	[Address(RVA = "0x6C751F0", Offset = "0x6C741F0", VA = "0x6C751F0")]
	internal Focusable GetFocusDelegate()
	{
		return null;
	}

	[Token(Token = "0x6000F92")]
	[Address(RVA = "0x6C75560", Offset = "0x6C74560", VA = "0x6C75560")]
	private static Focusable GetFirstFocusableChild(VisualElement ve)
	{
		return null;
	}
}
