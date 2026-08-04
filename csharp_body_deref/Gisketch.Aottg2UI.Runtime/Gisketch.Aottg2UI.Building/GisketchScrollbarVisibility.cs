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

[Token(Token = "0x2000096")]
[ExecuteAlways]
internal sealed class GisketchScrollbarVisibility : MonoBehaviour
{
	[Token(Token = "0x4000304")]
	private const float InitialOverflowEpsilon = 0.5f;

	[Token(Token = "0x4000305")]
	private const float ToggleOverflowEpsilon = 2f;

	[Token(Token = "0x4000306")]
	private const int StablePasses = 2;

	[Token(Token = "0x4000307")]
	[FieldOffset(Offset = "0x20")]
	private ScrollRect _scroll;

	[Token(Token = "0x4000308")]
	[FieldOffset(Offset = "0x28")]
	private FlexLayout _flex;

	[Token(Token = "0x4000309")]
	[FieldOffset(Offset = "0x30")]
	private bool? _autoHeight;

	[Token(Token = "0x400030A")]
	[FieldOffset(Offset = "0x32")]
	private bool _hasVisibleState;

	[Token(Token = "0x400030B")]
	[FieldOffset(Offset = "0x33")]
	private bool _visible;

	[Token(Token = "0x400030C")]
	[FieldOffset(Offset = "0x34")]
	private bool? _pendingVisible;

	[Token(Token = "0x400030D")]
	[FieldOffset(Offset = "0x38")]
	private int _pendingPasses;

	[Token(Token = "0x600045E")]
	[Address(RVA = "0x3A87080", Offset = "0x3A87080", VA = "0x3A87080")]
	public void Setup(ScrollRect scroll)
	{
	}

	[Token(Token = "0x600045F")]
	[Address(RVA = "0x3A87350", Offset = "0x3A87350", VA = "0x3A87350")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6000460")]
	[Address(RVA = "0x3A870A0", Offset = "0x3A870A0", VA = "0x3A870A0")]
	public bool UpdateVisibility()
	{
		return default(bool);
	}

	[Token(Token = "0x6000461")]
	[Address(RVA = "0x3A87360", Offset = "0x3A87360", VA = "0x3A87360")]
	private bool FitAutoHeightToContent()
	{
		return default(bool);
	}

	[Token(Token = "0x6000462")]
	[Address(RVA = "0x3A87600", Offset = "0x3A87600", VA = "0x3A87600")]
	private bool UpdateStableVisibility(GameObject scrollbar, bool desired)
	{
		return default(bool);
	}

	[Token(Token = "0x6000463")]
	[Address(RVA = "0x3A875C0", Offset = "0x3A875C0", VA = "0x3A875C0")]
	private static bool ApplyVisibility(GameObject scrollbar, bool visible)
	{
		return default(bool);
	}

	[Token(Token = "0x6000464")]
	[Address(RVA = "0x3A87750", Offset = "0x3A87750", VA = "0x3A87750")]
	private static float Point(YGValue value)
	{
		return default(float);
	}

	[Token(Token = "0x6000465")]
	[Address(RVA = "0x3A87770", Offset = "0x3A87770", VA = "0x3A87770")]
	public GisketchScrollbarVisibility()
	{
	}
}
