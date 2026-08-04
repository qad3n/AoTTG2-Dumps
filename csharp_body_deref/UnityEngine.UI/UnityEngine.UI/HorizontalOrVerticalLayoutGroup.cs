// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.HorizontalOrVerticalLayoutGroup
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x50D0910", Offset = "0x50D0910", VA = "0x50D0910")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600029C")]
		[Address(RVA = "0x50D0920", Offset = "0x50D0920", VA = "0x50D0920")]
		set
		{
		}
	}

	[Token(Token = "0x170000AF")]
	public bool childForceExpandWidth
	{
		[Token(Token = "0x600029D")]
		[Address(RVA = "0x50D0970", Offset = "0x50D0970", VA = "0x50D0970")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600029E")]
		[Address(RVA = "0x50D0980", Offset = "0x50D0980", VA = "0x50D0980")]
		set
		{
		}
	}

	[Token(Token = "0x170000B0")]
	public bool childForceExpandHeight
	{
		[Token(Token = "0x600029F")]
		[Address(RVA = "0x50D09D0", Offset = "0x50D09D0", VA = "0x50D09D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002A0")]
		[Address(RVA = "0x50D09E0", Offset = "0x50D09E0", VA = "0x50D09E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B1")]
	public bool childControlWidth
	{
		[Token(Token = "0x60002A1")]
		[Address(RVA = "0x50D0A30", Offset = "0x50D0A30", VA = "0x50D0A30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002A2")]
		[Address(RVA = "0x50D0A40", Offset = "0x50D0A40", VA = "0x50D0A40")]
		set
		{
		}
	}

	[Token(Token = "0x170000B2")]
	public bool childControlHeight
	{
		[Token(Token = "0x60002A3")]
		[Address(RVA = "0x50D0A90", Offset = "0x50D0A90", VA = "0x50D0A90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002A4")]
		[Address(RVA = "0x50D0AA0", Offset = "0x50D0AA0", VA = "0x50D0AA0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B3")]
	public bool childScaleWidth
	{
		[Token(Token = "0x60002A5")]
		[Address(RVA = "0x50D0AF0", Offset = "0x50D0AF0", VA = "0x50D0AF0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002A6")]
		[Address(RVA = "0x50D0B00", Offset = "0x50D0B00", VA = "0x50D0B00")]
		set
		{
		}
	}

	[Token(Token = "0x170000B4")]
	public bool childScaleHeight
	{
		[Token(Token = "0x60002A7")]
		[Address(RVA = "0x50D0B50", Offset = "0x50D0B50", VA = "0x50D0B50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002A8")]
		[Address(RVA = "0x50D0B60", Offset = "0x50D0B60", VA = "0x50D0B60")]
		set
		{
		}
	}

	[Token(Token = "0x170000B5")]
	public bool reverseArrangement
	{
		[Token(Token = "0x60002A9")]
		[Address(RVA = "0x50D0BB0", Offset = "0x50D0BB0", VA = "0x50D0BB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002AA")]
		[Address(RVA = "0x50D0BC0", Offset = "0x50D0BC0", VA = "0x50D0BC0")]
		set
		{
		}
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x50CFA10", Offset = "0x50CFA10", VA = "0x50CFA10")]
	protected void CalcAlongAxis(int axis, bool isVertical)
	{
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x50CFE80", Offset = "0x50CFE80", VA = "0x50CFE80")]
	protected void SetChildrenAlongAxis(int axis, bool isVertical)
	{
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x50D0C10", Offset = "0x50D0C10", VA = "0x50D0C10")]
	private void GetChildSizes(RectTransform child, int axis, bool controlSize, bool childForceExpand, out float min, out float preferred, out float flexible)
	{
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x50CF9E0", Offset = "0x50CF9E0", VA = "0x50CF9E0")]
	protected HorizontalOrVerticalLayoutGroup()
	{
	}
}
