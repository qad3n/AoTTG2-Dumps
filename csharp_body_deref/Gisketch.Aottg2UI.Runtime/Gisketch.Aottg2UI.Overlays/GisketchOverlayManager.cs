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

[Token(Token = "0x2000035")]
public sealed class GisketchOverlayManager
{
	[Token(Token = "0x2000036")]
	private enum OverlayKind
	{
		[Token(Token = "0x4000110")]
		Dialog,
		[Token(Token = "0x4000111")]
		Popover
	}

	[Token(Token = "0x2000037")]
	private sealed class OverlayInstance
	{
		[Token(Token = "0x4000112")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly OverlayKind Kind;

		[Token(Token = "0x4000113")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public readonly string Id;

		[Token(Token = "0x4000114")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public readonly GameObject Host;

		[Token(Token = "0x4000115")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public readonly GisketchView View;

		[Token(Token = "0x4000117")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public readonly RectTransform HostRect;

		[Token(Token = "0x1700002E")]
		public GameObject ContentRoot
		{
			[Token(Token = "0x60001D7")]
			[Address(RVA = "0x3A53BA0", Offset = "0x3A53BA0", VA = "0x3A53BA0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60001D8")]
			[Address(RVA = "0x3A53BB0", Offset = "0x3A53BB0", VA = "0x3A53BB0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700002F")]
		public GameObject PreviousSelected
		{
			[Token(Token = "0x60001D9")]
			[Address(RVA = "0x3A53BC0", Offset = "0x3A53BC0", VA = "0x3A53BC0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60001DA")]
			[Address(RVA = "0x3A53BD0", Offset = "0x3A53BD0", VA = "0x3A53BD0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x60001DB")]
		[Address(RVA = "0x3A50BF0", Offset = "0x3A50BF0", VA = "0x3A50BF0")]
		public OverlayInstance(OverlayKind kind, string id, GameObject host, GisketchView inner)
		{
		}

		[Token(Token = "0x60001DC")]
		[Address(RVA = "0x3A53320", Offset = "0x3A53320", VA = "0x3A53320")]
		public void ReplaceContent(GisketchView inner)
		{
		}

		[Token(Token = "0x60001DD")]
		[Address(RVA = "0x3A51310", Offset = "0x3A51310", VA = "0x3A51310")]
		public void SetPreviousSelected(GameObject previousSelected)
		{
		}
	}

	[Token(Token = "0x4000109")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly Transform _layer;

	[Token(Token = "0x400010A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly GisketchBuildContext _context;

	[Token(Token = "0x400010B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly List<OverlayInstance> _stack;

	[Token(Token = "0x400010C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private OverlayInstance _activePopover;

	[Token(Token = "0x400010D")]
	private const float DialogEdgePadding = 64f;

	[Token(Token = "0x400010E")]
	private const float PopoverGap = 24f;

	[Token(Token = "0x1700002D")]
	public bool HasOpenOverlays
	{
		[Token(Token = "0x60001AF")]
		[Address(RVA = "0x3A51B20", Offset = "0x3A51B20", VA = "0x3A51B20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001AA")]
	[Address(RVA = "0x3A4FEE0", Offset = "0x3A4FEE0", VA = "0x3A4FEE0")]
	private OverlayInstance BuildOverlayInstance(GisketchOverlayDefinition overlay, GameObject anchor, OverlayKind kind, bool forceBelow, bool matchAnchorWidth, float popoverGap)
	{
		return null;
	}

	[Token(Token = "0x60001AB")]
	[Address(RVA = "0x3A50D20", Offset = "0x3A50D20", VA = "0x3A50D20")]
	private void OpenInstance(OverlayInstance instance, GameObject anchor, bool focusOnOpen, bool forceBelow, bool matchAnchorWidth, float popoverGap, bool animate)
	{
	}

	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x3A51030", Offset = "0x3A51030", VA = "0x3A51030")]
	private void PrepareLayoutForShow(OverlayInstance instance, GameObject anchor, bool forceBelow, bool matchAnchorWidth, float popoverGap)
	{
	}

	[Token(Token = "0x60001AD")]
	[Address(RVA = "0x3A50990", Offset = "0x3A50990", VA = "0x3A50990")]
	private static void PrepareLayout(GisketchOverlayDefinition overlay, GameObject root, RectTransform hostRect, GameObject anchor, bool forceBelow, bool matchAnchorWidth, float popoverGap)
	{
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x3A51A70", Offset = "0x3A51A70", VA = "0x3A51A70")]
	public GisketchOverlayManager(Transform layer, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x3A51B70", Offset = "0x3A51B70", VA = "0x3A51B70")]
	public void ShowDialog(string id, bool focusOnOpen = true)
	{
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x3A521E0", Offset = "0x3A521E0", VA = "0x3A521E0")]
	public GameObject ShowPopover(string id, [Optional] GameObject anchor, bool focusOnOpen = true, float gap = 24f)
	{
		return null;
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x3A52630", Offset = "0x3A52630", VA = "0x3A52630")]
	public bool CloseTop(bool restoreFocus = true)
	{
		return default(bool);
	}

	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x3A52720", Offset = "0x3A52720", VA = "0x3A52720")]
	public bool CloseDialog(string id, bool restoreFocus = true)
	{
		return default(bool);
	}

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x3A52760", Offset = "0x3A52760", VA = "0x3A52760")]
	public void Clear()
	{
	}

	[Token(Token = "0x60001B5")]
	[Address(RVA = "0x3A52930", Offset = "0x3A52930", VA = "0x3A52930")]
	public void FocusTopFromNavigation()
	{
	}

	[Token(Token = "0x60001B6")]
	[Address(RVA = "0x3A51FC0", Offset = "0x3A51FC0", VA = "0x3A51FC0")]
	private OverlayInstance ShowOverlay(GisketchOverlayDefinition overlay, GameObject anchor, OverlayKind kind, bool focusOnOpen, bool forceBelow = false, bool matchAnchorWidth = false, float popoverGap = 24f, bool animate = true)
	{
		return null;
	}

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x3A50660", Offset = "0x3A50660", VA = "0x3A50660")]
	private static void ConfigureHost(FlexLayout flex, bool modal)
	{
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x3A504A0", Offset = "0x3A504A0", VA = "0x3A504A0")]
	private static string OverlayName(GisketchOverlayDefinition overlay)
	{
		return null;
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x3A50720", Offset = "0x3A50720", VA = "0x3A50720")]
	private void AddBackdrop(Transform parent, bool dismiss, Color color)
	{
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x3A50560", Offset = "0x3A50560", VA = "0x3A50560")]
	private static void Stretch(RectTransform rect)
	{
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x3A51E50", Offset = "0x3A51E50", VA = "0x3A51E50")]
	private OverlayInstance FindDialog(string id)
	{
		return null;
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x3A526C0", Offset = "0x3A526C0", VA = "0x3A526C0")]
	private OverlayInstance Top()
	{
		return null;
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x3A51F50", Offset = "0x3A51F50", VA = "0x3A51F50")]
	private GisketchOverlayDefinition ResolveDialog(string id)
	{
		return null;
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x3A52470", Offset = "0x3A52470", VA = "0x3A52470")]
	private void CloseInstance(OverlayInstance instance, bool restoreFocus, bool animate)
	{
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x3A52BC0", Offset = "0x3A52BC0", VA = "0x3A52BC0")]
	private void FocusAfterClose(OverlayInstance closed)
	{
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x3A51320", Offset = "0x3A51320", VA = "0x3A51320")]
	private static void Focus(OverlayInstance instance, bool focus)
	{
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x3A529B0", Offset = "0x3A529B0", VA = "0x3A529B0")]
	private static bool ContainsSelected(OverlayInstance instance)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x3A52E10", Offset = "0x3A52E10", VA = "0x3A52E10")]
	private static Selectable FirstSelectable(GameObject root)
	{
		return null;
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x3A52C40", Offset = "0x3A52C40", VA = "0x3A52C40")]
	private static void Restore(GameObject go)
	{
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x3A51260", Offset = "0x3A51260", VA = "0x3A51260")]
	private static GameObject CurrentSelected()
	{
		return null;
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x3A527E0", Offset = "0x3A527E0", VA = "0x3A527E0")]
	private static void SetSelected(Selectable selectable)
	{
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x3A52F50", Offset = "0x3A52F50", VA = "0x3A52F50")]
	private static void DestroyObject(GameObject go)
	{
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x3A53010", Offset = "0x3A53010", VA = "0x3A53010")]
	public GameObject ShowDynamicPopover(string id, GisketchNodeDefinition root, GameObject anchor, bool focusOnOpen = true, bool matchAnchorWidth = false, float gap = 0f, bool animate = true)
	{
		return null;
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x3A53150", Offset = "0x3A53150", VA = "0x3A53150")]
	public bool ClosePopover(string id, bool animate = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x3A531C0", Offset = "0x3A531C0", VA = "0x3A531C0")]
	public bool RefreshDialogContent(string id, bool focusOnRefresh = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x3A53400", Offset = "0x3A53400", VA = "0x3A53400")]
	public bool CycleFocus(bool backwards)
	{
		return default(bool);
	}

	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x3A52D30", Offset = "0x3A52D30", VA = "0x3A52D30")]
	private static void SelectInitialFocus(OverlayInstance instance)
	{
	}

	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x3A53480", Offset = "0x3A53480", VA = "0x3A53480")]
	private static TMP_InputField FirstInput(GameObject root)
	{
		return null;
	}

	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x3A518A0", Offset = "0x3A518A0", VA = "0x3A518A0")]
	private static void ApplyDialogMaxHeight(RectTransform host, GameObject root)
	{
	}

	[Token(Token = "0x60001CE")]
	[Address(RVA = "0x3A514A0", Offset = "0x3A514A0", VA = "0x3A514A0")]
	private static void PositionPopover(GameObject root, RectTransform host, GameObject anchor, bool forceBelow = false, float gap = 24f)
	{
	}

	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x3A535C0", Offset = "0x3A535C0", VA = "0x3A535C0")]
	private static Rect AnchorRect(RectTransform host, GameObject anchor)
	{
		return default(Rect);
	}

	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x3A51330", Offset = "0x3A51330", VA = "0x3A51330")]
	private static void MatchPopoverWidth(GameObject root, RectTransform host, GameObject anchor)
	{
	}

	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x3A53AA0", Offset = "0x3A53AA0", VA = "0x3A53AA0")]
	private static Vector2 LocalPoint(RectTransform host, Vector2 screenPoint)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x3A539C0", Offset = "0x3A539C0", VA = "0x3A539C0")]
	private static Vector2 PopoverSize(RectTransform rect)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x3A53A20", Offset = "0x3A53A20", VA = "0x3A53A20")]
	private static Vector2 PivotFor(Vector2 anchor, float left, float top, Vector2 size)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x3A53A40", Offset = "0x3A53A40", VA = "0x3A53A40")]
	private static void SetPivot(RectTransform rect, Vector2 pivot)
	{
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x3A539F0", Offset = "0x3A539F0", VA = "0x3A539F0")]
	private static float Clamp(float value, float min, float max)
	{
		return default(float);
	}
}
