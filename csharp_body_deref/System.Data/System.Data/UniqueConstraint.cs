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
		[Address(RVA = "0x42877A0", Offset = "0x42877A0", VA = "0x42877A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000141")]
	internal Index ConstraintIndex
	{
		[Token(Token = "0x60007BB")]
		[Address(RVA = "0x42877B0", Offset = "0x42877B0", VA = "0x42877B0")]
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
		[Address(RVA = "0x4288D60", Offset = "0x4288D60", VA = "0x4288D60", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000143")]
	internal DataColumn[] ColumnsReference
	{
		[Token(Token = "0x60007CA")]
		[Address(RVA = "0x4287DF0", Offset = "0x4287DF0", VA = "0x4287DF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000144")]
	public bool IsPrimaryKey
	{
		[Token(Token = "0x60007CB")]
		[Address(RVA = "0x4288D70", Offset = "0x4288D70", VA = "0x4288D70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000145")]
	internal override bool InCollection
	{
		[Token(Token = "0x60007CF")]
		[Address(RVA = "0x4288E70", Offset = "0x4288E70", VA = "0x4288E70", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x17000146")]
	internal DataKey Key
	{
		[Token(Token = "0x60007D0")]
		[Address(RVA = "0x4288EB0", Offset = "0x4288EB0", VA = "0x4288EB0")]
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
		[Address(RVA = "0x4288EC0", Offset = "0x4288EC0", VA = "0x4288EC0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007B5")]
	[Address(RVA = "0x4287510", Offset = "0x4287510", VA = "0x4287510")]
	public UniqueConstraint(DataColumn column)
	{
	}

	[Token(Token = "0x60007B6")]
	[Address(RVA = "0x42876B0", Offset = "0x42876B0", VA = "0x42876B0")]
	public UniqueConstraint(string name, DataColumn[] columns)
	{
	}

	[Token(Token = "0x60007B7")]
	[Address(RVA = "0x42876E0", Offset = "0x42876E0", VA = "0x42876E0")]
	public UniqueConstraint(DataColumn[] columns)
	{
	}

	[Token(Token = "0x60007B8")]
	[Address(RVA = "0x4287710", Offset = "0x4287710", VA = "0x4287710")]
	[Browsable(false)]
	public UniqueConstraint(string name, string[] columnNames, bool isPrimaryKey)
	{
	}

	[Token(Token = "0x60007B9")]
	[Address(RVA = "0x4287760", Offset = "0x4287760", VA = "0x4287760")]
	public UniqueConstraint(string name, DataColumn[] columns, bool isPrimaryKey)
	{
	}

	[Token(Token = "0x60007BC")]
	[Address(RVA = "0x42877C0", Offset = "0x42877C0", VA = "0x42877C0")]
	internal void ConstraintIndexClear()
	{
	}

	[Token(Token = "0x60007BD")]
	[Address(RVA = "0x42877F0", Offset = "0x42877F0", VA = "0x42877F0")]
	internal void ConstraintIndexInitialize()
	{
	}

	[Token(Token = "0x60007BE")]
	[Address(RVA = "0x4287840", Offset = "0x4287840", VA = "0x4287840", Slot = "16")]
	internal override void CheckState()
	{
	}

	[Token(Token = "0x60007BF")]
	[Address(RVA = "0x4287850", Offset = "0x4287850", VA = "0x4287850")]
	private void NonVirtualCheckState()
	{
	}

	[Token(Token = "0x60007C0")]
	[Address(RVA = "0x4287860", Offset = "0x4287860", VA = "0x4287860", Slot = "13")]
	internal override void CheckCanAddToCollection(ConstraintCollection constraints)
	{
	}

	[Token(Token = "0x60007C1")]
	[Address(RVA = "0x4287870", Offset = "0x4287870", VA = "0x4287870", Slot = "14")]
	internal override bool CanBeRemovedFromCollection(ConstraintCollection constraints, bool fThrowException)
	{
		return default(bool);
	}

	[Token(Token = "0x60007C2")]
	[Address(RVA = "0x42879E0", Offset = "0x42879E0", VA = "0x42879E0", Slot = "10")]
	internal override bool CanEnableConstraint()
	{
		return default(bool);
	}

	[Token(Token = "0x60007C3")]
	[Address(RVA = "0x4287A60", Offset = "0x4287A60", VA = "0x4287A60", Slot = "18")]
	internal override bool IsConstraintViolated()
	{
		return default(bool);
	}

	[Token(Token = "0x60007C4")]
	[Address(RVA = "0x4287D20", Offset = "0x4287D20", VA = "0x4287D20", Slot = "15")]
	internal override void CheckConstraint(DataRow row, DataRowAction action)
	{
	}

	[Token(Token = "0x60007C5")]
	[Address(RVA = "0x4287E00", Offset = "0x4287E00", VA = "0x4287E00", Slot = "9")]
	internal override bool ContainsColumn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x60007C6")]
	[Address(RVA = "0x4287E10", Offset = "0x4287E10", VA = "0x4287E10", Slot = "11")]
	internal override Constraint Clone(DataSet destination)
	{
		return null;
	}

	[Token(Token = "0x60007C7")]
	[Address(RVA = "0x4287E30", Offset = "0x4287E30", VA = "0x4287E30", Slot = "12")]
	internal override Constraint Clone(DataSet destination, bool ignorNSforTableLookup)
	{
		return null;
	}

	[Token(Token = "0x60007C8")]
	[Address(RVA = "0x4288630", Offset = "0x4288630", VA = "0x4288630")]
	internal UniqueConstraint Clone(DataTable table)
	{
		return null;
	}

	[Token(Token = "0x60007CC")]
	[Address(RVA = "0x42875C0", Offset = "0x42875C0", VA = "0x42875C0")]
	private void Create(string constraintName, DataColumn[] columns)
	{
	}

	[Token(Token = "0x60007CD")]
	[Address(RVA = "0x4288DC0", Offset = "0x4288DC0", VA = "0x4288DC0", Slot = "0")]
	public override bool Equals(object key2)
	{
		return default(bool);
	}

	[Token(Token = "0x60007CE")]
	[Address(RVA = "0x4288E60", Offset = "0x4288E60", VA = "0x4288E60", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
