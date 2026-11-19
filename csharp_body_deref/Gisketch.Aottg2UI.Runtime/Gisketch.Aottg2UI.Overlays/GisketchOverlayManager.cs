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

[Token(Token = "0x200004D")]
public sealed class GisketchOverlayManager
{
	[Token(Token = "0x200004E")]
	private enum OverlayKind
	{
		[Token(Token = "0x4000187")]
		Dialog,
		[Token(Token = "0x4000188")]
		Popover
	}

	[Token(Token = "0x200004F")]
	private sealed class OverlayInstance
	{
		[Token(Token = "0x4000189")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly OverlayKind Kind;

		[Token(Token = "0x400018A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public readonly string Id;

		[Token(Token = "0x400018B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public readonly GameObject Host;

		[Token(Token = "0x400018C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public readonly GisketchView View;

		[Token(Token = "0x400018D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public readonly bool GuardUnsavedChanges;

		[Token(Token = "0x400018F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public readonly RectTransform HostRect;

		[Token(Token = "0x17000046")]
		public GameObject ContentRoot
		{
			[Token(Token = "0x60002E2")]
			[Address(RVA = "0x5258FD0", Offset = "0x5257FD0", VA = "0x5258FD0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60002E3")]
			[Address(RVA = "0x5258FE0", Offset = "0x5257FE0", VA = "0x5258FE0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000047")]
		public GameObject PreviousSelected
		{
			[Token(Token = "0x60002E4")]
			[Address(RVA = "0x5258FF0", Offset = "0x5257FF0", VA = "0x5258FF0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60002E5")]
			[Address(RVA = "0x5259000", Offset = "0x5258000", VA = "0x5259000")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x60002E6")]
		[Address(RVA = "0x5254E60", Offset = "0x5253E60", VA = "0x5254E60")]
		public OverlayInstance(OverlayKind kind, string id, GameObject host, GisketchView inner, bool guardUnsavedChanges)
		{
		}

		[Token(Token = "0x60002E7")]
		[Address(RVA = "0x5256840", Offset = "0x5255840", VA = "0x5256840")]
		public void ReplaceContent(GisketchView inner)
		{
		}

		[Token(Token = "0x60002E8")]
		[Address(RVA = "0x5255520", Offset = "0x5254520", VA = "0x5255520")]
		public void SetPreviousSelected(GameObject previousSelected)
		{
		}
	}

	[Token(Token = "0x400017C")]
	private const float DialogEdgePadding = 64f;

	[Token(Token = "0x400017D")]
	private const float PopoverGap = 24f;

	[Token(Token = "0x400017E")]
	private const bool DefaultFocusOnOpen = true;

	[Token(Token = "0x400017F")]
	private const bool DefaultRestoreFocus = true;

	[Token(Token = "0x4000180")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly Transform _layer;

	[Token(Token = "0x4000181")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly GisketchBuildContext _context;

	[Token(Token = "0x4000182")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly List<OverlayInstance> _stack;

	[Token(Token = "0x4000183")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly Dictionary<string, OverlayInstance> _cached;

	[Token(Token = "0x4000184")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private OverlayInstance _activePopover;

	[Token(Token = "0x4000185")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private OverlayInstance _pendingUnsavedClose;

	[Token(Token = "0x17000045")]
	public bool HasOpenOverlays
	{
		[Token(Token = "0x60002BC")]
		[Address(RVA = "0x52575B0", Offset = "0x52565B0", VA = "0x52575B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x5254190", Offset = "0x5253190", VA = "0x5254190")]
	private OverlayInstance BuildOverlayInstance(GisketchOverlayDefinition overlay, GameObject anchor, OverlayKind kind, bool forceBelow, bool matchAnchorWidth, float popoverGap)
	{
		return null;
	}

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x5254FA0", Offset = "0x5253FA0", VA = "0x5254FA0")]
	private void OpenInstance(OverlayInstance instance, GameObject anchor, bool focusOnOpen, bool forceBelow, bool matchAnchorWidth, float popoverGap, bool animate)
	{
	}

	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x5255260", Offset = "0x5254260", VA = "0x5255260")]
	private void PrepareLayoutForShow(OverlayInstance instance, GameObject anchor, bool forceBelow, bool matchAnchorWidth, float popoverGap)
	{
	}

	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x5254C00", Offset = "0x5253C00", VA = "0x5254C00")]
	private static void PrepareLayout(GisketchOverlayDefinition overlay, GameObject root, RectTransform hostRect, GameObject anchor, bool forceBelow, bool matchAnchorWidth, float popoverGap)
	{
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x5255E10", Offset = "0x5254E10", VA = "0x5255E10")]
	public GameObject ShowDynamicPopover(string id, GisketchNodeDefinition root, GameObject anchor, bool focusOnOpen = true, bool matchAnchorWidth = false, float gap = 0f, bool animate = true, GisketchOverlayLifecycle lifecycle = GisketchOverlayLifecycle.Fresh)
	{
		return null;
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x5256340", Offset = "0x5255340", VA = "0x5256340")]
	public GameObject ShowDynamicDialog(string id, GisketchNodeDefinition root, bool focusOnOpen = true, bool dismissOnBackdrop = true, bool animate = true, GisketchOverlayLifecycle lifecycle = GisketchOverlayLifecycle.Fresh)
	{
		return null;
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x5256540", Offset = "0x5255540", VA = "0x5256540")]
	public bool ClosePopover(string id, bool animate = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x52565B0", Offset = "0x52555B0", VA = "0x52565B0")]
	public bool RefreshDialogContent(string id, bool focusOnRefresh = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x5256920", Offset = "0x5255920", VA = "0x5256920")]
	public bool CycleFocus(bool backwards)
	{
		return default(bool);
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x5256A00", Offset = "0x5255A00", VA = "0x5256A00")]
	private static void SelectInitialFocus(OverlayInstance instance)
	{
	}

	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x5256AE0", Offset = "0x5255AE0", VA = "0x5256AE0")]
	private static TMP_InputField FirstInput(GameObject root)
	{
		return null;
	}

	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x5255C00", Offset = "0x5254C00", VA = "0x5255C00")]
	private static void ApplyDialogMaxHeight(RectTransform host, GameObject root)
	{
	}

	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x52556E0", Offset = "0x52546E0", VA = "0x52556E0")]
	private static void PositionPopover(GameObject root, RectTransform host, GameObject anchor, bool forceBelow = false, float gap = 24f)
	{
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x5256E90", Offset = "0x5255E90", VA = "0x5256E90")]
	private static Rect AnchorRect(RectTransform host, GameObject anchor)
	{
		return default(Rect);
	}

	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x5255540", Offset = "0x5254540", VA = "0x5255540")]
	private static void MatchPopoverWidth(GameObject root, RectTransform host, GameObject anchor)
	{
	}

	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x52573A0", Offset = "0x52563A0", VA = "0x52573A0")]
	private static Vector2 LocalPoint(RectTransform host, Vector2 screenPoint)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x5257280", Offset = "0x5256280", VA = "0x5257280")]
	private static Vector2 PopoverSize(RectTransform rect)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x5257320", Offset = "0x5256320", VA = "0x5257320")]
	private static Vector2 PivotFor(Vector2 anchor, float left, float top, Vector2 size)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x5257340", Offset = "0x5256340", VA = "0x5257340")]
	private static void SetPivot(RectTransform rect, Vector2 pivot)
	{
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x52572F0", Offset = "0x52562F0", VA = "0x52572F0")]
	private static float Clamp(float value, float min, float max)
	{
		return default(float);
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x5257420", Offset = "0x5256420", VA = "0x5257420")]
	public GisketchOverlayManager(Transform layer, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x5257600", Offset = "0x5256600", VA = "0x5257600")]
	public void ShowDialog(string id, bool focusOnOpen = true)
	{
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x52578A0", Offset = "0x52568A0", VA = "0x52578A0")]
	public GameObject ShowPopover(string id, [Optional] GameObject anchor, bool focusOnOpen = true, float gap = 24f)
	{
		return null;
	}

	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x5257B40", Offset = "0x5256B40", VA = "0x5257B40")]
	public bool CloseTop(bool restoreFocus = true)
	{
		return default(bool);
	}

	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x5257DA0", Offset = "0x5256DA0", VA = "0x5257DA0")]
	public bool CloseTopForced(bool restoreFocus = true)
	{
		return default(bool);
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x5257E30", Offset = "0x5256E30", VA = "0x5257E30")]
	public bool CloseDialog(string id, bool restoreFocus = true)
	{
		return default(bool);
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x5257ED0", Offset = "0x5256ED0", VA = "0x5257ED0")]
	public bool CloseDialogForced(string id, bool restoreFocus = true)
	{
		return default(bool);
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x5257F10", Offset = "0x5256F10", VA = "0x5257F10")]
	public void DiscardPendingUnsavedChanges()
	{
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x52580A0", Offset = "0x52570A0", VA = "0x52580A0")]
	public void CloseAll()
	{
	}

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x5258140", Offset = "0x5257140", VA = "0x5258140")]
	public void Clear()
	{
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x52582D0", Offset = "0x52572D0", VA = "0x52582D0")]
	public void FocusTopFromNavigation()
	{
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x5256130", Offset = "0x5255130", VA = "0x5256130")]
	private OverlayInstance ShowOverlay(GisketchOverlayDefinition overlay, GameObject anchor, OverlayKind kind, bool focusOnOpen, bool forceBelow = false, bool matchAnchorWidth = false, float popoverGap = 24f, bool animate = true)
	{
		return null;
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x52548D0", Offset = "0x52538D0", VA = "0x52548D0")]
	private static void ConfigureHost(FlexLayout flex, bool modal)
	{
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x5254710", Offset = "0x5253710", VA = "0x5254710")]
	private static string OverlayName(GisketchOverlayDefinition overlay)
	{
		return null;
	}

	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x5254990", Offset = "0x5253990", VA = "0x5254990")]
	private void AddBackdrop(Transform parent, bool dismiss, Color color)
	{
	}

	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x52547D0", Offset = "0x52537D0", VA = "0x52547D0")]
	private static void Stretch(RectTransform rect)
	{
	}

	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x5256450", Offset = "0x5255450", VA = "0x5256450")]
	private OverlayInstance FindDialog(string id)
	{
		return null;
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x5258430", Offset = "0x5257430", VA = "0x5258430")]
	private OverlayInstance GetOrBuildOverlayInstance(GisketchOverlayDefinition overlay, GameObject anchor, OverlayKind kind, bool forceBelow, bool matchAnchorWidth, float popoverGap)
	{
		return null;
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x52586A0", Offset = "0x52576A0", VA = "0x52586A0")]
	private static string CacheKey(OverlayKind kind, string id)
	{
		return null;
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x52569A0", Offset = "0x52559A0", VA = "0x52569A0")]
	private OverlayInstance Top()
	{
		return null;
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x5257C30", Offset = "0x5256C30", VA = "0x5257C30")]
	private bool ShouldGuardClose(OverlayInstance instance)
	{
		return default(bool);
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x5257C90", Offset = "0x5256C90", VA = "0x5257C90")]
	private bool ShowUnsavedChanges(OverlayInstance instance)
	{
		return default(bool);
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x5256710", Offset = "0x5255710", VA = "0x5256710")]
	private GisketchOverlayDefinition ResolveDialog(string id)
	{
		return null;
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x5255F20", Offset = "0x5254F20", VA = "0x5255F20")]
	private void CloseInstance(OverlayInstance instance, bool restoreFocus, bool animate)
	{
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x5258950", Offset = "0x5257950", VA = "0x5258950")]
	private bool IsCached(OverlayInstance instance)
	{
		return default(bool);
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x5258AE0", Offset = "0x5257AE0", VA = "0x5258AE0")]
	private static void HideCachedInstance(OverlayInstance instance)
	{
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x5258720", Offset = "0x5257720", VA = "0x5258720")]
	private static void ResetCachedInstance(OverlayInstance instance)
	{
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x5258C20", Offset = "0x5257C20", VA = "0x5258C20")]
	private static void SetInputLocked(GameObject root, bool locked)
	{
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x5258D20", Offset = "0x5257D20", VA = "0x5258D20")]
	private static void ClearSelectedIfInside(GameObject root)
	{
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x5258A50", Offset = "0x5257A50", VA = "0x5258A50")]
	private void FocusAfterClose(OverlayInstance closed)
	{
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x5255530", Offset = "0x5254530", VA = "0x5255530")]
	private static void Focus(OverlayInstance instance, bool focus)
	{
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x5258350", Offset = "0x5257350", VA = "0x5258350")]
	private static bool ContainsSelected(OverlayInstance instance)
	{
		return default(bool);
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x5256D60", Offset = "0x5255D60", VA = "0x5256D60")]
	private static Selectable FirstSelectable(GameObject root)
	{
		return null;
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x5258E70", Offset = "0x5257E70", VA = "0x5258E70")]
	private static void Restore(GameObject go)
	{
	}

	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x5255470", Offset = "0x5254470", VA = "0x5255470")]
	private static GameObject CurrentSelected()
	{
		return null;
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x5256C10", Offset = "0x5255C10", VA = "0x5256C10")]
	private static void SetSelected(Selectable selectable)
	{
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x5256780", Offset = "0x5255780", VA = "0x5256780")]
	private static void DestroyObject(GameObject go)
	{
	}
}
