// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.DataRelationCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000037")]
[DefaultEvent("CollectionChanged")]
[DefaultProperty("Table")]
public abstract class DataRelationCollection : InternalDataCollectionBase
{
	[Token(Token = "0x2000038")]
	internal sealed class DataTableRelationCollection : DataRelationCollection
	{
		[Token(Token = "0x400012E")]
		[FieldOffset(Offset = "0x38")]
		private readonly DataTable _table;

		[Token(Token = "0x400012F")]
		[FieldOffset(Offset = "0x40")]
		private readonly ArrayList _relations;

		[Token(Token = "0x4000130")]
		[FieldOffset(Offset = "0x48")]
		private readonly bool _fParentCollection;

		[Token(Token = "0x4000131")]
		[FieldOffset(Offset = "0x50")]
		[CompilerGenerated]
		private CollectionChangeEventHandler m_RelationPropertyChanged;

		[Token(Token = "0x170000AE")]
		protected override ArrayList List
		{
			[Token(Token = "0x6000431")]
			[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000AF")]
		public override DataRelation this[int index]
		{
			[Token(Token = "0x6000434")]
			[Address(RVA = "0x24FE2F0", Offset = "0x24FC8F0", VA = "0x1824FE2F0", Slot = "13")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000B0")]
		public override DataRelation this[string name]
		{
			[Token(Token = "0x6000435")]
			[Address(RVA = "0x24FE1F0", Offset = "0x24FC7F0", VA = "0x1824FE1F0", Slot = "14")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x14000006")]
		internal event CollectionChangeEventHandler RelationPropertyChanged
		{
			[Token(Token = "0x6000436")]
			[Address(RVA = "0x24FE150", Offset = "0x24FC750", VA = "0x1824FE150")]
			[CompilerGenerated]
			add
			{
			}
			[Token(Token = "0x6000437")]
			[Address(RVA = "0x24FE3F0", Offset = "0x24FC9F0", VA = "0x1824FE3F0")]
			[CompilerGenerated]
			remove
			{
			}
		}

		[Token(Token = "0x6000430")]
		[Address(RVA = "0x24FE090", Offset = "0x24FC690", VA = "0x1824FE090")]
		internal DataTableRelationCollection(DataTable table, bool fParentCollection)
		{
		}

		[Token(Token = "0x6000432")]
		[Address(RVA = "0x24FDD90", Offset = "0x24FC390", VA = "0x1824FDD90")]
		private void EnsureDataSet()
		{
		}

		[Token(Token = "0x6000433")]
		[Address(RVA = "0x24FDDE0", Offset = "0x24FC3E0", VA = "0x1824FDDE0", Slot = "18")]
		protected override DataSet GetDataSet()
		{
			return null;
		}

		[Token(Token = "0x6000438")]
		[Address(RVA = "0x24FDC30", Offset = "0x24FC230", VA = "0x1824FDC30")]
		private void AddCache(DataRelation relation)
		{
		}

		[Token(Token = "0x6000439")]
		[Address(RVA = "0x24FDC80", Offset = "0x24FC280", VA = "0x1824FDC80", Slot = "15")]
		protected override void AddCore(DataRelation relation)
		{
		}

		[Token(Token = "0x600043A")]
		[Address(RVA = "0x24FDE30", Offset = "0x24FC430", VA = "0x1824FDE30")]
		private void RemoveCache(DataRelation relation)
		{
		}

		[Token(Token = "0x600043B")]
		[Address(RVA = "0x24FDF00", Offset = "0x24FC500", VA = "0x1824FDF00", Slot = "21")]
		protected override void RemoveCore(DataRelation relation)
		{
		}
	}

	[Token(Token = "0x2000039")]
	internal sealed class DataSetRelationCollection : DataRelationCollection
	{
		[Token(Token = "0x4000132")]
		[FieldOffset(Offset = "0x38")]
		private readonly DataSet _dataSet;

		[Token(Token = "0x4000133")]
		[FieldOffset(Offset = "0x40")]
		private readonly ArrayList _relations;

		[Token(Token = "0x4000134")]
		[FieldOffset(Offset = "0x48")]
		private DataRelation[] _delayLoadingRelations;

		[Token(Token = "0x170000B1")]
		protected override ArrayList List
		{
			[Token(Token = "0x600043D")]
			[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000B2")]
		public override DataRelation this[int index]
		{
			[Token(Token = "0x6000440")]
			[Address(RVA = "0x24FAD90", Offset = "0x24F9390", VA = "0x1824FAD90", Slot = "13")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000B3")]
		public override DataRelation this[string name]
		{
			[Token(Token = "0x6000441")]
			[Address(RVA = "0x24FAC90", Offset = "0x24F9290", VA = "0x1824FAC90", Slot = "14")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600043C")]
		[Address(RVA = "0x24FABF0", Offset = "0x24F91F0", VA = "0x1824FABF0")]
		internal DataSetRelationCollection(DataSet dataSet)
		{
		}

		[Token(Token = "0x600043E")]
		[Address(RVA = "0x24FA3D0", Offset = "0x24F89D0", VA = "0x1824FA3D0", Slot = "16")]
		public override void Clear()
		{
		}

		[Token(Token = "0x600043F")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0", Slot = "18")]
		protected override DataSet GetDataSet()
		{
			return null;
		}

		[Token(Token = "0x6000442")]
		[Address(RVA = "0x24F9D00", Offset = "0x24F8300", VA = "0x1824F9D00", Slot = "15")]
		protected override void AddCore(DataRelation relation)
		{
		}

		[Token(Token = "0x6000443")]
		[Address(RVA = "0x24FA8A0", Offset = "0x24F8EA0", VA = "0x1824FA8A0", Slot = "21")]
		protected override void RemoveCore(DataRelation relation)
		{
		}

		[Token(Token = "0x6000444")]
		[Address(RVA = "0x24FA420", Offset = "0x24F8A20", VA = "0x1824FA420")]
		internal void FinishInitRelations()
		{
		}
	}

	[Token(Token = "0x4000128")]
	[FieldOffset(Offset = "0x10")]
	private DataRelation _inTransition;

	[Token(Token = "0x4000129")]
	[FieldOffset(Offset = "0x18")]
	private int _defaultNameIndex;

	[Token(Token = "0x400012A")]
	[FieldOffset(Offset = "0x20")]
	private CollectionChangeEventHandler _onCollectionChangedDelegate;

	[Token(Token = "0x400012B")]
	[FieldOffset(Offset = "0x28")]
	private CollectionChangeEventHandler _onCollectionChangingDelegate;

	[Token(Token = "0x400012C")]
	[FieldOffset(Offset = "0x0")]
	private static int s_objectTypeCount;

	[Token(Token = "0x400012D")]
	[FieldOffset(Offset = "0x30")]
	private readonly int _objectID;

	[Token(Token = "0x170000AB")]
	internal int ObjectID
	{
		[Token(Token = "0x600041B")]
		[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000AC")]
	public abstract DataRelation this[int index]
	{
		[Token(Token = "0x600041C")]
		get;
	}

	[Token(Token = "0x170000AD")]
	public abstract DataRelation this[string name]
	{
		[Token(Token = "0x600041D")]
		get;
	}

	[Token(Token = "0x14000005")]
	public event CollectionChangeEventHandler CollectionChanged
	{
		[Token(Token = "0x6000420")]
		[Address(RVA = "0x24F06A0", Offset = "0x24EECA0", VA = "0x1824F06A0")]
		add
		{
		}
		[Token(Token = "0x6000421")]
		[Address(RVA = "0x24F07B0", Offset = "0x24EEDB0", VA = "0x1824F07B0")]
		remove
		{
		}
	}

	[Token(Token = "0x600041E")]
	[Address(RVA = "0x24EF5A0", Offset = "0x24EDBA0", VA = "0x1824EF5A0")]
	public void Add(DataRelation relation)
	{
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x24EF2A0", Offset = "0x24ED8A0", VA = "0x1824EF2A0", Slot = "15")]
	protected virtual void AddCore(DataRelation relation)
	{
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x24EF840", Offset = "0x24EDE40", VA = "0x1824EF840")]
	internal string AssignName()
	{
		return null;
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x24EF860", Offset = "0x24EDE60", VA = "0x1824EF860", Slot = "16")]
	public virtual void Clear()
	{
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x24EFA80", Offset = "0x24EE080", VA = "0x1824EFA80", Slot = "17")]
	public virtual bool Contains(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000425")]
	[Address(RVA = "0x24EFAA0", Offset = "0x24EE0A0", VA = "0x1824EFAA0")]
	internal int InternalIndexOf(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6000426")]
	protected abstract DataSet GetDataSet();

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x24EFCA0", Offset = "0x24EE2A0", VA = "0x1824EFCA0")]
	private string MakeName(int index)
	{
		return null;
	}

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x24EFD40", Offset = "0x24EE340", VA = "0x1824EFD40", Slot = "19")]
	protected virtual void OnCollectionChanged(CollectionChangeEventArgs ccevent)
	{
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x24EFE00", Offset = "0x24EE400", VA = "0x1824EFE00", Slot = "20")]
	protected virtual void OnCollectionChanging(CollectionChangeEventArgs ccevent)
	{
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x24EFEC0", Offset = "0x24EE4C0", VA = "0x1824EFEC0")]
	internal void RegisterName(string name)
	{
	}

	[Token(Token = "0x600042B")]
	[Address(RVA = "0x24F0300", Offset = "0x24EE900", VA = "0x1824F0300")]
	public void Remove(DataRelation relation)
	{
	}

	[Token(Token = "0x600042C")]
	[Address(RVA = "0x24F00A0", Offset = "0x24EE6A0", VA = "0x1824F00A0")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x600042D")]
	[Address(RVA = "0x24F0120", Offset = "0x24EE720", VA = "0x1824F0120", Slot = "21")]
	protected virtual void RemoveCore(DataRelation relation)
	{
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x24F04E0", Offset = "0x24EEAE0", VA = "0x1824F04E0")]
	internal void UnregisterName(string name)
	{
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x24F0620", Offset = "0x24EEC20", VA = "0x1824F0620")]
	protected DataRelationCollection()
	{
	}
}
