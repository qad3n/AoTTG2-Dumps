// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.MultiColumnListViewController
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200005D")]
public class MultiColumnListViewController : BaseListViewController
{
	[Token(Token = "0x4000133")]
	[FieldOffset(Offset = "0x48")]
	private MultiColumnController m_ColumnController;

	[Token(Token = "0x17000070")]
	public MultiColumnController columnController
	{
		[Token(Token = "0x6000280")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x30AF3C0", Offset = "0x30AD9C0", VA = "0x1830AF3C0")]
	public MultiColumnListViewController(Columns columns, SortColumnDescriptions sortDescriptions, List<SortColumnDescription> sortedColumns)
	{
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x30AF130", Offset = "0x30AD730", VA = "0x1830AF130", Slot = "19")]
	internal override void PreRefresh()
	{
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x30AF280", Offset = "0x30AD880", VA = "0x1830AF280")]
	private void SortIfNeeded()
	{
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x30AEFF0", Offset = "0x30AD5F0", VA = "0x1830AEFF0", Slot = "14")]
	internal override void InvokeMakeItem(ReusableCollectionItem reusableItem)
	{
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x30AEE80", Offset = "0x30AD480", VA = "0x1830AEE80", Slot = "16")]
	internal override void InvokeBindItem(ReusableCollectionItem reusableItem, int index)
	{
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x30AEE40", Offset = "0x30AD440", VA = "0x1830AEE40", Slot = "13")]
	public override object GetItemForIndex(int index)
	{
		return null;
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x30AEE20", Offset = "0x30AD420", VA = "0x1830AEE20", Slot = "11")]
	public override int GetIndexForId(int id)
	{
		return default(int);
	}

	[Token(Token = "0x6000288")]
	[Address(RVA = "0x30AEE00", Offset = "0x30AD400", VA = "0x1830AEE00", Slot = "12")]
	public override int GetIdForIndex(int index)
	{
		return default(int);
	}

	[Token(Token = "0x6000289")]
	[Address(RVA = "0x30AF110", Offset = "0x30AD710", VA = "0x1830AF110", Slot = "20")]
	protected override VisualElement MakeItem()
	{
		return null;
	}

	[Token(Token = "0x600028A")]
	[Address(RVA = "0x30AEBC0", Offset = "0x30AD1C0", VA = "0x1830AEBC0", Slot = "21")]
	protected override void BindItem(VisualElement element, int index)
	{
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x30AF2D0", Offset = "0x30AD8D0", VA = "0x1830AF2D0", Slot = "22")]
	protected override void UnbindItem(VisualElement element, int index)
	{
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x30AEC70", Offset = "0x30AD270", VA = "0x1830AEC70", Slot = "23")]
	protected override void DestroyItem(VisualElement element)
	{
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x30AF150", Offset = "0x30AD750", VA = "0x1830AF150", Slot = "7")]
	protected override void PrepareView()
	{
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x30AEC90", Offset = "0x30AD290", VA = "0x1830AEC90", Slot = "8")]
	public override void Dispose()
	{
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x30AF2F0", Offset = "0x30AD8F0", VA = "0x1830AF2F0")]
	private void UpdateReorderClassList()
	{
	}
}
