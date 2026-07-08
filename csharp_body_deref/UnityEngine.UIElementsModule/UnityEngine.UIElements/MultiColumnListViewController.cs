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
		[Address(RVA = "0x4BF43A0", Offset = "0x4BF43A0", VA = "0x4BF43A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002A")]
	internal MultiColumnCollectionHeader header
	{
		[Token(Token = "0x600012C")]
		[Address(RVA = "0x4BF43B0", Offset = "0x4BF43B0", VA = "0x4BF43B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x4BF43D0", Offset = "0x4BF43D0", VA = "0x4BF43D0")]
	public MultiColumnListViewController(Columns columns, SortColumnDescriptions sortDescriptions, List<SortColumnDescription> sortedColumns)
	{
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x4BF4450", Offset = "0x4BF4450", VA = "0x4BF4450", Slot = "14")]
	internal override void InvokeMakeItem(ReusableCollectionItem reusableItem)
	{
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x4BF4A10", Offset = "0x4BF4A10", VA = "0x4BF4A10", Slot = "18")]
	protected override VisualElement MakeItem()
	{
		return null;
	}

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x4BF4A30", Offset = "0x4BF4A30", VA = "0x4BF4A30", Slot = "19")]
	protected override void BindItem(VisualElement element, int index)
	{
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x4BF4AB0", Offset = "0x4BF4AB0", VA = "0x4BF4AB0", Slot = "20")]
	protected override void UnbindItem(VisualElement element, int index)
	{
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x4BF4AD0", Offset = "0x4BF4AD0", VA = "0x4BF4AD0", Slot = "21")]
	protected override void DestroyItem(VisualElement element)
	{
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x4BF4AF0", Offset = "0x4BF4AF0", VA = "0x4BF4AF0", Slot = "7")]
	protected override void PrepareView()
	{
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x4BF4CF0", Offset = "0x4BF4CF0", VA = "0x4BF4CF0", Slot = "8")]
	public override void Dispose()
	{
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x4BF4F50", Offset = "0x4BF4F50", VA = "0x4BF4F50")]
	private void UpdateReorderClassList()
	{
	}
}
