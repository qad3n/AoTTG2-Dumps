// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.MultiColumnTreeViewController
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x30AF7F0", Offset = "0x30ADDF0", VA = "0x1830AF7F0")]
	protected MultiColumnTreeViewController(Columns columns, SortColumnDescriptions sortDescriptions, List<SortColumnDescription> sortedColumns)
	{
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x30AF770", Offset = "0x30ADD70", VA = "0x1830AF770", Slot = "19")]
	internal override void PreRefresh()
	{
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x30AF680", Offset = "0x30ADC80", VA = "0x1830AF680", Slot = "14")]
	internal override void InvokeMakeItem(ReusableCollectionItem reusableItem)
	{
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x30AF640", Offset = "0x30ADC40", VA = "0x1830AF640", Slot = "13")]
	public override object GetItemForIndex(int index)
	{
		return null;
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x30AF610", Offset = "0x30ADC10", VA = "0x1830AF610", Slot = "11")]
	public override int GetIndexForId(int id)
	{
		return default(int);
	}

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x30AF5D0", Offset = "0x30ADBD0", VA = "0x1830AF5D0", Slot = "12")]
	public override int GetIdForIndex(int index)
	{
		return default(int);
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x30AF750", Offset = "0x30ADD50", VA = "0x1830AF750", Slot = "20")]
	protected override VisualElement MakeItem()
	{
		return null;
	}

	[Token(Token = "0x6000298")]
	[Address(RVA = "0x30AF4C0", Offset = "0x30ADAC0", VA = "0x1830AF4C0", Slot = "21")]
	protected override void BindItem(VisualElement element, int index)
	{
	}

	[Token(Token = "0x6000299")]
	[Address(RVA = "0x30AF7D0", Offset = "0x30ADDD0", VA = "0x1830AF7D0", Slot = "22")]
	protected override void UnbindItem(VisualElement element, int index)
	{
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x30AF540", Offset = "0x30ADB40", VA = "0x1830AF540", Slot = "23")]
	protected override void DestroyItem(VisualElement element)
	{
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x30AF7A0", Offset = "0x30ADDA0", VA = "0x1830AF7A0", Slot = "7")]
	protected override void PrepareView()
	{
	}

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x30AF560", Offset = "0x30ADB60", VA = "0x1830AF560", Slot = "8")]
	public override void Dispose()
	{
	}
}
