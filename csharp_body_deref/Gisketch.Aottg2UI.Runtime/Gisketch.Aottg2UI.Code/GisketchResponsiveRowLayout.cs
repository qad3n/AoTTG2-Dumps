// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/GisketchResponsiveRowLayout.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gilzoide.FlexUi;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000095")]
public sealed class GisketchResponsiveRowLayout : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler
{
	[Token(Token = "0x4000312")]
	public const string NodeType = "ResponsiveRowLayout";

	[Token(Token = "0x4000313")]
	public const string CompactValue = "Compact";

	[Token(Token = "0x4000314")]
	public const float WideBreakpoint = 620f;

	[Token(Token = "0x4000315")]
	private const float WideLabelWidth = 300f;

	[Token(Token = "0x4000316")]
	private const float WideLabelMinWidth = 180f;

	[Token(Token = "0x4000317")]
	private const float WideControlMinWidth = 260f;

	[Token(Token = "0x4000318")]
	private const float WideGap = 14f;

	[Token(Token = "0x4000319")]
	private const float NarrowGap = 8f;

	[Token(Token = "0x400031A")]
	private const float CompactGap = 12f;

	[Token(Token = "0x400031B")]
	[FieldOffset(Offset = "0x0")]
	private static bool _registered;

	[Token(Token = "0x400031C")]
	[FieldOffset(Offset = "0x20")]
	private RectTransform _rect;

	[Token(Token = "0x400031D")]
	[FieldOffset(Offset = "0x28")]
	private FlexLayout _root;

	[Token(Token = "0x400031E")]
	[FieldOffset(Offset = "0x30")]
	private Image _background;

	[Token(Token = "0x400031F")]
	[FieldOffset(Offset = "0x38")]
	private TextMeshProUGUI _label;

	[Token(Token = "0x4000320")]
	[FieldOffset(Offset = "0x40")]
	private TMP_FontAsset _normalFont;

	[Token(Token = "0x4000321")]
	[FieldOffset(Offset = "0x48")]
	private FontWeight _normalWeight;

	[Token(Token = "0x4000322")]
	[FieldOffset(Offset = "0x50")]
	private TMP_FontAsset _hoverFont;

	[Token(Token = "0x4000323")]
	[FieldOffset(Offset = "0x58")]
	private Color _hoverColor;

	[Token(Token = "0x4000324")]
	[FieldOffset(Offset = "0x68")]
	private bool? _wide;

	[Token(Token = "0x4000325")]
	[FieldOffset(Offset = "0x6A")]
	private bool _hovered;

	[Token(Token = "0x4000326")]
	[FieldOffset(Offset = "0x6B")]
	private bool _compact;

	[Token(Token = "0x6000460")]
	[Address(RVA = "0x18D1D50", Offset = "0x18D0350", VA = "0x1818D1D50")]
	static GisketchResponsiveRowLayout()
	{
	}

	[Token(Token = "0x6000461")]
	[Address(RVA = "0x18D1D50", Offset = "0x18D0350", VA = "0x1818D1D50")]
	public static void RegisterFactory()
	{
	}

	[Token(Token = "0x6000462")]
	[Address(RVA = "0x18D1660", Offset = "0x18CFC60", VA = "0x1818D1660")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x6000463")]
	[Address(RVA = "0x18D1E80", Offset = "0x18D0480", VA = "0x1818D1E80")]
	public void Setup(GisketchTheme theme, bool compact = false)
	{
	}

	[Token(Token = "0x6000464")]
	[Address(RVA = "0x18D1610", Offset = "0x18CFC10", VA = "0x1818D1610")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000465")]
	[Address(RVA = "0x18D1AC0", Offset = "0x18D00C0", VA = "0x1818D1AC0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6000466")]
	[Address(RVA = "0x18D0D10", Offset = "0x18CF310", VA = "0x1818D0D10")]
	public void ApplyForCurrentWidth()
	{
	}

	[Token(Token = "0x6000467")]
	[Address(RVA = "0x18D1160", Offset = "0x18CF760", VA = "0x1818D1160")]
	public void Apply(bool wide)
	{
	}

	[Token(Token = "0x6000468")]
	[Address(RVA = "0x18D0FB0", Offset = "0x18CF5B0", VA = "0x1818D0FB0")]
	private void ApplyWide(FlexLayout label, FlexLayout control)
	{
	}

	[Token(Token = "0x6000469")]
	[Address(RVA = "0x18D0E00", Offset = "0x18CF400", VA = "0x1818D0E00")]
	private void ApplyNarrow(FlexLayout label, FlexLayout control)
	{
	}

	[Token(Token = "0x600046A")]
	[Address(RVA = "0x18D0A00", Offset = "0x18CF000", VA = "0x1818D0A00")]
	private void ApplyCompact()
	{
	}

	[Token(Token = "0x600046B")]
	[Address(RVA = "0x18D1A20", Offset = "0x18D0020", VA = "0x1818D1A20")]
	private FlexLayout ChildFlex(int index)
	{
		return null;
	}

	[Token(Token = "0x600046C")]
	[Address(RVA = "0x18D1BC0", Offset = "0x18D01C0", VA = "0x1818D1BC0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600046D")]
	[Address(RVA = "0x18D1BD0", Offset = "0x18D01D0", VA = "0x1818D1BD0", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600046E")]
	[Address(RVA = "0x18D1860", Offset = "0x18CFE60", VA = "0x1818D1860")]
	private void CacheLabel()
	{
	}

	[Token(Token = "0x600046F")]
	[Address(RVA = "0x18D1BE0", Offset = "0x18D01E0", VA = "0x1818D1BE0")]
	private void RefreshHover()
	{
	}

	[Token(Token = "0x6000470")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public GisketchResponsiveRowLayout()
	{
	}
}
