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
		[Address(RVA = "0x42782A0", Offset = "0x42782A0", VA = "0x42782A0")]
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
		[Address(RVA = "0x42782C0", Offset = "0x42782C0", VA = "0x42782C0", Slot = "19")]
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
		[Address(RVA = "0x42782E0", Offset = "0x42782E0", VA = "0x42782E0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000116")]
	internal string[] ParentColumnNames
	{
		[Token(Token = "0x60006A0")]
		[Address(RVA = "0x4278300", Offset = "0x4278300", VA = "0x4278300")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000117")]
	internal string[] ChildColumnNames
	{
		[Token(Token = "0x60006A1")]
		[Address(RVA = "0x4278310", Offset = "0x4278310", VA = "0x4278310")]
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
		[Address(RVA = "0x427A770", Offset = "0x427A770", VA = "0x427A770", Slot = "20")]
		get
		{
			return default(AcceptRejectRule);
		}
		[Token(Token = "0x60006B2")]
		[Address(RVA = "0x427A780", Offset = "0x427A780", VA = "0x427A780", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x17000119")]
	[DefaultValue(Rule.Cascade)]
	public virtual Rule DeleteRule
	{
		[Token(Token = "0x60006B8")]
		[Address(RVA = "0x427B820", Offset = "0x427B820", VA = "0x427B820", Slot = "22")]
		get
		{
			return default(Rule);
		}
		[Token(Token = "0x60006B9")]
		[Address(RVA = "0x427B830", Offset = "0x427B830", VA = "0x427B830", Slot = "23")]
		set
		{
		}
	}

	[Token(Token = "0x1700011A")]
	[ReadOnly(true)]
	public virtual DataColumn[] RelatedColumns
	{
		[Token(Token = "0x60006BC")]
		[Address(RVA = "0x427B970", Offset = "0x427B970", VA = "0x427B970", Slot = "24")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011B")]
	internal DataColumn[] RelatedColumnsReference
	{
		[Token(Token = "0x60006BD")]
		[Address(RVA = "0x427B0F0", Offset = "0x427B0F0", VA = "0x427B0F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011C")]
	internal DataKey ParentKey
	{
		[Token(Token = "0x60006BE")]
		[Address(RVA = "0x427A0C0", Offset = "0x427A0C0", VA = "0x427A0C0")]
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
		[Address(RVA = "0x427BA60", Offset = "0x427BA60", VA = "0x427BA60", Slot = "25")]
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
		[Address(RVA = "0x427BA80", Offset = "0x427BA80", VA = "0x427BA80", Slot = "26")]
		get
		{
			return default(Rule);
		}
		[Token(Token = "0x60006C2")]
		[Address(RVA = "0x427BA90", Offset = "0x427BA90", VA = "0x427BA90", Slot = "27")]
		set
		{
		}
	}

	[Token(Token = "0x600069A")]
	[Address(RVA = "0x4277FC0", Offset = "0x4277FC0", VA = "0x4277FC0")]
	public ForeignKeyConstraint(DataColumn[] parentColumns, DataColumn[] childColumns)
	{
	}

	[Token(Token = "0x600069B")]
	[Address(RVA = "0x4278000", Offset = "0x4278000", VA = "0x4278000")]
	public ForeignKeyConstraint(string constraintName, DataColumn[] parentColumns, DataColumn[] childColumns)
	{
	}

	[Token(Token = "0x600069C")]
	[Address(RVA = "0x4278200", Offset = "0x4278200", VA = "0x4278200")]
	[Browsable(false)]
	public ForeignKeyConstraint(string constraintName, string parentTableName, string[] parentColumnNames, string[] childColumnNames, AcceptRejectRule acceptRejectRule, Rule deleteRule, Rule updateRule)
	{
	}

	[Token(Token = "0x60006A2")]
	[Address(RVA = "0x4278320", Offset = "0x4278320", VA = "0x4278320", Slot = "13")]
	internal override void CheckCanAddToCollection(ConstraintCollection constraints)
	{
	}

	[Token(Token = "0x60006A3")]
	[Address(RVA = "0x4278450", Offset = "0x4278450", VA = "0x4278450", Slot = "14")]
	internal override bool CanBeRemovedFromCollection(ConstraintCollection constraints, bool fThrowException)
	{
		return default(bool);
	}

	[Token(Token = "0x60006A4")]
	[Address(RVA = "0x4278460", Offset = "0x4278460", VA = "0x4278460")]
	internal bool IsKeyNull(object[] values)
	{
		return default(bool);
	}

	[Token(Token = "0x60006A5")]
	[Address(RVA = "0x4278510", Offset = "0x4278510", VA = "0x4278510", Slot = "18")]
	internal override bool IsConstraintViolated()
	{
		return default(bool);
	}

	[Token(Token = "0x60006A6")]
	[Address(RVA = "0x4278B40", Offset = "0x4278B40", VA = "0x4278B40", Slot = "10")]
	internal override bool CanEnableConstraint()
	{
		return default(bool);
	}

	[Token(Token = "0x60006A7")]
	[Address(RVA = "0x4278E90", Offset = "0x4278E90", VA = "0x4278E90")]
	internal void CascadeCommit(DataRow row)
	{
	}

	[Token(Token = "0x60006A8")]
	[Address(RVA = "0x4279050", Offset = "0x4279050", VA = "0x4279050")]
	internal void CascadeDelete(DataRow row)
	{
	}

	[Token(Token = "0x60006A9")]
	[Address(RVA = "0x4279730", Offset = "0x4279730", VA = "0x4279730")]
	internal void CascadeRollback(DataRow row)
	{
	}

	[Token(Token = "0x60006AA")]
	[Address(RVA = "0x4279970", Offset = "0x4279970", VA = "0x4279970")]
	internal void CascadeUpdate(DataRow row)
	{
	}

	[Token(Token = "0x60006AB")]
	[Address(RVA = "0x4279F40", Offset = "0x4279F40", VA = "0x4279F40")]
	internal void CheckCanClearParentTable(DataTable table)
	{
	}

	[Token(Token = "0x60006AC")]
	[Address(RVA = "0x427A020", Offset = "0x427A020", VA = "0x427A020")]
	internal void CheckCanRemoveParentRow(DataRow row)
	{
	}

	[Token(Token = "0x60006AD")]
	[Address(RVA = "0x427A0E0", Offset = "0x427A0E0", VA = "0x427A0E0")]
	internal void CheckCascade(DataRow row, DataRowAction action)
	{
	}

	[Token(Token = "0x60006AE")]
	[Address(RVA = "0x427A1E0", Offset = "0x427A1E0", VA = "0x427A1E0", Slot = "15")]
	internal override void CheckConstraint(DataRow childRow, DataRowAction action)
	{
	}

	[Token(Token = "0x60006AF")]
	[Address(RVA = "0x427A510", Offset = "0x427A510", VA = "0x427A510")]
	private void NonVirtualCheckState()
	{
	}

	[Token(Token = "0x60006B0")]
	[Address(RVA = "0x427A760", Offset = "0x427A760", VA = "0x427A760", Slot = "16")]
	internal override void CheckState()
	{
	}

	[Token(Token = "0x60006B3")]
	[Address(RVA = "0x427A7D0", Offset = "0x427A7D0", VA = "0x427A7D0", Slot = "9")]
	internal override bool ContainsColumn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x60006B4")]
	[Address(RVA = "0x427A810", Offset = "0x427A810", VA = "0x427A810", Slot = "11")]
	internal override Constraint Clone(DataSet destination)
	{
		return null;
	}

	[Token(Token = "0x60006B5")]
	[Address(RVA = "0x427A830", Offset = "0x427A830", VA = "0x427A830", Slot = "12")]
	internal override Constraint Clone(DataSet destination, bool ignorNSforTableLookup)
	{
		return null;
	}

	[Token(Token = "0x60006B6")]
	[Address(RVA = "0x427B110", Offset = "0x427B110", VA = "0x427B110")]
	internal ForeignKeyConstraint Clone(DataTable destination)
	{
		return null;
	}

	[Token(Token = "0x60006B7")]
	[Address(RVA = "0x4278050", Offset = "0x4278050", VA = "0x4278050")]
	private void Create(string relationName, DataColumn[] parentColumns, DataColumn[] childColumns)
	{
	}

	[Token(Token = "0x60006BA")]
	[Address(RVA = "0x427B880", Offset = "0x427B880", VA = "0x427B880", Slot = "0")]
	public override bool Equals(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x60006BB")]
	[Address(RVA = "0x427B960", Offset = "0x427B960", VA = "0x427B960", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60006BF")]
	[Address(RVA = "0x427B990", Offset = "0x427B990", VA = "0x427B990")]
	internal DataRelation FindParentRelation()
	{
		return null;
	}
}
