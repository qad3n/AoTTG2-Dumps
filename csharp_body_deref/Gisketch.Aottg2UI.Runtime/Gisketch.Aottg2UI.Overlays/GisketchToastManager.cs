using System.Collections.Generic;
using DG.Tweening;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Overlays;

[Token(Token = "0x200003A")]
public sealed class GisketchToastManager
{
	[Token(Token = "0x200003B")]
	private sealed class ToastItem
	{
		[Token(Token = "0x400012B")]
		[FieldOffset(Offset = "0x10")]
		public readonly string Key;

		[Token(Token = "0x400012C")]
		[FieldOffset(Offset = "0x18")]
		public readonly GisketchView View;

		[Token(Token = "0x400012D")]
		[FieldOffset(Offset = "0x20")]
		public readonly RectTransform Slot;

		[Token(Token = "0x400012E")]
		[FieldOffset(Offset = "0x28")]
		public float Height;

		[Token(Token = "0x600020A")]
		[Address(RVA = "0x39ECBF0", Offset = "0x39ECBF0", VA = "0x39ECBF0")]
		public ToastItem(string key, GisketchView view, RectTransform slot, float height)
		{
		}
	}

	[Token(Token = "0x400011A")]
	private const int MaxToasts = 3;

	[Token(Token = "0x400011B")]
	private const float ToastWidth = 560f;

	[Token(Token = "0x400011C")]
	private const float ToastBodyWidth = 520f;

	[Token(Token = "0x400011D")]
	private const float ToastMinHeight = 96f;

	[Token(Token = "0x400011E")]
	private const float ToastDismissAllHeight = 168f;

	[Token(Token = "0x400011F")]
	private const float ToastMaxHeight = 180f;

	[Token(Token = "0x4000120")]
	private const float ToastExpandedGap = 8f;

	[Token(Token = "0x4000121")]
	private const float ToastCollapsedStep = 14f;

	[Token(Token = "0x4000122")]
	[FieldOffset(Offset = "0x10")]
	private readonly Transform _layer;

	[Token(Token = "0x4000123")]
	[FieldOffset(Offset = "0x18")]
	private readonly GisketchBuildContext _context;

	[Token(Token = "0x4000124")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<ToastItem> _items;

	[Token(Token = "0x4000125")]
	[FieldOffset(Offset = "0x28")]
	private readonly List<AottgToastDefinition> _pending;

	[Token(Token = "0x4000126")]
	[FieldOffset(Offset = "0x30")]
	private GameObject _host;

	[Token(Token = "0x4000127")]
	[FieldOffset(Offset = "0x38")]
	private RectTransform _stack;

	[Token(Token = "0x4000128")]
	[FieldOffset(Offset = "0x40")]
	private Tween _stackTween;

	[Token(Token = "0x4000129")]
	[FieldOffset(Offset = "0x48")]
	private bool _expanded;

	[Token(Token = "0x400012A")]
	[FieldOffset(Offset = "0x4C")]
	private float _expandedStackHeight;

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x39E94D0", Offset = "0x39E94D0", VA = "0x39E94D0")]
	private static GisketchNodeDefinition ToastNode(AottgToastDefinition toast)
	{
		return null;
	}

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x39E9BA0", Offset = "0x39E9BA0", VA = "0x39E9BA0")]
	private static GisketchNodeDefinition ToastTitle(AottgToastDefinition toast, string variant)
	{
		return null;
	}

	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x39EA160", Offset = "0x39EA160", VA = "0x39EA160")]
	private static Button Button(GameObject root, string id)
	{
		return null;
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x39EA240", Offset = "0x39EA240", VA = "0x39EA240")]
	private static Transform FindDeep(Transform root, string id)
	{
		return null;
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x39EA650", Offset = "0x39EA650", VA = "0x39EA650")]
	private static string Key(AottgToastDefinition toast)
	{
		return null;
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x39E9FE0", Offset = "0x39E9FE0", VA = "0x39E9FE0")]
	private static GisketchLayoutDefinition Row(float gap)
	{
		return null;
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x39EA0A0", Offset = "0x39EA0A0", VA = "0x39EA0A0")]
	private static GisketchLayoutDefinition Column(float gap)
	{
		return null;
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x39EA810", Offset = "0x39EA810", VA = "0x39EA810")]
	private void ApplyStack(bool animate)
	{
	}

	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x39EAD90", Offset = "0x39EAD90", VA = "0x39EAD90")]
	private float AppliedStackHeight()
	{
		return default(float);
	}

	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x39EB060", Offset = "0x39EB060", VA = "0x39EB060")]
	private static void SetSlot(RectTransform rect, Vector2 position, Vector3 scale)
	{
	}

	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x39EAEE0", Offset = "0x39EAEE0", VA = "0x39EAEE0")]
	private static void AnimateSlot(Sequence sequence, RectTransform rect, Vector2 position, Vector3 scale)
	{
	}

	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x39EB0A0", Offset = "0x39EB0A0", VA = "0x39EB0A0")]
	private float StackHeight()
	{
		return default(float);
	}

	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x39EAE60", Offset = "0x39EAE60", VA = "0x39EAE60")]
	private float HeightAt(int index)
	{
		return default(float);
	}

	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x39EB330", Offset = "0x39EB330", VA = "0x39EB330")]
	private static float ToastHeight(bool showDismissAll)
	{
		return default(float);
	}

	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x39EB350", Offset = "0x39EB350", VA = "0x39EB350")]
	private void RefreshDismissAllButtons()
	{
	}

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x39EADC0", Offset = "0x39EADC0", VA = "0x39EADC0")]
	private float CollapsedY(int index)
	{
		return default(float);
	}

	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x39EB510", Offset = "0x39EB510", VA = "0x39EB510")]
	private static void SetSlotHeight(ToastItem item, float height)
	{
	}

	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x39EB670", Offset = "0x39EB670", VA = "0x39EB670")]
	private static void DestroySlot(RectTransform slot)
	{
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x39EB740", Offset = "0x39EB740", VA = "0x39EB740")]
	private void FinishClose(RectTransform slot)
	{
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x39EB900", Offset = "0x39EB900", VA = "0x39EB900")]
	private bool UpdateVisible(AottgToastDefinition toast, string key)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x39EBE20", Offset = "0x39EBE20", VA = "0x39EBE20")]
	private bool UpdatePending(AottgToastDefinition toast, string key)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x39EA7F0", Offset = "0x39EA7F0", VA = "0x39EA7F0")]
	private static bool HasUpdateKey(AottgToastDefinition toast)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x39EBF30", Offset = "0x39EBF30", VA = "0x39EBF30")]
	private static int IndexOf(List<AottgToastDefinition> list, string key)
	{
		return default(int);
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x39EBFD0", Offset = "0x39EBFD0", VA = "0x39EBFD0")]
	public GisketchToastManager(Transform layer, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x39EC0D0", Offset = "0x39EC0D0", VA = "0x39EC0D0")]
	public void Show(AottgToastDefinition toast)
	{
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x39EC5A0", Offset = "0x39EC5A0", VA = "0x39EC5A0")]
	public void Close(bool animate)
	{
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x39EC4D0", Offset = "0x39EC4D0", VA = "0x39EC4D0")]
	private void AddVisible(AottgToastDefinition toast, int index)
	{
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x39EBB20", Offset = "0x39EBB20", VA = "0x39EBB20")]
	private ToastItem BuildToast(AottgToastDefinition toast)
	{
		return null;
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x39ECA00", Offset = "0x39ECA00", VA = "0x39ECA00")]
	private void Wire(GameObject root, AottgToastDefinition toast)
	{
	}

	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x39ECC70", Offset = "0x39ECC70", VA = "0x39ECC70")]
	private void Close(AottgToastDefinition toast)
	{
	}

	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x39ED050", Offset = "0x39ED050", VA = "0x39ED050")]
	private void CloseAll()
	{
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x39ED0B0", Offset = "0x39ED0B0", VA = "0x39ED0B0")]
	private void SetExpanded(bool expanded)
	{
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x39ECF80", Offset = "0x39ECF80", VA = "0x39ECF80")]
	private void PromotePending()
	{
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x39EC270", Offset = "0x39EC270", VA = "0x39EC270")]
	private void ApplyCurrentLayout(bool animate)
	{
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x39ED300", Offset = "0x39ED300", VA = "0x39ED300")]
	private void SettleVisibleLayouts()
	{
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x39EC600", Offset = "0x39EC600", VA = "0x39EC600")]
	private void EnsureHost()
	{
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x39EC2E0", Offset = "0x39EC2E0", VA = "0x39EC2E0")]
	private void RemoveVisible(string key)
	{
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x39EC420", Offset = "0x39EC420", VA = "0x39EC420")]
	private static void Remove(List<AottgToastDefinition> list, string key)
	{
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x39EBA80", Offset = "0x39EBA80", VA = "0x39EBA80")]
	private static int IndexOf(List<ToastItem> list, string key)
	{
		return default(int);
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x39EB7A0", Offset = "0x39EB7A0", VA = "0x39EB7A0")]
	private void DestroyHost()
	{
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x39ED530", Offset = "0x39ED530", VA = "0x39ED530")]
	private GameObject Host()
	{
		return null;
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x39EC690", Offset = "0x39EC690", VA = "0x39EC690")]
	private static GameObject Slot(RectTransform parent, float height)
	{
		return null;
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x39EC8A0", Offset = "0x39EC8A0", VA = "0x39EC8A0")]
	private void ConfigureToastRoot(GameObject root, float height)
	{
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x39ED9F0", Offset = "0x39ED9F0", VA = "0x39ED9F0")]
	private float ToastRootWidth()
	{
		return default(float);
	}
}
