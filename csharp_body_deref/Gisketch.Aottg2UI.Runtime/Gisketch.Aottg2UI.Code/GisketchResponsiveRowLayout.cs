// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout
// Update status: unchanged since the previous dump
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

[Token(Token = "0x200009B")]
public sealed class GisketchResponsiveRowLayout : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler
{
	[Token(Token = "0x4000339")]
	public const string NodeType = "ResponsiveRowLayout";

	[Token(Token = "0x400033A")]
	public const string CompactValue = "Compact";

	[Token(Token = "0x400033B")]
	public const float WideBreakpoint = 620f;

	[Token(Token = "0x400033C")]
	private const float WideLabelWidth = 300f;

	[Token(Token = "0x400033D")]
	private const float WideLabelMinWidth = 180f;

	[Token(Token = "0x400033E")]
	private const float WideControlMinWidth = 260f;

	[Token(Token = "0x400033F")]
	private const float WideGap = 14f;

	[Token(Token = "0x4000340")]
	private const float NarrowGap = 8f;

	[Token(Token = "0x4000341")]
	private const float CompactGap = 12f;

	[Token(Token = "0x4000342")]
	[FieldOffset(Offset = "0x0")]
	private static bool _registered;

	[Token(Token = "0x4000343")]
	[FieldOffset(Offset = "0x20")]
	private RectTransform _rect;

	[Token(Token = "0x4000344")]
	[FieldOffset(Offset = "0x28")]
	private FlexLayout _root;

	[Token(Token = "0x4000345")]
	[FieldOffset(Offset = "0x30")]
	private Image _background;

	[Token(Token = "0x4000346")]
	[FieldOffset(Offset = "0x38")]
	private TextMeshProUGUI _label;

	[Token(Token = "0x4000347")]
	[FieldOffset(Offset = "0x40")]
	private TMP_FontAsset _normalFont;

	[Token(Token = "0x4000348")]
	[FieldOffset(Offset = "0x48")]
	private FontWeight _normalWeight;

	[Token(Token = "0x4000349")]
	[FieldOffset(Offset = "0x50")]
	private TMP_FontAsset _hoverFont;

	[Token(Token = "0x400034A")]
	[FieldOffset(Offset = "0x58")]
	private Color _hoverColor;

	[Token(Token = "0x400034B")]
	[FieldOffset(Offset = "0x68")]
	private bool? _wide;

	[Token(Token = "0x400034C")]
	[FieldOffset(Offset = "0x6A")]
	private bool _hovered;

	[Token(Token = "0x400034D")]
	[FieldOffset(Offset = "0x6B")]
	private bool _compact;

	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x5270EF0", Offset = "0x526FEF0", VA = "0x5270EF0")]
	static GisketchResponsiveRowLayout()
	{
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x5270F00", Offset = "0x526FF00", VA = "0x5270F00")]
	public static void RegisterFactory()
	{
	}

	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x5271120", Offset = "0x5270120", VA = "0x5271120")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B0")]
	[Address(RVA = "0x52711F0", Offset = "0x52701F0", VA = "0x52711F0")]
	public void Setup(GisketchTheme theme, bool compact = false)
	{
	}

	[Token(Token = "0x60004B1")]
	[Address(RVA = "0x5271300", Offset = "0x5270300", VA = "0x5271300")]
	private void Awake()
	{
	}

	[Token(Token = "0x60004B2")]
	[Address(RVA = "0x5271350", Offset = "0x5270350", VA = "0x5271350")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60004B3")]
	[Address(RVA = "0x5271500", Offset = "0x5270500", VA = "0x5271500")]
	public void ApplyForCurrentWidth()
	{
	}

	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x5271A30", Offset = "0x5270A30", VA = "0x5271A30")]
	public void Apply(bool wide)
	{
	}

	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x5271C80", Offset = "0x5270C80", VA = "0x5271C80")]
	private void ApplyWide(FlexLayout label, FlexLayout control)
	{
	}

	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x5271E10", Offset = "0x5270E10", VA = "0x5271E10")]
	private void ApplyNarrow(FlexLayout label, FlexLayout control)
	{
	}

	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x5271730", Offset = "0x5270730", VA = "0x5271730")]
	private void ApplyCompact()
	{
	}

	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x5271BF0", Offset = "0x5270BF0", VA = "0x5271BF0")]
	private FlexLayout ChildFlex(int index)
	{
		return null;
	}

	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x5271F90", Offset = "0x5270F90", VA = "0x5271F90", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004BA")]
	[Address(RVA = "0x5271FA0", Offset = "0x5270FA0", VA = "0x5271FA0", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x5271370", Offset = "0x5270370", VA = "0x5271370")]
	private void CacheLabel()
	{
	}

	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x52715E0", Offset = "0x52705E0", VA = "0x52715E0")]
	private void RefreshHover()
	{
	}

	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x5271FB0", Offset = "0x5270FB0", VA = "0x5271FB0")]
	public GisketchResponsiveRowLayout()
	{
	}
}
