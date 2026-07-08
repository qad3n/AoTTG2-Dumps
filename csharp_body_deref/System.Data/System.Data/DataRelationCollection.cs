using System.Collections;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000026")]
[DefaultEvent("CollectionChanged")]
[DefaultProperty("Table")]
public abstract class DataRelationCollection : InternalDataCollectionBase
{
	[Token(Token = "0x2000027")]
	internal sealed class DataTableRelationCollection : DataRelationCollection
	{
		[Token(Token = "0x400007C")]
		[FieldOffset(Offset = "0x38")]
		private readonly DataTable _table;

		[Token(Token = "0x400007D")]
		[FieldOffset(Offset = "0x40")]
		private readonly ArrayList _relations;

		[Token(Token = "0x400007E")]
		[FieldOffset(Offset = "0x48")]
		private readonly bool _fParentCollection;

		[Token(Token = "0x1700006D")]
		protected override ArrayList List
		{
			[Token(Token = "0x60002C3")]
			[Address(RVA = "0x423A550", Offset = "0x423A550", VA = "0x423A550", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700006E")]
		public override DataRelation this[int index]
		{
			[Token(Token = "0x60002C6")]
			[Address(RVA = "0x423A5E0", Offset = "0x423A5E0", VA = "0x423A5E0", Slot = "13")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700006F")]
		public override DataRelation this[string name]
		{
			[Token(Token = "0x60002C7")]
			[Address(RVA = "0x423A6D0", Offset = "0x423A6D0", VA = "0x423A6D0", Slot = "14")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x14000004")]
		internal event CollectionChangeEventHandler RelationPropertyChanged
		{
			[Token(Token = "0x60002C8")]
			[Address(RVA = "0x423A7B0", Offset = "0x423A7B0", VA = "0x423A7B0")]
			[CompilerGenerated]
			add
			{
			}
			[Token(Token = "0x60002C9")]
			[Address(RVA = "0x423A840", Offset = "0x423A840", VA = "0x423A840")]
			[CompilerGenerated]
			remove
			{
			}
		}

		[Token(Token = "0x60002C2")]
		[Address(RVA = "0x423A440", Offset = "0x423A440", VA = "0x423A440")]
		internal DataTableRelationCollection(DataTable table, bool fParentCollection)
		{
		}

		[Token(Token = "0x60002C4")]
		[Address(RVA = "0x423A560", Offset = "0x423A560", VA = "0x423A560")]
		private void EnsureDataSet()
		{
		}

		[Token(Token = "0x60002C5")]
		[Address(RVA = "0x423A5A0", Offset = "0x423A5A0", VA = "0x423A5A0", Slot = "18")]
		protected override DataSet GetDataSet()
		{
			return null;
		}

		[Token(Token = "0x60002CA")]
		[Address(RVA = "0x423A8D0", Offset = "0x423A8D0", VA = "0x423A8D0")]
		private void AddCache(DataRelation relation)
		{
		}

		[Token(Token = "0x60002CB")]
		[Address(RVA = "0x423A910", Offset = "0x423A910", VA = "0x423A910", Slot = "15")]
		protected override void AddCore(DataRelation relation)
		{
		}

		[Token(Token = "0x60002CC")]
		[Address(RVA = "0x423AA00", Offset = "0x423AA00", VA = "0x423AA00")]
		private void RemoveCache(DataRelation relation)
		{
		}

		[Token(Token = "0x60002CD")]
		[Address(RVA = "0x423AAC0", Offset = "0x423AAC0", VA = "0x423AAC0", Slot = "21")]
		protected override void RemoveCore(DataRelation relation)
		{
		}
	}

	[Token(Token = "0x2000028")]
	internal sealed class DataSetRelationCollection : DataRelationCollection
	{
		[Token(Token = "0x4000080")]
		[FieldOffset(Offset = "0x38")]
		private readonly DataSet _dataSet;

		[Token(Token = "0x4000081")]
		[FieldOffset(Offset = "0x40")]
		private readonly ArrayList _relations;

		[Token(Token = "0x4000082")]
		[FieldOffset(Offset = "0x48")]
		private DataRelation[] _delayLoadingRelations;

		[Token(Token = "0x17000070")]
		protected override ArrayList List
		{
			[Token(Token = "0x60002CF")]
			[Address(RVA = "0x423AC70", Offset = "0x423AC70", VA = "0x423AC70", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000071")]
		public override DataRelation this[int index]
		{
			[Token(Token = "0x60002D2")]
			[Address(RVA = "0x423ACD0", Offset = "0x423ACD0", VA = "0x423ACD0", Slot = "13")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000072")]
		public override DataRelation this[string name]
		{
			[Token(Token = "0x60002D3")]
			[Address(RVA = "0x423ADC0", Offset = "0x423ADC0", VA = "0x423ADC0", Slot = "14")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60002CE")]
		[Address(RVA = "0x423AB70", Offset = "0x423AB70", VA = "0x423AB70")]
		internal DataSetRelationCollection(DataSet dataSet)
		{
		}

		[Token(Token = "0x60002D0")]
		[Address(RVA = "0x423AC80", Offset = "0x423AC80", VA = "0x423AC80", Slot = "16")]
		public override void Clear()
		{
		}

		[Token(Token = "0x60002D1")]
		[Address(RVA = "0x423ACC0", Offset = "0x423ACC0", VA = "0x423ACC0", Slot = "18")]
		protected override DataSet GetDataSet()
		{
			return null;
		}

		[Token(Token = "0x60002D4")]
		[Address(RVA = "0x423AEA0", Offset = "0x423AEA0", VA = "0x423AEA0", Slot = "15")]
		protected override void AddCore(DataRelation relation)
		{
		}

		[Token(Token = "0x60002D5")]
		[Address(RVA = "0x423B4C0", Offset = "0x423B4C0", VA = "0x423B4C0", Slot = "21")]
		protected override void RemoveCore(DataRelation relation)
		{
		}

		[Token(Token = "0x60002D6")]
		[Address(RVA = "0x423B780", Offset = "0x423B780", VA = "0x423B780")]
		internal void FinishInitRelations()
		{
		}
	}

	[Token(Token = "0x4000076")]
	[FieldOffset(Offset = "0x10")]
	private DataRelation _inTransition;

	[Token(Token = "0x4000077")]
	[FieldOffset(Offset = "0x18")]
	private int _defaultNameIndex;

	[Token(Token = "0x4000078")]
	[FieldOffset(Offset = "0x20")]
	private CollectionChangeEventHandler _onCollectionChangedDelegate;

	[Token(Token = "0x4000079")]
	[FieldOffset(Offset = "0x28")]
	private CollectionChangeEventHandler _onCollectionChangingDelegate;

	[Token(Token = "0x400007A")]
	[FieldOffset(Offset = "0x0")]
	private static int s_objectTypeCount;

	[Token(Token = "0x400007B")]
	[FieldOffset(Offset = "0x30")]
	private readonly int _objectID;

	[Token(Token = "0x1700006A")]
	internal int ObjectID
	{
		[Token(Token = "0x60002AD")]
		[Address(RVA = "0x4238D30", Offset = "0x4238D30", VA = "0x4238D30")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006B")]
	public abstract DataRelation this[int index]
	{
		[Token(Token = "0x60002AE")]
		get;
	}

	[Token(Token = "0x1700006C")]
	public abstract DataRelation this[string name]
	{
		[Token(Token = "0x60002AF")]
		get;
	}

	[Token(Token = "0x14000003")]
	public event CollectionChangeEventHandler CollectionChanged
	{
		[Token(Token = "0x60002B2")]
		[Address(RVA = "0x4239340", Offset = "0x4239340", VA = "0x4239340")]
		add
		{
		}
		[Token(Token = "0x60002B3")]
		[Address(RVA = "0x4239460", Offset = "0x4239460", VA = "0x4239460")]
		remove
		{
		}
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x4238D40", Offset = "0x4238D40", VA = "0x4238D40")]
	public void Add(DataRelation relation)
	{
	}

	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x4239050", Offset = "0x4239050", VA = "0x4239050", Slot = "15")]
	protected virtual void AddCore(DataRelation relation)
	{
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x4239580", Offset = "0x4239580", VA = "0x4239580")]
	internal string AssignName()
	{
		return null;
	}

	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x4239650", Offset = "0x4239650", VA = "0x4239650", Slot = "16")]
	public virtual void Clear()
	{
	}

	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x4239900", Offset = "0x4239900", VA = "0x4239900", Slot = "17")]
	public virtual bool Contains(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x4239910", Offset = "0x4239910", VA = "0x4239910")]
	internal int InternalIndexOf(string name)
	{
		return default(int);
	}

	[Token(Token = "0x60002B8")]
	protected abstract DataSet GetDataSet();

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x42395A0", Offset = "0x42395A0", VA = "0x42395A0")]
	private string MakeName(int index)
	{
		return null;
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x4239AA0", Offset = "0x4239AA0", VA = "0x4239AA0", Slot = "19")]
	protected virtual void OnCollectionChanged(CollectionChangeEventArgs ccevent)
	{
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x4239B60", Offset = "0x4239B60", VA = "0x4239B60", Slot = "20")]
	protected virtual void OnCollectionChanging(CollectionChangeEventArgs ccevent)
	{
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x4239C20", Offset = "0x4239C20", VA = "0x4239C20")]
	internal void RegisterName(string name)
	{
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x4239E10", Offset = "0x4239E10", VA = "0x4239E10")]
	public void Remove(DataRelation relation)
	{
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x423A010", Offset = "0x423A010", VA = "0x423A010")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x423A080", Offset = "0x423A080", VA = "0x423A080", Slot = "21")]
	protected virtual void RemoveCore(DataRelation relation)
	{
	}

	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x423A280", Offset = "0x423A280", VA = "0x423A280")]
	internal void UnregisterName(string name)
	{
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x423A3C0", Offset = "0x423A3C0", VA = "0x423A3C0")]
	protected DataRelationCollection()
	{
	}
}
