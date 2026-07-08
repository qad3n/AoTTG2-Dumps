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
		[Address(RVA = "0x4DA9A60", Offset = "0x4DA9A60", VA = "0x4DA9A60", Slot = "27")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002BC")]
		[Address(RVA = "0x4DA9A70", Offset = "0x4DA9A70", VA = "0x4DA9A70", Slot = "28")]
		set
		{
		}
	}

	[Token(Token = "0x170000BF")]
	public virtual float minWidth
	{
		[Token(Token = "0x60002BF")]
		[Address(RVA = "0x4DA9C20", Offset = "0x4DA9C20", VA = "0x4DA9C20", Slot = "31")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002C0")]
		[Address(RVA = "0x4DA9C30", Offset = "0x4DA9C30", VA = "0x4DA9C30", Slot = "32")]
		set
		{
		}
	}

	[Token(Token = "0x170000C0")]
	public virtual float minHeight
	{
		[Token(Token = "0x60002C1")]
		[Address(RVA = "0x4DA9D20", Offset = "0x4DA9D20", VA = "0x4DA9D20", Slot = "33")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002C2")]
		[Address(RVA = "0x4DA9D30", Offset = "0x4DA9D30", VA = "0x4DA9D30", Slot = "34")]
		set
		{
		}
	}

	[Token(Token = "0x170000C1")]
	public virtual float preferredWidth
	{
		[Token(Token = "0x60002C3")]
		[Address(RVA = "0x4DA9E20", Offset = "0x4DA9E20", VA = "0x4DA9E20", Slot = "35")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002C4")]
		[Address(RVA = "0x4DA9E30", Offset = "0x4DA9E30", VA = "0x4DA9E30", Slot = "36")]
		set
		{
		}
	}

	[Token(Token = "0x170000C2")]
	public virtual float preferredHeight
	{
		[Token(Token = "0x60002C5")]
		[Address(RVA = "0x4DA9F20", Offset = "0x4DA9F20", VA = "0x4DA9F20", Slot = "37")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002C6")]
		[Address(RVA = "0x4DA9F30", Offset = "0x4DA9F30", VA = "0x4DA9F30", Slot = "38")]
		set
		{
		}
	}

	[Token(Token = "0x170000C3")]
	public virtual float flexibleWidth
	{
		[Token(Token = "0x60002C7")]
		[Address(RVA = "0x4DAA020", Offset = "0x4DAA020", VA = "0x4DAA020", Slot = "39")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002C8")]
		[Address(RVA = "0x4DAA030", Offset = "0x4DAA030", VA = "0x4DAA030", Slot = "40")]
		set
		{
		}
	}

	[Token(Token = "0x170000C4")]
	public virtual float flexibleHeight
	{
		[Token(Token = "0x60002C9")]
		[Address(RVA = "0x4DAA120", Offset = "0x4DAA120", VA = "0x4DAA120", Slot = "41")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002CA")]
		[Address(RVA = "0x4DAA130", Offset = "0x4DAA130", VA = "0x4DAA130", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x170000C5")]
	public virtual int layoutPriority
	{
		[Token(Token = "0x60002CB")]
		[Address(RVA = "0x4DAA220", Offset = "0x4DAA220", VA = "0x4DAA220", Slot = "43")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002CC")]
		[Address(RVA = "0x4DAA230", Offset = "0x4DAA230", VA = "0x4DAA230", Slot = "44")]
		set
		{
		}
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x4DA9C00", Offset = "0x4DA9C00", VA = "0x4DA9C00", Slot = "29")]
	public virtual void CalculateLayoutInputHorizontal()
	{
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x4DA9C10", Offset = "0x4DA9C10", VA = "0x4DA9C10", Slot = "30")]
	public virtual void CalculateLayoutInputVertical()
	{
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x4DAA320", Offset = "0x4DAA320", VA = "0x4DAA320")]
	protected LayoutElement()
	{
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x4DAA350", Offset = "0x4DAA350", VA = "0x4DAA350", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x4DAA3F0", Offset = "0x4DAA3F0", VA = "0x4DAA3F0", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x4DAA490", Offset = "0x4DAA490", VA = "0x4DAA490", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x4DAA540", Offset = "0x4DAA540", VA = "0x4DAA540", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x4DAA5E0", Offset = "0x4DAA5E0", VA = "0x4DAA5E0", Slot = "11")]
	protected override void OnBeforeTransformParentChanged()
	{
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x4DA9B60", Offset = "0x4DA9B60", VA = "0x4DA9B60")]
	protected void SetDirty()
	{
	}
}
