// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.UniqueConstraint
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.ComponentModel;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000091")]
[DefaultProperty("ConstraintName")]
public class UniqueConstraint : Constraint
{
	[Token(Token = "0x40002D8")]
	[FieldOffset(Offset = "0x38")]
	private DataKey _key;

	[Token(Token = "0x40002D9")]
	[FieldOffset(Offset = "0x40")]
	private Index _constraintIndex;

	[Token(Token = "0x40002DA")]
	[FieldOffset(Offset = "0x48")]
	internal bool _bPrimaryKey;

	[Token(Token = "0x40002DB")]
	[FieldOffset(Offset = "0x50")]
	internal string _constraintName;

	[Token(Token = "0x40002DC")]
	[FieldOffset(Offset = "0x58")]
	internal string[] _columnNames;

	[Token(Token = "0x17000143")]
	internal string[] ColumnNames
	{
		[Token(Token = "0x60007D9")]
		[Address(RVA = "0x2528EB0", Offset = "0x25274B0", VA = "0x182528EB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000144")]
	internal Index ConstraintIndex
	{
		[Token(Token = "0x60007DA")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000145")]
	[ReadOnly(true)]
	public virtual DataColumn[] Columns
	{
		[Token(Token = "0x60007E8")]
		[Address(RVA = "0x2528EC0", Offset = "0x25274C0", VA = "0x182528EC0", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000146")]
	internal DataColumn[] ColumnsReference
	{
		[Token(Token = "0x60007E9")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000147")]
	public bool IsPrimaryKey
	{
		[Token(Token = "0x60007EA")]
		[Address(RVA = "0x2528ED0", Offset = "0x25274D0", VA = "0x182528ED0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000148")]
	internal override bool InCollection
	{
		[Token(Token = "0x60007EE")]
		[Address(RVA = "0x2528F60", Offset = "0x2527560", VA = "0x182528F60", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x17000149")]
	internal DataKey Key
	{
		[Token(Token = "0x60007EF")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return default(DataKey);
		}
	}

	[Token(Token = "0x1700014A")]
	[ReadOnly(true)]
	public override DataTable Table
	{
		[Token(Token = "0x60007F0")]
		[Address(RVA = "0x2528F30", Offset = "0x2527530", VA = "0x182528F30", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007D4")]
	[Address(RVA = "0x2528D20", Offset = "0x2527320", VA = "0x182528D20")]
	public UniqueConstraint(DataColumn column)
	{
	}

	[Token(Token = "0x60007D5")]
	[Address(RVA = "0x2528DE0", Offset = "0x25273E0", VA = "0x182528DE0")]
	public UniqueConstraint(string name, DataColumn[] columns)
	{
	}

	[Token(Token = "0x60007D6")]
	[Address(RVA = "0x2528CE0", Offset = "0x25272E0", VA = "0x182528CE0")]
	public UniqueConstraint(DataColumn[] columns)
	{
	}

	[Token(Token = "0x60007D7")]
	[Address(RVA = "0x2528E60", Offset = "0x2527460", VA = "0x182528E60")]
	[Browsable(false)]
	public UniqueConstraint(string name, string[] columnNames, bool isPrimaryKey)
	{
	}

	[Token(Token = "0x60007D8")]
	[Address(RVA = "0x2528E20", Offset = "0x2527420", VA = "0x182528E20")]
	public UniqueConstraint(string name, DataColumn[] columns, bool isPrimaryKey)
	{
	}

	[Token(Token = "0x60007DB")]
	[Address(RVA = "0x25287C0", Offset = "0x2526DC0", VA = "0x1825287C0")]
	internal void ConstraintIndexClear()
	{
	}

	[Token(Token = "0x60007DC")]
	[Address(RVA = "0x2528800", Offset = "0x2526E00", VA = "0x182528800")]
	internal void ConstraintIndexInitialize()
	{
	}

	[Token(Token = "0x60007DD")]
	[Address(RVA = "0x2527F20", Offset = "0x2526520", VA = "0x182527F20", Slot = "16")]
	internal override void CheckState()
	{
	}

	[Token(Token = "0x60007DE")]
	[Address(RVA = "0x2527F20", Offset = "0x2526520", VA = "0x182527F20")]
	private void NonVirtualCheckState()
	{
	}

	[Token(Token = "0x60007DF")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "13")]
	internal override void CheckCanAddToCollection(ConstraintCollection constraints)
	{
	}

	[Token(Token = "0x60007E0")]
	[Address(RVA = "0x2527B30", Offset = "0x2526130", VA = "0x182527B30", Slot = "14")]
	internal override bool CanBeRemovedFromCollection(ConstraintCollection constraints, bool fThrowException)
	{
		return default(bool);
	}

	[Token(Token = "0x60007E1")]
	[Address(RVA = "0x2527CE0", Offset = "0x25262E0", VA = "0x182527CE0", Slot = "10")]
	internal override bool CanEnableConstraint()
	{
		return default(bool);
	}

	[Token(Token = "0x60007E2")]
	[Address(RVA = "0x2528A20", Offset = "0x2527020", VA = "0x182528A20", Slot = "18")]
	internal override bool IsConstraintViolated()
	{
		return default(bool);
	}

	[Token(Token = "0x60007E3")]
	[Address(RVA = "0x2527D60", Offset = "0x2526360", VA = "0x182527D60", Slot = "15")]
	internal override void CheckConstraint(DataRow row, DataRowAction action)
	{
	}

	[Token(Token = "0x60007E4")]
	[Address(RVA = "0x2528850", Offset = "0x2526E50", VA = "0x182528850", Slot = "9")]
	internal override bool ContainsColumn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x60007E5")]
	[Address(RVA = "0x251A260", Offset = "0x2518860", VA = "0x18251A260", Slot = "11")]
	internal override Constraint Clone(DataSet destination)
	{
		return null;
	}

	[Token(Token = "0x60007E6")]
	[Address(RVA = "0x2528310", Offset = "0x2526910", VA = "0x182528310", Slot = "12")]
	internal override Constraint Clone(DataSet destination, bool ignorNSforTableLookup)
	{
		return null;
	}

	[Token(Token = "0x60007E7")]
	[Address(RVA = "0x2527F30", Offset = "0x2526530", VA = "0x182527F30")]
	internal UniqueConstraint Clone(DataTable table)
	{
		return null;
	}

	[Token(Token = "0x60007EB")]
	[Address(RVA = "0x2528860", Offset = "0x2526E60", VA = "0x182528860")]
	private void Create(string constraintName, DataColumn[] columns)
	{
	}

	[Token(Token = "0x60007EC")]
	[Address(RVA = "0x2528950", Offset = "0x2526F50", VA = "0x182528950", Slot = "0")]
	public override bool Equals(object key2)
	{
		return default(bool);
	}

	[Token(Token = "0x60007ED")]
	[Address(RVA = "0x198AC80", Offset = "0x1989280", VA = "0x18198AC80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
