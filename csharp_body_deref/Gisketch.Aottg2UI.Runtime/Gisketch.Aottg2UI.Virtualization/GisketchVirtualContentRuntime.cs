// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime
// Update status: NEW in this game update
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
		[Token(Token = "0x4000046")]
		[FieldOffset(Offset = "0x10")]
		public readonly GameObject Root;

		[Token(Token = "0x4000047")]
		[FieldOffset(Offset = "0x18")]
		public int ItemIndex;

		[Token(Token = "0x6000070")]
		[Address(RVA = "0x18A2510", Offset = "0x18A0B10", VA = "0x1818A2510")]
		public Slot(GameObject root)
		{
		}
	}

	[Token(Token = "0x4000040")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<Slot> _slots;

	[Token(Token = "0x4000041")]
	[FieldOffset(Offset = "0x28")]
	private IGisketchVirtualContentSource _source;

	[Token(Token = "0x4000042")]
	[FieldOffset(Offset = "0x30")]
	private ScrollRect _scroll;

	[Token(Token = "0x4000043")]
	[FieldOffset(Offset = "0x38")]
	private UnityAction<Vector2> _scrollChanged;

	[Token(Token = "0x4000044")]
	[FieldOffset(Offset = "0x40")]
	private LayoutElement _layout;

	[Token(Token = "0x4000045")]
	[FieldOffset(Offset = "0x48")]
	private GisketchVirtualRange _range;

	[Token(Token = "0x1700000D")]
	public bool IsVirtualized
	{
		[Token(Token = "0x6000059")]
		[Address(RVA = "0x189E1B0", Offset = "0x189C7B0", VA = "0x18189E1B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000E")]
	public int LiveSlotCount
	{
		[Token(Token = "0x600005A")]
		[Address(RVA = "0x189E2A0", Offset = "0x189C8A0", VA = "0x18189E2A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x189D6D0", Offset = "0x189BCD0", VA = "0x18189D6D0")]
	public void Setup(IGisketchVirtualContentSource source)
	{
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x189C5B0", Offset = "0x189ABB0", VA = "0x18189C5B0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x189CCA0", Offset = "0x189B2A0", VA = "0x18189CCA0")]
	public void Refresh(bool force)
	{
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x189C510", Offset = "0x189AB10", VA = "0x18189C510")]
	public bool MaterializeItem(int itemIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x189DB00", Offset = "0x189C100", VA = "0x18189DB00", Slot = "4")]
	public bool TryMaterializeSearchTarget(string targetId, out GameObject target)
	{
		return default(bool);
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x189CB60", Offset = "0x189B160", VA = "0x18189CB60")]
	private void RefreshStatic()
	{
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x189CA50", Offset = "0x189B050", VA = "0x18189CA50")]
	private void RecycleOutside(GisketchVirtualRange range)
	{
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x189C110", Offset = "0x189A710", VA = "0x18189C110")]
	private Slot FreeSlot()
	{
		return null;
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x189BE50", Offset = "0x189A450", VA = "0x18189BE50")]
	private void Bind(Slot slot, int itemIndex)
	{
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x189DE60", Offset = "0x189C460", VA = "0x18189DE60")]
	private void Unbind(Slot slot)
	{
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x189DD40", Offset = "0x189C340", VA = "0x18189DD40")]
	private void UnbindAll()
	{
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x189C4F0", Offset = "0x189AAF0", VA = "0x18189C4F0")]
	private bool IsBound(int itemIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x189D8F0", Offset = "0x189BEF0", VA = "0x18189D8F0")]
	private Slot SlotFor(int itemIndex)
	{
		return null;
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x189C650", Offset = "0x189AC50", VA = "0x18189C650")]
	private void Position(RectTransform rect, int itemIndex)
	{
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x189C820", Offset = "0x189AE20", VA = "0x18189C820")]
	private void PrepareBoundSlot(GameObject root)
	{
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x189D9B0", Offset = "0x189BFB0", VA = "0x18189D9B0")]
	private static void StretchDirectChildren(Transform root)
	{
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x189D520", Offset = "0x189BB20", VA = "0x18189D520")]
	private float ScrollOffset()
	{
		return default(float);
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x189DF20", Offset = "0x189C520", VA = "0x18189DF20")]
	private float ViewportHeight()
	{
		return default(float);
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x189C3A0", Offset = "0x189A9A0", VA = "0x18189C3A0")]
	private static bool HasFocusedChild(GameObject root)
	{
		return default(bool);
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x189E120", Offset = "0x189C720", VA = "0x18189E120")]
	public GisketchVirtualContentRuntime()
	{
	}
}
