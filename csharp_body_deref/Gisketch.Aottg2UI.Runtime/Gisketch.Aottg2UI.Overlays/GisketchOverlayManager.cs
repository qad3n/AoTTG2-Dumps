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

[Token(Token = "0x2000034")]
public sealed class GisketchOverlayManager
{
	[Token(Token = "0x2000035")]
	private enum OverlayKind
	{
		[Token(Token = "0x400010A")]
		Dialog,
		[Token(Token = "0x400010B")]
		Popover
	}

	[Token(Token = "0x2000036")]
	private sealed class OverlayInstance
	{
		[Token(Token = "0x400010C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly OverlayKind Kind;

		[Token(Token = "0x400010D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public readonly string Id;

		[Token(Token = "0x400010E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public readonly GameObject Host;

		[Token(Token = "0x400010F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public readonly GisketchView View;

		[Token(Token = "0x4000110")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public readonly GameObject ContentRoot;

		[Token(Token = "0x4000111")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public readonly RectTransform HostRect;

		[Token(Token = "0x1700002E")]
		public GameObject PreviousSelected
		{
			[Token(Token = "0x60001CD")]
			[Address(RVA = "0x39E92A0", Offset = "0x39E92A0", VA = "0x39E92A0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60001CE")]
			[Address(RVA = "0x39E92B0", Offset = "0x39E92B0", VA = "0x39E92B0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x60001CF")]
		[Address(RVA = "0x39E6570", Offset = "0x39E6570", VA = "0x39E6570")]
		public OverlayInstance(OverlayKind kind, string id, GameObject host, GisketchView inner)
		{
		}

		[Token(Token = "0x60001D0")]
		[Address(RVA = "0x39E6C90", Offset = "0x39E6C90", VA = "0x39E6C90")]
		public void SetPreviousSelected(GameObject previousSelected)
		{
		}
	}

	[Token(Token = "0x4000103")]
	private const float DialogEdgePadding = 64f;

	[Token(Token = "0x4000104")]
	private const float PopoverGap = 24f;

	[Token(Token = "0x4000105")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly Transform _layer;

	[Token(Token = "0x4000106")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly GisketchBuildContext _context;

	[Token(Token = "0x4000107")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly List<OverlayInstance> _stack;

	[Token(Token = "0x4000108")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private OverlayInstance _activePopover;

	[Token(Token = "0x1700002D")]
	public bool HasOpenOverlays
	{
		[Token(Token = "0x60001B5")]
		[Address(RVA = "0x39E8520", Offset = "0x39E8520", VA = "0x39E8520")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x39E5860", Offset = "0x39E5860", VA = "0x39E5860")]
	private OverlayInstance BuildOverlayInstance(GisketchOverlayDefinition overlay, GameObject anchor, OverlayKind kind, bool forceBelow, bool matchAnchorWidth, float popoverGap)
	{
		return null;
	}

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x39E66A0", Offset = "0x39E66A0", VA = "0x39E66A0")]
	private void OpenInstance(OverlayInstance instance, GameObject anchor, bool focusOnOpen, bool forceBelow, bool matchAnchorWidth, float popoverGap, bool animate)
	{
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x39E69B0", Offset = "0x39E69B0", VA = "0x39E69B0")]
	private void PrepareLayoutForShow(OverlayInstance instance, GameObject anchor, bool forceBelow, bool matchAnchorWidth, float popoverGap)
	{
	}

	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x39E6310", Offset = "0x39E6310", VA = "0x39E6310")]
	private static void PrepareLayout(GisketchOverlayDefinition overlay, GameObject root, RectTransform hostRect, GameObject anchor, bool forceBelow, bool matchAnchorWidth, float popoverGap)
	{
	}

	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x39E73F0", Offset = "0x39E73F0", VA = "0x39E73F0")]
	public GameObject ShowDynamicPopover(string id, GisketchNodeDefinition root, GameObject anchor, bool focusOnOpen = true, bool matchAnchorWidth = false, float gap = 0f, bool animate = true)
	{
		return null;
	}

	[Token(Token = "0x60001A7")]
	[Address(RVA = "0x39E7910", Offset = "0x39E7910", VA = "0x39E7910")]
	public bool ClosePopover(string id, bool animate = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60001A8")]
	[Address(RVA = "0x39E7980", Offset = "0x39E7980", VA = "0x39E7980")]
	public bool CycleFocus(bool backwards)
	{
		return default(bool);
	}

	[Token(Token = "0x60001A9")]
	[Address(RVA = "0x39E7A60", Offset = "0x39E7A60", VA = "0x39E7A60")]
	private static void SelectInitialFocus(OverlayInstance instance)
	{
	}

	[Token(Token = "0x60001AA")]
	[Address(RVA = "0x39E7B40", Offset = "0x39E7B40", VA = "0x39E7B40")]
	private static TMP_InputField FirstInput(GameObject root)
	{
		return null;
	}

	[Token(Token = "0x60001AB")]
	[Address(RVA = "0x39E7220", Offset = "0x39E7220", VA = "0x39E7220")]
	private static void ApplyDialogMaxHeight(RectTransform host, GameObject root)
	{
	}

	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x39E6E20", Offset = "0x39E6E20", VA = "0x39E6E20")]
	private static void PositionPopover(GameObject root, RectTransform host, GameObject anchor, bool forceBelow = false, float gap = 24f)
	{
	}

	[Token(Token = "0x60001AD")]
	[Address(RVA = "0x39E7F10", Offset = "0x39E7F10", VA = "0x39E7F10")]
	private static Rect AnchorRect(RectTransform host, GameObject anchor)
	{
		return default(Rect);
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x39E6CB0", Offset = "0x39E6CB0", VA = "0x39E6CB0")]
	private static void MatchPopoverWidth(GameObject root, RectTransform host, GameObject anchor)
	{
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x39E83F0", Offset = "0x39E83F0", VA = "0x39E83F0")]
	private static Vector2 LocalPoint(RectTransform host, Vector2 screenPoint)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x39E8310", Offset = "0x39E8310", VA = "0x39E8310")]
	private static Vector2 PopoverSize(RectTransform rect)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x39E8370", Offset = "0x39E8370", VA = "0x39E8370")]
	private static Vector2 PivotFor(Vector2 anchor, float left, float top, Vector2 size)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x39E8390", Offset = "0x39E8390", VA = "0x39E8390")]
	private static void SetPivot(RectTransform rect, Vector2 pivot)
	{
	}

	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x39E8340", Offset = "0x39E8340", VA = "0x39E8340")]
	private static float Clamp(float value, float min, float max)
	{
		return default(float);
	}

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x39E8470", Offset = "0x39E8470", VA = "0x39E8470")]
	public GisketchOverlayManager(Transform layer, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x60001B6")]
	[Address(RVA = "0x39E8570", Offset = "0x39E8570", VA = "0x39E8570")]
	public void ShowDialog(string id, bool focusOnOpen = true)
	{
	}

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x39E89C0", Offset = "0x39E89C0", VA = "0x39E89C0")]
	public GameObject ShowPopover(string id, [Optional] GameObject anchor, bool focusOnOpen = true, float gap = 24f)
	{
		return null;
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x39E8C50", Offset = "0x39E8C50", VA = "0x39E8C50")]
	public bool CloseTop(bool restoreFocus = true)
	{
		return default(bool);
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x39E8CE0", Offset = "0x39E8CE0", VA = "0x39E8CE0")]
	public void Clear()
	{
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x39E8D60", Offset = "0x39E8D60", VA = "0x39E8D60")]
	public void FocusTopFromNavigation()
	{
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x39E76F0", Offset = "0x39E76F0", VA = "0x39E76F0")]
	private OverlayInstance ShowOverlay(GisketchOverlayDefinition overlay, GameObject anchor, OverlayKind kind, bool focusOnOpen, bool forceBelow = false, bool matchAnchorWidth = false, float popoverGap = 24f, bool animate = true)
	{
		return null;
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x39E5FE0", Offset = "0x39E5FE0", VA = "0x39E5FE0")]
	private static void ConfigureHost(FlexLayout flex, bool modal)
	{
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x39E5E20", Offset = "0x39E5E20", VA = "0x39E5E20")]
	private static string OverlayName(GisketchOverlayDefinition overlay)
	{
		return null;
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x39E60A0", Offset = "0x39E60A0", VA = "0x39E60A0")]
	private void AddBackdrop(Transform parent, bool dismiss, Color color)
	{
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x39E5EE0", Offset = "0x39E5EE0", VA = "0x39E5EE0")]
	private static void Stretch(RectTransform rect)
	{
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x39E8850", Offset = "0x39E8850", VA = "0x39E8850")]
	private OverlayInstance FindDialog(string id)
	{
		return null;
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x39E7A00", Offset = "0x39E7A00", VA = "0x39E7A00")]
	private OverlayInstance Top()
	{
		return null;
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x39E8950", Offset = "0x39E8950", VA = "0x39E8950")]
	private GisketchOverlayDefinition ResolveDialog(string id)
	{
		return null;
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x39E7520", Offset = "0x39E7520", VA = "0x39E7520")]
	private void CloseInstance(OverlayInstance instance, bool restoreFocus, bool animate)
	{
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x39E8FF0", Offset = "0x39E8FF0", VA = "0x39E8FF0")]
	private void FocusAfterClose(OverlayInstance closed)
	{
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x39E6CA0", Offset = "0x39E6CA0", VA = "0x39E6CA0")]
	private static void Focus(OverlayInstance instance, bool focus)
	{
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x39E8DE0", Offset = "0x39E8DE0", VA = "0x39E8DE0")]
	private static bool ContainsSelected(OverlayInstance instance)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x39E7DD0", Offset = "0x39E7DD0", VA = "0x39E7DD0")]
	private static Selectable FirstSelectable(GameObject root)
	{
		return null;
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x39E9070", Offset = "0x39E9070", VA = "0x39E9070")]
	private static void Restore(GameObject go)
	{
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x39E6BE0", Offset = "0x39E6BE0", VA = "0x39E6BE0")]
	private static GameObject CurrentSelected()
	{
		return null;
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x39E7C80", Offset = "0x39E7C80", VA = "0x39E7C80")]
	private static void SetSelected(Selectable selectable)
	{
	}

	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x39E9160", Offset = "0x39E9160", VA = "0x39E9160")]
	private static void DestroyObject(GameObject go)
	{
	}
}
