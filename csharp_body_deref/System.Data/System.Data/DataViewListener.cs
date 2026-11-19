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
	[Address(RVA = "0x5EA4820", Offset = "0x5EA3820", VA = "0x5EA4820")]
	internal DataViewListener(DataView dv)
	{
	}

	[Token(Token = "0x6000572")]
	[Address(RVA = "0x5EAA200", Offset = "0x5EA9200", VA = "0x5EAA200")]
	private void ChildRelationCollectionChanged(object sender, CollectionChangeEventArgs e)
	{
	}

	[Token(Token = "0x6000573")]
	[Address(RVA = "0x5EAA2D0", Offset = "0x5EA92D0", VA = "0x5EAA2D0")]
	private void ParentRelationCollectionChanged(object sender, CollectionChangeEventArgs e)
	{
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x5EAA380", Offset = "0x5EA9380", VA = "0x5EAA380")]
	private void ColumnCollectionChanged(object sender, CollectionChangeEventArgs e)
	{
	}

	[Token(Token = "0x6000575")]
	[Address(RVA = "0x5EAA440", Offset = "0x5EA9440", VA = "0x5EAA440")]
	internal void MaintainDataView(ListChangedType changedType, DataRow row, bool trackAddRemove)
	{
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0x5EAA510", Offset = "0x5EA9510", VA = "0x5EAA510")]
	internal void IndexListChanged(ListChangedEventArgs e)
	{
	}

	[Token(Token = "0x6000577")]
	[Address(RVA = "0x5EA48A0", Offset = "0x5EA38A0", VA = "0x5EA48A0")]
	internal void RegisterMetaDataEvents(DataTable table)
	{
	}

	[Token(Token = "0x6000578")]
	[Address(RVA = "0x5EA5800", Offset = "0x5EA4800", VA = "0x5EA5800")]
	internal void UnregisterMetaDataEvents()
	{
	}

	[Token(Token = "0x6000579")]
	[Address(RVA = "0x5EAA7E0", Offset = "0x5EA97E0", VA = "0x5EAA7E0")]
	private void UnregisterMetaDataEvents(bool updateListeners)
	{
	}

	[Token(Token = "0x600057A")]
	[Address(RVA = "0x5EA9970", Offset = "0x5EA8970", VA = "0x5EA9970")]
	internal void RegisterListChangedEvent(Index index)
	{
	}

	[Token(Token = "0x600057B")]
	[Address(RVA = "0x5EA9880", Offset = "0x5EA8880", VA = "0x5EA9880")]
	internal void UnregisterListChangedEvent()
	{
	}

	[Token(Token = "0x600057C")]
	[Address(RVA = "0x5EAA2B0", Offset = "0x5EA92B0", VA = "0x5EAA2B0")]
	private void CleanUp(bool updateListeners)
	{
	}

	[Token(Token = "0x600057D")]
	[Address(RVA = "0x5EAA5C0", Offset = "0x5EA95C0", VA = "0x5EAA5C0")]
	private void RegisterListener(DataTable table)
	{
	}
}
