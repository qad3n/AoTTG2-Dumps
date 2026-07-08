using Gilzoide.FlexUi;
using Gilzoide.FlexUi.Yoga;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x2000093")]
[ExecuteAlways]
internal sealed class GisketchScrollbarVisibility : MonoBehaviour
{
	[Token(Token = "0x40002E8")]
	private const float InitialOverflowEpsilon = 0.5f;

	[Token(Token = "0x40002E9")]
	private const float ToggleOverflowEpsilon = 2f;

	[Token(Token = "0x40002EA")]
	private const int StablePasses = 2;

	[Token(Token = "0x40002EB")]
	[FieldOffset(Offset = "0x20")]
	private ScrollRect _scroll;

	[Token(Token = "0x40002EC")]
	[FieldOffset(Offset = "0x28")]
	private FlexLayout _flex;

	[Token(Token = "0x40002ED")]
	[FieldOffset(Offset = "0x30")]
	private bool? _autoHeight;

	[Token(Token = "0x40002EE")]
	[FieldOffset(Offset = "0x32")]
	private bool _hasVisibleState;

	[Token(Token = "0x40002EF")]
	[FieldOffset(Offset = "0x33")]
	private bool _visible;

	[Token(Token = "0x40002F0")]
	[FieldOffset(Offset = "0x34")]
	private bool? _pendingVisible;

	[Token(Token = "0x40002F1")]
	[FieldOffset(Offset = "0x38")]
	private int _pendingPasses;

	[Token(Token = "0x600043D")]
	[Address(RVA = "0x3A1AE40", Offset = "0x3A1AE40", VA = "0x3A1AE40")]
	public void Setup(ScrollRect scroll)
	{
	}

	[Token(Token = "0x600043E")]
	[Address(RVA = "0x3A1B110", Offset = "0x3A1B110", VA = "0x3A1B110")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x600043F")]
	[Address(RVA = "0x3A1AE60", Offset = "0x3A1AE60", VA = "0x3A1AE60")]
	public bool UpdateVisibility()
	{
		return default(bool);
	}

	[Token(Token = "0x6000440")]
	[Address(RVA = "0x3A1B120", Offset = "0x3A1B120", VA = "0x3A1B120")]
	private bool FitAutoHeightToContent()
	{
		return default(bool);
	}

	[Token(Token = "0x6000441")]
	[Address(RVA = "0x3A1B3C0", Offset = "0x3A1B3C0", VA = "0x3A1B3C0")]
	private bool UpdateStableVisibility(GameObject scrollbar, bool desired)
	{
		return default(bool);
	}

	[Token(Token = "0x6000442")]
	[Address(RVA = "0x3A1B380", Offset = "0x3A1B380", VA = "0x3A1B380")]
	private static bool ApplyVisibility(GameObject scrollbar, bool visible)
	{
		return default(bool);
	}

	[Token(Token = "0x6000443")]
	[Address(RVA = "0x3A1B510", Offset = "0x3A1B510", VA = "0x3A1B510")]
	private static float Point(YGValue value)
	{
		return default(float);
	}

	[Token(Token = "0x6000444")]
	[Address(RVA = "0x3A1B530", Offset = "0x3A1B530", VA = "0x3A1B530")]
	public GisketchScrollbarVisibility()
	{
	}
}
