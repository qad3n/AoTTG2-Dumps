// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgVirtualSettingsScrollCategoryRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.Virtualization;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x20001B5")]
internal sealed class AottgVirtualSettingsScrollCategoryRuntime : MonoBehaviour, IGisketchVirtualScrollSource, IGisketchVirtualScrollSpacingSource
{
	[Token(Token = "0x4000937")]
	public const string NodeType = "AottgVirtualSettingsScrollCategory";

	[Token(Token = "0x4000938")]
	[FieldOffset(Offset = "0x0")]
	private static bool _registered;

	[Token(Token = "0x4000939")]
	[FieldOffset(Offset = "0x20")]
	private GisketchNodeDefinition[] _items;

	[Token(Token = "0x400093A")]
	[FieldOffset(Offset = "0x28")]
	private GisketchBuildContext _context;

	[Token(Token = "0x400093B")]
	[FieldOffset(Offset = "0x30")]
	private GisketchView _view;

	[Token(Token = "0x400093C")]
	[FieldOffset(Offset = "0x38")]
	private GisketchVirtualScrollRuntime _virtualScroll;

	[Token(Token = "0x400093D")]
	[FieldOffset(Offset = "0x40")]
	private float _initialScrollOffset;

	[Token(Token = "0x400093E")]
	[FieldOffset(Offset = "0x44")]
	private float _paddingTop;

	[Token(Token = "0x17000122")]
	public int ItemCount
	{
		[Token(Token = "0x600099B")]
		[Address(RVA = "0x5D58730", Offset = "0x5D57730", VA = "0x5D58730", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000123")]
	public GisketchVirtualScrollMetrics Metrics
	{
		[Token(Token = "0x600099C")]
		[Address(RVA = "0x5D58740", Offset = "0x5D57740", VA = "0x5D58740", Slot = "5")]
		get
		{
			return default(GisketchVirtualScrollMetrics);
		}
	}

	[Token(Token = "0x600099D")]
	[Address(RVA = "0x5D58640", Offset = "0x5D57640", VA = "0x5D58640")]
	public static void RegisterFactory()
	{
	}

	[Token(Token = "0x600099E")]
	[Address(RVA = "0x5D587A0", Offset = "0x5D577A0", VA = "0x5D587A0")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x600099F")]
	[Address(RVA = "0x5D58850", Offset = "0x5D57850", VA = "0x5D58850")]
	private void Setup(GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
	}

	[Token(Token = "0x60009A0")]
	[Address(RVA = "0x5D58A40", Offset = "0x5D57A40", VA = "0x5D58A40")]
	private void Start()
	{
	}

	[Token(Token = "0x60009A1")]
	[Address(RVA = "0x5D58AE0", Offset = "0x5D57AE0", VA = "0x5D58AE0", Slot = "6")]
	public string ItemId(int itemIndex)
	{
		return null;
	}

	[Token(Token = "0x60009A2")]
	[Address(RVA = "0x5D58B50", Offset = "0x5D57B50", VA = "0x5D58B50", Slot = "13")]
	public float GapBefore(int itemIndex)
	{
		return default(float);
	}

	[Token(Token = "0x60009A3")]
	[Address(RVA = "0x5D58BE0", Offset = "0x5D57BE0", VA = "0x5D58BE0", Slot = "7")]
	public GameObject CreateItem(Transform parent, int slotIndex)
	{
		return null;
	}

	[Token(Token = "0x60009A4")]
	[Address(RVA = "0x5D58D80", Offset = "0x5D57D80", VA = "0x5D58D80", Slot = "8")]
	public void BindItem(GameObject item, int itemIndex)
	{
	}

	[Token(Token = "0x60009A5")]
	[Address(RVA = "0x5D592A0", Offset = "0x5D582A0", VA = "0x5D592A0", Slot = "9")]
	public void UnbindItem(GameObject item)
	{
	}

	[Token(Token = "0x60009A6")]
	[Address(RVA = "0x5D59350", Offset = "0x5D58350", VA = "0x5D59350", Slot = "10")]
	public bool CanRecycleItem(GameObject item)
	{
		return default(bool);
	}

	[Token(Token = "0x60009A7")]
	[Address(RVA = "0x5D59360", Offset = "0x5D58360", VA = "0x5D59360", Slot = "11")]
	public bool TryGetSearchTargetItemIndex(string targetId, out int itemIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x60009A8")]
	[Address(RVA = "0x5D594F0", Offset = "0x5D584F0", VA = "0x5D594F0", Slot = "12")]
	public bool TryResolveSearchTarget(string targetId, int itemIndex, GameObject item, out GameObject target)
	{
		return default(bool);
	}

	[Token(Token = "0x60009A9")]
	[Address(RVA = "0x5D58B20", Offset = "0x5D57B20", VA = "0x5D58B20")]
	private bool IsValid(int itemIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x60009AA")]
	[Address(RVA = "0x5D593F0", Offset = "0x5D583F0", VA = "0x5D593F0")]
	private static bool ContainsId(GisketchNodeDefinition node, string id)
	{
		return default(bool);
	}

	[Token(Token = "0x60009AB")]
	[Address(RVA = "0x5D596F0", Offset = "0x5D586F0", VA = "0x5D596F0")]
	private static bool ContainsId(GisketchNodeDefinition[] nodes, string id)
	{
		return default(bool);
	}

	[Token(Token = "0x60009AC")]
	[Address(RVA = "0x5D595B0", Offset = "0x5D585B0", VA = "0x5D595B0")]
	private static GameObject Find(Transform root, string id)
	{
		return null;
	}

	[Token(Token = "0x60009AD")]
	[Address(RVA = "0x5D59160", Offset = "0x5D58160", VA = "0x5D59160")]
	private static void Stretch(RectTransform rect)
	{
	}

	[Token(Token = "0x60009AE")]
	[Address(RVA = "0x5D59020", Offset = "0x5D58020", VA = "0x5D59020")]
	private static void ClearItem(GameObject item)
	{
	}

	[Token(Token = "0x60009AF")]
	[Address(RVA = "0x5D59750", Offset = "0x5D58750", VA = "0x5D59750")]
	public AottgVirtualSettingsScrollCategoryRuntime()
	{
	}
}
