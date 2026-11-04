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
		[Address(RVA = "0x24F3300", Offset = "0x24F1900", VA = "0x1824F3300", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009A")]
	internal DataColumn[] ChildColumnsReference
	{
		[Token(Token = "0x60003F6")]
		[Address(RVA = "0x24F32E0", Offset = "0x24F18E0", VA = "0x1824F32E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009B")]
	internal DataKey ChildKey
	{
		[Token(Token = "0x60003F7")]
		[Address(RVA = "0x24F32E0", Offset = "0x24F18E0", VA = "0x1824F32E0")]
		get
		{
			return default(DataKey);
		}
	}

	[Token(Token = "0x1700009C")]
	public virtual DataTable ChildTable
	{
		[Token(Token = "0x60003F8")]
		[Address(RVA = "0x24F3340", Offset = "0x24F1940", VA = "0x1824F3340", Slot = "5")]
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
		[Address(RVA = "0x24F3380", Offset = "0x24F1980", VA = "0x1824F3380", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009E")]
	internal string[] ParentColumnNames
	{
		[Token(Token = "0x60003FA")]
		[Address(RVA = "0x24F3430", Offset = "0x24F1A30", VA = "0x1824F3430")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009F")]
	internal string[] ChildColumnNames
	{
		[Token(Token = "0x60003FB")]
		[Address(RVA = "0x24F32D0", Offset = "0x24F18D0", VA = "0x1824F32D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A0")]
	public virtual DataColumn[] ParentColumns
	{
		[Token(Token = "0x6000401")]
		[Address(RVA = "0x24F3440", Offset = "0x24F1A40", VA = "0x1824F3440", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A1")]
	internal DataColumn[] ParentColumnsReference
	{
		[Token(Token = "0x6000402")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A2")]
	internal DataKey ParentKey
	{
		[Token(Token = "0x6000403")]
		[Address(RVA = "0x24F3480", Offset = "0x24F1A80", VA = "0x1824F3480")]
		get
		{
			return default(DataKey);
		}
	}

	[Token(Token = "0x170000A3")]
	public virtual DataTable ParentTable
	{
		[Token(Token = "0x6000404")]
		[Address(RVA = "0x24F34A0", Offset = "0x24F1AA0", VA = "0x1824F34A0", Slot = "8")]
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
		[Address(RVA = "0x24F34E0", Offset = "0x24F1AE0", VA = "0x1824F34E0", Slot = "9")]
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
		[Address(RVA = "0x24F3410", Offset = "0x24F1A10", VA = "0x1824F3410", Slot = "10")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000409")]
		[Address(RVA = "0x24F3500", Offset = "0x24F1B00", VA = "0x1824F3500", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x170000A6")]
	public virtual UniqueConstraint ParentKeyConstraint
	{
		[Token(Token = "0x600040A")]
		[Address(RVA = "0x24F3460", Offset = "0x24F1A60", VA = "0x1824F3460", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A7")]
	public virtual ForeignKeyConstraint ChildKeyConstraint
	{
		[Token(Token = "0x600040C")]
		[Address(RVA = "0x24F3320", Offset = "0x24F1920", VA = "0x1824F3320", Slot = "13")]
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
		[Address(RVA = "0x24F33A0", Offset = "0x24F19A0", VA = "0x1824F33A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A9")]
	internal bool CheckMultipleNested
	{
		[Token(Token = "0x600040E")]
		[Address(RVA = "0x1D2B3E0", Offset = "0x1D299E0", VA = "0x181D2B3E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600040F")]
		[Address(RVA = "0x1D2B780", Offset = "0x1D29D80", VA = "0x181D2B780")]
		set
		{
		}
	}

	[Token(Token = "0x170000AA")]
	internal int ObjectID
	{
		[Token(Token = "0x600041A")]
		[Address(RVA = "0x1BF1B70", Offset = "0x1BF0170", VA = "0x181BF1B70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x24F2DC0", Offset = "0x24F13C0", VA = "0x1824F2DC0")]
	public DataRelation(string relationName, DataColumn parentColumn, DataColumn childColumn, bool createConstraints)
	{
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x24F30C0", Offset = "0x24F16C0", VA = "0x1824F30C0")]
	public DataRelation(string relationName, DataColumn[] parentColumns, DataColumn[] childColumns)
	{
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x24F3010", Offset = "0x24F1610", VA = "0x1824F3010")]
	public DataRelation(string relationName, DataColumn[] parentColumns, DataColumn[] childColumns, bool createConstraints)
	{
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x24F31F0", Offset = "0x24F17F0", VA = "0x1824F31F0")]
	[Browsable(false)]
	public DataRelation(string relationName, string parentTableName, string childTableName, string[] parentColumnNames, string[] childColumnNames, bool nested)
	{
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x24F30E0", Offset = "0x24F16E0", VA = "0x1824F30E0")]
	[Browsable(false)]
	public DataRelation(string relationName, string parentTableName, string parentTableNamespace, string childTableName, string childTableNamespace, string[] parentColumnNames, string[] childColumnNames, bool nested)
	{
	}

	[Token(Token = "0x60003FC")]
	[Address(RVA = "0x24F2550", Offset = "0x24F0B50", VA = "0x1824F2550")]
	private static bool IsKeyNull(object[] values)
	{
		return default(bool);
	}

	[Token(Token = "0x60003FD")]
	[Address(RVA = "0x24F1F10", Offset = "0x24F0510", VA = "0x1824F1F10")]
	internal static DataRow[] GetChildRows(DataKey parentKey, DataKey childKey, DataRow parentRow, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x24F2220", Offset = "0x24F0820", VA = "0x1824F2220")]
	internal static DataRow[] GetParentRows(DataKey parentKey, DataKey childKey, DataRow childRow, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x60003FF")]
	[Address(RVA = "0x24F2080", Offset = "0x24F0680", VA = "0x1824F2080")]
	internal static DataRow GetParentRow(DataKey parentKey, DataKey childKey, DataRow childRow, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x6000400")]
	[Address(RVA = "0x24F27E0", Offset = "0x24F0DE0", VA = "0x1824F27E0")]
	internal void SetDataSet(DataSet dataSet)
	{
	}

	[Token(Token = "0x6000406")]
	[Address(RVA = "0x24F0AE0", Offset = "0x24EF0E0", VA = "0x1824F0AE0")]
	internal void CheckNamespaceValidityForNestedRelations(string ns)
	{
	}

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x24F0D70", Offset = "0x24EF370", VA = "0x1824F0D70")]
	internal void CheckNestedRelations()
	{
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
	internal void SetParentKeyConstraint(UniqueConstraint value)
	{
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700")]
	internal void SetChildKeyConstraint(ForeignKeyConstraint value)
	{
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x24F11D0", Offset = "0x24EF7D0", VA = "0x1824F11D0")]
	internal void CheckState()
	{
	}

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x24F1170", Offset = "0x24EF770", VA = "0x1824F1170")]
	protected void CheckStateForProperty()
	{
	}

	[Token(Token = "0x6000413")]
	[Address(RVA = "0x24F1C00", Offset = "0x24F0200", VA = "0x1824F1C00")]
	private void Create(string relationName, DataColumn[] parentColumns, DataColumn[] childColumns, bool createConstraints)
	{
	}

	[Token(Token = "0x6000414")]
	[Address(RVA = "0x24F14C0", Offset = "0x24EFAC0", VA = "0x1824F14C0")]
	internal DataRelation Clone(DataSet destination)
	{
		return null;
	}

	[Token(Token = "0x6000415")]
	[Address(RVA = "0x24F2600", Offset = "0x24F0C00", VA = "0x1824F2600")]
	protected internal void OnPropertyChanging(PropertyChangedEventArgs pcevent)
	{
	}

	[Token(Token = "0x6000416")]
	[Address(RVA = "0x24F26D0", Offset = "0x24F0CD0", VA = "0x1824F26D0")]
	protected internal void RaisePropertyChanging(string name)
	{
	}

	[Token(Token = "0x6000417")]
	[Address(RVA = "0x1B78A70", Offset = "0x1B77070", VA = "0x181B78A70", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000418")]
	[Address(RVA = "0x24F2800", Offset = "0x24F0E00", VA = "0x1824F2800")]
	internal void ValidateMultipleNestedRelations()
	{
	}

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x24F2390", Offset = "0x24F0990", VA = "0x1824F2390")]
	private bool IsAutoGenerated(DataColumn col)
	{
		return default(bool);
	}
}
