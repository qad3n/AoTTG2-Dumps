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

[Token(Token = "0x2000052")]
internal sealed class DataViewListener
{
	[Token(Token = "0x4000199")]
	[FieldOffset(Offset = "0x10")]
	private readonly WeakReference _dvWeak;

	[Token(Token = "0x400019A")]
	[FieldOffset(Offset = "0x18")]
	private DataTable _table;

	[Token(Token = "0x400019B")]
	[FieldOffset(Offset = "0x20")]
	private Index _index;

	[Token(Token = "0x400019C")]
	[FieldOffset(Offset = "0x28")]
	internal readonly int _objectID;

	[Token(Token = "0x6000571")]
	[Address(RVA = "0x250A920", Offset = "0x2508F20", VA = "0x18250A920")]
	internal DataViewListener(DataView dv)
	{
	}

	[Token(Token = "0x6000572")]
	[Address(RVA = "0x2509B70", Offset = "0x2508170", VA = "0x182509B70")]
	private void ChildRelationCollectionChanged(object sender, CollectionChangeEventArgs e)
	{
	}

	[Token(Token = "0x6000573")]
	[Address(RVA = "0x2509FC0", Offset = "0x25085C0", VA = "0x182509FC0")]
	private void ParentRelationCollectionChanged(object sender, CollectionChangeEventArgs e)
	{
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x2509C70", Offset = "0x2508270", VA = "0x182509C70")]
	private void ColumnCollectionChanged(object sender, CollectionChangeEventArgs e)
	{
	}

	[Token(Token = "0x6000575")]
	[Address(RVA = "0x2509EE0", Offset = "0x25084E0", VA = "0x182509EE0")]
	internal void MaintainDataView(ListChangedType changedType, DataRow row, bool trackAddRemove)
	{
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0x2509D60", Offset = "0x2508360", VA = "0x182509D60")]
	internal void IndexListChanged(ListChangedEventArgs e)
	{
	}

	[Token(Token = "0x6000577")]
	[Address(RVA = "0x250A360", Offset = "0x2508960", VA = "0x18250A360")]
	internal void RegisterMetaDataEvents(DataTable table)
	{
	}

	[Token(Token = "0x6000578")]
	[Address(RVA = "0x250A910", Offset = "0x2508F10", VA = "0x18250A910")]
	internal void UnregisterMetaDataEvents()
	{
	}

	[Token(Token = "0x6000579")]
	[Address(RVA = "0x250A650", Offset = "0x2508C50", VA = "0x18250A650")]
	private void UnregisterMetaDataEvents(bool updateListeners)
	{
	}

	[Token(Token = "0x600057A")]
	[Address(RVA = "0x250A0A0", Offset = "0x25086A0", VA = "0x18250A0A0")]
	internal void RegisterListChangedEvent(Index index)
	{
	}

	[Token(Token = "0x600057B")]
	[Address(RVA = "0x250A570", Offset = "0x2508B70", VA = "0x18250A570")]
	internal void UnregisterListChangedEvent()
	{
	}

	[Token(Token = "0x600057C")]
	[Address(RVA = "0x2509C50", Offset = "0x2508250", VA = "0x182509C50")]
	private void CleanUp(bool updateListeners)
	{
	}

	[Token(Token = "0x600057D")]
	[Address(RVA = "0x250A170", Offset = "0x2508770", VA = "0x18250A170")]
	private void RegisterListener(DataTable table)
	{
	}
}
