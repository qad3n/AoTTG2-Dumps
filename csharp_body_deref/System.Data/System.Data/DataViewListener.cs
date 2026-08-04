// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.DataViewListener
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.ComponentModel;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000045")]
internal sealed class DataViewListener
{
	[Token(Token = "0x4000151")]
	[FieldOffset(Offset = "0x10")]
	private readonly WeakReference _dvWeak;

	[Token(Token = "0x4000152")]
	[FieldOffset(Offset = "0x18")]
	private DataTable _table;

	[Token(Token = "0x4000153")]
	[FieldOffset(Offset = "0x20")]
	private Index _index;

	[Token(Token = "0x4000154")]
	[FieldOffset(Offset = "0x28")]
	internal readonly int _objectID;

	[Token(Token = "0x600053E")]
	[Address(RVA = "0x4597FD0", Offset = "0x4597FD0", VA = "0x4597FD0")]
	internal DataViewListener(DataView dv)
	{
	}

	[Token(Token = "0x600053F")]
	[Address(RVA = "0x4598050", Offset = "0x4598050", VA = "0x4598050")]
	private void ChildRelationCollectionChanged(object sender, CollectionChangeEventArgs e)
	{
	}

	[Token(Token = "0x6000540")]
	[Address(RVA = "0x4598120", Offset = "0x4598120", VA = "0x4598120")]
	private void ParentRelationCollectionChanged(object sender, CollectionChangeEventArgs e)
	{
	}

	[Token(Token = "0x6000541")]
	[Address(RVA = "0x45981D0", Offset = "0x45981D0", VA = "0x45981D0")]
	private void ColumnCollectionChanged(object sender, CollectionChangeEventArgs e)
	{
	}

	[Token(Token = "0x6000542")]
	[Address(RVA = "0x4598280", Offset = "0x4598280", VA = "0x4598280")]
	internal void MaintainDataView(ListChangedType changedType, DataRow row, bool trackAddRemove)
	{
	}

	[Token(Token = "0x6000543")]
	[Address(RVA = "0x4598350", Offset = "0x4598350", VA = "0x4598350")]
	internal void IndexListChanged(ListChangedEventArgs e)
	{
	}

	[Token(Token = "0x6000544")]
	[Address(RVA = "0x4598400", Offset = "0x4598400", VA = "0x4598400")]
	internal void RegisterMetaDataEvents(DataTable table)
	{
	}

	[Token(Token = "0x6000545")]
	[Address(RVA = "0x4598840", Offset = "0x4598840", VA = "0x4598840")]
	internal void UnregisterMetaDataEvents()
	{
	}

	[Token(Token = "0x6000546")]
	[Address(RVA = "0x4598850", Offset = "0x4598850", VA = "0x4598850")]
	private void UnregisterMetaDataEvents(bool updateListeners)
	{
	}

	[Token(Token = "0x6000547")]
	[Address(RVA = "0x4598B00", Offset = "0x4598B00", VA = "0x4598B00")]
	internal void RegisterListChangedEvent(Index index)
	{
	}

	[Token(Token = "0x6000548")]
	[Address(RVA = "0x4598BF0", Offset = "0x4598BF0", VA = "0x4598BF0")]
	internal void UnregisterListChangedEvent()
	{
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x4598100", Offset = "0x4598100", VA = "0x4598100")]
	private void CleanUp(bool updateListeners)
	{
	}

	[Token(Token = "0x600054A")]
	[Address(RVA = "0x45985E0", Offset = "0x45985E0", VA = "0x45985E0")]
	private void RegisterListener(DataTable table)
	{
	}
}
