// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Overlays.GisketchOverlayManager
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Gilzoide.FlexUi;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Overlays;

[Token(Token = "0x2000046")]
public sealed class GisketchOverlayManager
{
	[Token(Token = "0x2000047")]
	private enum OverlayKind
	{
		[Token(Token = "0x4000162")]
		Dialog,
		[Token(Token = "0x4000163")]
		Popover
	}

	[Token(Token = "0x2000048")]
	private sealed class OverlayInstance
	{
		[Token(Token = "0x4000164")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly OverlayKind Kind;

		[Token(Token = "0x4000165")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public readonly string Id;

		[Token(Token = "0x4000166")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public readonly GameObject Host;

		[Token(Token = "0x4000167")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public readonly GisketchView View;

		[Token(Token = "0x4000168")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public readonly bool GuardUnsavedChanges;

		[Token(Token = "0x400016A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public readonly RectTransform HostRect;

		[Token(Token = "0x17000046")]
		public GameObject ContentRoot
		{
			[Token(Token = "0x6000296")]
			[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000297")]
			[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000047")]
		public GameObject PreviousSelected
		{
			[Token(Token = "0x6000298")]
			[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000299")]
			[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x600029A")]
		[Address(RVA = "0x18BE770", Offset = "0x18BCD70", VA = "0x1818BE770")]
		public OverlayInstance(OverlayKind kind, string id, GameObject host, GisketchView inner, bool guardUnsavedChanges)
		{
		}

		[Token(Token = "0x600029B")]
		[Address(RVA = "0x18BE6A0", Offset = "0x18BCCA0", VA = "0x1818BE6A0")]
		public void ReplaceContent(GisketchView inner)
		{
		}

		[Token(Token = "0x600029C")]
		[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10")]
		public void SetPreviousSelected(GameObject previousSelected)
		{
		}
	}

	[Token(Token = "0x4000159")]
	private const float DialogEdgePadding = 64f;

	[Token(Token = "0x400015A")]
	private const float PopoverGap = 24f;

	[Token(Token = "0x400015B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly Transform _layer;

	[Token(Token = "0x400015C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly GisketchBuildContext _context;

	[Token(Token = "0x400015D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly List<OverlayInstance> _stack;

	[Token(Token = "0x400015E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly Dictionary<string, OverlayInstance> _cached;

	[Token(Token = "0x400015F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private OverlayInstance _activePopover;

	[Token(Token = "0x4000160")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private OverlayInstance _pendingUnsavedClose;

	[Token(Token = "0x17000045")]
	public bool HasOpenOverlays
	{
		[Token(Token = "0x6000271")]
		[Address(RVA = "0x18A9870", Offset = "0x18A7E70", VA = "0x1818A9870")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x18A4D60", Offset = "0x18A3360", VA = "0x1818A4D60")]
	private OverlayInstance BuildOverlayInstance(GisketchOverlayDefinition overlay, GameObject anchor, OverlayKind kind, bool forceBelow, bool matchAnchorWidth, float popoverGap)
	{
		return null;
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x18A73B0", Offset = "0x18A59B0", VA = "0x1818A73B0")]
	private void OpenInstance(OverlayInstance instance, GameObject anchor, bool focusOnOpen, bool forceBelow, bool matchAnchorWidth, float popoverGap, bool animate)
	{
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x18A7D70", Offset = "0x18A6370", VA = "0x1818A7D70")]
	private void PrepareLayoutForShow(OverlayInstance instance, GameObject anchor, bool forceBelow, bool matchAnchorWidth, float popoverGap)
	{
	}

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x18A7F60", Offset = "0x18A6560", VA = "0x1818A7F60")]
	private static void PrepareLayout(GisketchOverlayDefinition overlay, GameObject root, RectTransform hostRect, GameObject anchor, bool forceBelow, bool matchAnchorWidth, float popoverGap)
	{
	}

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x18A8F50", Offset = "0x18A7550", VA = "0x1818A8F50")]
	public GameObject ShowDynamicPopover(string id, GisketchNodeDefinition root, GameObject anchor, bool focusOnOpen = true, bool matchAnchorWidth = false, float gap = 0f, bool animate = true, GisketchOverlayLifecycle lifecycle = GisketchOverlayLifecycle.Fresh)
	{
		return null;
	}

	[Token(Token = "0x6000261")]
	[Address(RVA = "0x18A8E20", Offset = "0x18A7420", VA = "0x1818A8E20")]
	public GameObject ShowDynamicDialog(string id, GisketchNodeDefinition root, bool focusOnOpen = true, bool dismissOnBackdrop = true, bool animate = true, GisketchOverlayLifecycle lifecycle = GisketchOverlayLifecycle.Fresh)
	{
		return null;
	}

	[Token(Token = "0x6000262")]
	[Address(RVA = "0x18A5DD0", Offset = "0x18A43D0", VA = "0x1818A5DD0")]
	public bool ClosePopover(string id, bool animate = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000263")]
	[Address(RVA = "0x18A8160", Offset = "0x18A6760", VA = "0x1818A8160")]
	public bool RefreshDialogContent(string id, bool focusOnRefresh = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000264")]
	[Address(RVA = "0x18A62A0", Offset = "0x18A48A0", VA = "0x1818A62A0")]
	public bool CycleFocus(bool backwards)
	{
		return default(bool);
	}

	[Token(Token = "0x6000265")]
	[Address(RVA = "0x18A85B0", Offset = "0x18A6BB0", VA = "0x1818A85B0")]
	private static void SelectInitialFocus(OverlayInstance instance)
	{
	}

	[Token(Token = "0x6000266")]
	[Address(RVA = "0x18A6680", Offset = "0x18A4C80", VA = "0x1818A6680")]
	private static TMP_InputField FirstInput(GameObject root)
	{
		return null;
	}

	[Token(Token = "0x6000267")]
	[Address(RVA = "0x18A4B40", Offset = "0x18A3140", VA = "0x1818A4B40")]
	private static void ApplyDialogMaxHeight(RectTransform host, GameObject root)
	{
	}

	[Token(Token = "0x6000268")]
	[Address(RVA = "0x18A77F0", Offset = "0x18A5DF0", VA = "0x1818A77F0")]
	private static void PositionPopover(GameObject root, RectTransform host, GameObject anchor, bool forceBelow = false, float gap = 24f)
	{
	}

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x18A4770", Offset = "0x18A2D70", VA = "0x1818A4770")]
	private static Rect AnchorRect(RectTransform host, GameObject anchor)
	{
		return default(Rect);
	}

	[Token(Token = "0x600026A")]
	[Address(RVA = "0x18A7200", Offset = "0x18A5800", VA = "0x1818A7200")]
	private static void MatchPopoverWidth(GameObject root, RectTransform host, GameObject anchor)
	{
	}

	[Token(Token = "0x600026B")]
	[Address(RVA = "0x18A7180", Offset = "0x18A5780", VA = "0x1818A7180")]
	private static Vector2 LocalPoint(RectTransform host, Vector2 screenPoint)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600026C")]
	[Address(RVA = "0x18A7750", Offset = "0x18A5D50", VA = "0x1818A7750")]
	private static Vector2 PopoverSize(RectTransform rect)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600026D")]
	[Address(RVA = "0x18A7700", Offset = "0x18A5D00", VA = "0x1818A7700")]
	private static Vector2 PivotFor(Vector2 anchor, float left, float top, Vector2 size)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600026E")]
	[Address(RVA = "0x18A8990", Offset = "0x18A6F90", VA = "0x1818A8990")]
	private static void SetPivot(RectTransform rect, Vector2 pivot)
	{
	}

	[Token(Token = "0x600026F")]
	[Address(RVA = "0x18A5550", Offset = "0x18A3B50", VA = "0x1818A5550")]
	private static float Clamp(float value, float min, float max)
	{
		return default(float);
	}

	[Token(Token = "0x6000270")]
	[Address(RVA = "0x18A9720", Offset = "0x18A7D20", VA = "0x1818A9720")]
	public GisketchOverlayManager(Transform layer, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x6000272")]
	[Address(RVA = "0x18A8BD0", Offset = "0x18A71D0", VA = "0x1818A8BD0")]
	public void ShowDialog(string id, bool focusOnOpen = true)
	{
	}

	[Token(Token = "0x6000273")]
	[Address(RVA = "0x18A9290", Offset = "0x18A7890", VA = "0x1818A9290")]
	public GameObject ShowPopover(string id, [Optional] GameObject anchor, bool focusOnOpen = true, float gap = 24f)
	{
		return null;
	}

	[Token(Token = "0x6000274")]
	[Address(RVA = "0x18A5F00", Offset = "0x18A4500", VA = "0x1818A5F00")]
	public bool CloseTop(bool restoreFocus = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6000275")]
	[Address(RVA = "0x18A5E60", Offset = "0x18A4460", VA = "0x1818A5E60")]
	public bool CloseTopForced(bool restoreFocus = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6000276")]
	[Address(RVA = "0x18A5940", Offset = "0x18A3F40", VA = "0x1818A5940")]
	public bool CloseDialog(string id, bool restoreFocus = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6000277")]
	[Address(RVA = "0x18A58E0", Offset = "0x18A3EE0", VA = "0x1818A58E0")]
	public bool CloseDialogForced(string id, bool restoreFocus = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x18A63F0", Offset = "0x18A49F0", VA = "0x1818A63F0")]
	public void DiscardPendingUnsavedChanges()
	{
	}

	[Token(Token = "0x6000279")]
	[Address(RVA = "0x18A56D0", Offset = "0x18A3CD0", VA = "0x1818A56D0")]
	public void Clear()
	{
	}

	[Token(Token = "0x600027A")]
	[Address(RVA = "0x18A6A70", Offset = "0x18A5070", VA = "0x1818A6A70")]
	public void FocusTopFromNavigation()
	{
	}

	[Token(Token = "0x600027B")]
	[Address(RVA = "0x18A9080", Offset = "0x18A7680", VA = "0x1818A9080")]
	private OverlayInstance ShowOverlay(GisketchOverlayDefinition overlay, GameObject anchor, OverlayKind kind, bool focusOnOpen, bool forceBelow = false, bool matchAnchorWidth = false, float popoverGap = 24f, bool animate = true)
	{
		return null;
	}

	[Token(Token = "0x600027C")]
	[Address(RVA = "0x18A6030", Offset = "0x18A4630", VA = "0x1818A6030")]
	private static void ConfigureHost(FlexLayout flex, bool modal)
	{
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x18A7640", Offset = "0x18A5C40", VA = "0x1818A7640")]
	private static string OverlayName(GisketchOverlayDefinition overlay)
	{
		return null;
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x18A4520", Offset = "0x18A2B20", VA = "0x1818A4520")]
	private void AddBackdrop(Transform parent, bool dismiss, Color color)
	{
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x189B1D0", Offset = "0x18997D0", VA = "0x18189B1D0")]
	private static void Stretch(RectTransform rect)
	{
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x18A6570", Offset = "0x18A4B70", VA = "0x1818A6570")]
	private OverlayInstance FindDialog(string id)
	{
		return null;
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x18A6BD0", Offset = "0x18A51D0", VA = "0x1818A6BD0")]
	private OverlayInstance GetOrBuildOverlayInstance(GisketchOverlayDefinition overlay, GameObject anchor, OverlayKind kind, bool forceBelow, bool matchAnchorWidth, float popoverGap)
	{
		return null;
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x18A54D0", Offset = "0x18A3AD0", VA = "0x1818A54D0")]
	private static string CacheKey(OverlayKind kind, string id)
	{
		return null;
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x18A9570", Offset = "0x18A7B70", VA = "0x1818A9570")]
	private OverlayInstance Top()
	{
		return null;
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x18A8B60", Offset = "0x18A7160", VA = "0x1818A8B60")]
	private bool ShouldGuardClose(OverlayInstance instance)
	{
		return default(bool);
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x18A9440", Offset = "0x18A7A40", VA = "0x1818A9440")]
	private bool ShowUnsavedChanges(OverlayInstance instance)
	{
		return default(bool);
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x18A8430", Offset = "0x18A6A30", VA = "0x1818A8430")]
	private GisketchOverlayDefinition ResolveDialog(string id)
	{
		return null;
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x18A5A20", Offset = "0x18A4020", VA = "0x1818A5A20")]
	private void CloseInstance(OverlayInstance instance, bool restoreFocus, bool animate)
	{
	}

	[Token(Token = "0x6000288")]
	[Address(RVA = "0x18A70E0", Offset = "0x18A56E0", VA = "0x1818A70E0")]
	private bool IsCached(OverlayInstance instance)
	{
		return default(bool);
	}

	[Token(Token = "0x6000289")]
	[Address(RVA = "0x18A6E60", Offset = "0x18A5460", VA = "0x1818A6E60")]
	private static void HideCachedInstance(OverlayInstance instance)
	{
	}

	[Token(Token = "0x600028A")]
	[Address(RVA = "0x18A8330", Offset = "0x18A6930", VA = "0x1818A8330")]
	private static void ResetCachedInstance(OverlayInstance instance)
	{
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x18A8880", Offset = "0x18A6E80", VA = "0x1818A8880")]
	private static void SetInputLocked(GameObject root, bool locked)
	{
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x18A5570", Offset = "0x18A3B70", VA = "0x1818A5570")]
	private static void ClearSelectedIfInside(GameObject root)
	{
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x18A6900", Offset = "0x18A4F00", VA = "0x1818A6900")]
	private void FocusAfterClose(OverlayInstance closed)
	{
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x18A6BC0", Offset = "0x18A51C0", VA = "0x1818A6BC0")]
	private static void Focus(OverlayInstance instance, bool focus)
	{
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x18A6100", Offset = "0x18A4700", VA = "0x1818A6100")]
	private static bool ContainsSelected(OverlayInstance instance)
	{
		return default(bool);
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x18A67C0", Offset = "0x18A4DC0", VA = "0x1818A67C0")]
	private static Selectable FirstSelectable(GameObject root)
	{
		return null;
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x18A84B0", Offset = "0x18A6AB0", VA = "0x1818A84B0")]
	private static void Restore(GameObject go)
	{
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x18A61F0", Offset = "0x18A47F0", VA = "0x1818A61F0")]
	private static GameObject CurrentSelected()
	{
		return null;
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x18A8A10", Offset = "0x18A7010", VA = "0x1818A8A10")]
	private static void SetSelected(Selectable selectable)
	{
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x18A6330", Offset = "0x18A4930", VA = "0x1818A6330")]
	private static void DestroyObject(GameObject go)
	{
	}
}
