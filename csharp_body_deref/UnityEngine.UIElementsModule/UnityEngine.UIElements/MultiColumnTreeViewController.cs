// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.MultiColumnTreeViewController
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200005E")]
public abstract class MultiColumnTreeViewController : BaseTreeViewController
{
	[Token(Token = "0x4000134")]
	[FieldOffset(Offset = "0x68")]
	private MultiColumnController m_ColumnController;

	[Token(Token = "0x17000071")]
	public MultiColumnController columnController
	{
		[Token(Token = "0x6000290")]
		[Address(RVA = "0x6A9AD70", Offset = "0x6A99D70", VA = "0x6A9AD70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x6A9AD80", Offset = "0x6A99D80", VA = "0x6A9AD80")]
	protected MultiColumnTreeViewController(Columns columns, SortColumnDescriptions sortDescriptions, List<SortColumnDescription> sortedColumns)
	{
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x6A9AE30", Offset = "0x6A99E30", VA = "0x6A9AE30", Slot = "19")]
	internal override void PreRefresh()
	{
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x6A9AE60", Offset = "0x6A99E60", VA = "0x6A9AE60", Slot = "14")]
	internal override void InvokeMakeItem(ReusableCollectionItem reusableItem)
	{
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x6A9B300", Offset = "0x6A9A300", VA = "0x6A9B300", Slot = "13")]
	public override object GetItemForIndex(int index)
	{
		return null;
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x6A9B330", Offset = "0x6A9A330", VA = "0x6A9B330", Slot = "11")]
	public override int GetIndexForId(int id)
	{
		return default(int);
	}

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x6A9B360", Offset = "0x6A9A360", VA = "0x6A9B360", Slot = "12")]
	public override int GetIdForIndex(int index)
	{
		return default(int);
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x6A9B390", Offset = "0x6A9A390", VA = "0x6A9B390", Slot = "20")]
	protected override VisualElement MakeItem()
	{
		return null;
	}

	[Token(Token = "0x6000298")]
	[Address(RVA = "0x6A9B3B0", Offset = "0x6A9A3B0", VA = "0x6A9B3B0", Slot = "21")]
	protected override void BindItem(VisualElement element, int index)
	{
	}

	[Token(Token = "0x6000299")]
	[Address(RVA = "0x6A9B430", Offset = "0x6A9A430", VA = "0x6A9B430", Slot = "22")]
	protected override void UnbindItem(VisualElement element, int index)
	{
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x6A9B450", Offset = "0x6A9A450", VA = "0x6A9B450", Slot = "23")]
	protected override void DestroyItem(VisualElement element)
	{
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x6A9B470", Offset = "0x6A9A470", VA = "0x6A9B470", Slot = "7")]
	protected override void PrepareView()
	{
	}

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x6A9B490", Offset = "0x6A9A490", VA = "0x6A9B490", Slot = "8")]
	public override void Dispose()
	{
	}
}
