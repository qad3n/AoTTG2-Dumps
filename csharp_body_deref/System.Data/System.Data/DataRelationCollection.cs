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
			[Address(RVA = "0x4577CB0", Offset = "0x4577CB0", VA = "0x4577CB0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700006E")]
		public override DataRelation this[int index]
		{
			[Token(Token = "0x60002C6")]
			[Address(RVA = "0x4577D40", Offset = "0x4577D40", VA = "0x4577D40", Slot = "13")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700006F")]
		public override DataRelation this[string name]
		{
			[Token(Token = "0x60002C7")]
			[Address(RVA = "0x4577E30", Offset = "0x4577E30", VA = "0x4577E30", Slot = "14")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x14000004")]
		internal event CollectionChangeEventHandler RelationPropertyChanged
		{
			[Token(Token = "0x60002C8")]
			[Address(RVA = "0x4577F10", Offset = "0x4577F10", VA = "0x4577F10")]
			[CompilerGenerated]
			add
			{
			}
			[Token(Token = "0x60002C9")]
			[Address(RVA = "0x4577FA0", Offset = "0x4577FA0", VA = "0x4577FA0")]
			[CompilerGenerated]
			remove
			{
			}
		}

		[Token(Token = "0x60002C2")]
		[Address(RVA = "0x4577BA0", Offset = "0x4577BA0", VA = "0x4577BA0")]
		internal DataTableRelationCollection(DataTable table, bool fParentCollection)
		{
		}

		[Token(Token = "0x60002C4")]
		[Address(RVA = "0x4577CC0", Offset = "0x4577CC0", VA = "0x4577CC0")]
		private void EnsureDataSet()
		{
		}

		[Token(Token = "0x60002C5")]
		[Address(RVA = "0x4577D00", Offset = "0x4577D00", VA = "0x4577D00", Slot = "18")]
		protected override DataSet GetDataSet()
		{
			return null;
		}

		[Token(Token = "0x60002CA")]
		[Address(RVA = "0x4578030", Offset = "0x4578030", VA = "0x4578030")]
		private void AddCache(DataRelation relation)
		{
		}

		[Token(Token = "0x60002CB")]
		[Address(RVA = "0x4578070", Offset = "0x4578070", VA = "0x4578070", Slot = "15")]
		protected override void AddCore(DataRelation relation)
		{
		}

		[Token(Token = "0x60002CC")]
		[Address(RVA = "0x4578160", Offset = "0x4578160", VA = "0x4578160")]
		private void RemoveCache(DataRelation relation)
		{
		}

		[Token(Token = "0x60002CD")]
		[Address(RVA = "0x4578220", Offset = "0x4578220", VA = "0x4578220", Slot = "21")]
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
			[Address(RVA = "0x45783D0", Offset = "0x45783D0", VA = "0x45783D0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000071")]
		public override DataRelation this[int index]
		{
			[Token(Token = "0x60002D2")]
			[Address(RVA = "0x4578430", Offset = "0x4578430", VA = "0x4578430", Slot = "13")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000072")]
		public override DataRelation this[string name]
		{
			[Token(Token = "0x60002D3")]
			[Address(RVA = "0x4578520", Offset = "0x4578520", VA = "0x4578520", Slot = "14")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60002CE")]
		[Address(RVA = "0x45782D0", Offset = "0x45782D0", VA = "0x45782D0")]
		internal DataSetRelationCollection(DataSet dataSet)
		{
		}

		[Token(Token = "0x60002D0")]
		[Address(RVA = "0x45783E0", Offset = "0x45783E0", VA = "0x45783E0", Slot = "16")]
		public override void Clear()
		{
		}

		[Token(Token = "0x60002D1")]
		[Address(RVA = "0x4578420", Offset = "0x4578420", VA = "0x4578420", Slot = "18")]
		protected override DataSet GetDataSet()
		{
			return null;
		}

		[Token(Token = "0x60002D4")]
		[Address(RVA = "0x4578600", Offset = "0x4578600", VA = "0x4578600", Slot = "15")]
		protected override void AddCore(DataRelation relation)
		{
		}

		[Token(Token = "0x60002D5")]
		[Address(RVA = "0x4578C20", Offset = "0x4578C20", VA = "0x4578C20", Slot = "21")]
		protected override void RemoveCore(DataRelation relation)
		{
		}

		[Token(Token = "0x60002D6")]
		[Address(RVA = "0x4578EE0", Offset = "0x4578EE0", VA = "0x4578EE0")]
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
		[Address(RVA = "0x4576490", Offset = "0x4576490", VA = "0x4576490")]
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
		[Address(RVA = "0x4576AA0", Offset = "0x4576AA0", VA = "0x4576AA0")]
		add
		{
		}
		[Token(Token = "0x60002B3")]
		[Address(RVA = "0x4576BC0", Offset = "0x4576BC0", VA = "0x4576BC0")]
		remove
		{
		}
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x45764A0", Offset = "0x45764A0", VA = "0x45764A0")]
	public void Add(DataRelation relation)
	{
	}

	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x45767B0", Offset = "0x45767B0", VA = "0x45767B0", Slot = "15")]
	protected virtual void AddCore(DataRelation relation)
	{
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x4576CE0", Offset = "0x4576CE0", VA = "0x4576CE0")]
	internal string AssignName()
	{
		return null;
	}

	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x4576DB0", Offset = "0x4576DB0", VA = "0x4576DB0", Slot = "16")]
	public virtual void Clear()
	{
	}

	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x4577060", Offset = "0x4577060", VA = "0x4577060", Slot = "17")]
	public virtual bool Contains(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x4577070", Offset = "0x4577070", VA = "0x4577070")]
	internal int InternalIndexOf(string name)
	{
		return default(int);
	}

	[Token(Token = "0x60002B8")]
	protected abstract DataSet GetDataSet();

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x4576D00", Offset = "0x4576D00", VA = "0x4576D00")]
	private string MakeName(int index)
	{
		return null;
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x4577200", Offset = "0x4577200", VA = "0x4577200", Slot = "19")]
	protected virtual void OnCollectionChanged(CollectionChangeEventArgs ccevent)
	{
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x45772C0", Offset = "0x45772C0", VA = "0x45772C0", Slot = "20")]
	protected virtual void OnCollectionChanging(CollectionChangeEventArgs ccevent)
	{
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x4577380", Offset = "0x4577380", VA = "0x4577380")]
	internal void RegisterName(string name)
	{
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x4577570", Offset = "0x4577570", VA = "0x4577570")]
	public void Remove(DataRelation relation)
	{
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x4577770", Offset = "0x4577770", VA = "0x4577770")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x45777E0", Offset = "0x45777E0", VA = "0x45777E0", Slot = "21")]
	protected virtual void RemoveCore(DataRelation relation)
	{
	}

	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x45779E0", Offset = "0x45779E0", VA = "0x45779E0")]
	internal void UnregisterName(string name)
	{
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x4577B20", Offset = "0x4577B20", VA = "0x4577B20")]
	protected DataRelationCollection()
	{
	}
}
