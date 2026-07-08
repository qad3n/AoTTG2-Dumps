using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.UIElements.Internal;

namespace UnityEngine.UIElements;

[Token(Token = "0x200002A")]
public abstract class MultiColumnTreeViewController : BaseTreeViewController
{
	[Token(Token = "0x400006A")]
	[FieldOffset(Offset = "0x58")]
	private MultiColumnController m_ColumnController;

	[Token(Token = "0x1700002B")]
	public MultiColumnController columnController
	{
		[Token(Token = "0x6000136")]
		[Address(RVA = "0x4BF50C0", Offset = "0x4BF50C0", VA = "0x4BF50C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002C")]
	internal MultiColumnCollectionHeader header
	{
		[Token(Token = "0x6000137")]
		[Address(RVA = "0x4BF50D0", Offset = "0x4BF50D0", VA = "0x4BF50D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x4BF50F0", Offset = "0x4BF50F0", VA = "0x4BF50F0")]
	protected MultiColumnTreeViewController(Columns columns, SortColumnDescriptions sortDescriptions, List<SortColumnDescription> sortedColumns)
	{
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x4BF5190", Offset = "0x4BF5190", VA = "0x4BF5190", Slot = "14")]
	internal override void InvokeMakeItem(ReusableCollectionItem reusableItem)
	{
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x4BF5750", Offset = "0x4BF5750", VA = "0x4BF5750", Slot = "18")]
	protected override VisualElement MakeItem()
	{
		return null;
	}

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x4BF5770", Offset = "0x4BF5770", VA = "0x4BF5770", Slot = "19")]
	protected override void BindItem(VisualElement element, int index)
	{
	}

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x4BF57F0", Offset = "0x4BF57F0", VA = "0x4BF57F0", Slot = "20")]
	protected override void UnbindItem(VisualElement element, int index)
	{
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x4BF5810", Offset = "0x4BF5810", VA = "0x4BF5810", Slot = "21")]
	protected override void DestroyItem(VisualElement element)
	{
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x4BF5830", Offset = "0x4BF5830", VA = "0x4BF5830", Slot = "7")]
	protected override void PrepareView()
	{
	}

	[Token(Token = "0x600013F")]
	[Address(RVA = "0x4BF5850", Offset = "0x4BF5850", VA = "0x4BF5850", Slot = "8")]
	public override void Dispose()
	{
	}
}
