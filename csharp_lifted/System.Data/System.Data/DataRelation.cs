// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.DataRelation
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.ComponentModel;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000036")]
[DefaultProperty("RelationName")]
[TypeConverter(typeof(RelationshipConverter))]
public class DataRelation
{
	[Token(Token = "0x4000115")]
	[FieldOffset(Offset = "0x10")]
	private DataSet _dataSet;

	[Token(Token = "0x4000116")]
	[FieldOffset(Offset = "0x18")]
	internal PropertyCollection _extendedProperties;

	[Token(Token = "0x4000117")]
	[FieldOffset(Offset = "0x20")]
	internal string _relationName;

	[Token(Token = "0x4000118")]
	[FieldOffset(Offset = "0x28")]
	private DataKey _childKey;

	[Token(Token = "0x4000119")]
	[FieldOffset(Offset = "0x30")]
	private DataKey _parentKey;

	[Token(Token = "0x400011A")]
	[FieldOffset(Offset = "0x38")]
	private UniqueConstraint _parentKeyConstraint;

	[Token(Token = "0x400011B")]
	[FieldOffset(Offset = "0x40")]
	private ForeignKeyConstraint _childKeyConstraint;

	[Token(Token = "0x400011C")]
	[FieldOffset(Offset = "0x48")]
	internal string[] _parentColumnNames;

	[Token(Token = "0x400011D")]
	[FieldOffset(Offset = "0x50")]
	internal string[] _childColumnNames;

	[Token(Token = "0x400011E")]
	[FieldOffset(Offset = "0x58")]
	internal string _parentTableName;

	[Token(Token = "0x400011F")]
	[FieldOffset(Offset = "0x60")]
	internal string _childTableName;

	[Token(Token = "0x4000120")]
	[FieldOffset(Offset = "0x68")]
	internal string _parentTableNamespace;

	[Token(Token = "0x4000121")]
	[FieldOffset(Offset = "0x70")]
	internal string _childTableNamespace;

	[Token(Token = "0x4000122")]
	[FieldOffset(Offset = "0x78")]
	internal bool _nested;

	[Token(Token = "0x4000123")]
	[FieldOffset(Offset = "0x79")]
	internal bool _createConstraints;

	[Token(Token = "0x4000124")]
	[FieldOffset(Offset = "0x7A")]
	private bool _checkMultipleNested;

	[Token(Token = "0x4000125")]
	[FieldOffset(Offset = "0x0")]
	private static int s_objectTypeCount;

	[Token(Token = "0x4000126")]
	[FieldOffset(Offset = "0x7C")]
	private readonly int _objectID;

	[Token(Token = "0x4000127")]
	[FieldOffset(Offset = "0x80")]
	[CompilerGenerated]
	private PropertyChangedEventHandler PropertyChanging;

	[Token(Token = "0x17000099")]
	public virtual DataColumn[] ChildColumns
	{
		[Token(Token = "0x60003F5")]
		[Address(RVA = "0x5E95550", Offset = "0x5E94550", VA = "0x5E95550", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009A")]
	internal DataColumn[] ChildColumnsReference
	{
		[Token(Token = "0x60003F6")]
		[Address(RVA = "0x5E956B0", Offset = "0x5E946B0", VA = "0x5E956B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009B")]
	internal DataKey ChildKey
	{
		[Token(Token = "0x60003F7")]
		[Address(RVA = "0x5E92B00", Offset = "0x5E91B00", VA = "0x5E92B00")]
		get
		{
			return default(DataKey);
		}
	}

	[Token(Token = "0x1700009C")]
	public virtual DataTable ChildTable
	{
		[Token(Token = "0x60003F8")]
		[Address(RVA = "0x5E956C0", Offset = "0x5E946C0", VA = "0x5E956C0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009D")]
	[Browsable(false)]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	public virtual DataSet DataSet
	{
		[Token(Token = "0x60003F9")]
		[Address(RVA = "0x5E95700", Offset = "0x5E94700", VA = "0x5E95700", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009E")]
	internal string[] ParentColumnNames
	{
		[Token(Token = "0x60003FA")]
		[Address(RVA = "0x5E95710", Offset = "0x5E94710", VA = "0x5E95710")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009F")]
	internal string[] ChildColumnNames
	{
		[Token(Token = "0x60003FB")]
		[Address(RVA = "0x5E95720", Offset = "0x5E94720", VA = "0x5E95720")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A0")]
	public virtual DataColumn[] ParentColumns
	{
		[Token(Token = "0x6000401")]
		[Address(RVA = "0x5E95E30", Offset = "0x5E94E30", VA = "0x5E95E30", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A1")]
	internal DataColumn[] ParentColumnsReference
	{
		[Token(Token = "0x6000402")]
		[Address(RVA = "0x5E95E50", Offset = "0x5E94E50", VA = "0x5E95E50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A2")]
	internal DataKey ParentKey
	{
		[Token(Token = "0x6000403")]
		[Address(RVA = "0x5E92B10", Offset = "0x5E91B10", VA = "0x5E92B10")]
		get
		{
			return default(DataKey);
		}
	}

	[Token(Token = "0x170000A3")]
	public virtual DataTable ParentTable
	{
		[Token(Token = "0x6000404")]
		[Address(RVA = "0x5E95E60", Offset = "0x5E94E60", VA = "0x5E95E60", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A4")]
	[DefaultValue("")]
	public virtual string RelationName
	{
		[Token(Token = "0x6000405")]
		[Address(RVA = "0x5E95EA0", Offset = "0x5E94EA0", VA = "0x5E95EA0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A5")]
	[DefaultValue(false)]
	public virtual bool Nested
	{
		[Token(Token = "0x6000408")]
		[Address(RVA = "0x5E96730", Offset = "0x5E95730", VA = "0x5E96730", Slot = "10")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000409")]
		[Address(RVA = "0x5E96740", Offset = "0x5E95740", VA = "0x5E96740", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x170000A6")]
	public virtual UniqueConstraint ParentKeyConstraint
	{
		[Token(Token = "0x600040A")]
		[Address(RVA = "0x5E98190", Offset = "0x5E97190", VA = "0x5E98190", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A7")]
	public virtual ForeignKeyConstraint ChildKeyConstraint
	{
		[Token(Token = "0x600040C")]
		[Address(RVA = "0x5E981B0", Offset = "0x5E971B0", VA = "0x5E981B0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A8")]
	[Browsable(false)]
	public PropertyCollection ExtendedProperties
	{
		[Token(Token = "0x600040D")]
		[Address(RVA = "0x5E981C0", Offset = "0x5E971C0", VA = "0x5E981C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A9")]
	internal bool CheckMultipleNested
	{
		[Token(Token = "0x600040E")]
		[Address(RVA = "0x5E98230", Offset = "0x5E97230", VA = "0x5E98230")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600040F")]
		[Address(RVA = "0x5E98240", Offset = "0x5E97240", VA = "0x5E98240")]
		set
		{
		}
	}

	[Token(Token = "0x170000AA")]
	internal int ObjectID
	{
		[Token(Token = "0x600041A")]
		[Address(RVA = "0x5E99020", Offset = "0x5E98020", VA = "0x5E99020")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x5E94CA0", Offset = "0x5E93CA0", VA = "0x5E94CA0")]
	public DataRelation(string relationName, DataColumn parentColumn, DataColumn childColumn, bool createConstraints)
	{
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x5E951F0", Offset = "0x5E941F0", VA = "0x5E951F0")]
	public DataRelation(string relationName, DataColumn[] parentColumns, DataColumn[] childColumns)
	{
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x5E95290", Offset = "0x5E94290", VA = "0x5E95290")]
	public DataRelation(string relationName, DataColumn[] parentColumns, DataColumn[] childColumns, bool createConstraints)
	{
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x5E95330", Offset = "0x5E94330", VA = "0x5E95330")]
	[Browsable(false)]
	public DataRelation(string relationName, string parentTableName, string childTableName, string[] parentColumnNames, string[] childColumnNames, bool nested)
	{
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x5E95430", Offset = "0x5E94430", VA = "0x5E95430")]
	[Browsable(false)]
	public DataRelation(string relationName, string parentTableName, string parentTableNamespace, string childTableName, string childTableNamespace, string[] parentColumnNames, string[] childColumnNames, bool nested)
	{
	}

	[Token(Token = "0x60003FC")]
	[Address(RVA = "0x5E95730", Offset = "0x5E94730", VA = "0x5E95730")]
	private static bool IsKeyNull(object[] values)
	{
		return default(bool);
	}

	[Token(Token = "0x60003FD")]
	[Address(RVA = "0x5E957D0", Offset = "0x5E947D0", VA = "0x5E957D0")]
	internal static DataRow[] GetChildRows(DataKey parentKey, DataKey childKey, DataRow parentRow, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x5E95990", Offset = "0x5E94990", VA = "0x5E95990")]
	internal static DataRow[] GetParentRows(DataKey parentKey, DataKey childKey, DataRow childRow, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x60003FF")]
	[Address(RVA = "0x5E95B30", Offset = "0x5E94B30", VA = "0x5E95B30")]
	internal static DataRow GetParentRow(DataKey parentKey, DataKey childKey, DataRow childRow, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x6000400")]
	[Address(RVA = "0x5E95E10", Offset = "0x5E94E10", VA = "0x5E95E10")]
	internal void SetDataSet(DataSet dataSet)
	{
	}

	[Token(Token = "0x6000406")]
	[Address(RVA = "0x5E95EB0", Offset = "0x5E94EB0", VA = "0x5E95EB0")]
	internal void CheckNamespaceValidityForNestedRelations(string ns)
	{
	}

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x5E96270", Offset = "0x5E95270", VA = "0x5E96270")]
	internal void CheckNestedRelations()
	{
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x5E981A0", Offset = "0x5E971A0", VA = "0x5E981A0")]
	internal void SetParentKeyConstraint(UniqueConstraint value)
	{
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x5E98250", Offset = "0x5E97250", VA = "0x5E98250")]
	internal void SetChildKeyConstraint(ForeignKeyConstraint value)
	{
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x5E98260", Offset = "0x5E97260", VA = "0x5E98260")]
	internal void CheckState()
	{
	}

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x5E95570", Offset = "0x5E94570", VA = "0x5E95570")]
	protected void CheckStateForProperty()
	{
	}

	[Token(Token = "0x6000413")]
	[Address(RVA = "0x5E94EC0", Offset = "0x5E93EC0", VA = "0x5E94EC0")]
	private void Create(string relationName, DataColumn[] parentColumns, DataColumn[] childColumns, bool createConstraints)
	{
	}

	[Token(Token = "0x6000414")]
	[Address(RVA = "0x5E984C0", Offset = "0x5E974C0", VA = "0x5E984C0")]
	internal DataRelation Clone(DataSet destination)
	{
		return null;
	}

	[Token(Token = "0x6000415")]
	[Address(RVA = "0x5E98D80", Offset = "0x5E97D80", VA = "0x5E98D80")]
	protected internal void OnPropertyChanging(PropertyChangedEventArgs pcevent)
	{
	}

	[Token(Token = "0x6000416")]
	[Address(RVA = "0x5E98040", Offset = "0x5E97040", VA = "0x5E98040")]
	protected internal void RaisePropertyChanging(string name)
	{
	}

	[Token(Token = "0x6000417")]
	[Address(RVA = "0x5E98E40", Offset = "0x5E97E40", VA = "0x5E98E40", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000418")]
	[Address(RVA = "0x5E97B20", Offset = "0x5E96B20", VA = "0x5E97B20")]
	internal void ValidateMultipleNestedRelations()
	{
	}

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x5E98E60", Offset = "0x5E97E60", VA = "0x5E98E60")]
	private bool IsAutoGenerated(DataColumn col)
	{
		return default(bool);
	}
}
