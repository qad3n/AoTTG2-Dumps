// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Overlays.GisketchToastManager
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastManager.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using DG.Tweening;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Overlays;

[Token(Token = "0x2000053")]
public sealed class GisketchToastManager
{
	[Token(Token = "0x2000054")]
	private sealed class ToastItem
	{
		[Token(Token = "0x40001AA")]
		[FieldOffset(Offset = "0x10")]
		public readonly string Key;

		[Token(Token = "0x40001AB")]
		[FieldOffset(Offset = "0x18")]
		public readonly GisketchView View;

		[Token(Token = "0x40001AC")]
		[FieldOffset(Offset = "0x20")]
		public readonly RectTransform Slot;

		[Token(Token = "0x40001AD")]
		[FieldOffset(Offset = "0x28")]
		public float Height;

		[Token(Token = "0x40001AE")]
		[FieldOffset(Offset = "0x2C")]
		public bool LayoutDirty;

		[Token(Token = "0x6000322")]
		[Address(RVA = "0x525C880", Offset = "0x525B880", VA = "0x525C880")]
		public ToastItem(string key, GisketchView view, RectTransform slot, float height)
		{
		}
	}

	[Token(Token = "0x4000199")]
	private const int MaxToasts = 3;

	[Token(Token = "0x400019A")]
	private const float ToastWidth = 560f;

	[Token(Token = "0x400019B")]
	private const float ToastBodyWidth = 520f;

	[Token(Token = "0x400019C")]
	private const float ToastMinHeight = 96f;

	[Token(Token = "0x400019D")]
	private const float ToastDismissAllHeight = 168f;

	[Token(Token = "0x400019E")]
	private const float ToastMaxHeight = 180f;

	[Token(Token = "0x400019F")]
	private const float ToastExpandedGap = 8f;

	[Token(Token = "0x40001A0")]
	private const float ToastCollapsedStep = 14f;

	[Token(Token = "0x40001A1")]
	[FieldOffset(Offset = "0x10")]
	private readonly Transform _layer;

	[Token(Token = "0x40001A2")]
	[FieldOffset(Offset = "0x18")]
	private readonly GisketchBuildContext _context;

	[Token(Token = "0x40001A3")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<ToastItem> _items;

	[Token(Token = "0x40001A4")]
	[FieldOffset(Offset = "0x28")]
	private readonly List<AottgToastDefinition> _pending;

	[Token(Token = "0x40001A5")]
	[FieldOffset(Offset = "0x30")]
	private GameObject _host;

	[Token(Token = "0x40001A6")]
	[FieldOffset(Offset = "0x38")]
	private RectTransform _stack;

	[Token(Token = "0x40001A7")]
	[FieldOffset(Offset = "0x40")]
	private Tween _stackTween;

	[Token(Token = "0x40001A8")]
	[FieldOffset(Offset = "0x48")]
	private bool _expanded;

	[Token(Token = "0x40001A9")]
	[FieldOffset(Offset = "0x4C")]
	private float _expandedStackHeight;

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x5259210", Offset = "0x5258210", VA = "0x5259210")]
	private static GisketchNodeDefinition ToastNode(AottgToastDefinition toast)
	{
		return null;
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x52598D0", Offset = "0x52588D0", VA = "0x52598D0")]
	private static GisketchNodeDefinition ToastTitle(AottgToastDefinition toast, string variant)
	{
		return null;
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x5259F60", Offset = "0x5258F60", VA = "0x5259F60")]
	private static Button Button(GameObject root, string id)
	{
		return null;
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x525A040", Offset = "0x5259040", VA = "0x525A040")]
	private static Transform FindDeep(Transform root, string id)
	{
		return null;
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x525A3B0", Offset = "0x52593B0", VA = "0x525A3B0")]
	private static string Key(AottgToastDefinition toast)
	{
		return null;
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x5259E00", Offset = "0x5258E00", VA = "0x5259E00")]
	private static GisketchLayoutDefinition Row(float gap)
	{
		return null;
	}

	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x5259EB0", Offset = "0x5258EB0", VA = "0x5259EB0")]
	private static GisketchLayoutDefinition Column(float gap)
	{
		return null;
	}

	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x525A570", Offset = "0x5259570", VA = "0x525A570")]
	private void ApplyStack(bool animate)
	{
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x525AAD0", Offset = "0x5259AD0", VA = "0x525AAD0")]
	private float AppliedStackHeight()
	{
		return default(float);
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x525ADA0", Offset = "0x5259DA0", VA = "0x525ADA0")]
	private static void SetSlot(RectTransform rect, Vector2 position, Vector3 scale)
	{
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x525AC20", Offset = "0x5259C20", VA = "0x525AC20")]
	private static void AnimateSlot(Sequence sequence, RectTransform rect, Vector2 position, Vector3 scale)
	{
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x525ADE0", Offset = "0x5259DE0", VA = "0x525ADE0")]
	private float StackHeight()
	{
		return default(float);
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x525ABA0", Offset = "0x5259BA0", VA = "0x525ABA0")]
	private float HeightAt(int index)
	{
		return default(float);
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x525B050", Offset = "0x525A050", VA = "0x525B050")]
	private static float ToastHeight(bool showDismissAll)
	{
		return default(float);
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x525B070", Offset = "0x525A070", VA = "0x525B070")]
	private void RefreshDismissAllButtons()
	{
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x525AB00", Offset = "0x5259B00", VA = "0x525AB00")]
	private float CollapsedY(int index)
	{
		return default(float);
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x525B320", Offset = "0x525A320", VA = "0x525B320")]
	private static void SetSlotHeight(ToastItem item, float height)
	{
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x525B470", Offset = "0x525A470", VA = "0x525B470")]
	private static void DestroySlot(RectTransform slot)
	{
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x525B570", Offset = "0x525A570", VA = "0x525B570")]
	private void FinishClose(RectTransform slot)
	{
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x525B730", Offset = "0x525A730", VA = "0x525B730")]
	private bool UpdateVisible(AottgToastDefinition toast, string key)
	{
		return default(bool);
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x525BBB0", Offset = "0x525ABB0", VA = "0x525BBB0")]
	private bool UpdatePending(AottgToastDefinition toast, string key)
	{
		return default(bool);
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x525A550", Offset = "0x5259550", VA = "0x525A550")]
	private static bool HasUpdateKey(AottgToastDefinition toast)
	{
		return default(bool);
	}

	[Token(Token = "0x600030C")]
	[Address(RVA = "0x525BC20", Offset = "0x525AC20", VA = "0x525BC20")]
	private static int IndexOf(List<AottgToastDefinition> list, string key)
	{
		return default(int);
	}

	[Token(Token = "0x600030D")]
	[Address(RVA = "0x525BCC0", Offset = "0x525ACC0", VA = "0x525BCC0")]
	public GisketchToastManager(Transform layer, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x525BDC0", Offset = "0x525ADC0", VA = "0x525BDC0")]
	public void Show(AottgToastDefinition toast)
	{
	}

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x525C230", Offset = "0x525B230", VA = "0x525C230")]
	public void Close(bool animate)
	{
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x525C160", Offset = "0x525B160", VA = "0x525C160")]
	private void AddVisible(AottgToastDefinition toast, int index)
	{
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x525B8B0", Offset = "0x525A8B0", VA = "0x525B8B0")]
	private ToastItem BuildToast(AottgToastDefinition toast)
	{
		return null;
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x525C690", Offset = "0x525B690", VA = "0x525C690")]
	private void Wire(GameObject root, AottgToastDefinition toast)
	{
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x525C900", Offset = "0x525B900", VA = "0x525C900")]
	private void Close(AottgToastDefinition toast)
	{
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x525CC60", Offset = "0x525BC60", VA = "0x525CC60")]
	private void CloseAll()
	{
	}

	[Token(Token = "0x6000315")]
	[Address(RVA = "0x525CCC0", Offset = "0x525BCC0", VA = "0x525CCC0")]
	private void SetExpanded(bool expanded)
	{
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x525CB90", Offset = "0x525BB90", VA = "0x525CB90")]
	private void PromotePending()
	{
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x525BFA0", Offset = "0x525AFA0", VA = "0x525BFA0")]
	private void ApplyCurrentLayout(bool animate)
	{
	}

	[Token(Token = "0x6000318")]
	[Address(RVA = "0x525CEC0", Offset = "0x525BEC0", VA = "0x525CEC0")]
	private void SettleVisibleLayouts()
	{
	}

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x525C290", Offset = "0x525B290", VA = "0x525C290")]
	private void EnsureHost()
	{
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x525C010", Offset = "0x525B010", VA = "0x525C010")]
	private void RemoveVisible(string key)
	{
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x525C0B0", Offset = "0x525B0B0", VA = "0x525C0B0")]
	private static void Remove(List<AottgToastDefinition> list, string key)
	{
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x525B810", Offset = "0x525A810", VA = "0x525B810")]
	private static int IndexOf(List<ToastItem> list, string key)
	{
		return default(int);
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x525B5D0", Offset = "0x525A5D0", VA = "0x525B5D0")]
	private void DestroyHost()
	{
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x525D0C0", Offset = "0x525C0C0", VA = "0x525D0C0")]
	private GameObject Host()
	{
		return null;
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x525C320", Offset = "0x525B320", VA = "0x525C320")]
	private static GameObject Slot(RectTransform parent, float height)
	{
		return null;
	}

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x525C530", Offset = "0x525B530", VA = "0x525C530")]
	private void ConfigureToastRoot(GameObject root, float height)
	{
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x525D580", Offset = "0x525C580", VA = "0x525D580")]
	private float ToastRootWidth()
	{
		return default(float);
	}
}
