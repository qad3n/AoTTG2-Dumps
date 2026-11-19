// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime
// Update status: unchanged since the previous dump
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
		[Token(Token = "0x400005F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly GameObject Root;

		[Token(Token = "0x4000060")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public int ItemIndex;

		[Token(Token = "0x60000A2")]
		[Address(RVA = "0x5224870", Offset = "0x5223870", VA = "0x5224870")]
		public Slot(GameObject root)
		{
		}
	}

	[Token(Token = "0x4000054")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly List<Slot> _slots;

	[Token(Token = "0x4000055")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private IGisketchVirtualScrollSource _source;

	[Token(Token = "0x4000056")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private ScrollRect _scroll;

	[Token(Token = "0x4000057")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Scrollbar _scrollbar;

	[Token(Token = "0x4000058")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private RectTransform _viewport;

	[Token(Token = "0x4000059")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private RectTransform _content;

	[Token(Token = "0x400005A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private RectTransform _realizedLayer;

	[Token(Token = "0x400005B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private GisketchTheme _theme;

	[Token(Token = "0x400005C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private float _scrollSensitivity;

	[Token(Token = "0x400005D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
	private float _lastUiScale;

	[Token(Token = "0x400005E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private GisketchVirtualRange _range;

	[Token(Token = "0x17000012")]
	public ScrollRect ScrollRect
	{
		[Token(Token = "0x600008D")]
		[Address(RVA = "0x5223360", Offset = "0x5222360", VA = "0x5223360")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000013")]
	public float CurrentScrollOffset
	{
		[Token(Token = "0x600008E")]
		[Address(RVA = "0x5223370", Offset = "0x5222370", VA = "0x5223370")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000014")]
	public GisketchVirtualRange CurrentRange
	{
		[Token(Token = "0x600008F")]
		[Address(RVA = "0x5223380", Offset = "0x5222380", VA = "0x5223380")]
		get
		{
			return default(GisketchVirtualRange);
		}
	}

	[Token(Token = "0x17000015")]
	public int LiveItemCount
	{
		[Token(Token = "0x6000090")]
		[Address(RVA = "0x5223390", Offset = "0x5222390", VA = "0x5223390")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000016")]
	public bool IsVirtualized
	{
		[Token(Token = "0x6000091")]
		[Address(RVA = "0x52233D0", Offset = "0x52223D0", VA = "0x52233D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x5220A70", Offset = "0x521FA70", VA = "0x5220A70")]
	private void EnsureHierarchy()
	{
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x52218B0", Offset = "0x52208B0", VA = "0x52218B0")]
	private void ApplyContentSize(GisketchVirtualScrollMetrics metrics)
	{
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x5221C10", Offset = "0x5220C10", VA = "0x5221C10")]
	private void Position(RectTransform rect, int itemIndex, GisketchVirtualScrollMetrics metrics)
	{
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x5221F00", Offset = "0x5220F00", VA = "0x5221F00")]
	private void PositionAll(GisketchVirtualScrollMetrics metrics)
	{
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x5222030", Offset = "0x5221030", VA = "0x5222030")]
	private float ScrollOffset()
	{
		return default(float);
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x5222150", Offset = "0x5221150", VA = "0x5222150")]
	private float ViewportHeight()
	{
		return default(float);
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x52219B0", Offset = "0x52209B0", VA = "0x52219B0")]
	private float ContentHeight(GisketchVirtualScrollMetrics metrics)
	{
		return default(float);
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x5221D30", Offset = "0x5220D30", VA = "0x5221D30")]
	private float ItemOffset(int itemIndex, GisketchVirtualScrollMetrics metrics)
	{
		return default(float);
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x52222F0", Offset = "0x52212F0", VA = "0x52222F0")]
	private GisketchVirtualRange RangeFor(GisketchVirtualScrollMetrics metrics, float offset, float viewportHeight)
	{
		return default(GisketchVirtualRange);
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x5222790", Offset = "0x5221790", VA = "0x5222790")]
	private GisketchVirtualScrollMetrics EffectiveMetrics()
	{
		return default(GisketchVirtualScrollMetrics);
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x52228E0", Offset = "0x52218E0", VA = "0x52228E0")]
	private float UiScale()
	{
		return default(float);
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x52210C0", Offset = "0x52200C0", VA = "0x52210C0")]
	private static RectTransform FindOrCreateChild(Transform parent, string name)
	{
		return null;
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x5221420", Offset = "0x5220420", VA = "0x5221420")]
	private Scrollbar EnsureScrollbar(Transform parent)
	{
		return null;
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x5222DE0", Offset = "0x5221DE0", VA = "0x5222DE0")]
	private RectTransform EnsureScrollbarThumb(Transform track)
	{
		return null;
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x5222A70", Offset = "0x5221A70", VA = "0x5222A70")]
	private float ScrollbarWidth()
	{
		return default(float);
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x5222B20", Offset = "0x5221B20", VA = "0x5222B20")]
	private void ApplyStyleImage(GameObject go, string styleName, Color fallback, bool reliefGradient = false)
	{
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x52212E0", Offset = "0x52202E0", VA = "0x52212E0")]
	private static void Stretch(RectTransform rect)
	{
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x5223500", Offset = "0x5222500", VA = "0x5223500")]
	public void Setup(IGisketchVirtualScrollSource source, [Optional] GisketchTheme theme, float scrollSensitivity = 48f)
	{
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x52237B0", Offset = "0x52227B0", VA = "0x52237B0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x5223560", Offset = "0x5222560", VA = "0x5223560")]
	public void Refresh(bool force)
	{
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x5224150", Offset = "0x5223150", VA = "0x5224150")]
	public bool MaterializeItem(int itemIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x5224480", Offset = "0x5223480", VA = "0x5224480", Slot = "4")]
	public bool TryMaterializeSearchTarget(string targetId, out GameObject target)
	{
		return default(bool);
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x5224280", Offset = "0x5223280", VA = "0x5224280")]
	public void SetScrollOffset(float offset)
	{
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x52237C0", Offset = "0x52227C0", VA = "0x52237C0")]
	private void RefreshStatic(GisketchVirtualScrollMetrics metrics)
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x5223B90", Offset = "0x5222B90", VA = "0x5223B90")]
	private void RecycleOutside(GisketchVirtualRange range)
	{
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x5223D30", Offset = "0x5222D30", VA = "0x5223D30")]
	private Slot FreeSlot()
	{
		return null;
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x5223FD0", Offset = "0x5222FD0", VA = "0x5223FD0")]
	private void Bind(Slot slot, int itemIndex, GisketchVirtualScrollMetrics metrics)
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x5224610", Offset = "0x5223610", VA = "0x5224610")]
	private void Unbind(Slot slot)
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x5223A00", Offset = "0x5222A00", VA = "0x5223A00")]
	private void UnbindAll()
	{
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x5223D20", Offset = "0x5222D20", VA = "0x5223D20")]
	private bool IsBound(int itemIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x52243D0", Offset = "0x52233D0", VA = "0x52243D0")]
	private Slot SlotFor(int itemIndex)
	{
		return null;
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x5224730", Offset = "0x5223730", VA = "0x5224730")]
	private static bool HasFocusedChild(GameObject root)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x52248B0", Offset = "0x52238B0", VA = "0x52248B0")]
	public GisketchVirtualScrollRuntime()
	{
	}
}
