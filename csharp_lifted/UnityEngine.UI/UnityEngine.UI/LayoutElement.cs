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
		[Address(RVA = "0x6CE14B0", Offset = "0x6CE04B0", VA = "0x6CE14B0", Slot = "27")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002C5")]
		[Address(RVA = "0x6CE14C0", Offset = "0x6CE04C0", VA = "0x6CE14C0", Slot = "28")]
		set
		{
		}
	}

	[Token(Token = "0x170000C0")]
	public virtual float minWidth
	{
		[Token(Token = "0x60002C8")]
		[Address(RVA = "0x6CE1670", Offset = "0x6CE0670", VA = "0x6CE1670", Slot = "31")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002C9")]
		[Address(RVA = "0x6CE1680", Offset = "0x6CE0680", VA = "0x6CE1680", Slot = "32")]
		set
		{
		}
	}

	[Token(Token = "0x170000C1")]
	public virtual float minHeight
	{
		[Token(Token = "0x60002CA")]
		[Address(RVA = "0x6CE1770", Offset = "0x6CE0770", VA = "0x6CE1770", Slot = "33")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002CB")]
		[Address(RVA = "0x6CE1780", Offset = "0x6CE0780", VA = "0x6CE1780", Slot = "34")]
		set
		{
		}
	}

	[Token(Token = "0x170000C2")]
	public virtual float preferredWidth
	{
		[Token(Token = "0x60002CC")]
		[Address(RVA = "0x6CE1870", Offset = "0x6CE0870", VA = "0x6CE1870", Slot = "35")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002CD")]
		[Address(RVA = "0x6CE1880", Offset = "0x6CE0880", VA = "0x6CE1880", Slot = "36")]
		set
		{
		}
	}

	[Token(Token = "0x170000C3")]
	public virtual float preferredHeight
	{
		[Token(Token = "0x60002CE")]
		[Address(RVA = "0x6CE1970", Offset = "0x6CE0970", VA = "0x6CE1970", Slot = "37")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002CF")]
		[Address(RVA = "0x6CE1980", Offset = "0x6CE0980", VA = "0x6CE1980", Slot = "38")]
		set
		{
		}
	}

	[Token(Token = "0x170000C4")]
	public virtual float flexibleWidth
	{
		[Token(Token = "0x60002D0")]
		[Address(RVA = "0x6CE1A70", Offset = "0x6CE0A70", VA = "0x6CE1A70", Slot = "39")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002D1")]
		[Address(RVA = "0x6CE1A80", Offset = "0x6CE0A80", VA = "0x6CE1A80", Slot = "40")]
		set
		{
		}
	}

	[Token(Token = "0x170000C5")]
	public virtual float flexibleHeight
	{
		[Token(Token = "0x60002D2")]
		[Address(RVA = "0x6CE1B70", Offset = "0x6CE0B70", VA = "0x6CE1B70", Slot = "41")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002D3")]
		[Address(RVA = "0x6CE1B80", Offset = "0x6CE0B80", VA = "0x6CE1B80", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x170000C6")]
	public virtual int layoutPriority
	{
		[Token(Token = "0x60002D4")]
		[Address(RVA = "0x6CE1C70", Offset = "0x6CE0C70", VA = "0x6CE1C70", Slot = "43")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002D5")]
		[Address(RVA = "0x6CE1C80", Offset = "0x6CE0C80", VA = "0x6CE1C80", Slot = "44")]
		set
		{
		}
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x6CE1650", Offset = "0x6CE0650", VA = "0x6CE1650", Slot = "29")]
	public virtual void CalculateLayoutInputHorizontal()
	{
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x6CE1660", Offset = "0x6CE0660", VA = "0x6CE1660", Slot = "30")]
	public virtual void CalculateLayoutInputVertical()
	{
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x6CE1D70", Offset = "0x6CE0D70", VA = "0x6CE1D70")]
	protected LayoutElement()
	{
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x6CE1DA0", Offset = "0x6CE0DA0", VA = "0x6CE1DA0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x6CE1E40", Offset = "0x6CE0E40", VA = "0x6CE1E40", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x6CE1EE0", Offset = "0x6CE0EE0", VA = "0x6CE1EE0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x6CE1F90", Offset = "0x6CE0F90", VA = "0x6CE1F90", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x6CE2030", Offset = "0x6CE1030", VA = "0x6CE2030", Slot = "11")]
	protected override void OnBeforeTransformParentChanged()
	{
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x6CE15B0", Offset = "0x6CE05B0", VA = "0x6CE15B0")]
	protected void SetDirty()
	{
	}
}
