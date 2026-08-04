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

[Token(Token = "0x200003B")]
public sealed class GisketchToastManager
{
	[Token(Token = "0x200003C")]
	private sealed class ToastItem
	{
		[Token(Token = "0x4000131")]
		[FieldOffset(Offset = "0x10")]
		public readonly string Key;

		[Token(Token = "0x4000132")]
		[FieldOffset(Offset = "0x18")]
		public readonly GisketchView View;

		[Token(Token = "0x4000133")]
		[FieldOffset(Offset = "0x20")]
		public readonly RectTransform Slot;

		[Token(Token = "0x4000134")]
		[FieldOffset(Offset = "0x28")]
		public float Height;

		[Token(Token = "0x6000217")]
		[Address(RVA = "0x3A55990", Offset = "0x3A55990", VA = "0x3A55990")]
		public ToastItem(string key, GisketchView view, RectTransform slot, float height)
		{
		}
	}

	[Token(Token = "0x4000120")]
	private const int MaxToasts = 3;

	[Token(Token = "0x4000121")]
	private const float ToastWidth = 560f;

	[Token(Token = "0x4000122")]
	private const float ToastBodyWidth = 520f;

	[Token(Token = "0x4000123")]
	private const float ToastMinHeight = 96f;

	[Token(Token = "0x4000124")]
	private const float ToastDismissAllHeight = 168f;

	[Token(Token = "0x4000125")]
	private const float ToastMaxHeight = 180f;

	[Token(Token = "0x4000126")]
	private const float ToastExpandedGap = 8f;

	[Token(Token = "0x4000127")]
	private const float ToastCollapsedStep = 14f;

	[Token(Token = "0x4000128")]
	[FieldOffset(Offset = "0x10")]
	private readonly Transform _layer;

	[Token(Token = "0x4000129")]
	[FieldOffset(Offset = "0x18")]
	private readonly GisketchBuildContext _context;

	[Token(Token = "0x400012A")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<ToastItem> _items;

	[Token(Token = "0x400012B")]
	[FieldOffset(Offset = "0x28")]
	private readonly List<AottgToastDefinition> _pending;

	[Token(Token = "0x400012C")]
	[FieldOffset(Offset = "0x30")]
	private GameObject _host;

	[Token(Token = "0x400012D")]
	[FieldOffset(Offset = "0x38")]
	private RectTransform _stack;

	[Token(Token = "0x400012E")]
	[FieldOffset(Offset = "0x40")]
	private Tween _stackTween;

	[Token(Token = "0x400012F")]
	[FieldOffset(Offset = "0x48")]
	private bool _expanded;

	[Token(Token = "0x4000130")]
	[FieldOffset(Offset = "0x4C")]
	private float _expandedStackHeight;

	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x3A53DF0", Offset = "0x3A53DF0", VA = "0x3A53DF0")]
	public GisketchToastManager(Transform layer, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x3A53EF0", Offset = "0x3A53EF0", VA = "0x3A53EF0")]
	public void Show(AottgToastDefinition toast)
	{
	}

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x3A54810", Offset = "0x3A54810", VA = "0x3A54810")]
	public void Close(bool animate)
	{
	}

	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x3A54740", Offset = "0x3A54740", VA = "0x3A54740")]
	private void AddVisible(AottgToastDefinition toast, int index)
	{
	}

	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x3A54A50", Offset = "0x3A54A50", VA = "0x3A54A50")]
	private ToastItem BuildToast(AottgToastDefinition toast)
	{
		return null;
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x3A557A0", Offset = "0x3A557A0", VA = "0x3A557A0")]
	private void Wire(GameObject root, AottgToastDefinition toast)
	{
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x3A55AF0", Offset = "0x3A55AF0", VA = "0x3A55AF0")]
	private void Close(AottgToastDefinition toast)
	{
	}

	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x3A55FD0", Offset = "0x3A55FD0", VA = "0x3A55FD0")]
	private void CloseAll()
	{
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x3A56030", Offset = "0x3A56030", VA = "0x3A56030")]
	private void SetExpanded(bool expanded)
	{
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x3A55EA0", Offset = "0x3A55EA0", VA = "0x3A55EA0")]
	private void PromotePending()
	{
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x3A543D0", Offset = "0x3A543D0", VA = "0x3A543D0")]
	private void ApplyCurrentLayout(bool animate)
	{
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x3A569C0", Offset = "0x3A569C0", VA = "0x3A569C0")]
	private void SettleVisibleLayouts()
	{
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x3A549D0", Offset = "0x3A549D0", VA = "0x3A549D0")]
	private void EnsureHost()
	{
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x3A54550", Offset = "0x3A54550", VA = "0x3A54550")]
	private void RemoveVisible(string key)
	{
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x3A54690", Offset = "0x3A54690", VA = "0x3A54690")]
	private static void Remove(List<AottgToastDefinition> list, string key)
	{
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x3A55E00", Offset = "0x3A55E00", VA = "0x3A55E00")]
	private static int IndexOf(List<ToastItem> list, string key)
	{
		return default(int);
	}

	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x3A54870", Offset = "0x3A54870", VA = "0x3A54870")]
	private void DestroyHost()
	{
	}

	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x3A56BF0", Offset = "0x3A56BF0", VA = "0x3A56BF0")]
	private GameObject Host()
	{
		return null;
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x3A54D60", Offset = "0x3A54D60", VA = "0x3A54D60")]
	private static GameObject Slot(RectTransform parent, float height)
	{
		return null;
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x3A55640", Offset = "0x3A55640", VA = "0x3A55640")]
	private void ConfigureToastRoot(GameObject root, float height)
	{
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x3A57180", Offset = "0x3A57180", VA = "0x3A57180")]
	private float ToastRootWidth()
	{
		return default(float);
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x3A54F70", Offset = "0x3A54F70", VA = "0x3A54F70")]
	private static GisketchNodeDefinition ToastNode(AottgToastDefinition toast)
	{
		return null;
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x3A57230", Offset = "0x3A57230", VA = "0x3A57230")]
	private static GisketchNodeDefinition ToastTitle(AottgToastDefinition toast, string variant)
	{
		return null;
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x3A55A10", Offset = "0x3A55A10", VA = "0x3A55A10")]
	private static Button Button(GameObject root, string id)
	{
		return null;
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x3A577F0", Offset = "0x3A577F0", VA = "0x3A577F0")]
	private static Transform FindDeep(Transform root, string id)
	{
		return null;
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x3A54090", Offset = "0x3A54090", VA = "0x3A54090")]
	private static string Key(AottgToastDefinition toast)
	{
		return null;
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x3A57670", Offset = "0x3A57670", VA = "0x3A57670")]
	private static GisketchLayoutDefinition Row(float gap)
	{
		return null;
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x3A57730", Offset = "0x3A57730", VA = "0x3A57730")]
	private static GisketchLayoutDefinition Column(float gap)
	{
		return null;
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x3A56280", Offset = "0x3A56280", VA = "0x3A56280")]
	private void ApplyStack(bool animate)
	{
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x3A57C00", Offset = "0x3A57C00", VA = "0x3A57C00")]
	private float AppliedStackHeight()
	{
		return default(float);
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x3A57ED0", Offset = "0x3A57ED0", VA = "0x3A57ED0")]
	private static void SetSlot(RectTransform rect, Vector2 position, Vector3 scale)
	{
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x3A57D50", Offset = "0x3A57D50", VA = "0x3A57D50")]
	private static void AnimateSlot(Sequence sequence, RectTransform rect, Vector2 position, Vector3 scale)
	{
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x3A57F10", Offset = "0x3A57F10", VA = "0x3A57F10")]
	private float StackHeight()
	{
		return default(float);
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x3A57CD0", Offset = "0x3A57CD0", VA = "0x3A57CD0")]
	private float HeightAt(int index)
	{
		return default(float);
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x3A581A0", Offset = "0x3A581A0", VA = "0x3A581A0")]
	private static float ToastHeight(bool showDismissAll)
	{
		return default(float);
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x3A56800", Offset = "0x3A56800", VA = "0x3A56800")]
	private void RefreshDismissAllButtons()
	{
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x3A57C30", Offset = "0x3A57C30", VA = "0x3A57C30")]
	private float CollapsedY(int index)
	{
		return default(float);
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x3A581C0", Offset = "0x3A581C0", VA = "0x3A581C0")]
	private static void SetSlotHeight(ToastItem item, float height)
	{
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x3A570B0", Offset = "0x3A570B0", VA = "0x3A570B0")]
	private static void DestroySlot(RectTransform slot)
	{
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x3A55F70", Offset = "0x3A55F70", VA = "0x3A55F70")]
	private void FinishClose(RectTransform slot)
	{
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x3A54250", Offset = "0x3A54250", VA = "0x3A54250")]
	private bool UpdateVisible(AottgToastDefinition toast, string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x3A54440", Offset = "0x3A54440", VA = "0x3A54440")]
	private bool UpdatePending(AottgToastDefinition toast, string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x3A54230", Offset = "0x3A54230", VA = "0x3A54230")]
	private static bool HasUpdateKey(AottgToastDefinition toast)
	{
		return default(bool);
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x3A58320", Offset = "0x3A58320", VA = "0x3A58320")]
	private static int IndexOf(List<AottgToastDefinition> list, string key)
	{
		return default(int);
	}
}
