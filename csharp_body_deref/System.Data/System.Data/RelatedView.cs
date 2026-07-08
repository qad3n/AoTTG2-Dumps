using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200007A")]
internal sealed class RelatedView : DataView, IFilter
{
	[Token(Token = "0x4000292")]
	[FieldOffset(Offset = "0xD0")]
	private readonly DataKey? _parentKey;

	[Token(Token = "0x4000293")]
	[FieldOffset(Offset = "0xE0")]
	private readonly DataKey _childKey;

	[Token(Token = "0x4000294")]
	[FieldOffset(Offset = "0xE8")]
	private readonly DataRowView _parentRowView;

	[Token(Token = "0x4000295")]
	[FieldOffset(Offset = "0xF0")]
	private readonly object[] _filterValues;

	[Token(Token = "0x600073D")]
	[Address(RVA = "0x4280C90", Offset = "0x4280C90", VA = "0x4280C90")]
	public RelatedView(DataColumn[] columns, object[] values)
	{
	}

	[Token(Token = "0x600073E")]
	[Address(RVA = "0x4280DF0", Offset = "0x4280DF0", VA = "0x4280DF0")]
	public RelatedView(DataRowView parentRowView, DataKey parentKey, DataColumn[] childKeyColumns)
	{
	}

	[Token(Token = "0x600073F")]
	[Address(RVA = "0x4280F40", Offset = "0x4280F40", VA = "0x4280F40")]
	private object[] GetParentValues()
	{
		return null;
	}

	[Token(Token = "0x6000740")]
	[Address(RVA = "0x4280FE0", Offset = "0x4280FE0", VA = "0x4280FE0", Slot = "72")]
	public bool Invoke(DataRow row, DataRowVersion version)
	{
		return default(bool);
	}

	[Token(Token = "0x6000741")]
	[Address(RVA = "0x4281180", Offset = "0x4281180", VA = "0x4281180", Slot = "66")]
	internal override IFilter GetFilter()
	{
		return null;
	}

	[Token(Token = "0x6000742")]
	[Address(RVA = "0x4281190", Offset = "0x4281190", VA = "0x4281190", Slot = "65")]
	public override DataRowView AddNew()
	{
		return null;
	}

	[Token(Token = "0x6000743")]
	[Address(RVA = "0x42811F0", Offset = "0x42811F0", VA = "0x42811F0", Slot = "69")]
	internal override void SetIndex(string newSort, DataViewRowState newRowStates, IFilter newRowFilter)
	{
	}
}
