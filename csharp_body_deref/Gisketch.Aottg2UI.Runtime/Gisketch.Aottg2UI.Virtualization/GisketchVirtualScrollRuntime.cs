// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Virtualization;

[Token(Token = "0x200000F")]
public sealed class GisketchVirtualScrollRuntime : MonoBehaviour, IGisketchSearchTargetMaterializer
{
	[Token(Token = "0x2000010")]
	private sealed class Slot
	{
		[Token(Token = "0x400005E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly GameObject Root;

		[Token(Token = "0x400005F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public int ItemIndex;

		[Token(Token = "0x60000A1")]
		[Address(RVA = "0x18A2510", Offset = "0x18A0B10", VA = "0x1818A2510")]
		public Slot(GameObject root)
		{
		}
	}

	[Token(Token = "0x4000053")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly List<Slot> _slots;

	[Token(Token = "0x4000054")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private IGisketchVirtualScrollSource _source;

	[Token(Token = "0x4000055")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private ScrollRect _scroll;

	[Token(Token = "0x4000056")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Scrollbar _scrollbar;

	[Token(Token = "0x4000057")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private RectTransform _viewport;

	[Token(Token = "0x4000058")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private RectTransform _content;

	[Token(Token = "0x4000059")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private RectTransform _realizedLayer;

	[Token(Token = "0x400005A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private GisketchTheme _theme;

	[Token(Token = "0x400005B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private float _scrollSensitivity;

	[Token(Token = "0x400005C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
	private float _lastUiScale;

	[Token(Token = "0x400005D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private GisketchVirtualRange _range;

	[Token(Token = "0x17000012")]
	public ScrollRect ScrollRect
	{
		[Token(Token = "0x600008C")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000013")]
	public float CurrentScrollOffset
	{
		[Token(Token = "0x600008D")]
		[Address(RVA = "0x18A2440", Offset = "0x18A0A40", VA = "0x1818A2440")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000014")]
	public GisketchVirtualRange CurrentRange
	{
		[Token(Token = "0x600008E")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0")]
		get
		{
			return default(GisketchVirtualRange);
		}
	}

	[Token(Token = "0x17000015")]
	public int LiveItemCount
	{
		[Token(Token = "0x600008F")]
		[Address(RVA = "0x18A24D0", Offset = "0x18A0AD0", VA = "0x1818A24D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000016")]
	public bool IsVirtualized
	{
		[Token(Token = "0x6000090")]
		[Address(RVA = "0x18A2450", Offset = "0x18A0A50", VA = "0x1818A2450")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x189EEC0", Offset = "0x189D4C0", VA = "0x18189EEC0")]
	private void EnsureHierarchy()
	{
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x189E5C0", Offset = "0x189CBC0", VA = "0x18189E5C0")]
	private void ApplyContentSize(GisketchVirtualScrollMetrics metrics)
	{
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x18A0870", Offset = "0x189EE70", VA = "0x1818A0870")]
	private void Position(RectTransform rect, int itemIndex, GisketchVirtualScrollMetrics metrics)
	{
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x18A0700", Offset = "0x189ED00", VA = "0x1818A0700")]
	private void PositionAll(GisketchVirtualScrollMetrics metrics)
	{
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x18A17D0", Offset = "0x189FDD0", VA = "0x1818A17D0")]
	private float ScrollOffset()
	{
		return default(float);
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x18A2250", Offset = "0x18A0850", VA = "0x1818A2250")]
	private float ViewportHeight()
	{
		return default(float);
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x189EAD0", Offset = "0x189D0D0", VA = "0x18189EAD0")]
	private float ContentHeight(GisketchVirtualScrollMetrics metrics)
	{
		return default(float);
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x18A02C0", Offset = "0x189E8C0", VA = "0x1818A02C0")]
	private float ItemOffset(int itemIndex, GisketchVirtualScrollMetrics metrics)
	{
		return default(float);
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x18A09B0", Offset = "0x189EFB0", VA = "0x1818A09B0")]
	private GisketchVirtualRange RangeFor(GisketchVirtualScrollMetrics metrics, float offset, float viewportHeight)
	{
		return default(GisketchVirtualRange);
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x189ECF0", Offset = "0x189D2F0", VA = "0x18189ECF0")]
	private GisketchVirtualScrollMetrics EffectiveMetrics()
	{
		return default(GisketchVirtualScrollMetrics);
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x18A1F80", Offset = "0x18A0580", VA = "0x1818A1F80")]
	private float UiScale()
	{
		return default(float);
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x189FCC0", Offset = "0x189E2C0", VA = "0x18189FCC0")]
	private static RectTransform FindOrCreateChild(Transform parent, string name)
	{
		return null;
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x189F6B0", Offset = "0x189DCB0", VA = "0x18189F6B0")]
	private Scrollbar EnsureScrollbar(Transform parent)
	{
		return null;
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x189F5D0", Offset = "0x189DBD0", VA = "0x18189F5D0")]
	private RectTransform EnsureScrollbarThumb(Transform track)
	{
		return null;
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x18A1910", Offset = "0x189FF10", VA = "0x1818A1910")]
	private float ScrollbarWidth()
	{
		return default(float);
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x189E6D0", Offset = "0x189CCD0", VA = "0x18189E6D0")]
	private void ApplyStyleImage(GameObject go, string styleName, Color fallback, bool reliefGradient = false)
	{
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x18A1C50", Offset = "0x18A0250", VA = "0x1818A1C50")]
	private static void Stretch(RectTransform rect)
	{
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x18A1B20", Offset = "0x18A0120", VA = "0x1818A1B20")]
	public void Setup(IGisketchVirtualScrollSource source, [Optional] GisketchTheme theme, float scrollSensitivity = 48f)
	{
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x18A04A0", Offset = "0x189EAA0", VA = "0x1818A04A0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x18A0F10", Offset = "0x189F510", VA = "0x1818A0F10")]
	public void Refresh(bool force)
	{
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x18A04C0", Offset = "0x189EAC0", VA = "0x1818A04C0")]
	public bool MaterializeItem(int itemIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x18A1DB0", Offset = "0x18A03B0", VA = "0x1818A1DB0", Slot = "4")]
	public bool TryMaterializeSearchTarget(string targetId, out GameObject target)
	{
		return default(bool);
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x18A19C0", Offset = "0x189FFC0", VA = "0x1818A19C0")]
	public void SetScrollOffset(float offset)
	{
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x18A0D50", Offset = "0x189F350", VA = "0x1818A0D50")]
	private void RefreshStatic(GisketchVirtualScrollMetrics metrics)
	{
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x18A0C40", Offset = "0x189F240", VA = "0x1818A0C40")]
	private void RecycleOutside(GisketchVirtualRange range)
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x189FEC0", Offset = "0x189E4C0", VA = "0x18189FEC0")]
	private Slot FreeSlot()
	{
		return null;
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x189E9A0", Offset = "0x189CFA0", VA = "0x18189E9A0")]
	private void Bind(Slot slot, int itemIndex, GisketchVirtualScrollMetrics metrics)
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x18A2190", Offset = "0x18A0790", VA = "0x1818A2190")]
	private void Unbind(Slot slot)
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x18A2070", Offset = "0x18A0670", VA = "0x1818A2070")]
	private void UnbindAll()
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x18A02A0", Offset = "0x189E8A0", VA = "0x1818A02A0")]
	private bool IsBound(int itemIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x18A1B90", Offset = "0x18A0190", VA = "0x1818A1B90")]
	private Slot SlotFor(int itemIndex)
	{
		return null;
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x18A0150", Offset = "0x189E750", VA = "0x1818A0150")]
	private static bool HasFocusedChild(GameObject root)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x18A23A0", Offset = "0x18A09A0", VA = "0x1818A23A0")]
	public GisketchVirtualScrollRuntime()
	{
	}
}
