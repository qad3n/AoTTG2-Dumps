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

[Token(Token = "0x20000BA")]
[ExecuteAlways]
internal sealed class GisketchScrollbarVisibility : MonoBehaviour
{
	[Token(Token = "0x40003D4")]
	private const float InitialOverflowEpsilon = 0.5f;

	[Token(Token = "0x40003D5")]
	private const float ToggleOverflowEpsilon = 2f;

	[Token(Token = "0x40003D6")]
	private const int StablePasses = 2;

	[Token(Token = "0x40003D7")]
	[FieldOffset(Offset = "0x20")]
	private ScrollRect _scroll;

	[Token(Token = "0x40003D8")]
	[FieldOffset(Offset = "0x28")]
	private FlexLayout _flex;

	[Token(Token = "0x40003D9")]
	[FieldOffset(Offset = "0x30")]
	private bool? _autoHeight;

	[Token(Token = "0x40003DA")]
	[FieldOffset(Offset = "0x32")]
	private bool _hasVisibleState;

	[Token(Token = "0x40003DB")]
	[FieldOffset(Offset = "0x33")]
	private bool _visible;

	[Token(Token = "0x40003DC")]
	[FieldOffset(Offset = "0x34")]
	private bool? _pendingVisible;

	[Token(Token = "0x40003DD")]
	[FieldOffset(Offset = "0x38")]
	private int _pendingPasses;

	[Token(Token = "0x60005DE")]
	[Address(RVA = "0x5291360", Offset = "0x5290360", VA = "0x5291360")]
	public void Setup(ScrollRect scroll)
	{
	}

	[Token(Token = "0x60005DF")]
	[Address(RVA = "0x5291610", Offset = "0x5290610", VA = "0x5291610")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60005E0")]
	[Address(RVA = "0x5291380", Offset = "0x5290380", VA = "0x5291380")]
	public bool UpdateVisibility()
	{
		return default(bool);
	}

	[Token(Token = "0x60005E1")]
	[Address(RVA = "0x5291620", Offset = "0x5290620", VA = "0x5291620")]
	private bool FitAutoHeightToContent()
	{
		return default(bool);
	}

	[Token(Token = "0x60005E2")]
	[Address(RVA = "0x5291900", Offset = "0x5290900", VA = "0x5291900")]
	private bool UpdateStableVisibility(GameObject scrollbar, bool desired)
	{
		return default(bool);
	}

	[Token(Token = "0x60005E3")]
	[Address(RVA = "0x52918C0", Offset = "0x52908C0", VA = "0x52918C0")]
	private static bool ApplyVisibility(GameObject scrollbar, bool visible)
	{
		return default(bool);
	}

	[Token(Token = "0x60005E4")]
	[Address(RVA = "0x5291A30", Offset = "0x5290A30", VA = "0x5291A30")]
	private static float Point(YGValue value)
	{
		return default(float);
	}

	[Token(Token = "0x60005E5")]
	[Address(RVA = "0x5291A50", Offset = "0x5290A50", VA = "0x5291A50")]
	public GisketchScrollbarVisibility()
	{
	}
}
