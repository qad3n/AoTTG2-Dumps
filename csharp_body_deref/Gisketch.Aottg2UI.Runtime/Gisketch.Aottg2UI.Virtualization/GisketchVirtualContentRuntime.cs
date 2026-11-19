// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualContentRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Gisketch.Aottg2UI.Actions;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Virtualization;

[Token(Token = "0x200000B")]
public sealed class GisketchVirtualContentRuntime : MonoBehaviour, IGisketchSearchTargetMaterializer
{
	[Token(Token = "0x200000C")]
	private sealed class Slot
	{
		[Token(Token = "0x4000047")]
		[FieldOffset(Offset = "0x10")]
		public readonly GameObject Root;

		[Token(Token = "0x4000048")]
		[FieldOffset(Offset = "0x18")]
		public int ItemIndex;

		[Token(Token = "0x6000071")]
		[Address(RVA = "0x5220260", Offset = "0x521F260", VA = "0x5220260")]
		public Slot(GameObject root)
		{
		}
	}

	[Token(Token = "0x4000041")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<Slot> _slots;

	[Token(Token = "0x4000042")]
	[FieldOffset(Offset = "0x28")]
	private IGisketchVirtualContentSource _source;

	[Token(Token = "0x4000043")]
	[FieldOffset(Offset = "0x30")]
	private ScrollRect _scroll;

	[Token(Token = "0x4000044")]
	[FieldOffset(Offset = "0x38")]
	private UnityAction<Vector2> _scrollChanged;

	[Token(Token = "0x4000045")]
	[FieldOffset(Offset = "0x40")]
	private LayoutElement _layout;

	[Token(Token = "0x4000046")]
	[FieldOffset(Offset = "0x48")]
	private GisketchVirtualRange _range;

	[Token(Token = "0x1700000D")]
	public bool IsVirtualized
	{
		[Token(Token = "0x600005A")]
		[Address(RVA = "0x521E7D0", Offset = "0x521D7D0", VA = "0x521E7D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000E")]
	public int LiveSlotCount
	{
		[Token(Token = "0x600005B")]
		[Address(RVA = "0x521E900", Offset = "0x521D900", VA = "0x521E900")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x521E940", Offset = "0x521D940", VA = "0x521E940")]
	public void Setup(IGisketchVirtualContentSource source)
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x521EF20", Offset = "0x521DF20", VA = "0x521EF20")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x521EB70", Offset = "0x521DB70", VA = "0x521EB70")]
	public void Refresh(bool force)
	{
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x521FCC0", Offset = "0x521ECC0", VA = "0x521FCC0")]
	public bool MaterializeItem(int itemIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x521FE60", Offset = "0x521EE60", VA = "0x521FE60", Slot = "4")]
	public bool TryMaterializeSearchTarget(string targetId, out GameObject target)
	{
		return default(bool);
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x521EFC0", Offset = "0x521DFC0", VA = "0x521EFC0")]
	private void RefreshStatic()
	{
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x521F6F0", Offset = "0x521E6F0", VA = "0x521F6F0")]
	private void RecycleOutside(GisketchVirtualRange range)
	{
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x521F890", Offset = "0x521E890", VA = "0x521F890")]
	private Slot FreeSlot()
	{
		return null;
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x521FB60", Offset = "0x521EB60", VA = "0x521FB60")]
	private void Bind(Slot slot, int itemIndex)
	{
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x521FFF0", Offset = "0x521EFF0", VA = "0x521FFF0")]
	private void Unbind(Slot slot)
	{
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x521F560", Offset = "0x521E560", VA = "0x521F560")]
	private void UnbindAll()
	{
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x521F880", Offset = "0x521E880", VA = "0x521F880")]
	private bool IsBound(int itemIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x521FDB0", Offset = "0x521EDB0", VA = "0x521FDB0")]
	private Slot SlotFor(int itemIndex)
	{
		return null;
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x52202A0", Offset = "0x521F2A0", VA = "0x52202A0")]
	private void Position(RectTransform rect, int itemIndex)
	{
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x5220460", Offset = "0x521F460", VA = "0x5220460")]
	private void PrepareBoundSlot(GameObject root)
	{
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x52205A0", Offset = "0x521F5A0", VA = "0x52205A0")]
	private static void StretchDirectChildren(Transform root)
	{
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x521F1D0", Offset = "0x521E1D0", VA = "0x521F1D0")]
	private float ScrollOffset()
	{
		return default(float);
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x521F350", Offset = "0x521E350", VA = "0x521F350")]
	private float ViewportHeight()
	{
		return default(float);
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x5220120", Offset = "0x521F120", VA = "0x5220120")]
	private static bool HasFocusedChild(GameObject root)
	{
		return default(bool);
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x5220780", Offset = "0x521F780", VA = "0x5220780")]
	public GisketchVirtualContentRuntime()
	{
	}
}
