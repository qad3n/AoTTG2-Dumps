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
	[Address(RVA = "0x425A870", Offset = "0x425A870", VA = "0x425A870")]
	internal DataViewListener(DataView dv)
	{
	}

	[Token(Token = "0x600053F")]
	[Address(RVA = "0x425A8F0", Offset = "0x425A8F0", VA = "0x425A8F0")]
	private void ChildRelationCollectionChanged(object sender, CollectionChangeEventArgs e)
	{
	}

	[Token(Token = "0x6000540")]
	[Address(RVA = "0x425A9C0", Offset = "0x425A9C0", VA = "0x425A9C0")]
	private void ParentRelationCollectionChanged(object sender, CollectionChangeEventArgs e)
	{
	}

	[Token(Token = "0x6000541")]
	[Address(RVA = "0x425AA70", Offset = "0x425AA70", VA = "0x425AA70")]
	private void ColumnCollectionChanged(object sender, CollectionChangeEventArgs e)
	{
	}

	[Token(Token = "0x6000542")]
	[Address(RVA = "0x425AB20", Offset = "0x425AB20", VA = "0x425AB20")]
	internal void MaintainDataView(ListChangedType changedType, DataRow row, bool trackAddRemove)
	{
	}

	[Token(Token = "0x6000543")]
	[Address(RVA = "0x425ABF0", Offset = "0x425ABF0", VA = "0x425ABF0")]
	internal void IndexListChanged(ListChangedEventArgs e)
	{
	}

	[Token(Token = "0x6000544")]
	[Address(RVA = "0x425ACA0", Offset = "0x425ACA0", VA = "0x425ACA0")]
	internal void RegisterMetaDataEvents(DataTable table)
	{
	}

	[Token(Token = "0x6000545")]
	[Address(RVA = "0x425B0E0", Offset = "0x425B0E0", VA = "0x425B0E0")]
	internal void UnregisterMetaDataEvents()
	{
	}

	[Token(Token = "0x6000546")]
	[Address(RVA = "0x425B0F0", Offset = "0x425B0F0", VA = "0x425B0F0")]
	private void UnregisterMetaDataEvents(bool updateListeners)
	{
	}

	[Token(Token = "0x6000547")]
	[Address(RVA = "0x425B3A0", Offset = "0x425B3A0", VA = "0x425B3A0")]
	internal void RegisterListChangedEvent(Index index)
	{
	}

	[Token(Token = "0x6000548")]
	[Address(RVA = "0x425B490", Offset = "0x425B490", VA = "0x425B490")]
	internal void UnregisterListChangedEvent()
	{
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x425A9A0", Offset = "0x425A9A0", VA = "0x425A9A0")]
	private void CleanUp(bool updateListeners)
	{
	}

	[Token(Token = "0x600054A")]
	[Address(RVA = "0x425AE80", Offset = "0x425AE80", VA = "0x425AE80")]
	private void RegisterListener(DataTable table)
	{
	}
}
