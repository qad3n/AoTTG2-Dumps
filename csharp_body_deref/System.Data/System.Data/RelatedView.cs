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
	[Address(RVA = "0x2524530", Offset = "0x2522B30", VA = "0x182524530")]
	public RelatedView(DataColumn[] columns, object[] values)
	{
	}

	[Token(Token = "0x600075D")]
	[Address(RVA = "0x25246A0", Offset = "0x2522CA0", VA = "0x1825246A0")]
	public RelatedView(DataRowView parentRowView, DataKey parentKey, DataColumn[] childKeyColumns)
	{
	}

	[Token(Token = "0x600075E")]
	[Address(RVA = "0x2524310", Offset = "0x2522910", VA = "0x182524310")]
	private object[] GetParentValues()
	{
		return null;
	}

	[Token(Token = "0x600075F")]
	[Address(RVA = "0x25243C0", Offset = "0x25229C0", VA = "0x1825243C0", Slot = "72")]
	public bool Invoke(DataRow row, DataRowVersion version)
	{
		return default(bool);
	}

	[Token(Token = "0x6000760")]
	[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510", Slot = "66")]
	internal override IFilter GetFilter()
	{
		return null;
	}

	[Token(Token = "0x6000761")]
	[Address(RVA = "0x25242B0", Offset = "0x25228B0", VA = "0x1825242B0", Slot = "65")]
	public override DataRowView AddNew()
	{
		return null;
	}

	[Token(Token = "0x6000762")]
	[Address(RVA = "0x2524500", Offset = "0x2522B00", VA = "0x182524500", Slot = "69")]
	internal override void SetIndex(string newSort, DataViewRowState newRowStates, IFilter newRowFilter)
	{
	}
}
