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
		[Address(RVA = "0x5ECD7C0", Offset = "0x5ECC7C0", VA = "0x5ECD7C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000144")]
	internal Index ConstraintIndex
	{
		[Token(Token = "0x60007DA")]
		[Address(RVA = "0x5ECD7D0", Offset = "0x5ECC7D0", VA = "0x5ECD7D0")]
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
		[Address(RVA = "0x5ECEA70", Offset = "0x5ECDA70", VA = "0x5ECEA70", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000146")]
	internal DataColumn[] ColumnsReference
	{
		[Token(Token = "0x60007E9")]
		[Address(RVA = "0x5ECDDF0", Offset = "0x5ECCDF0", VA = "0x5ECDDF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000147")]
	public bool IsPrimaryKey
	{
		[Token(Token = "0x60007EA")]
		[Address(RVA = "0x5ECEA80", Offset = "0x5ECDA80", VA = "0x5ECEA80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000148")]
	internal override bool InCollection
	{
		[Token(Token = "0x60007EE")]
		[Address(RVA = "0x5ECEB70", Offset = "0x5ECDB70", VA = "0x5ECEB70", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x17000149")]
	internal DataKey Key
	{
		[Token(Token = "0x60007EF")]
		[Address(RVA = "0x5ECEBB0", Offset = "0x5ECDBB0", VA = "0x5ECEBB0")]
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
		[Address(RVA = "0x5ECEBC0", Offset = "0x5ECDBC0", VA = "0x5ECEBC0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007D4")]
	[Address(RVA = "0x5ECD520", Offset = "0x5ECC520", VA = "0x5ECD520")]
	public UniqueConstraint(DataColumn column)
	{
	}

	[Token(Token = "0x60007D5")]
	[Address(RVA = "0x5ECD6D0", Offset = "0x5ECC6D0", VA = "0x5ECD6D0")]
	public UniqueConstraint(string name, DataColumn[] columns)
	{
	}

	[Token(Token = "0x60007D6")]
	[Address(RVA = "0x5ECD700", Offset = "0x5ECC700", VA = "0x5ECD700")]
	public UniqueConstraint(DataColumn[] columns)
	{
	}

	[Token(Token = "0x60007D7")]
	[Address(RVA = "0x5ECD730", Offset = "0x5ECC730", VA = "0x5ECD730")]
	[Browsable(false)]
	public UniqueConstraint(string name, string[] columnNames, bool isPrimaryKey)
	{
	}

	[Token(Token = "0x60007D8")]
	[Address(RVA = "0x5ECD780", Offset = "0x5ECC780", VA = "0x5ECD780")]
	public UniqueConstraint(string name, DataColumn[] columns, bool isPrimaryKey)
	{
	}

	[Token(Token = "0x60007DB")]
	[Address(RVA = "0x5ECD7E0", Offset = "0x5ECC7E0", VA = "0x5ECD7E0")]
	internal void ConstraintIndexClear()
	{
	}

	[Token(Token = "0x60007DC")]
	[Address(RVA = "0x5ECD810", Offset = "0x5ECC810", VA = "0x5ECD810")]
	internal void ConstraintIndexInitialize()
	{
	}

	[Token(Token = "0x60007DD")]
	[Address(RVA = "0x5ECD860", Offset = "0x5ECC860", VA = "0x5ECD860", Slot = "16")]
	internal override void CheckState()
	{
	}

	[Token(Token = "0x60007DE")]
	[Address(RVA = "0x5ECD870", Offset = "0x5ECC870", VA = "0x5ECD870")]
	private void NonVirtualCheckState()
	{
	}

	[Token(Token = "0x60007DF")]
	[Address(RVA = "0x5ECD880", Offset = "0x5ECC880", VA = "0x5ECD880", Slot = "13")]
	internal override void CheckCanAddToCollection(ConstraintCollection constraints)
	{
	}

	[Token(Token = "0x60007E0")]
	[Address(RVA = "0x5ECD890", Offset = "0x5ECC890", VA = "0x5ECD890", Slot = "14")]
	internal override bool CanBeRemovedFromCollection(ConstraintCollection constraints, bool fThrowException)
	{
		return default(bool);
	}

	[Token(Token = "0x60007E1")]
	[Address(RVA = "0x5ECDA00", Offset = "0x5ECCA00", VA = "0x5ECDA00", Slot = "10")]
	internal override bool CanEnableConstraint()
	{
		return default(bool);
	}

	[Token(Token = "0x60007E2")]
	[Address(RVA = "0x5ECDA80", Offset = "0x5ECCA80", VA = "0x5ECDA80", Slot = "18")]
	internal override bool IsConstraintViolated()
	{
		return default(bool);
	}

	[Token(Token = "0x60007E3")]
	[Address(RVA = "0x5ECDD20", Offset = "0x5ECCD20", VA = "0x5ECDD20", Slot = "15")]
	internal override void CheckConstraint(DataRow row, DataRowAction action)
	{
	}

	[Token(Token = "0x60007E4")]
	[Address(RVA = "0x5ECDE00", Offset = "0x5ECCE00", VA = "0x5ECDE00", Slot = "9")]
	internal override bool ContainsColumn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x60007E5")]
	[Address(RVA = "0x5ECDE10", Offset = "0x5ECCE10", VA = "0x5ECDE10", Slot = "11")]
	internal override Constraint Clone(DataSet destination)
	{
		return null;
	}

	[Token(Token = "0x60007E6")]
	[Address(RVA = "0x5ECDE30", Offset = "0x5ECCE30", VA = "0x5ECDE30", Slot = "12")]
	internal override Constraint Clone(DataSet destination, bool ignorNSforTableLookup)
	{
		return null;
	}

	[Token(Token = "0x60007E7")]
	[Address(RVA = "0x5ECE4D0", Offset = "0x5ECD4D0", VA = "0x5ECE4D0")]
	internal UniqueConstraint Clone(DataTable table)
	{
		return null;
	}

	[Token(Token = "0x60007EB")]
	[Address(RVA = "0x5ECD5D0", Offset = "0x5ECC5D0", VA = "0x5ECD5D0")]
	private void Create(string constraintName, DataColumn[] columns)
	{
	}

	[Token(Token = "0x60007EC")]
	[Address(RVA = "0x5ECEAD0", Offset = "0x5ECDAD0", VA = "0x5ECEAD0", Slot = "0")]
	public override bool Equals(object key2)
	{
		return default(bool);
	}

	[Token(Token = "0x60007ED")]
	[Address(RVA = "0x5ECEB60", Offset = "0x5ECDB60", VA = "0x5ECEB60", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
