// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Constraint
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.ComponentModel;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000008")]
[DefaultProperty("ConstraintName")]
[TypeConverter(typeof(ConstraintConverter))]
public abstract class Constraint
{
	[Token(Token = "0x4000013")]
	[FieldOffset(Offset = "0x10")]
	private string _schemaName;

	[Token(Token = "0x4000014")]
	[FieldOffset(Offset = "0x18")]
	private bool _inCollection;

	[Token(Token = "0x4000015")]
	[FieldOffset(Offset = "0x20")]
	private DataSet _dataSet;

	[Token(Token = "0x4000016")]
	[FieldOffset(Offset = "0x28")]
	internal string _name;

	[Token(Token = "0x4000017")]
	[FieldOffset(Offset = "0x30")]
	internal PropertyCollection _extendedProperties;

	[Token(Token = "0x17000005")]
	[DefaultValue("")]
	public virtual string ConstraintName
	{
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x4533350", Offset = "0x4533350", VA = "0x4533350", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x4533360", Offset = "0x4533360", VA = "0x4533360", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	internal string SchemaName
	{
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x45338A0", Offset = "0x45338A0", VA = "0x45338A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x45338D0", Offset = "0x45338D0", VA = "0x45338D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	internal virtual bool InCollection
	{
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x4533910", Offset = "0x4533910", VA = "0x4533910", Slot = "6")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x4533920", Offset = "0x4533920", VA = "0x4533920", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public abstract DataTable Table
	{
		[Token(Token = "0x600002C")]
		get;
	}

	[Token(Token = "0x17000009")]
	[Browsable(false)]
	public PropertyCollection ExtendedProperties
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x4533970", Offset = "0x4533970", VA = "0x4533970")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000A")]
	[CLSCompliant(false)]
	protected virtual DataSet _DataSet
	{
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x4533D70", Offset = "0x4533D70", VA = "0x4533D70", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600002E")]
	internal abstract bool ContainsColumn(DataColumn column);

	[Token(Token = "0x600002F")]
	internal abstract bool CanEnableConstraint();

	[Token(Token = "0x6000030")]
	internal abstract Constraint Clone(DataSet destination);

	[Token(Token = "0x6000031")]
	internal abstract Constraint Clone(DataSet destination, bool ignoreNSforTableLookup);

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x45339E0", Offset = "0x45339E0", VA = "0x45339E0")]
	internal void CheckConstraint()
	{
	}

	[Token(Token = "0x6000033")]
	internal abstract void CheckCanAddToCollection(ConstraintCollection constraint);

	[Token(Token = "0x6000034")]
	internal abstract bool CanBeRemovedFromCollection(ConstraintCollection constraint, bool fThrowException);

	[Token(Token = "0x6000035")]
	internal abstract void CheckConstraint(DataRow row, DataRowAction action);

	[Token(Token = "0x6000036")]
	internal abstract void CheckState();

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x4533B40", Offset = "0x4533B40", VA = "0x4533B40")]
	protected void CheckStateForProperty()
	{
	}

	[Token(Token = "0x6000039")]
	internal abstract bool IsConstraintViolated();

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x4533D80", Offset = "0x4533D80", VA = "0x4533D80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x4533DA0", Offset = "0x4533DA0", VA = "0x4533DA0")]
	protected Constraint()
	{
	}
}
