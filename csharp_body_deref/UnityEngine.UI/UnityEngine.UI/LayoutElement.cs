// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.LayoutElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.EventSystems;

namespace UnityEngine.UI;

[Token(Token = "0x200004B")]
[AddComponentMenu("Layout/Layout Element", 140)]
[RequireComponent(typeof(RectTransform))]
[ExecuteAlways]
[UnityEngine.UGUIHelpURL("LayoutElement")]
public class LayoutElement : UIBehaviour, ILayoutElement, ILayoutIgnorer
{
	[Token(Token = "0x4000171")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private bool m_IgnoreLayout;

	[Token(Token = "0x4000172")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	private float m_MinWidth;

	[Token(Token = "0x4000173")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private float m_MinHeight;

	[Token(Token = "0x4000174")]
	[FieldOffset(Offset = "0x2C")]
	[SerializeField]
	private float m_PreferredWidth;

	[Token(Token = "0x4000175")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private float m_PreferredHeight;

	[Token(Token = "0x4000176")]
	[FieldOffset(Offset = "0x34")]
	[SerializeField]
	private float m_FlexibleWidth;

	[Token(Token = "0x4000177")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private float m_FlexibleHeight;

	[Token(Token = "0x4000178")]
	[FieldOffset(Offset = "0x3C")]
	[SerializeField]
	private int m_LayoutPriority;

	[Token(Token = "0x170000BF")]
	public virtual bool ignoreLayout
	{
		[Token(Token = "0x60002C4")]
		[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "27")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002C5")]
		[Address(RVA = "0x32D1E40", Offset = "0x32D0440", VA = "0x1832D1E40", Slot = "28")]
		set
		{
		}
	}

	[Token(Token = "0x170000C0")]
	public virtual float minWidth
	{
		[Token(Token = "0x60002C8")]
		[Address(RVA = "0x18A4260", Offset = "0x18A2860", VA = "0x1818A4260", Slot = "31")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002C9")]
		[Address(RVA = "0x32D1F60", Offset = "0x32D0560", VA = "0x1832D1F60", Slot = "32")]
		set
		{
		}
	}

	[Token(Token = "0x170000C1")]
	public virtual float minHeight
	{
		[Token(Token = "0x60002CA")]
		[Address(RVA = "0x584AC0", Offset = "0x5830C0", VA = "0x180584AC0", Slot = "33")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002CB")]
		[Address(RVA = "0x32D1F00", Offset = "0x32D0500", VA = "0x1832D1F00", Slot = "34")]
		set
		{
		}
	}

	[Token(Token = "0x170000C2")]
	public virtual float preferredWidth
	{
		[Token(Token = "0x60002CC")]
		[Address(RVA = "0x1D90480", Offset = "0x1D8EA80", VA = "0x181D90480", Slot = "35")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002CD")]
		[Address(RVA = "0x32D2020", Offset = "0x32D0620", VA = "0x1832D2020", Slot = "36")]
		set
		{
		}
	}

	[Token(Token = "0x170000C3")]
	public virtual float preferredHeight
	{
		[Token(Token = "0x60002CE")]
		[Address(RVA = "0x584C90", Offset = "0x583290", VA = "0x180584C90", Slot = "37")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002CF")]
		[Address(RVA = "0x32D1FC0", Offset = "0x32D05C0", VA = "0x1832D1FC0", Slot = "38")]
		set
		{
		}
	}

	[Token(Token = "0x170000C4")]
	public virtual float flexibleWidth
	{
		[Token(Token = "0x60002D0")]
		[Address(RVA = "0x16EF890", Offset = "0x16EDE90", VA = "0x1816EF890", Slot = "39")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002D1")]
		[Address(RVA = "0x32D1DE0", Offset = "0x32D03E0", VA = "0x1832D1DE0", Slot = "40")]
		set
		{
		}
	}

	[Token(Token = "0x170000C5")]
	public virtual float flexibleHeight
	{
		[Token(Token = "0x60002D2")]
		[Address(RVA = "0x585020", Offset = "0x583620", VA = "0x180585020", Slot = "41")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002D3")]
		[Address(RVA = "0x32D1D80", Offset = "0x32D0380", VA = "0x1832D1D80", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x170000C6")]
	public virtual int layoutPriority
	{
		[Token(Token = "0x60002D4")]
		[Address(RVA = "0x19CF1C0", Offset = "0x19CD7C0", VA = "0x1819CF1C0", Slot = "43")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002D5")]
		[Address(RVA = "0x32D1EA0", Offset = "0x32D04A0", VA = "0x1832D1EA0", Slot = "44")]
		set
		{
		}
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "29")]
	public virtual void CalculateLayoutInputHorizontal()
	{
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "30")]
	public virtual void CalculateLayoutInputVertical()
	{
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x32D1D40", Offset = "0x32D0340", VA = "0x1832D1D40")]
	protected LayoutElement()
	{
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x32D1C80", Offset = "0x32D0280", VA = "0x1832D1C80", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x32D1C50", Offset = "0x32D0250", VA = "0x1832D1C50", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x32D1C60", Offset = "0x32D0260", VA = "0x1832D1C60", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x32D1C50", Offset = "0x32D0250", VA = "0x1832D1C50", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x32D1C50", Offset = "0x32D0250", VA = "0x1832D1C50", Slot = "11")]
	protected override void OnBeforeTransformParentChanged()
	{
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x32D1CA0", Offset = "0x32D02A0", VA = "0x1832D1CA0")]
	protected void SetDirty()
	{
	}
}
