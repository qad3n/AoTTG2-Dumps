// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime
// Update status: NEW in this game update
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

[Token(Token = "0x20001A6")]
internal sealed class AottgVirtualSettingsScrollCategoryRuntime : MonoBehaviour, IGisketchVirtualScrollSource, IGisketchVirtualScrollSpacingSource
{
	[Token(Token = "0x40008DB")]
	public const string NodeType = "AottgVirtualSettingsScrollCategory";

	[Token(Token = "0x40008DC")]
	[FieldOffset(Offset = "0x0")]
	private static bool _registered;

	[Token(Token = "0x40008DD")]
	[FieldOffset(Offset = "0x20")]
	private GisketchNodeDefinition[] _items;

	[Token(Token = "0x40008DE")]
	[FieldOffset(Offset = "0x28")]
	private GisketchBuildContext _context;

	[Token(Token = "0x40008DF")]
	[FieldOffset(Offset = "0x30")]
	private GisketchView _view;

	[Token(Token = "0x40008E0")]
	[FieldOffset(Offset = "0x38")]
	private GisketchVirtualScrollRuntime _virtualScroll;

	[Token(Token = "0x40008E1")]
	[FieldOffset(Offset = "0x40")]
	private float _initialScrollOffset;

	[Token(Token = "0x40008E2")]
	[FieldOffset(Offset = "0x44")]
	private float _paddingTop;

	[Token(Token = "0x1700011F")]
	public int ItemCount
	{
		[Token(Token = "0x6000908")]
		[Address(RVA = "0x23A1740", Offset = "0x239FD40", VA = "0x1823A1740", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000120")]
	public GisketchVirtualScrollMetrics Metrics
	{
		[Token(Token = "0x6000909")]
		[Address(RVA = "0x23A1760", Offset = "0x239FD60", VA = "0x1823A1760", Slot = "5")]
		get
		{
			return default(GisketchVirtualScrollMetrics);
		}
	}

	[Token(Token = "0x600090A")]
	[Address(RVA = "0x23A1060", Offset = "0x239F660", VA = "0x1823A1060")]
	public static void RegisterFactory()
	{
	}

	[Token(Token = "0x600090B")]
	[Address(RVA = "0x23A0910", Offset = "0x239EF10", VA = "0x1823A0910")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x600090C")]
	[Address(RVA = "0x23A1160", Offset = "0x239F760", VA = "0x1823A1160")]
	private void Setup(GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
	}

	[Token(Token = "0x600090D")]
	[Address(RVA = "0x23A1320", Offset = "0x239F920", VA = "0x1823A1320")]
	private void Start()
	{
	}

	[Token(Token = "0x600090E")]
	[Address(RVA = "0x23A1000", Offset = "0x239F600", VA = "0x1823A1000", Slot = "6")]
	public string ItemId(int itemIndex)
	{
		return null;
	}

	[Token(Token = "0x600090F")]
	[Address(RVA = "0x23A0F20", Offset = "0x239F520", VA = "0x1823A0F20", Slot = "13")]
	public float GapBefore(int itemIndex)
	{
		return default(float);
	}

	[Token(Token = "0x6000910")]
	[Address(RVA = "0x23A0C60", Offset = "0x239F260", VA = "0x1823A0C60", Slot = "7")]
	public GameObject CreateItem(Transform parent, int slotIndex)
	{
		return null;
	}

	[Token(Token = "0x6000911")]
	[Address(RVA = "0x23A0510", Offset = "0x239EB10", VA = "0x1823A0510", Slot = "8")]
	public void BindItem(GameObject item, int itemIndex)
	{
	}

	[Token(Token = "0x6000912")]
	[Address(RVA = "0x23A1680", Offset = "0x239FC80", VA = "0x1823A1680", Slot = "9")]
	public void UnbindItem(GameObject item)
	{
	}

	[Token(Token = "0x6000913")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
	public bool CanRecycleItem(GameObject item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000914")]
	[Address(RVA = "0x23A1520", Offset = "0x239FB20", VA = "0x1823A1520", Slot = "11")]
	public bool TryGetSearchTargetItemIndex(string targetId, out int itemIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x6000915")]
	[Address(RVA = "0x23A15C0", Offset = "0x239FBC0", VA = "0x1823A15C0", Slot = "12")]
	public bool TryResolveSearchTarget(string targetId, int itemIndex, GameObject item, out GameObject target)
	{
		return default(bool);
	}

	[Token(Token = "0x6000916")]
	[Address(RVA = "0x23A0FC0", Offset = "0x239F5C0", VA = "0x1823A0FC0")]
	private bool IsValid(int itemIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x6000917")]
	[Address(RVA = "0x23A0B80", Offset = "0x239F180", VA = "0x1823A0B80")]
	private static bool ContainsId(GisketchNodeDefinition node, string id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000918")]
	[Address(RVA = "0x23A0B00", Offset = "0x239F100", VA = "0x1823A0B00")]
	private static bool ContainsId(GisketchNodeDefinition[] nodes, string id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000919")]
	[Address(RVA = "0x23A0DF0", Offset = "0x239F3F0", VA = "0x1823A0DF0")]
	private static GameObject Find(Transform root, string id)
	{
		return null;
	}

	[Token(Token = "0x600091A")]
	[Address(RVA = "0x23A13C0", Offset = "0x239F9C0", VA = "0x1823A13C0")]
	private static void Stretch(RectTransform rect)
	{
	}

	[Token(Token = "0x600091B")]
	[Address(RVA = "0x23A09C0", Offset = "0x239EFC0", VA = "0x1823A09C0")]
	private static void ClearItem(GameObject item)
	{
	}

	[Token(Token = "0x600091C")]
	[Address(RVA = "0x23A1730", Offset = "0x239FD30", VA = "0x1823A1730")]
	public AottgVirtualSettingsScrollCategoryRuntime()
	{
	}
}
