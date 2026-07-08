using Il2CppDummyDll;

namespace UnityEngine.UI;

[Token(Token = "0x2000047")]
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

	[Token(Token = "0x170000AE")]
	public float spacing
	{
		[Token(Token = "0x600029B")]
		[Address(RVA = "0x4DA8FE0", Offset = "0x4DA8FE0", VA = "0x4DA8FE0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600029C")]
		[Address(RVA = "0x4DA8FF0", Offset = "0x4DA8FF0", VA = "0x4DA8FF0")]
		set
		{
		}
	}

	[Token(Token = "0x170000AF")]
	public bool childForceExpandWidth
	{
		[Token(Token = "0x600029D")]
		[Address(RVA = "0x4DA9040", Offset = "0x4DA9040", VA = "0x4DA9040")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600029E")]
		[Address(RVA = "0x4DA9050", Offset = "0x4DA9050", VA = "0x4DA9050")]
		set
		{
		}
	}

	[Token(Token = "0x170000B0")]
	public bool childForceExpandHeight
	{
		[Token(Token = "0x600029F")]
		[Address(RVA = "0x4DA90A0", Offset = "0x4DA90A0", VA = "0x4DA90A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002A0")]
		[Address(RVA = "0x4DA90B0", Offset = "0x4DA90B0", VA = "0x4DA90B0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B1")]
	public bool childControlWidth
	{
		[Token(Token = "0x60002A1")]
		[Address(RVA = "0x4DA9100", Offset = "0x4DA9100", VA = "0x4DA9100")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002A2")]
		[Address(RVA = "0x4DA9110", Offset = "0x4DA9110", VA = "0x4DA9110")]
		set
		{
		}
	}

	[Token(Token = "0x170000B2")]
	public bool childControlHeight
	{
		[Token(Token = "0x60002A3")]
		[Address(RVA = "0x4DA9160", Offset = "0x4DA9160", VA = "0x4DA9160")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002A4")]
		[Address(RVA = "0x4DA9170", Offset = "0x4DA9170", VA = "0x4DA9170")]
		set
		{
		}
	}

	[Token(Token = "0x170000B3")]
	public bool childScaleWidth
	{
		[Token(Token = "0x60002A5")]
		[Address(RVA = "0x4DA91C0", Offset = "0x4DA91C0", VA = "0x4DA91C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002A6")]
		[Address(RVA = "0x4DA91D0", Offset = "0x4DA91D0", VA = "0x4DA91D0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B4")]
	public bool childScaleHeight
	{
		[Token(Token = "0x60002A7")]
		[Address(RVA = "0x4DA9220", Offset = "0x4DA9220", VA = "0x4DA9220")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002A8")]
		[Address(RVA = "0x4DA9230", Offset = "0x4DA9230", VA = "0x4DA9230")]
		set
		{
		}
	}

	[Token(Token = "0x170000B5")]
	public bool reverseArrangement
	{
		[Token(Token = "0x60002A9")]
		[Address(RVA = "0x4DA9280", Offset = "0x4DA9280", VA = "0x4DA9280")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002AA")]
		[Address(RVA = "0x4DA9290", Offset = "0x4DA9290", VA = "0x4DA9290")]
		set
		{
		}
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x4DA80E0", Offset = "0x4DA80E0", VA = "0x4DA80E0")]
	protected void CalcAlongAxis(int axis, bool isVertical)
	{
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x4DA8550", Offset = "0x4DA8550", VA = "0x4DA8550")]
	protected void SetChildrenAlongAxis(int axis, bool isVertical)
	{
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x4DA92E0", Offset = "0x4DA92E0", VA = "0x4DA92E0")]
	private void GetChildSizes(RectTransform child, int axis, bool controlSize, bool childForceExpand, out float min, out float preferred, out float flexible)
	{
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x4DA80B0", Offset = "0x4DA80B0", VA = "0x4DA80B0")]
	protected HorizontalOrVerticalLayoutGroup()
	{
	}
}
