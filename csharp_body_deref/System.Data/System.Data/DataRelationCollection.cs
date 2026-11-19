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
			[Address(RVA = "0x5E9A7C0", Offset = "0x5E997C0", VA = "0x5E9A7C0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000AF")]
		public override DataRelation this[int index]
		{
			[Token(Token = "0x6000434")]
			[Address(RVA = "0x5E9A850", Offset = "0x5E99850", VA = "0x5E9A850", Slot = "13")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000B0")]
		public override DataRelation this[string name]
		{
			[Token(Token = "0x6000435")]
			[Address(RVA = "0x5E9A940", Offset = "0x5E99940", VA = "0x5E9A940", Slot = "14")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x14000006")]
		internal event CollectionChangeEventHandler RelationPropertyChanged
		{
			[Token(Token = "0x6000436")]
			[Address(RVA = "0x5E9AA20", Offset = "0x5E99A20", VA = "0x5E9AA20")]
			[CompilerGenerated]
			add
			{
			}
			[Token(Token = "0x6000437")]
			[Address(RVA = "0x5E9AAB0", Offset = "0x5E99AB0", VA = "0x5E9AAB0")]
			[CompilerGenerated]
			remove
			{
			}
		}

		[Token(Token = "0x6000430")]
		[Address(RVA = "0x5E9A6B0", Offset = "0x5E996B0", VA = "0x5E9A6B0")]
		internal DataTableRelationCollection(DataTable table, bool fParentCollection)
		{
		}

		[Token(Token = "0x6000432")]
		[Address(RVA = "0x5E9A7D0", Offset = "0x5E997D0", VA = "0x5E9A7D0")]
		private void EnsureDataSet()
		{
		}

		[Token(Token = "0x6000433")]
		[Address(RVA = "0x5E9A810", Offset = "0x5E99810", VA = "0x5E9A810", Slot = "18")]
		protected override DataSet GetDataSet()
		{
			return null;
		}

		[Token(Token = "0x6000438")]
		[Address(RVA = "0x5E9AB40", Offset = "0x5E99B40", VA = "0x5E9AB40")]
		private void AddCache(DataRelation relation)
		{
		}

		[Token(Token = "0x6000439")]
		[Address(RVA = "0x5E9AB80", Offset = "0x5E99B80", VA = "0x5E9AB80", Slot = "15")]
		protected override void AddCore(DataRelation relation)
		{
		}

		[Token(Token = "0x600043A")]
		[Address(RVA = "0x5E9AC70", Offset = "0x5E99C70", VA = "0x5E9AC70")]
		private void RemoveCache(DataRelation relation)
		{
		}

		[Token(Token = "0x600043B")]
		[Address(RVA = "0x5E9AD30", Offset = "0x5E99D30", VA = "0x5E9AD30", Slot = "21")]
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
			[Address(RVA = "0x5E9AEF0", Offset = "0x5E99EF0", VA = "0x5E9AEF0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000B2")]
		public override DataRelation this[int index]
		{
			[Token(Token = "0x6000440")]
			[Address(RVA = "0x5E9AF50", Offset = "0x5E99F50", VA = "0x5E9AF50", Slot = "13")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000B3")]
		public override DataRelation this[string name]
		{
			[Token(Token = "0x6000441")]
			[Address(RVA = "0x5E9B040", Offset = "0x5E9A040", VA = "0x5E9B040", Slot = "14")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600043C")]
		[Address(RVA = "0x5E9ADF0", Offset = "0x5E99DF0", VA = "0x5E9ADF0")]
		internal DataSetRelationCollection(DataSet dataSet)
		{
		}

		[Token(Token = "0x600043E")]
		[Address(RVA = "0x5E9AF00", Offset = "0x5E99F00", VA = "0x5E9AF00", Slot = "16")]
		public override void Clear()
		{
		}

		[Token(Token = "0x600043F")]
		[Address(RVA = "0x5E9AF40", Offset = "0x5E99F40", VA = "0x5E9AF40", Slot = "18")]
		protected override DataSet GetDataSet()
		{
			return null;
		}

		[Token(Token = "0x6000442")]
		[Address(RVA = "0x5E9B120", Offset = "0x5E9A120", VA = "0x5E9B120", Slot = "15")]
		protected override void AddCore(DataRelation relation)
		{
		}

		[Token(Token = "0x6000443")]
		[Address(RVA = "0x5E9B830", Offset = "0x5E9A830", VA = "0x5E9B830", Slot = "21")]
		protected override void RemoveCore(DataRelation relation)
		{
		}

		[Token(Token = "0x6000444")]
		[Address(RVA = "0x5E9BB00", Offset = "0x5E9AB00", VA = "0x5E9BB00")]
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
		[Address(RVA = "0x5E99030", Offset = "0x5E98030", VA = "0x5E99030")]
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
		[Address(RVA = "0x5E995A0", Offset = "0x5E985A0", VA = "0x5E995A0")]
		add
		{
		}
		[Token(Token = "0x6000421")]
		[Address(RVA = "0x5E996C0", Offset = "0x5E986C0", VA = "0x5E996C0")]
		remove
		{
		}
	}

	[Token(Token = "0x600041E")]
	[Address(RVA = "0x5E99040", Offset = "0x5E98040", VA = "0x5E99040")]
	public void Add(DataRelation relation)
	{
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x5E992F0", Offset = "0x5E982F0", VA = "0x5E992F0", Slot = "15")]
	protected virtual void AddCore(DataRelation relation)
	{
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x5E997E0", Offset = "0x5E987E0", VA = "0x5E997E0")]
	internal string AssignName()
	{
		return null;
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x5E998B0", Offset = "0x5E988B0", VA = "0x5E998B0", Slot = "16")]
	public virtual void Clear()
	{
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x5E99B10", Offset = "0x5E98B10", VA = "0x5E99B10", Slot = "17")]
	public virtual bool Contains(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000425")]
	[Address(RVA = "0x5E99B20", Offset = "0x5E98B20", VA = "0x5E99B20")]
	internal int InternalIndexOf(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6000426")]
	protected abstract DataSet GetDataSet();

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x5E99800", Offset = "0x5E98800", VA = "0x5E99800")]
	private string MakeName(int index)
	{
		return null;
	}

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x5E99D20", Offset = "0x5E98D20", VA = "0x5E99D20", Slot = "19")]
	protected virtual void OnCollectionChanged(CollectionChangeEventArgs ccevent)
	{
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x5E99DE0", Offset = "0x5E98DE0", VA = "0x5E99DE0", Slot = "20")]
	protected virtual void OnCollectionChanging(CollectionChangeEventArgs ccevent)
	{
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x5E99EA0", Offset = "0x5E98EA0", VA = "0x5E99EA0")]
	internal void RegisterName(string name)
	{
	}

	[Token(Token = "0x600042B")]
	[Address(RVA = "0x5E9A080", Offset = "0x5E99080", VA = "0x5E9A080")]
	public void Remove(DataRelation relation)
	{
	}

	[Token(Token = "0x600042C")]
	[Address(RVA = "0x5E9A2A0", Offset = "0x5E992A0", VA = "0x5E9A2A0")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x600042D")]
	[Address(RVA = "0x5E9A310", Offset = "0x5E99310", VA = "0x5E9A310", Slot = "21")]
	protected virtual void RemoveCore(DataRelation relation)
	{
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x5E9A4F0", Offset = "0x5E994F0", VA = "0x5E9A4F0")]
	internal void UnregisterName(string name)
	{
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x5E9A630", Offset = "0x5E99630", VA = "0x5E9A630")]
	protected DataRelationCollection()
	{
	}
}
