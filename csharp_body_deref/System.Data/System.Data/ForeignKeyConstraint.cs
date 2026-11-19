// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.ForeignKeyConstraint
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.ComponentModel;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000072")]
[DefaultProperty("ConstraintName")]
public class ForeignKeyConstraint : Constraint
{
	[Token(Token = "0x400024A")]
	[FieldOffset(Offset = "0x38")]
	internal Rule _deleteRule;

	[Token(Token = "0x400024B")]
	[FieldOffset(Offset = "0x3C")]
	internal Rule _updateRule;

	[Token(Token = "0x400024C")]
	[FieldOffset(Offset = "0x40")]
	internal AcceptRejectRule _acceptRejectRule;

	[Token(Token = "0x400024D")]
	[FieldOffset(Offset = "0x48")]
	private DataKey _childKey;

	[Token(Token = "0x400024E")]
	[FieldOffset(Offset = "0x50")]
	private DataKey _parentKey;

	[Token(Token = "0x400024F")]
	[FieldOffset(Offset = "0x58")]
	internal string _constraintName;

	[Token(Token = "0x4000250")]
	[FieldOffset(Offset = "0x60")]
	internal string[] _parentColumnNames;

	[Token(Token = "0x4000251")]
	[FieldOffset(Offset = "0x68")]
	internal string[] _childColumnNames;

	[Token(Token = "0x4000252")]
	[FieldOffset(Offset = "0x70")]
	internal string _parentTableName;

	[Token(Token = "0x4000253")]
	[FieldOffset(Offset = "0x78")]
	internal string _parentTableNamespace;

	[Token(Token = "0x17000116")]
	internal DataKey ChildKey
	{
		[Token(Token = "0x60006BC")]
		[Address(RVA = "0x5EBEEE0", Offset = "0x5EBDEE0", VA = "0x5EBEEE0")]
		get
		{
			return default(DataKey);
		}
	}

	[Token(Token = "0x17000117")]
	[ReadOnly(true)]
	public virtual DataColumn[] Columns
	{
		[Token(Token = "0x60006BD")]
		[Address(RVA = "0x5EBEF00", Offset = "0x5EBDF00", VA = "0x5EBEF00", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000118")]
	[ReadOnly(true)]
	public override DataTable Table
	{
		[Token(Token = "0x60006BE")]
		[Address(RVA = "0x5EBEF20", Offset = "0x5EBDF20", VA = "0x5EBEF20", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000119")]
	internal string[] ParentColumnNames
	{
		[Token(Token = "0x60006BF")]
		[Address(RVA = "0x5EBEF40", Offset = "0x5EBDF40", VA = "0x5EBEF40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011A")]
	internal string[] ChildColumnNames
	{
		[Token(Token = "0x60006C0")]
		[Address(RVA = "0x5EBEF50", Offset = "0x5EBDF50", VA = "0x5EBEF50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011B")]
	[DefaultValue(AcceptRejectRule.None)]
	public virtual AcceptRejectRule AcceptRejectRule
	{
		[Token(Token = "0x60006D0")]
		[Address(RVA = "0x5EC1220", Offset = "0x5EC0220", VA = "0x5EC1220", Slot = "20")]
		get
		{
			return default(AcceptRejectRule);
		}
		[Token(Token = "0x60006D1")]
		[Address(RVA = "0x5EC1230", Offset = "0x5EC0230", VA = "0x5EC1230", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x1700011C")]
	[DefaultValue(Rule.Cascade)]
	public virtual Rule DeleteRule
	{
		[Token(Token = "0x60006D7")]
		[Address(RVA = "0x5EC2350", Offset = "0x5EC1350", VA = "0x5EC2350", Slot = "22")]
		get
		{
			return default(Rule);
		}
		[Token(Token = "0x60006D8")]
		[Address(RVA = "0x5EC2360", Offset = "0x5EC1360", VA = "0x5EC2360", Slot = "23")]
		set
		{
		}
	}

	[Token(Token = "0x1700011D")]
	[ReadOnly(true)]
	public virtual DataColumn[] RelatedColumns
	{
		[Token(Token = "0x60006DB")]
		[Address(RVA = "0x5EC2490", Offset = "0x5EC1490", VA = "0x5EC2490", Slot = "24")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011E")]
	internal DataColumn[] RelatedColumnsReference
	{
		[Token(Token = "0x60006DC")]
		[Address(RVA = "0x5EC1BF0", Offset = "0x5EC0BF0", VA = "0x5EC1BF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011F")]
	internal DataKey ParentKey
	{
		[Token(Token = "0x60006DD")]
		[Address(RVA = "0x5EC0B80", Offset = "0x5EBFB80", VA = "0x5EC0B80")]
		get
		{
			return default(DataKey);
		}
	}

	[Token(Token = "0x17000120")]
	[ReadOnly(true)]
	public virtual DataTable RelatedTable
	{
		[Token(Token = "0x60006DF")]
		[Address(RVA = "0x5EC2580", Offset = "0x5EC1580", VA = "0x5EC2580", Slot = "25")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000121")]
	[DefaultValue(Rule.Cascade)]
	public virtual Rule UpdateRule
	{
		[Token(Token = "0x60006E0")]
		[Address(RVA = "0x5EC25A0", Offset = "0x5EC15A0", VA = "0x5EC25A0", Slot = "26")]
		get
		{
			return default(Rule);
		}
		[Token(Token = "0x60006E1")]
		[Address(RVA = "0x5EC25B0", Offset = "0x5EC15B0", VA = "0x5EC25B0", Slot = "27")]
		set
		{
		}
	}

	[Token(Token = "0x60006B9")]
	[Address(RVA = "0x5EBEC10", Offset = "0x5EBDC10", VA = "0x5EBEC10")]
	public ForeignKeyConstraint(DataColumn[] parentColumns, DataColumn[] childColumns)
	{
	}

	[Token(Token = "0x60006BA")]
	[Address(RVA = "0x5EBEC50", Offset = "0x5EBDC50", VA = "0x5EBEC50")]
	public ForeignKeyConstraint(string constraintName, DataColumn[] parentColumns, DataColumn[] childColumns)
	{
	}

	[Token(Token = "0x60006BB")]
	[Address(RVA = "0x5EBEE40", Offset = "0x5EBDE40", VA = "0x5EBEE40")]
	[Browsable(false)]
	public ForeignKeyConstraint(string constraintName, string parentTableName, string[] parentColumnNames, string[] childColumnNames, AcceptRejectRule acceptRejectRule, Rule deleteRule, Rule updateRule)
	{
	}

	[Token(Token = "0x60006C1")]
	[Address(RVA = "0x5EBEF60", Offset = "0x5EBDF60", VA = "0x5EBEF60", Slot = "13")]
	internal override void CheckCanAddToCollection(ConstraintCollection constraints)
	{
	}

	[Token(Token = "0x60006C2")]
	[Address(RVA = "0x5EBF090", Offset = "0x5EBE090", VA = "0x5EBF090", Slot = "14")]
	internal override bool CanBeRemovedFromCollection(ConstraintCollection constraints, bool fThrowException)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C3")]
	[Address(RVA = "0x5EBF0A0", Offset = "0x5EBE0A0", VA = "0x5EBF0A0")]
	internal bool IsKeyNull(object[] values)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C4")]
	[Address(RVA = "0x5EBF140", Offset = "0x5EBE140", VA = "0x5EBF140", Slot = "18")]
	internal override bool IsConstraintViolated()
	{
		return default(bool);
	}

	[Token(Token = "0x60006C5")]
	[Address(RVA = "0x5EBF730", Offset = "0x5EBE730", VA = "0x5EBF730", Slot = "10")]
	internal override bool CanEnableConstraint()
	{
		return default(bool);
	}

	[Token(Token = "0x60006C6")]
	[Address(RVA = "0x5EBF970", Offset = "0x5EBE970", VA = "0x5EBF970")]
	internal void CascadeCommit(DataRow row)
	{
	}

	[Token(Token = "0x60006C7")]
	[Address(RVA = "0x5EBFB40", Offset = "0x5EBEB40", VA = "0x5EBFB40")]
	internal void CascadeDelete(DataRow row)
	{
	}

	[Token(Token = "0x60006C8")]
	[Address(RVA = "0x5EC01F0", Offset = "0x5EBF1F0", VA = "0x5EC01F0")]
	internal void CascadeRollback(DataRow row)
	{
	}

	[Token(Token = "0x60006C9")]
	[Address(RVA = "0x5EC0450", Offset = "0x5EBF450", VA = "0x5EC0450")]
	internal void CascadeUpdate(DataRow row)
	{
	}

	[Token(Token = "0x60006CA")]
	[Address(RVA = "0x5EC0A00", Offset = "0x5EBFA00", VA = "0x5EC0A00")]
	internal void CheckCanClearParentTable(DataTable table)
	{
	}

	[Token(Token = "0x60006CB")]
	[Address(RVA = "0x5EC0AE0", Offset = "0x5EBFAE0", VA = "0x5EC0AE0")]
	internal void CheckCanRemoveParentRow(DataRow row)
	{
	}

	[Token(Token = "0x60006CC")]
	[Address(RVA = "0x5EC0BA0", Offset = "0x5EBFBA0", VA = "0x5EC0BA0")]
	internal void CheckCascade(DataRow row, DataRowAction action)
	{
	}

	[Token(Token = "0x60006CD")]
	[Address(RVA = "0x5EC0C90", Offset = "0x5EBFC90", VA = "0x5EC0C90", Slot = "15")]
	internal override void CheckConstraint(DataRow childRow, DataRowAction action)
	{
	}

	[Token(Token = "0x60006CE")]
	[Address(RVA = "0x5EC0FD0", Offset = "0x5EBFFD0", VA = "0x5EC0FD0")]
	private void NonVirtualCheckState()
	{
	}

	[Token(Token = "0x60006CF")]
	[Address(RVA = "0x5EC1210", Offset = "0x5EC0210", VA = "0x5EC1210", Slot = "16")]
	internal override void CheckState()
	{
	}

	[Token(Token = "0x60006D2")]
	[Address(RVA = "0x5EC1280", Offset = "0x5EC0280", VA = "0x5EC1280", Slot = "9")]
	internal override bool ContainsColumn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x60006D3")]
	[Address(RVA = "0x5EC12C0", Offset = "0x5EC02C0", VA = "0x5EC12C0", Slot = "11")]
	internal override Constraint Clone(DataSet destination)
	{
		return null;
	}

	[Token(Token = "0x60006D4")]
	[Address(RVA = "0x5EC12E0", Offset = "0x5EC02E0", VA = "0x5EC12E0", Slot = "12")]
	internal override Constraint Clone(DataSet destination, bool ignorNSforTableLookup)
	{
		return null;
	}

	[Token(Token = "0x60006D5")]
	[Address(RVA = "0x5EC1C10", Offset = "0x5EC0C10", VA = "0x5EC1C10")]
	internal ForeignKeyConstraint Clone(DataTable destination)
	{
		return null;
	}

	[Token(Token = "0x60006D6")]
	[Address(RVA = "0x5EBECA0", Offset = "0x5EBDCA0", VA = "0x5EBECA0")]
	private void Create(string relationName, DataColumn[] parentColumns, DataColumn[] childColumns)
	{
	}

	[Token(Token = "0x60006D9")]
	[Address(RVA = "0x5EC23B0", Offset = "0x5EC13B0", VA = "0x5EC23B0", Slot = "0")]
	public override bool Equals(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x60006DA")]
	[Address(RVA = "0x5EC2480", Offset = "0x5EC1480", VA = "0x5EC2480", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60006DE")]
	[Address(RVA = "0x5EC24B0", Offset = "0x5EC14B0", VA = "0x5EC24B0")]
	internal DataRelation FindParentRelation()
	{
		return null;
	}
}
