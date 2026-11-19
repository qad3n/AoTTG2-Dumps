// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.RelatedView
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000084")]
internal sealed class RelatedView : DataView, IFilter
{
	[Token(Token = "0x40002A5")]
	[FieldOffset(Offset = "0xD0")]
	private readonly DataKey? _parentKey;

	[Token(Token = "0x40002A6")]
	[FieldOffset(Offset = "0xE0")]
	private readonly DataKey _childKey;

	[Token(Token = "0x40002A7")]
	[FieldOffset(Offset = "0xE8")]
	private readonly DataRowView _parentRowView;

	[Token(Token = "0x40002A8")]
	[FieldOffset(Offset = "0xF0")]
	private readonly object[] _filterValues;

	[Token(Token = "0x600075C")]
	[Address(RVA = "0x5EC6F80", Offset = "0x5EC5F80", VA = "0x5EC6F80")]
	public RelatedView(DataColumn[] columns, object[] values)
	{
	}

	[Token(Token = "0x600075D")]
	[Address(RVA = "0x5EC70E0", Offset = "0x5EC60E0", VA = "0x5EC70E0")]
	public RelatedView(DataRowView parentRowView, DataKey parentKey, DataColumn[] childKeyColumns)
	{
	}

	[Token(Token = "0x600075E")]
	[Address(RVA = "0x5EC7230", Offset = "0x5EC6230", VA = "0x5EC7230")]
	private object[] GetParentValues()
	{
		return null;
	}

	[Token(Token = "0x600075F")]
	[Address(RVA = "0x5EC72D0", Offset = "0x5EC62D0", VA = "0x5EC72D0", Slot = "72")]
	public bool Invoke(DataRow row, DataRowVersion version)
	{
		return default(bool);
	}

	[Token(Token = "0x6000760")]
	[Address(RVA = "0x5EC7470", Offset = "0x5EC6470", VA = "0x5EC7470", Slot = "66")]
	internal override IFilter GetFilter()
	{
		return null;
	}

	[Token(Token = "0x6000761")]
	[Address(RVA = "0x5EC7480", Offset = "0x5EC6480", VA = "0x5EC7480", Slot = "65")]
	public override DataRowView AddNew()
	{
		return null;
	}

	[Token(Token = "0x6000762")]
	[Address(RVA = "0x5EC74E0", Offset = "0x5EC64E0", VA = "0x5EC74E0", Slot = "69")]
	internal override void SetIndex(string newSort, DataViewRowState newRowStates, IFilter newRowFilter)
	{
	}
}
