// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.MultiColumnListViewController
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6A99DC0", Offset = "0x6A98DC0", VA = "0x6A99DC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x6A99DD0", Offset = "0x6A98DD0", VA = "0x6A99DD0")]
	public MultiColumnListViewController(Columns columns, SortColumnDescriptions sortDescriptions, List<SortColumnDescription> sortedColumns)
	{
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x6A99F30", Offset = "0x6A98F30", VA = "0x6A99F30", Slot = "19")]
	internal override void PreRefresh()
	{
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x6A99F50", Offset = "0x6A98F50", VA = "0x6A99F50")]
	private void SortIfNeeded()
	{
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x6A99F90", Offset = "0x6A98F90", VA = "0x6A99F90", Slot = "14")]
	internal override void InvokeMakeItem(ReusableCollectionItem reusableItem)
	{
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x6A9A470", Offset = "0x6A99470", VA = "0x6A9A470", Slot = "16")]
	internal override void InvokeBindItem(ReusableCollectionItem reusableItem, int index)
	{
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x6A9A6B0", Offset = "0x6A996B0", VA = "0x6A9A6B0", Slot = "13")]
	public override object GetItemForIndex(int index)
	{
		return null;
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x6A9A6E0", Offset = "0x6A996E0", VA = "0x6A9A6E0", Slot = "11")]
	public override int GetIndexForId(int id)
	{
		return default(int);
	}

	[Token(Token = "0x6000288")]
	[Address(RVA = "0x6A9A700", Offset = "0x6A99700", VA = "0x6A9A700", Slot = "12")]
	public override int GetIdForIndex(int index)
	{
		return default(int);
	}

	[Token(Token = "0x6000289")]
	[Address(RVA = "0x6A9A720", Offset = "0x6A99720", VA = "0x6A9A720", Slot = "20")]
	protected override VisualElement MakeItem()
	{
		return null;
	}

	[Token(Token = "0x600028A")]
	[Address(RVA = "0x6A9A740", Offset = "0x6A99740", VA = "0x6A9A740", Slot = "21")]
	protected override void BindItem(VisualElement element, int index)
	{
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x6A9A7D0", Offset = "0x6A997D0", VA = "0x6A9A7D0", Slot = "22")]
	protected override void UnbindItem(VisualElement element, int index)
	{
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x6A9A7F0", Offset = "0x6A997F0", VA = "0x6A9A7F0", Slot = "23")]
	protected override void DestroyItem(VisualElement element)
	{
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x6A9A810", Offset = "0x6A99810", VA = "0x6A9A810", Slot = "7")]
	protected override void PrepareView()
	{
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x6A9A9C0", Offset = "0x6A999C0", VA = "0x6A9A9C0", Slot = "8")]
	public override void Dispose()
	{
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x6A9ABC0", Offset = "0x6A99BC0", VA = "0x6A9ABC0")]
	private void UpdateReorderClassList()
	{
	}
}
