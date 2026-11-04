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

[Token(Token = "0x200004C")]
public sealed class GisketchToastManager
{
	[Token(Token = "0x200004D")]
	private sealed class ToastItem
	{
		[Token(Token = "0x4000185")]
		[FieldOffset(Offset = "0x10")]
		public readonly string Key;

		[Token(Token = "0x4000186")]
		[FieldOffset(Offset = "0x18")]
		public readonly GisketchView View;

		[Token(Token = "0x4000187")]
		[FieldOffset(Offset = "0x20")]
		public readonly RectTransform Slot;

		[Token(Token = "0x4000188")]
		[FieldOffset(Offset = "0x28")]
		public float Height;

		[Token(Token = "0x4000189")]
		[FieldOffset(Offset = "0x2C")]
		public bool LayoutDirty;

		[Token(Token = "0x60002D6")]
		[Address(RVA = "0x18D9050", Offset = "0x18D7650", VA = "0x1818D9050")]
		public ToastItem(string key, GisketchView view, RectTransform slot, float height)
		{
		}
	}

	[Token(Token = "0x4000174")]
	private const int MaxToasts = 3;

	[Token(Token = "0x4000175")]
	private const float ToastWidth = 560f;

	[Token(Token = "0x4000176")]
	private const float ToastBodyWidth = 520f;

	[Token(Token = "0x4000177")]
	private const float ToastMinHeight = 96f;

	[Token(Token = "0x4000178")]
	private const float ToastDismissAllHeight = 168f;

	[Token(Token = "0x4000179")]
	private const float ToastMaxHeight = 180f;

	[Token(Token = "0x400017A")]
	private const float ToastExpandedGap = 8f;

	[Token(Token = "0x400017B")]
	private const float ToastCollapsedStep = 14f;

	[Token(Token = "0x400017C")]
	[FieldOffset(Offset = "0x10")]
	private readonly Transform _layer;

	[Token(Token = "0x400017D")]
	[FieldOffset(Offset = "0x18")]
	private readonly GisketchBuildContext _context;

	[Token(Token = "0x400017E")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<ToastItem> _items;

	[Token(Token = "0x400017F")]
	[FieldOffset(Offset = "0x28")]
	private readonly List<AottgToastDefinition> _pending;

	[Token(Token = "0x4000180")]
	[FieldOffset(Offset = "0x30")]
	private GameObject _host;

	[Token(Token = "0x4000181")]
	[FieldOffset(Offset = "0x38")]
	private RectTransform _stack;

	[Token(Token = "0x4000182")]
	[FieldOffset(Offset = "0x40")]
	private Tween _stackTween;

	[Token(Token = "0x4000183")]
	[FieldOffset(Offset = "0x48")]
	private bool _expanded;

	[Token(Token = "0x4000184")]
	[FieldOffset(Offset = "0x4C")]
	private float _expandedStackHeight;

	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x18B8B80", Offset = "0x18B7180", VA = "0x1818B8B80")]
	private static GisketchNodeDefinition ToastNode(AottgToastDefinition toast)
	{
		return null;
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x18B93B0", Offset = "0x18B79B0", VA = "0x1818B93B0")]
	private static GisketchNodeDefinition ToastTitle(AottgToastDefinition toast, string variant)
	{
		return null;
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x18B6230", Offset = "0x18B4830", VA = "0x1818B6230")]
	private static Button Button(GameObject root, string id)
	{
		return null;
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x18B6CD0", Offset = "0x18B52D0", VA = "0x1818B6CD0")]
	private static Transform FindDeep(Transform root, string id)
	{
		return null;
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x18B76A0", Offset = "0x18B5CA0", VA = "0x1818B76A0")]
	private static string Key(AottgToastDefinition toast)
	{
		return null;
	}

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x18B7D50", Offset = "0x18B6350", VA = "0x1818B7D50")]
	private static GisketchLayoutDefinition Row(float gap)
	{
		return null;
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x18B6720", Offset = "0x18B4D20", VA = "0x1818B6720")]
	private static GisketchLayoutDefinition Column(float gap)
	{
		return null;
	}

	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x18B5A20", Offset = "0x18B4020", VA = "0x1818B5A20")]
	private void ApplyStack(bool animate)
	{
	}

	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x18B5970", Offset = "0x18B3F70", VA = "0x1818B5970")]
	private float AppliedStackHeight()
	{
		return default(float);
	}

	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x18B8110", Offset = "0x18B6710", VA = "0x1818B8110")]
	private static void SetSlot(RectTransform rect, Vector2 position, Vector3 scale)
	{
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x18B57C0", Offset = "0x18B3DC0", VA = "0x1818B57C0")]
	private static void AnimateSlot(Sequence sequence, RectTransform rect, Vector2 position, Vector3 scale)
	{
	}

	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x18B8960", Offset = "0x18B6F60", VA = "0x1818B8960")]
	private float StackHeight()
	{
		return default(float);
	}

	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x18B6FA0", Offset = "0x18B55A0", VA = "0x1818B6FA0")]
	private float HeightAt(int index)
	{
		return default(float);
	}

	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x18B8B40", Offset = "0x18B7140", VA = "0x1818B8B40")]
	private static float ToastHeight(bool showDismissAll)
	{
		return default(float);
	}

	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x18B7900", Offset = "0x18B5F00", VA = "0x1818B7900")]
	private void RefreshDismissAllButtons()
	{
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x18B6670", Offset = "0x18B4C70", VA = "0x1818B6670")]
	private float CollapsedY(int index)
	{
		return default(float);
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x18B7FC0", Offset = "0x18B65C0", VA = "0x1818B7FC0")]
	private static void SetSlotHeight(ToastItem item, float height)
	{
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x18B6B60", Offset = "0x18B5160", VA = "0x1818B6B60")]
	private static void DestroySlot(RectTransform slot)
	{
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x18B6F10", Offset = "0x18B5510", VA = "0x1818B6F10")]
	private void FinishClose(RectTransform slot)
	{
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x18B98B0", Offset = "0x18B7EB0", VA = "0x1818B98B0")]
	private bool UpdateVisible(AottgToastDefinition toast, string key)
	{
		return default(bool);
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x18B97D0", Offset = "0x18B7DD0", VA = "0x1818B97D0")]
	private bool UpdatePending(AottgToastDefinition toast, string key)
	{
		return default(bool);
	}

	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x18B6F70", Offset = "0x18B5570", VA = "0x1818B6F70")]
	private static bool HasUpdateKey(AottgToastDefinition toast)
	{
		return default(bool);
	}

	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x18B75F0", Offset = "0x18B5BF0", VA = "0x1818B75F0")]
	private static int IndexOf(List<AottgToastDefinition> list, string key)
	{
		return default(int);
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x18B9BA0", Offset = "0x18B81A0", VA = "0x1818B9BA0")]
	public GisketchToastManager(Transform layer, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x18B8320", Offset = "0x18B6920", VA = "0x1818B8320")]
	public void Show(AottgToastDefinition toast)
	{
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x18B6390", Offset = "0x18B4990", VA = "0x1818B6390")]
	public void Close(bool animate)
	{
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x18B56F0", Offset = "0x18B3CF0", VA = "0x1818B56F0")]
	private void AddVisible(AottgToastDefinition toast, int index)
	{
	}

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x18B5F50", Offset = "0x18B4550", VA = "0x1818B5F50")]
	private ToastItem BuildToast(AottgToastDefinition toast)
	{
		return null;
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x18B99C0", Offset = "0x18B7FC0", VA = "0x1818B99C0")]
	private void Wire(GameObject root, AottgToastDefinition toast)
	{
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x18B6400", Offset = "0x18B4A00", VA = "0x1818B6400")]
	private void Close(AottgToastDefinition toast)
	{
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x18B6310", Offset = "0x18B4910", VA = "0x1818B6310")]
	private void CloseAll()
	{
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x18B7E00", Offset = "0x18B6400", VA = "0x1818B7E00")]
	private void SetExpanded(bool expanded)
	{
	}

	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x18B7830", Offset = "0x18B5E30", VA = "0x1818B7830")]
	private void PromotePending()
	{
	}

	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x18B59B0", Offset = "0x18B3FB0", VA = "0x1818B59B0")]
	private void ApplyCurrentLayout(bool animate)
	{
	}

	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x18B8160", Offset = "0x18B6760", VA = "0x1818B8160")]
	private void SettleVisibleLayouts()
	{
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x18B6C50", Offset = "0x18B5250", VA = "0x1818B6C50")]
	private void EnsureHost()
	{
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x18B7BE0", Offset = "0x18B61E0", VA = "0x1818B7BE0")]
	private void RemoveVisible(string key)
	{
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x18B7C90", Offset = "0x18B6290", VA = "0x1818B7C90")]
	private static void Remove(List<AottgToastDefinition> list, string key)
	{
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x18B7540", Offset = "0x18B5B40", VA = "0x1818B7540")]
	private static int IndexOf(List<ToastItem> list, string key)
	{
		return default(int);
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x18B6A00", Offset = "0x18B5000", VA = "0x1818B6A00")]
	private void DestroyHost()
	{
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x18B7030", Offset = "0x18B5630", VA = "0x1818B7030")]
	private GameObject Host()
	{
		return null;
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x18B8730", Offset = "0x18B6D30", VA = "0x1818B8730")]
	private static GameObject Slot(RectTransform parent, float height)
	{
		return null;
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x18B67E0", Offset = "0x18B4DE0", VA = "0x1818B67E0")]
	private void ConfigureToastRoot(GameObject root, float height)
	{
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x18B9300", Offset = "0x18B7900", VA = "0x1818B9300")]
	private float ToastRootWidth()
	{
		return default(float);
	}
}
