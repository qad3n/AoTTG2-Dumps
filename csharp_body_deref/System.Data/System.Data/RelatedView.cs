// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.RelatedView
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x45BE3F0", Offset = "0x45BE3F0", VA = "0x45BE3F0")]
	public RelatedView(DataColumn[] columns, object[] values)
	{
	}

	[Token(Token = "0x600073E")]
	[Address(RVA = "0x45BE550", Offset = "0x45BE550", VA = "0x45BE550")]
	public RelatedView(DataRowView parentRowView, DataKey parentKey, DataColumn[] childKeyColumns)
	{
	}

	[Token(Token = "0x600073F")]
	[Address(RVA = "0x45BE6A0", Offset = "0x45BE6A0", VA = "0x45BE6A0")]
	private object[] GetParentValues()
	{
		return null;
	}

	[Token(Token = "0x6000740")]
	[Address(RVA = "0x45BE740", Offset = "0x45BE740", VA = "0x45BE740", Slot = "72")]
	public bool Invoke(DataRow row, DataRowVersion version)
	{
		return default(bool);
	}

	[Token(Token = "0x6000741")]
	[Address(RVA = "0x45BE8E0", Offset = "0x45BE8E0", VA = "0x45BE8E0", Slot = "66")]
	internal override IFilter GetFilter()
	{
		return null;
	}

	[Token(Token = "0x6000742")]
	[Address(RVA = "0x45BE8F0", Offset = "0x45BE8F0", VA = "0x45BE8F0", Slot = "65")]
	public override DataRowView AddNew()
	{
		return null;
	}

	[Token(Token = "0x6000743")]
	[Address(RVA = "0x45BE950", Offset = "0x45BE950", VA = "0x45BE950", Slot = "69")]
	internal override void SetIndex(string newSort, DataViewRowState newRowStates, IFilter newRowFilter)
	{
	}
}
