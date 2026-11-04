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
		[Address(RVA = "0x251AE20", Offset = "0x2519420", VA = "0x18251AE20")]
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
		[Address(RVA = "0x251AE40", Offset = "0x2519440", VA = "0x18251AE40", Slot = "19")]
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
		[Address(RVA = "0x251AEF0", Offset = "0x25194F0", VA = "0x18251AEF0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000119")]
	internal string[] ParentColumnNames
	{
		[Token(Token = "0x60006BF")]
		[Address(RVA = "0x251AE80", Offset = "0x2519480", VA = "0x18251AE80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011A")]
	internal string[] ChildColumnNames
	{
		[Token(Token = "0x60006C0")]
		[Address(RVA = "0x251AE10", Offset = "0x2519410", VA = "0x18251AE10")]
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
		[Address(RVA = "0x251ADF0", Offset = "0x25193F0", VA = "0x18251ADF0", Slot = "20")]
		get
		{
			return default(AcceptRejectRule);
		}
		[Token(Token = "0x60006D1")]
		[Address(RVA = "0x251AF30", Offset = "0x2519530", VA = "0x18251AF30", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x1700011C")]
	[DefaultValue(Rule.Cascade)]
	public virtual Rule DeleteRule
	{
		[Token(Token = "0x60006D7")]
		[Address(RVA = "0x251AE60", Offset = "0x2519460", VA = "0x18251AE60", Slot = "22")]
		get
		{
			return default(Rule);
		}
		[Token(Token = "0x60006D8")]
		[Address(RVA = "0x251AF80", Offset = "0x2519580", VA = "0x18251AF80", Slot = "23")]
		set
		{
		}
	}

	[Token(Token = "0x1700011D")]
	[ReadOnly(true)]
	public virtual DataColumn[] RelatedColumns
	{
		[Token(Token = "0x60006DB")]
		[Address(RVA = "0x251AEB0", Offset = "0x25194B0", VA = "0x18251AEB0", Slot = "24")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011E")]
	internal DataColumn[] RelatedColumnsReference
	{
		[Token(Token = "0x60006DC")]
		[Address(RVA = "0x251AE90", Offset = "0x2519490", VA = "0x18251AE90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011F")]
	internal DataKey ParentKey
	{
		[Token(Token = "0x60006DD")]
		[Address(RVA = "0x251AE90", Offset = "0x2519490", VA = "0x18251AE90")]
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
		[Address(RVA = "0x251AED0", Offset = "0x25194D0", VA = "0x18251AED0", Slot = "25")]
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
		[Address(RVA = "0x251AF10", Offset = "0x2519510", VA = "0x18251AF10", Slot = "26")]
		get
		{
			return default(Rule);
		}
		[Token(Token = "0x60006E1")]
		[Address(RVA = "0x251AFD0", Offset = "0x25195D0", VA = "0x18251AFD0", Slot = "27")]
		set
		{
		}
	}

	[Token(Token = "0x60006B9")]
	[Address(RVA = "0x251AD40", Offset = "0x2519340", VA = "0x18251AD40")]
	public ForeignKeyConstraint(DataColumn[] parentColumns, DataColumn[] childColumns)
	{
	}

	[Token(Token = "0x60006BA")]
	[Address(RVA = "0x251ADA0", Offset = "0x25193A0", VA = "0x18251ADA0")]
	public ForeignKeyConstraint(string constraintName, DataColumn[] parentColumns, DataColumn[] childColumns)
	{
	}

	[Token(Token = "0x60006BB")]
	[Address(RVA = "0x251ACB0", Offset = "0x25192B0", VA = "0x18251ACB0")]
	[Browsable(false)]
	public ForeignKeyConstraint(string constraintName, string parentTableName, string[] parentColumnNames, string[] childColumnNames, AcceptRejectRule acceptRejectRule, Rule deleteRule, Rule updateRule)
	{
	}

	[Token(Token = "0x60006C1")]
	[Address(RVA = "0x2518D40", Offset = "0x2517340", VA = "0x182518D40", Slot = "13")]
	internal override void CheckCanAddToCollection(ConstraintCollection constraints)
	{
	}

	[Token(Token = "0x60006C2")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "14")]
	internal override bool CanBeRemovedFromCollection(ConstraintCollection constraints, bool fThrowException)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C3")]
	[Address(RVA = "0x251A940", Offset = "0x2518F40", VA = "0x18251A940")]
	internal bool IsKeyNull(object[] values)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C4")]
	[Address(RVA = "0x251A6D0", Offset = "0x2518CD0", VA = "0x18251A6D0", Slot = "18")]
	internal override bool IsConstraintViolated()
	{
		return default(bool);
	}

	[Token(Token = "0x60006C5")]
	[Address(RVA = "0x2517C70", Offset = "0x2516270", VA = "0x182517C70", Slot = "10")]
	internal override bool CanEnableConstraint()
	{
		return default(bool);
	}

	[Token(Token = "0x60006C6")]
	[Address(RVA = "0x2517E50", Offset = "0x2516450", VA = "0x182517E50")]
	internal void CascadeCommit(DataRow row)
	{
	}

	[Token(Token = "0x60006C7")]
	[Address(RVA = "0x2517FC0", Offset = "0x25165C0", VA = "0x182517FC0")]
	internal void CascadeDelete(DataRow row)
	{
	}

	[Token(Token = "0x60006C8")]
	[Address(RVA = "0x2518560", Offset = "0x2516B60", VA = "0x182518560")]
	internal void CascadeRollback(DataRow row)
	{
	}

	[Token(Token = "0x60006C9")]
	[Address(RVA = "0x25187B0", Offset = "0x2516DB0", VA = "0x1825187B0")]
	internal void CascadeUpdate(DataRow row)
	{
	}

	[Token(Token = "0x60006CA")]
	[Address(RVA = "0x2518EB0", Offset = "0x25174B0", VA = "0x182518EB0")]
	internal void CheckCanClearParentTable(DataTable table)
	{
	}

	[Token(Token = "0x60006CB")]
	[Address(RVA = "0x2518FC0", Offset = "0x25175C0", VA = "0x182518FC0")]
	internal void CheckCanRemoveParentRow(DataRow row)
	{
	}

	[Token(Token = "0x60006CC")]
	[Address(RVA = "0x2519080", Offset = "0x2517680", VA = "0x182519080")]
	internal void CheckCascade(DataRow row, DataRowAction action)
	{
	}

	[Token(Token = "0x60006CD")]
	[Address(RVA = "0x2519380", Offset = "0x2517980", VA = "0x182519380", Slot = "15")]
	internal override void CheckConstraint(DataRow childRow, DataRowAction action)
	{
	}

	[Token(Token = "0x60006CE")]
	[Address(RVA = "0x251A9F0", Offset = "0x2518FF0", VA = "0x18251A9F0")]
	private void NonVirtualCheckState()
	{
	}

	[Token(Token = "0x60006CF")]
	[Address(RVA = "0x2519660", Offset = "0x2517C60", VA = "0x182519660", Slot = "16")]
	internal override void CheckState()
	{
	}

	[Token(Token = "0x60006D2")]
	[Address(RVA = "0x251A280", Offset = "0x2518880", VA = "0x18251A280", Slot = "9")]
	internal override bool ContainsColumn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x60006D3")]
	[Address(RVA = "0x251A260", Offset = "0x2518860", VA = "0x18251A260", Slot = "11")]
	internal override Constraint Clone(DataSet destination)
	{
		return null;
	}

	[Token(Token = "0x60006D4")]
	[Address(RVA = "0x2519670", Offset = "0x2517C70", VA = "0x182519670", Slot = "12")]
	internal override Constraint Clone(DataSet destination, bool ignorNSforTableLookup)
	{
		return null;
	}

	[Token(Token = "0x60006D5")]
	[Address(RVA = "0x2519CF0", Offset = "0x25182F0", VA = "0x182519CF0")]
	internal ForeignKeyConstraint Clone(DataTable destination)
	{
		return null;
	}

	[Token(Token = "0x60006D6")]
	[Address(RVA = "0x251A2D0", Offset = "0x25188D0", VA = "0x18251A2D0")]
	private void Create(string relationName, DataColumn[] parentColumns, DataColumn[] childColumns)
	{
	}

	[Token(Token = "0x60006D9")]
	[Address(RVA = "0x251A4E0", Offset = "0x2518AE0", VA = "0x18251A4E0", Slot = "0")]
	public override bool Equals(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x60006DA")]
	[Address(RVA = "0x198AC80", Offset = "0x1989280", VA = "0x18198AC80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60006DE")]
	[Address(RVA = "0x251A600", Offset = "0x2518C00", VA = "0x18251A600")]
	internal DataRelation FindParentRelation()
	{
		return null;
	}
}
