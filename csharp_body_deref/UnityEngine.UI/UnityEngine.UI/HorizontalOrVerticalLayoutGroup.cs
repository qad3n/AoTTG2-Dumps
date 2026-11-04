// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.HorizontalOrVerticalLayoutGroup
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UI;

[Token(Token = "0x2000045")]
[ExecuteAlways]
public abstract class HorizontalOrVerticalLayoutGroup : LayoutGroup
{
	[Token(Token = "0x4000169")]
	[FieldOffset(Offset = "0x60")]
	[SerializeField]
	protected float m_Spacing;

	[Token(Token = "0x400016A")]
	[FieldOffset(Offset = "0x64")]
	[SerializeField]
	protected bool m_ChildForceExpandWidth;

	[Token(Token = "0x400016B")]
	[FieldOffset(Offset = "0x65")]
	[SerializeField]
	protected bool m_ChildForceExpandHeight;

	[Token(Token = "0x400016C")]
	[FieldOffset(Offset = "0x66")]
	[SerializeField]
	protected bool m_ChildControlWidth;

	[Token(Token = "0x400016D")]
	[FieldOffset(Offset = "0x67")]
	[SerializeField]
	protected bool m_ChildControlHeight;

	[Token(Token = "0x400016E")]
	[FieldOffset(Offset = "0x68")]
	[SerializeField]
	protected bool m_ChildScaleWidth;

	[Token(Token = "0x400016F")]
	[FieldOffset(Offset = "0x69")]
	[SerializeField]
	protected bool m_ChildScaleHeight;

	[Token(Token = "0x4000170")]
	[FieldOffset(Offset = "0x6A")]
	[SerializeField]
	protected bool m_ReverseArrangement;

	[Token(Token = "0x170000AF")]
	public float spacing
	{
		[Token(Token = "0x60002A4")]
		[Address(RVA = "0x58A700", Offset = "0x588D00", VA = "0x18058A700")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002A5")]
		[Address(RVA = "0x32C6020", Offset = "0x32C4620", VA = "0x1832C6020")]
		set
		{
		}
	}

	[Token(Token = "0x170000B0")]
	public bool childForceExpandWidth
	{
		[Token(Token = "0x60002A6")]
		[Address(RVA = "0x2CBC320", Offset = "0x2CBA920", VA = "0x182CBC320")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002A7")]
		[Address(RVA = "0x32C5EE0", Offset = "0x32C44E0", VA = "0x1832C5EE0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B1")]
	public bool childForceExpandHeight
	{
		[Token(Token = "0x60002A8")]
		[Address(RVA = "0x2511000", Offset = "0x250F600", VA = "0x182511000")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002A9")]
		[Address(RVA = "0x32C5E90", Offset = "0x32C4490", VA = "0x1832C5E90")]
		set
		{
		}
	}

	[Token(Token = "0x170000B2")]
	public bool childControlWidth
	{
		[Token(Token = "0x60002AA")]
		[Address(RVA = "0x2510380", Offset = "0x250E980", VA = "0x182510380")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002AB")]
		[Address(RVA = "0x32C5E40", Offset = "0x32C4440", VA = "0x1832C5E40")]
		set
		{
		}
	}

	[Token(Token = "0x170000B3")]
	public bool childControlHeight
	{
		[Token(Token = "0x60002AC")]
		[Address(RVA = "0x2510370", Offset = "0x250E970", VA = "0x182510370")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002AD")]
		[Address(RVA = "0x32C5DF0", Offset = "0x32C43F0", VA = "0x1832C5DF0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B4")]
	public bool childScaleWidth
	{
		[Token(Token = "0x60002AE")]
		[Address(RVA = "0x12BF1A0", Offset = "0x12BD7A0", VA = "0x1812BF1A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002AF")]
		[Address(RVA = "0x32C5F80", Offset = "0x32C4580", VA = "0x1832C5F80")]
		set
		{
		}
	}

	[Token(Token = "0x170000B5")]
	public bool childScaleHeight
	{
		[Token(Token = "0x60002B0")]
		[Address(RVA = "0x12BEF40", Offset = "0x12BD540", VA = "0x1812BEF40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002B1")]
		[Address(RVA = "0x32C5F30", Offset = "0x32C4530", VA = "0x1832C5F30")]
		set
		{
		}
	}

	[Token(Token = "0x170000B6")]
	public bool reverseArrangement
	{
		[Token(Token = "0x60002B2")]
		[Address(RVA = "0x26EDC80", Offset = "0x26EC280", VA = "0x1826EDC80")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002B3")]
		[Address(RVA = "0x32C5FD0", Offset = "0x32C45D0", VA = "0x1832C5FD0")]
		set
		{
		}
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x32C4FA0", Offset = "0x32C35A0", VA = "0x1832C4FA0")]
	protected void CalcAlongAxis(int axis, bool isVertical)
	{
	}

	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x32C54A0", Offset = "0x32C3AA0", VA = "0x1832C54A0")]
	protected void SetChildrenAlongAxis(int axis, bool isVertical)
	{
	}

	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x32C5390", Offset = "0x32C3990", VA = "0x1832C5390")]
	private void GetChildSizes(RectTransform child, int axis, bool controlSize, bool childForceExpand, out float min, out float preferred, out float flexible)
	{
	}

	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x32C4F90", Offset = "0x32C3590", VA = "0x1832C4F90")]
	protected HorizontalOrVerticalLayoutGroup()
	{
	}
}
