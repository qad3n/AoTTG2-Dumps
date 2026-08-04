// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.MultiColumnTreeViewController
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4F1C9F0", Offset = "0x4F1C9F0", VA = "0x4F1C9F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002C")]
	internal MultiColumnCollectionHeader header
	{
		[Token(Token = "0x6000137")]
		[Address(RVA = "0x4F1CA00", Offset = "0x4F1CA00", VA = "0x4F1CA00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x4F1CA20", Offset = "0x4F1CA20", VA = "0x4F1CA20")]
	protected MultiColumnTreeViewController(Columns columns, SortColumnDescriptions sortDescriptions, List<SortColumnDescription> sortedColumns)
	{
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x4F1CAC0", Offset = "0x4F1CAC0", VA = "0x4F1CAC0", Slot = "14")]
	internal override void InvokeMakeItem(ReusableCollectionItem reusableItem)
	{
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x4F1D080", Offset = "0x4F1D080", VA = "0x4F1D080", Slot = "18")]
	protected override VisualElement MakeItem()
	{
		return null;
	}

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x4F1D0A0", Offset = "0x4F1D0A0", VA = "0x4F1D0A0", Slot = "19")]
	protected override void BindItem(VisualElement element, int index)
	{
	}

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x4F1D120", Offset = "0x4F1D120", VA = "0x4F1D120", Slot = "20")]
	protected override void UnbindItem(VisualElement element, int index)
	{
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x4F1D140", Offset = "0x4F1D140", VA = "0x4F1D140", Slot = "21")]
	protected override void DestroyItem(VisualElement element)
	{
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x4F1D160", Offset = "0x4F1D160", VA = "0x4F1D160", Slot = "7")]
	protected override void PrepareView()
	{
	}

	[Token(Token = "0x600013F")]
	[Address(RVA = "0x4F1D180", Offset = "0x4F1D180", VA = "0x4F1D180", Slot = "8")]
	public override void Dispose()
	{
	}
}
