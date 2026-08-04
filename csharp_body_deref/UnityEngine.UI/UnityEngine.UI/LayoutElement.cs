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

[Token(Token = "0x200004D")]
[AddComponentMenu("Layout/Layout Element", 140)]
[RequireComponent(typeof(RectTransform))]
[ExecuteAlways]
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

	[Token(Token = "0x170000BE")]
	public virtual bool ignoreLayout
	{
		[Token(Token = "0x60002BB")]
		[Address(RVA = "0x50D1390", Offset = "0x50D1390", VA = "0x50D1390", Slot = "27")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002BC")]
		[Address(RVA = "0x50D13A0", Offset = "0x50D13A0", VA = "0x50D13A0", Slot = "28")]
		set
		{
		}
	}

	[Token(Token = "0x170000BF")]
	public virtual float minWidth
	{
		[Token(Token = "0x60002BF")]
		[Address(RVA = "0x50D1550", Offset = "0x50D1550", VA = "0x50D1550", Slot = "31")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002C0")]
		[Address(RVA = "0x50D1560", Offset = "0x50D1560", VA = "0x50D1560", Slot = "32")]
		set
		{
		}
	}

	[Token(Token = "0x170000C0")]
	public virtual float minHeight
	{
		[Token(Token = "0x60002C1")]
		[Address(RVA = "0x50D1650", Offset = "0x50D1650", VA = "0x50D1650", Slot = "33")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002C2")]
		[Address(RVA = "0x50D1660", Offset = "0x50D1660", VA = "0x50D1660", Slot = "34")]
		set
		{
		}
	}

	[Token(Token = "0x170000C1")]
	public virtual float preferredWidth
	{
		[Token(Token = "0x60002C3")]
		[Address(RVA = "0x50D1750", Offset = "0x50D1750", VA = "0x50D1750", Slot = "35")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002C4")]
		[Address(RVA = "0x50D1760", Offset = "0x50D1760", VA = "0x50D1760", Slot = "36")]
		set
		{
		}
	}

	[Token(Token = "0x170000C2")]
	public virtual float preferredHeight
	{
		[Token(Token = "0x60002C5")]
		[Address(RVA = "0x50D1850", Offset = "0x50D1850", VA = "0x50D1850", Slot = "37")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002C6")]
		[Address(RVA = "0x50D1860", Offset = "0x50D1860", VA = "0x50D1860", Slot = "38")]
		set
		{
		}
	}

	[Token(Token = "0x170000C3")]
	public virtual float flexibleWidth
	{
		[Token(Token = "0x60002C7")]
		[Address(RVA = "0x50D1950", Offset = "0x50D1950", VA = "0x50D1950", Slot = "39")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002C8")]
		[Address(RVA = "0x50D1960", Offset = "0x50D1960", VA = "0x50D1960", Slot = "40")]
		set
		{
		}
	}

	[Token(Token = "0x170000C4")]
	public virtual float flexibleHeight
	{
		[Token(Token = "0x60002C9")]
		[Address(RVA = "0x50D1A50", Offset = "0x50D1A50", VA = "0x50D1A50", Slot = "41")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002CA")]
		[Address(RVA = "0x50D1A60", Offset = "0x50D1A60", VA = "0x50D1A60", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x170000C5")]
	public virtual int layoutPriority
	{
		[Token(Token = "0x60002CB")]
		[Address(RVA = "0x50D1B50", Offset = "0x50D1B50", VA = "0x50D1B50", Slot = "43")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002CC")]
		[Address(RVA = "0x50D1B60", Offset = "0x50D1B60", VA = "0x50D1B60", Slot = "44")]
		set
		{
		}
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x50D1530", Offset = "0x50D1530", VA = "0x50D1530", Slot = "29")]
	public virtual void CalculateLayoutInputHorizontal()
	{
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x50D1540", Offset = "0x50D1540", VA = "0x50D1540", Slot = "30")]
	public virtual void CalculateLayoutInputVertical()
	{
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x50D1C50", Offset = "0x50D1C50", VA = "0x50D1C50")]
	protected LayoutElement()
	{
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x50D1C80", Offset = "0x50D1C80", VA = "0x50D1C80", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x50D1D20", Offset = "0x50D1D20", VA = "0x50D1D20", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x50D1DC0", Offset = "0x50D1DC0", VA = "0x50D1DC0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x50D1E70", Offset = "0x50D1E70", VA = "0x50D1E70", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x50D1F10", Offset = "0x50D1F10", VA = "0x50D1F10", Slot = "11")]
	protected override void OnBeforeTransformParentChanged()
	{
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x50D1490", Offset = "0x50D1490", VA = "0x50D1490")]
	protected void SetDirty()
	{
	}
}
