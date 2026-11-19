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
		[Address(RVA = "0x6CE0AA0", Offset = "0x6CDFAA0", VA = "0x6CE0AA0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002A5")]
		[Address(RVA = "0x6CE0AB0", Offset = "0x6CDFAB0", VA = "0x6CE0AB0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B0")]
	public bool childForceExpandWidth
	{
		[Token(Token = "0x60002A6")]
		[Address(RVA = "0x6CE0B00", Offset = "0x6CDFB00", VA = "0x6CE0B00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002A7")]
		[Address(RVA = "0x6CE0B10", Offset = "0x6CDFB10", VA = "0x6CE0B10")]
		set
		{
		}
	}

	[Token(Token = "0x170000B1")]
	public bool childForceExpandHeight
	{
		[Token(Token = "0x60002A8")]
		[Address(RVA = "0x6CE0B60", Offset = "0x6CDFB60", VA = "0x6CE0B60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002A9")]
		[Address(RVA = "0x6CE0B70", Offset = "0x6CDFB70", VA = "0x6CE0B70")]
		set
		{
		}
	}

	[Token(Token = "0x170000B2")]
	public bool childControlWidth
	{
		[Token(Token = "0x60002AA")]
		[Address(RVA = "0x6CE0BC0", Offset = "0x6CDFBC0", VA = "0x6CE0BC0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002AB")]
		[Address(RVA = "0x6CE0BD0", Offset = "0x6CDFBD0", VA = "0x6CE0BD0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B3")]
	public bool childControlHeight
	{
		[Token(Token = "0x60002AC")]
		[Address(RVA = "0x6CE0C20", Offset = "0x6CDFC20", VA = "0x6CE0C20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002AD")]
		[Address(RVA = "0x6CE0C30", Offset = "0x6CDFC30", VA = "0x6CE0C30")]
		set
		{
		}
	}

	[Token(Token = "0x170000B4")]
	public bool childScaleWidth
	{
		[Token(Token = "0x60002AE")]
		[Address(RVA = "0x6CE0C80", Offset = "0x6CDFC80", VA = "0x6CE0C80")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002AF")]
		[Address(RVA = "0x6CE0C90", Offset = "0x6CDFC90", VA = "0x6CE0C90")]
		set
		{
		}
	}

	[Token(Token = "0x170000B5")]
	public bool childScaleHeight
	{
		[Token(Token = "0x60002B0")]
		[Address(RVA = "0x6CE0CE0", Offset = "0x6CDFCE0", VA = "0x6CE0CE0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002B1")]
		[Address(RVA = "0x6CE0CF0", Offset = "0x6CDFCF0", VA = "0x6CE0CF0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B6")]
	public bool reverseArrangement
	{
		[Token(Token = "0x60002B2")]
		[Address(RVA = "0x6CE0D40", Offset = "0x6CDFD40", VA = "0x6CE0D40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002B3")]
		[Address(RVA = "0x6CE0D50", Offset = "0x6CDFD50", VA = "0x6CE0D50")]
		set
		{
		}
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x6CDFB20", Offset = "0x6CDEB20", VA = "0x6CDFB20")]
	protected void CalcAlongAxis(int axis, bool isVertical)
	{
	}

	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x6CE0080", Offset = "0x6CDF080", VA = "0x6CE0080")]
	protected void SetChildrenAlongAxis(int axis, bool isVertical)
	{
	}

	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x6CE0DA0", Offset = "0x6CDFDA0", VA = "0x6CE0DA0")]
	private void GetChildSizes(RectTransform child, int axis, bool controlSize, bool childForceExpand, out float min, out float preferred, out float flexible)
	{
	}

	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x6CDFAF0", Offset = "0x6CDEAF0", VA = "0x6CDFAF0")]
	protected HorizontalOrVerticalLayoutGroup()
	{
	}
}
