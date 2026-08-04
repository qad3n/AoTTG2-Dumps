// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout
// Update status: NEW in this game update
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

[Token(Token = "0x200007D")]
public sealed class GisketchResponsiveRowLayout : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler
{
	[Token(Token = "0x4000285")]
	public const string NodeType = "ResponsiveRowLayout";

	[Token(Token = "0x4000286")]
	public const float WideBreakpoint = 620f;

	[Token(Token = "0x4000287")]
	private const float WideLabelWidth = 300f;

	[Token(Token = "0x4000288")]
	private const float WideLabelMinWidth = 180f;

	[Token(Token = "0x4000289")]
	private const float WideControlMinWidth = 260f;

	[Token(Token = "0x400028A")]
	private const float WideGap = 14f;

	[Token(Token = "0x400028B")]
	private const float NarrowGap = 8f;

	[Token(Token = "0x400028C")]
	[FieldOffset(Offset = "0x0")]
	private static bool _registered;

	[Token(Token = "0x400028D")]
	[FieldOffset(Offset = "0x20")]
	private RectTransform _rect;

	[Token(Token = "0x400028E")]
	[FieldOffset(Offset = "0x28")]
	private FlexLayout _root;

	[Token(Token = "0x400028F")]
	[FieldOffset(Offset = "0x30")]
	private Image _background;

	[Token(Token = "0x4000290")]
	[FieldOffset(Offset = "0x38")]
	private TextMeshProUGUI _label;

	[Token(Token = "0x4000291")]
	[FieldOffset(Offset = "0x40")]
	private TMP_FontAsset _normalFont;

	[Token(Token = "0x4000292")]
	[FieldOffset(Offset = "0x48")]
	private FontWeight _normalWeight;

	[Token(Token = "0x4000293")]
	[FieldOffset(Offset = "0x50")]
	private TMP_FontAsset _hoverFont;

	[Token(Token = "0x4000294")]
	[FieldOffset(Offset = "0x58")]
	private Color _hoverColor;

	[Token(Token = "0x4000295")]
	[FieldOffset(Offset = "0x68")]
	private bool? _wide;

	[Token(Token = "0x4000296")]
	[FieldOffset(Offset = "0x6A")]
	private bool _hovered;

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x3A69220", Offset = "0x3A69220", VA = "0x3A69220")]
	static GisketchResponsiveRowLayout()
	{
	}

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x3A69230", Offset = "0x3A69230", VA = "0x3A69230")]
	public static void RegisterFactory()
	{
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x3A69470", Offset = "0x3A69470", VA = "0x3A69470")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x3A69510", Offset = "0x3A69510", VA = "0x3A69510")]
	public void Setup(GisketchTheme theme)
	{
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x3A69630", Offset = "0x3A69630", VA = "0x3A69630")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x3A69680", Offset = "0x3A69680", VA = "0x3A69680")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x3A69860", Offset = "0x3A69860", VA = "0x3A69860")]
	public void ApplyForCurrentWidth()
	{
	}

	[Token(Token = "0x6000356")]
	[Address(RVA = "0x3A69A50", Offset = "0x3A69A50", VA = "0x3A69A50")]
	public void Apply(bool wide)
	{
	}

	[Token(Token = "0x6000357")]
	[Address(RVA = "0x3A69CA0", Offset = "0x3A69CA0", VA = "0x3A69CA0")]
	private void ApplyWide(FlexLayout label, FlexLayout control)
	{
	}

	[Token(Token = "0x6000358")]
	[Address(RVA = "0x3A69E30", Offset = "0x3A69E30", VA = "0x3A69E30")]
	private void ApplyNarrow(FlexLayout label, FlexLayout control)
	{
	}

	[Token(Token = "0x6000359")]
	[Address(RVA = "0x3A69C10", Offset = "0x3A69C10", VA = "0x3A69C10")]
	private FlexLayout ChildFlex(int index)
	{
		return null;
	}

	[Token(Token = "0x600035A")]
	[Address(RVA = "0x3A69FB0", Offset = "0x3A69FB0", VA = "0x3A69FB0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x3A69FC0", Offset = "0x3A69FC0", VA = "0x3A69FC0", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x3A696A0", Offset = "0x3A696A0", VA = "0x3A696A0")]
	private void CacheLabel()
	{
	}

	[Token(Token = "0x600035D")]
	[Address(RVA = "0x3A69900", Offset = "0x3A69900", VA = "0x3A69900")]
	private void RefreshHover()
	{
	}

	[Token(Token = "0x600035E")]
	[Address(RVA = "0x3A69FD0", Offset = "0x3A69FD0", VA = "0x3A69FD0")]
	public GisketchResponsiveRowLayout()
	{
	}
}
