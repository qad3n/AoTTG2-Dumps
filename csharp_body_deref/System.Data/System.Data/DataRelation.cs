using System.ComponentModel;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000025")]
[TypeConverter(typeof(RelationshipConverter))]
[DefaultProperty("RelationName")]
public class DataRelation
{
	[Token(Token = "0x4000063")]
	[FieldOffset(Offset = "0x10")]
	private DataSet _dataSet;

	[Token(Token = "0x4000064")]
	[FieldOffset(Offset = "0x18")]
	internal PropertyCollection _extendedProperties;

	[Token(Token = "0x4000065")]
	[FieldOffset(Offset = "0x20")]
	internal string _relationName;

	[Token(Token = "0x4000066")]
	[FieldOffset(Offset = "0x28")]
	private DataKey _childKey;

	[Token(Token = "0x4000067")]
	[FieldOffset(Offset = "0x30")]
	private DataKey _parentKey;

	[Token(Token = "0x4000068")]
	[FieldOffset(Offset = "0x38")]
	private UniqueConstraint _parentKeyConstraint;

	[Token(Token = "0x4000069")]
	[FieldOffset(Offset = "0x40")]
	private ForeignKeyConstraint _childKeyConstraint;

	[Token(Token = "0x400006A")]
	[FieldOffset(Offset = "0x48")]
	internal string[] _parentColumnNames;

	[Token(Token = "0x400006B")]
	[FieldOffset(Offset = "0x50")]
	internal string[] _childColumnNames;

	[Token(Token = "0x400006C")]
	[FieldOffset(Offset = "0x58")]
	internal string _parentTableName;

	[Token(Token = "0x400006D")]
	[FieldOffset(Offset = "0x60")]
	internal string _childTableName;

	[Token(Token = "0x400006E")]
	[FieldOffset(Offset = "0x68")]
	internal string _parentTableNamespace;

	[Token(Token = "0x400006F")]
	[FieldOffset(Offset = "0x70")]
	internal string _childTableNamespace;

	[Token(Token = "0x4000070")]
	[FieldOffset(Offset = "0x78")]
	internal bool _nested;

	[Token(Token = "0x4000071")]
	[FieldOffset(Offset = "0x79")]
	internal bool _createConstraints;

	[Token(Token = "0x4000072")]
	[FieldOffset(Offset = "0x7A")]
	private bool _checkMultipleNested;

	[Token(Token = "0x4000073")]
	[FieldOffset(Offset = "0x0")]
	private static int s_objectTypeCount;

	[Token(Token = "0x4000074")]
	[FieldOffset(Offset = "0x7C")]
	private readonly int _objectID;

	[Token(Token = "0x4000075")]
	[FieldOffset(Offset = "0x80")]
	[CompilerGenerated]
	private PropertyChangedEventHandler PropertyChanging;

	[Token(Token = "0x17000058")]
	public virtual DataColumn[] ChildColumns
	{
		[Token(Token = "0x6000287")]
		[Address(RVA = "0x42149F0", Offset = "0x42149F0", VA = "0x42149F0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000059")]
	internal DataColumn[] ChildColumnsReference
	{
		[Token(Token = "0x6000288")]
		[Address(RVA = "0x4214B20", Offset = "0x4214B20", VA = "0x4214B20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005A")]
	internal DataKey ChildKey
	{
		[Token(Token = "0x6000289")]
		[Address(RVA = "0x4203D40", Offset = "0x4203D40", VA = "0x4203D40")]
		get
		{
			return default(DataKey);
		}
	}

	[Token(Token = "0x1700005B")]
	public virtual DataTable ChildTable
	{
		[Token(Token = "0x600028A")]
		[Address(RVA = "0x4214B30", Offset = "0x4214B30", VA = "0x4214B30", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005C")]
	[Browsable(false)]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	public virtual DataSet DataSet
	{
		[Token(Token = "0x600028B")]
		[Address(RVA = "0x4214B70", Offset = "0x4214B70", VA = "0x4214B70", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005D")]
	internal string[] ParentColumnNames
	{
		[Token(Token = "0x600028C")]
		[Address(RVA = "0x4214B80", Offset = "0x4214B80", VA = "0x4214B80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005E")]
	internal string[] ChildColumnNames
	{
		[Token(Token = "0x600028D")]
		[Address(RVA = "0x4214B90", Offset = "0x4214B90", VA = "0x4214B90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005F")]
	public virtual DataColumn[] ParentColumns
	{
		[Token(Token = "0x6000293")]
		[Address(RVA = "0x42151A0", Offset = "0x42151A0", VA = "0x42151A0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000060")]
	internal DataColumn[] ParentColumnsReference
	{
		[Token(Token = "0x6000294")]
		[Address(RVA = "0x42151C0", Offset = "0x42151C0", VA = "0x42151C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000061")]
	internal DataKey ParentKey
	{
		[Token(Token = "0x6000295")]
		[Address(RVA = "0x4203DA0", Offset = "0x4203DA0", VA = "0x4203DA0")]
		get
		{
			return default(DataKey);
		}
	}

	[Token(Token = "0x17000062")]
	public virtual DataTable ParentTable
	{
		[Token(Token = "0x6000296")]
		[Address(RVA = "0x42151D0", Offset = "0x42151D0", VA = "0x42151D0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000063")]
	[DefaultValue("")]
	public virtual string RelationName
	{
		[Token(Token = "0x6000297")]
		[Address(RVA = "0x4215210", Offset = "0x4215210", VA = "0x4215210", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000064")]
	[DefaultValue(false)]
	public virtual bool Nested
	{
		[Token(Token = "0x600029A")]
		[Address(RVA = "0x4215BA0", Offset = "0x4215BA0", VA = "0x4215BA0", Slot = "10")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600029B")]
		[Address(RVA = "0x4215BB0", Offset = "0x4215BB0", VA = "0x4215BB0", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x17000065")]
	public virtual UniqueConstraint ParentKeyConstraint
	{
		[Token(Token = "0x600029C")]
		[Address(RVA = "0x4217AD0", Offset = "0x4217AD0", VA = "0x4217AD0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000066")]
	public virtual ForeignKeyConstraint ChildKeyConstraint
	{
		[Token(Token = "0x600029E")]
		[Address(RVA = "0x4217AF0", Offset = "0x4217AF0", VA = "0x4217AF0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000067")]
	[Browsable(false)]
	public PropertyCollection ExtendedProperties
	{
		[Token(Token = "0x600029F")]
		[Address(RVA = "0x4217B00", Offset = "0x4217B00", VA = "0x4217B00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000068")]
	internal bool CheckMultipleNested
	{
		[Token(Token = "0x60002A0")]
		[Address(RVA = "0x4217B70", Offset = "0x4217B70", VA = "0x4217B70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002A1")]
		[Address(RVA = "0x4217B80", Offset = "0x4217B80", VA = "0x4217B80")]
		set
		{
		}
	}

	[Token(Token = "0x17000069")]
	internal int ObjectID
	{
		[Token(Token = "0x60002AC")]
		[Address(RVA = "0x4218930", Offset = "0x4218930", VA = "0x4218930")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x4213FE0", Offset = "0x4213FE0", VA = "0x4213FE0")]
	public DataRelation(string relationName, DataColumn parentColumn, DataColumn childColumn, bool createConstraints)
	{
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x4214690", Offset = "0x4214690", VA = "0x4214690")]
	public DataRelation(string relationName, DataColumn[] parentColumns, DataColumn[] childColumns)
	{
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x4214730", Offset = "0x4214730", VA = "0x4214730")]
	public DataRelation(string relationName, DataColumn[] parentColumns, DataColumn[] childColumns, bool createConstraints)
	{
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x42147D0", Offset = "0x42147D0", VA = "0x42147D0")]
	[Browsable(false)]
	public DataRelation(string relationName, string parentTableName, string childTableName, string[] parentColumnNames, string[] childColumnNames, bool nested)
	{
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x42148D0", Offset = "0x42148D0", VA = "0x42148D0")]
	[Browsable(false)]
	public DataRelation(string relationName, string parentTableName, string parentTableNamespace, string childTableName, string childTableNamespace, string[] parentColumnNames, string[] childColumnNames, bool nested)
	{
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x4214BA0", Offset = "0x4214BA0", VA = "0x4214BA0")]
	private static bool IsKeyNull(object[] values)
	{
		return default(bool);
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x4214C50", Offset = "0x4214C50", VA = "0x4214C50")]
	internal static DataRow[] GetChildRows(DataKey parentKey, DataKey childKey, DataRow parentRow, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x4214DC0", Offset = "0x4214DC0", VA = "0x4214DC0")]
	internal static DataRow[] GetParentRows(DataKey parentKey, DataKey childKey, DataRow childRow, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x4214F30", Offset = "0x4214F30", VA = "0x4214F30")]
	internal static DataRow GetParentRow(DataKey parentKey, DataKey childKey, DataRow childRow, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x4215180", Offset = "0x4215180", VA = "0x4215180")]
	internal void SetDataSet(DataSet dataSet)
	{
	}

	[Token(Token = "0x6000298")]
	[Address(RVA = "0x4215220", Offset = "0x4215220", VA = "0x4215220")]
	internal void CheckNamespaceValidityForNestedRelations(string ns)
	{
	}

	[Token(Token = "0x6000299")]
	[Address(RVA = "0x42156B0", Offset = "0x42156B0", VA = "0x42156B0")]
	internal void CheckNestedRelations()
	{
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x4217AE0", Offset = "0x4217AE0", VA = "0x4217AE0")]
	internal void SetParentKeyConstraint(UniqueConstraint value)
	{
	}

	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x4217B90", Offset = "0x4217B90", VA = "0x4217B90")]
	internal void SetChildKeyConstraint(ForeignKeyConstraint value)
	{
	}

	[Token(Token = "0x60002A3")]
	[Address(RVA = "0x4217BA0", Offset = "0x4217BA0", VA = "0x4217BA0")]
	internal void CheckState()
	{
	}

	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x4214A10", Offset = "0x4214A10", VA = "0x4214A10")]
	protected void CheckStateForProperty()
	{
	}

	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x4214200", Offset = "0x4214200", VA = "0x4214200")]
	private void Create(string relationName, DataColumn[] parentColumns, DataColumn[] childColumns, bool createConstraints)
	{
	}

	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x4217E10", Offset = "0x4217E10", VA = "0x4217E10")]
	internal DataRelation Clone(DataSet destination)
	{
		return null;
	}

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x4218690", Offset = "0x4218690", VA = "0x4218690")]
	protected internal void OnPropertyChanging(PropertyChangedEventArgs pcevent)
	{
	}

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x4217A70", Offset = "0x4217A70", VA = "0x4217A70")]
	protected internal void RaisePropertyChanging(string name)
	{
	}

	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x4218750", Offset = "0x4218750", VA = "0x4218750", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x42174B0", Offset = "0x42174B0", VA = "0x42174B0")]
	internal void ValidateMultipleNestedRelations()
	{
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x4218770", Offset = "0x4218770", VA = "0x4218770")]
	private bool IsAutoGenerated(DataColumn col)
	{
		return default(bool);
	}
}
