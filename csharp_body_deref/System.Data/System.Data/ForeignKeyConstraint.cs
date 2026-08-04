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

[Token(Token = "0x2000068")]
[DefaultProperty("ConstraintName")]
public class ForeignKeyConstraint : Constraint
{
	[Token(Token = "0x4000237")]
	[FieldOffset(Offset = "0x38")]
	internal Rule _deleteRule;

	[Token(Token = "0x4000238")]
	[FieldOffset(Offset = "0x3C")]
	internal Rule _updateRule;

	[Token(Token = "0x4000239")]
	[FieldOffset(Offset = "0x40")]
	internal AcceptRejectRule _acceptRejectRule;

	[Token(Token = "0x400023A")]
	[FieldOffset(Offset = "0x48")]
	private DataKey _childKey;

	[Token(Token = "0x400023B")]
	[FieldOffset(Offset = "0x50")]
	private DataKey _parentKey;

	[Token(Token = "0x400023C")]
	[FieldOffset(Offset = "0x58")]
	internal string _constraintName;

	[Token(Token = "0x400023D")]
	[FieldOffset(Offset = "0x60")]
	internal string[] _parentColumnNames;

	[Token(Token = "0x400023E")]
	[FieldOffset(Offset = "0x68")]
	internal string[] _childColumnNames;

	[Token(Token = "0x400023F")]
	[FieldOffset(Offset = "0x70")]
	internal string _parentTableName;

	[Token(Token = "0x4000240")]
	[FieldOffset(Offset = "0x78")]
	internal string _parentTableNamespace;

	[Token(Token = "0x17000113")]
	internal DataKey ChildKey
	{
		[Token(Token = "0x600069D")]
		[Address(RVA = "0x45B5A00", Offset = "0x45B5A00", VA = "0x45B5A00")]
		get
		{
			return default(DataKey);
		}
	}

	[Token(Token = "0x17000114")]
	[ReadOnly(true)]
	public virtual DataColumn[] Columns
	{
		[Token(Token = "0x600069E")]
		[Address(RVA = "0x45B5A20", Offset = "0x45B5A20", VA = "0x45B5A20", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000115")]
	[ReadOnly(true)]
	public override DataTable Table
	{
		[Token(Token = "0x600069F")]
		[Address(RVA = "0x45B5A40", Offset = "0x45B5A40", VA = "0x45B5A40", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000116")]
	internal string[] ParentColumnNames
	{
		[Token(Token = "0x60006A0")]
		[Address(RVA = "0x45B5A60", Offset = "0x45B5A60", VA = "0x45B5A60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000117")]
	internal string[] ChildColumnNames
	{
		[Token(Token = "0x60006A1")]
		[Address(RVA = "0x45B5A70", Offset = "0x45B5A70", VA = "0x45B5A70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000118")]
	[DefaultValue(AcceptRejectRule.None)]
	public virtual AcceptRejectRule AcceptRejectRule
	{
		[Token(Token = "0x60006B1")]
		[Address(RVA = "0x45B7ED0", Offset = "0x45B7ED0", VA = "0x45B7ED0", Slot = "20")]
		get
		{
			return default(AcceptRejectRule);
		}
		[Token(Token = "0x60006B2")]
		[Address(RVA = "0x45B7EE0", Offset = "0x45B7EE0", VA = "0x45B7EE0", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x17000119")]
	[DefaultValue(Rule.Cascade)]
	public virtual Rule DeleteRule
	{
		[Token(Token = "0x60006B8")]
		[Address(RVA = "0x45B8F80", Offset = "0x45B8F80", VA = "0x45B8F80", Slot = "22")]
		get
		{
			return default(Rule);
		}
		[Token(Token = "0x60006B9")]
		[Address(RVA = "0x45B8F90", Offset = "0x45B8F90", VA = "0x45B8F90", Slot = "23")]
		set
		{
		}
	}

	[Token(Token = "0x1700011A")]
	[ReadOnly(true)]
	public virtual DataColumn[] RelatedColumns
	{
		[Token(Token = "0x60006BC")]
		[Address(RVA = "0x45B90D0", Offset = "0x45B90D0", VA = "0x45B90D0", Slot = "24")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011B")]
	internal DataColumn[] RelatedColumnsReference
	{
		[Token(Token = "0x60006BD")]
		[Address(RVA = "0x45B8850", Offset = "0x45B8850", VA = "0x45B8850")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011C")]
	internal DataKey ParentKey
	{
		[Token(Token = "0x60006BE")]
		[Address(RVA = "0x45B7820", Offset = "0x45B7820", VA = "0x45B7820")]
		get
		{
			return default(DataKey);
		}
	}

	[Token(Token = "0x1700011D")]
	[ReadOnly(true)]
	public virtual DataTable RelatedTable
	{
		[Token(Token = "0x60006C0")]
		[Address(RVA = "0x45B91C0", Offset = "0x45B91C0", VA = "0x45B91C0", Slot = "25")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011E")]
	[DefaultValue(Rule.Cascade)]
	public virtual Rule UpdateRule
	{
		[Token(Token = "0x60006C1")]
		[Address(RVA = "0x45B91E0", Offset = "0x45B91E0", VA = "0x45B91E0", Slot = "26")]
		get
		{
			return default(Rule);
		}
		[Token(Token = "0x60006C2")]
		[Address(RVA = "0x45B91F0", Offset = "0x45B91F0", VA = "0x45B91F0", Slot = "27")]
		set
		{
		}
	}

	[Token(Token = "0x600069A")]
	[Address(RVA = "0x45B5720", Offset = "0x45B5720", VA = "0x45B5720")]
	public ForeignKeyConstraint(DataColumn[] parentColumns, DataColumn[] childColumns)
	{
	}

	[Token(Token = "0x600069B")]
	[Address(RVA = "0x45B5760", Offset = "0x45B5760", VA = "0x45B5760")]
	public ForeignKeyConstraint(string constraintName, DataColumn[] parentColumns, DataColumn[] childColumns)
	{
	}

	[Token(Token = "0x600069C")]
	[Address(RVA = "0x45B5960", Offset = "0x45B5960", VA = "0x45B5960")]
	[Browsable(false)]
	public ForeignKeyConstraint(string constraintName, string parentTableName, string[] parentColumnNames, string[] childColumnNames, AcceptRejectRule acceptRejectRule, Rule deleteRule, Rule updateRule)
	{
	}

	[Token(Token = "0x60006A2")]
	[Address(RVA = "0x45B5A80", Offset = "0x45B5A80", VA = "0x45B5A80", Slot = "13")]
	internal override void CheckCanAddToCollection(ConstraintCollection constraints)
	{
	}

	[Token(Token = "0x60006A3")]
	[Address(RVA = "0x45B5BB0", Offset = "0x45B5BB0", VA = "0x45B5BB0", Slot = "14")]
	internal override bool CanBeRemovedFromCollection(ConstraintCollection constraints, bool fThrowException)
	{
		return default(bool);
	}

	[Token(Token = "0x60006A4")]
	[Address(RVA = "0x45B5BC0", Offset = "0x45B5BC0", VA = "0x45B5BC0")]
	internal bool IsKeyNull(object[] values)
	{
		return default(bool);
	}

	[Token(Token = "0x60006A5")]
	[Address(RVA = "0x45B5C70", Offset = "0x45B5C70", VA = "0x45B5C70", Slot = "18")]
	internal override bool IsConstraintViolated()
	{
		return default(bool);
	}

	[Token(Token = "0x60006A6")]
	[Address(RVA = "0x45B62A0", Offset = "0x45B62A0", VA = "0x45B62A0", Slot = "10")]
	internal override bool CanEnableConstraint()
	{
		return default(bool);
	}

	[Token(Token = "0x60006A7")]
	[Address(RVA = "0x45B65F0", Offset = "0x45B65F0", VA = "0x45B65F0")]
	internal void CascadeCommit(DataRow row)
	{
	}

	[Token(Token = "0x60006A8")]
	[Address(RVA = "0x45B67B0", Offset = "0x45B67B0", VA = "0x45B67B0")]
	internal void CascadeDelete(DataRow row)
	{
	}

	[Token(Token = "0x60006A9")]
	[Address(RVA = "0x45B6E90", Offset = "0x45B6E90", VA = "0x45B6E90")]
	internal void CascadeRollback(DataRow row)
	{
	}

	[Token(Token = "0x60006AA")]
	[Address(RVA = "0x45B70D0", Offset = "0x45B70D0", VA = "0x45B70D0")]
	internal void CascadeUpdate(DataRow row)
	{
	}

	[Token(Token = "0x60006AB")]
	[Address(RVA = "0x45B76A0", Offset = "0x45B76A0", VA = "0x45B76A0")]
	internal void CheckCanClearParentTable(DataTable table)
	{
	}

	[Token(Token = "0x60006AC")]
	[Address(RVA = "0x45B7780", Offset = "0x45B7780", VA = "0x45B7780")]
	internal void CheckCanRemoveParentRow(DataRow row)
	{
	}

	[Token(Token = "0x60006AD")]
	[Address(RVA = "0x45B7840", Offset = "0x45B7840", VA = "0x45B7840")]
	internal void CheckCascade(DataRow row, DataRowAction action)
	{
	}

	[Token(Token = "0x60006AE")]
	[Address(RVA = "0x45B7940", Offset = "0x45B7940", VA = "0x45B7940", Slot = "15")]
	internal override void CheckConstraint(DataRow childRow, DataRowAction action)
	{
	}

	[Token(Token = "0x60006AF")]
	[Address(RVA = "0x45B7C70", Offset = "0x45B7C70", VA = "0x45B7C70")]
	private void NonVirtualCheckState()
	{
	}

	[Token(Token = "0x60006B0")]
	[Address(RVA = "0x45B7EC0", Offset = "0x45B7EC0", VA = "0x45B7EC0", Slot = "16")]
	internal override void CheckState()
	{
	}

	[Token(Token = "0x60006B3")]
	[Address(RVA = "0x45B7F30", Offset = "0x45B7F30", VA = "0x45B7F30", Slot = "9")]
	internal override bool ContainsColumn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x60006B4")]
	[Address(RVA = "0x45B7F70", Offset = "0x45B7F70", VA = "0x45B7F70", Slot = "11")]
	internal override Constraint Clone(DataSet destination)
	{
		return null;
	}

	[Token(Token = "0x60006B5")]
	[Address(RVA = "0x45B7F90", Offset = "0x45B7F90", VA = "0x45B7F90", Slot = "12")]
	internal override Constraint Clone(DataSet destination, bool ignorNSforTableLookup)
	{
		return null;
	}

	[Token(Token = "0x60006B6")]
	[Address(RVA = "0x45B8870", Offset = "0x45B8870", VA = "0x45B8870")]
	internal ForeignKeyConstraint Clone(DataTable destination)
	{
		return null;
	}

	[Token(Token = "0x60006B7")]
	[Address(RVA = "0x45B57B0", Offset = "0x45B57B0", VA = "0x45B57B0")]
	private void Create(string relationName, DataColumn[] parentColumns, DataColumn[] childColumns)
	{
	}

	[Token(Token = "0x60006BA")]
	[Address(RVA = "0x45B8FE0", Offset = "0x45B8FE0", VA = "0x45B8FE0", Slot = "0")]
	public override bool Equals(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x60006BB")]
	[Address(RVA = "0x45B90C0", Offset = "0x45B90C0", VA = "0x45B90C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60006BF")]
	[Address(RVA = "0x45B90F0", Offset = "0x45B90F0", VA = "0x45B90F0")]
	internal DataRelation FindParentRelation()
	{
		return null;
	}
}
