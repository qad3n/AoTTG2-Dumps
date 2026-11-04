// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Building/GisketchScrollbarVisibility.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gilzoide.FlexUi;
using Gilzoide.FlexUi.Yoga;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x20000B4")]
[ExecuteAlways]
internal sealed class GisketchScrollbarVisibility : MonoBehaviour
{
	[Token(Token = "0x40003AD")]
	private const float InitialOverflowEpsilon = 0.5f;

	[Token(Token = "0x40003AE")]
	private const float ToggleOverflowEpsilon = 2f;

	[Token(Token = "0x40003AF")]
	private const int StablePasses = 2;

	[Token(Token = "0x40003B0")]
	[FieldOffset(Offset = "0x20")]
	private ScrollRect _scroll;

	[Token(Token = "0x40003B1")]
	[FieldOffset(Offset = "0x28")]
	private FlexLayout _flex;

	[Token(Token = "0x40003B2")]
	[FieldOffset(Offset = "0x30")]
	private bool? _autoHeight;

	[Token(Token = "0x40003B3")]
	[FieldOffset(Offset = "0x32")]
	private bool _hasVisibleState;

	[Token(Token = "0x40003B4")]
	[FieldOffset(Offset = "0x33")]
	private bool _visible;

	[Token(Token = "0x40003B5")]
	[FieldOffset(Offset = "0x34")]
	private bool? _pendingVisible;

	[Token(Token = "0x40003B6")]
	[FieldOffset(Offset = "0x38")]
	private int _pendingPasses;

	[Token(Token = "0x6000591")]
	[Address(RVA = "0x1905420", Offset = "0x1903A20", VA = "0x181905420")]
	public void Setup(ScrollRect scroll)
	{
	}

	[Token(Token = "0x6000592")]
	[Address(RVA = "0x19053F0", Offset = "0x19039F0", VA = "0x1819053F0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6000593")]
	[Address(RVA = "0x19055A0", Offset = "0x1903BA0", VA = "0x1819055A0")]
	public bool UpdateVisibility()
	{
		return default(bool);
	}

	[Token(Token = "0x6000594")]
	[Address(RVA = "0x1905120", Offset = "0x1903720", VA = "0x181905120")]
	private bool FitAutoHeightToContent()
	{
		return default(bool);
	}

	[Token(Token = "0x6000595")]
	[Address(RVA = "0x1905450", Offset = "0x1903A50", VA = "0x181905450")]
	private bool UpdateStableVisibility(GameObject scrollbar, bool desired)
	{
		return default(bool);
	}

	[Token(Token = "0x6000596")]
	[Address(RVA = "0x19050D0", Offset = "0x19036D0", VA = "0x1819050D0")]
	private static bool ApplyVisibility(GameObject scrollbar, bool visible)
	{
		return default(bool);
	}

	[Token(Token = "0x6000597")]
	[Address(RVA = "0x1905400", Offset = "0x1903A00", VA = "0x181905400")]
	private static float Point(YGValue value)
	{
		return default(float);
	}

	[Token(Token = "0x6000598")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public GisketchScrollbarVisibility()
	{
	}
}
