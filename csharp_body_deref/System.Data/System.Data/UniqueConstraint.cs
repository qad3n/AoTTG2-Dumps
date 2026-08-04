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

[Token(Token = "0x2000087")]
[DefaultProperty("ConstraintName")]
public class UniqueConstraint : Constraint
{
	[Token(Token = "0x40002C5")]
	[FieldOffset(Offset = "0x38")]
	private DataKey _key;

	[Token(Token = "0x40002C6")]
	[FieldOffset(Offset = "0x40")]
	private Index _constraintIndex;

	[Token(Token = "0x40002C7")]
	[FieldOffset(Offset = "0x48")]
	internal bool _bPrimaryKey;

	[Token(Token = "0x40002C8")]
	[FieldOffset(Offset = "0x50")]
	internal string _constraintName;

	[Token(Token = "0x40002C9")]
	[FieldOffset(Offset = "0x58")]
	internal string[] _columnNames;

	[Token(Token = "0x17000140")]
	internal string[] ColumnNames
	{
		[Token(Token = "0x60007BA")]
		[Address(RVA = "0x45C4F00", Offset = "0x45C4F00", VA = "0x45C4F00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000141")]
	internal Index ConstraintIndex
	{
		[Token(Token = "0x60007BB")]
		[Address(RVA = "0x45C4F10", Offset = "0x45C4F10", VA = "0x45C4F10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000142")]
	[ReadOnly(true)]
	public virtual DataColumn[] Columns
	{
		[Token(Token = "0x60007C9")]
		[Address(RVA = "0x45C64C0", Offset = "0x45C64C0", VA = "0x45C64C0", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000143")]
	internal DataColumn[] ColumnsReference
	{
		[Token(Token = "0x60007CA")]
		[Address(RVA = "0x45C5550", Offset = "0x45C5550", VA = "0x45C5550")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000144")]
	public bool IsPrimaryKey
	{
		[Token(Token = "0x60007CB")]
		[Address(RVA = "0x45C64D0", Offset = "0x45C64D0", VA = "0x45C64D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000145")]
	internal override bool InCollection
	{
		[Token(Token = "0x60007CF")]
		[Address(RVA = "0x45C65D0", Offset = "0x45C65D0", VA = "0x45C65D0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x17000146")]
	internal DataKey Key
	{
		[Token(Token = "0x60007D0")]
		[Address(RVA = "0x45C6610", Offset = "0x45C6610", VA = "0x45C6610")]
		get
		{
			return default(DataKey);
		}
	}

	[Token(Token = "0x17000147")]
	[ReadOnly(true)]
	public override DataTable Table
	{
		[Token(Token = "0x60007D1")]
		[Address(RVA = "0x45C6620", Offset = "0x45C6620", VA = "0x45C6620", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007B5")]
	[Address(RVA = "0x45C4C70", Offset = "0x45C4C70", VA = "0x45C4C70")]
	public UniqueConstraint(DataColumn column)
	{
	}

	[Token(Token = "0x60007B6")]
	[Address(RVA = "0x45C4E10", Offset = "0x45C4E10", VA = "0x45C4E10")]
	public UniqueConstraint(string name, DataColumn[] columns)
	{
	}

	[Token(Token = "0x60007B7")]
	[Address(RVA = "0x45C4E40", Offset = "0x45C4E40", VA = "0x45C4E40")]
	public UniqueConstraint(DataColumn[] columns)
	{
	}

	[Token(Token = "0x60007B8")]
	[Address(RVA = "0x45C4E70", Offset = "0x45C4E70", VA = "0x45C4E70")]
	[Browsable(false)]
	public UniqueConstraint(string name, string[] columnNames, bool isPrimaryKey)
	{
	}

	[Token(Token = "0x60007B9")]
	[Address(RVA = "0x45C4EC0", Offset = "0x45C4EC0", VA = "0x45C4EC0")]
	public UniqueConstraint(string name, DataColumn[] columns, bool isPrimaryKey)
	{
	}

	[Token(Token = "0x60007BC")]
	[Address(RVA = "0x45C4F20", Offset = "0x45C4F20", VA = "0x45C4F20")]
	internal void ConstraintIndexClear()
	{
	}

	[Token(Token = "0x60007BD")]
	[Address(RVA = "0x45C4F50", Offset = "0x45C4F50", VA = "0x45C4F50")]
	internal void ConstraintIndexInitialize()
	{
	}

	[Token(Token = "0x60007BE")]
	[Address(RVA = "0x45C4FA0", Offset = "0x45C4FA0", VA = "0x45C4FA0", Slot = "16")]
	internal override void CheckState()
	{
	}

	[Token(Token = "0x60007BF")]
	[Address(RVA = "0x45C4FB0", Offset = "0x45C4FB0", VA = "0x45C4FB0")]
	private void NonVirtualCheckState()
	{
	}

	[Token(Token = "0x60007C0")]
	[Address(RVA = "0x45C4FC0", Offset = "0x45C4FC0", VA = "0x45C4FC0", Slot = "13")]
	internal override void CheckCanAddToCollection(ConstraintCollection constraints)
	{
	}

	[Token(Token = "0x60007C1")]
	[Address(RVA = "0x45C4FD0", Offset = "0x45C4FD0", VA = "0x45C4FD0", Slot = "14")]
	internal override bool CanBeRemovedFromCollection(ConstraintCollection constraints, bool fThrowException)
	{
		return default(bool);
	}

	[Token(Token = "0x60007C2")]
	[Address(RVA = "0x45C5140", Offset = "0x45C5140", VA = "0x45C5140", Slot = "10")]
	internal override bool CanEnableConstraint()
	{
		return default(bool);
	}

	[Token(Token = "0x60007C3")]
	[Address(RVA = "0x45C51C0", Offset = "0x45C51C0", VA = "0x45C51C0", Slot = "18")]
	internal override bool IsConstraintViolated()
	{
		return default(bool);
	}

	[Token(Token = "0x60007C4")]
	[Address(RVA = "0x45C5480", Offset = "0x45C5480", VA = "0x45C5480", Slot = "15")]
	internal override void CheckConstraint(DataRow row, DataRowAction action)
	{
	}

	[Token(Token = "0x60007C5")]
	[Address(RVA = "0x45C5560", Offset = "0x45C5560", VA = "0x45C5560", Slot = "9")]
	internal override bool ContainsColumn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x60007C6")]
	[Address(RVA = "0x45C5570", Offset = "0x45C5570", VA = "0x45C5570", Slot = "11")]
	internal override Constraint Clone(DataSet destination)
	{
		return null;
	}

	[Token(Token = "0x60007C7")]
	[Address(RVA = "0x45C5590", Offset = "0x45C5590", VA = "0x45C5590", Slot = "12")]
	internal override Constraint Clone(DataSet destination, bool ignorNSforTableLookup)
	{
		return null;
	}

	[Token(Token = "0x60007C8")]
	[Address(RVA = "0x45C5D90", Offset = "0x45C5D90", VA = "0x45C5D90")]
	internal UniqueConstraint Clone(DataTable table)
	{
		return null;
	}

	[Token(Token = "0x60007CC")]
	[Address(RVA = "0x45C4D20", Offset = "0x45C4D20", VA = "0x45C4D20")]
	private void Create(string constraintName, DataColumn[] columns)
	{
	}

	[Token(Token = "0x60007CD")]
	[Address(RVA = "0x45C6520", Offset = "0x45C6520", VA = "0x45C6520", Slot = "0")]
	public override bool Equals(object key2)
	{
		return default(bool);
	}

	[Token(Token = "0x60007CE")]
	[Address(RVA = "0x45C65C0", Offset = "0x45C65C0", VA = "0x45C65C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
