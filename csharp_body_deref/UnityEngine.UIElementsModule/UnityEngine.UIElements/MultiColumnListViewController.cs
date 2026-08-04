// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.MultiColumnListViewController
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.UIElements.Internal;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000029")]
public class MultiColumnListViewController : BaseListViewController
{
	[Token(Token = "0x4000069")]
	[FieldOffset(Offset = "0x48")]
	private MultiColumnController m_ColumnController;

	[Token(Token = "0x17000029")]
	public MultiColumnController columnController
	{
		[Token(Token = "0x600012B")]
		[Address(RVA = "0x4F1BCD0", Offset = "0x4F1BCD0", VA = "0x4F1BCD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002A")]
	internal MultiColumnCollectionHeader header
	{
		[Token(Token = "0x600012C")]
		[Address(RVA = "0x4F1BCE0", Offset = "0x4F1BCE0", VA = "0x4F1BCE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x4F1BD00", Offset = "0x4F1BD00", VA = "0x4F1BD00")]
	public MultiColumnListViewController(Columns columns, SortColumnDescriptions sortDescriptions, List<SortColumnDescription> sortedColumns)
	{
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x4F1BD80", Offset = "0x4F1BD80", VA = "0x4F1BD80", Slot = "14")]
	internal override void InvokeMakeItem(ReusableCollectionItem reusableItem)
	{
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x4F1C340", Offset = "0x4F1C340", VA = "0x4F1C340", Slot = "18")]
	protected override VisualElement MakeItem()
	{
		return null;
	}

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x4F1C360", Offset = "0x4F1C360", VA = "0x4F1C360", Slot = "19")]
	protected override void BindItem(VisualElement element, int index)
	{
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x4F1C3E0", Offset = "0x4F1C3E0", VA = "0x4F1C3E0", Slot = "20")]
	protected override void UnbindItem(VisualElement element, int index)
	{
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x4F1C400", Offset = "0x4F1C400", VA = "0x4F1C400", Slot = "21")]
	protected override void DestroyItem(VisualElement element)
	{
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x4F1C420", Offset = "0x4F1C420", VA = "0x4F1C420", Slot = "7")]
	protected override void PrepareView()
	{
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x4F1C620", Offset = "0x4F1C620", VA = "0x4F1C620", Slot = "8")]
	public override void Dispose()
	{
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x4F1C880", Offset = "0x4F1C880", VA = "0x4F1C880")]
	private void UpdateReorderClassList()
	{
	}
}
