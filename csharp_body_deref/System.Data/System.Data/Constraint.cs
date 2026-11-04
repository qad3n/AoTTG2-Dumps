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

[Token(Token = "0x2000028")]
[TypeConverter(typeof(ConstraintConverter))]
[DefaultProperty("ConstraintName")]
public abstract class Constraint
{
	[Token(Token = "0x40000EF")]
	[FieldOffset(Offset = "0x10")]
	private string _schemaName;

	[Token(Token = "0x40000F0")]
	[FieldOffset(Offset = "0x18")]
	private bool _inCollection;

	[Token(Token = "0x40000F1")]
	[FieldOffset(Offset = "0x20")]
	private DataSet _dataSet;

	[Token(Token = "0x40000F2")]
	[FieldOffset(Offset = "0x28")]
	internal string _name;

	[Token(Token = "0x40000F3")]
	[FieldOffset(Offset = "0x30")]
	internal PropertyCollection _extendedProperties;

	[Token(Token = "0x1700007B")]
	[DefaultValue("")]
	public virtual string ConstraintName
	{
		[Token(Token = "0x6000350")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000351")]
		[Address(RVA = "0x24EA170", Offset = "0x24E8770", VA = "0x1824EA170", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x1700007C")]
	internal string SchemaName
	{
		[Token(Token = "0x6000352")]
		[Address(RVA = "0x24EA130", Offset = "0x24E8730", VA = "0x1824EA130")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000353")]
		[Address(RVA = "0x24EA3E0", Offset = "0x24E89E0", VA = "0x1824EA3E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007D")]
	internal virtual bool InCollection
	{
		[Token(Token = "0x6000354")]
		[Address(RVA = "0x111AD30", Offset = "0x1119330", VA = "0x18111AD30", Slot = "6")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000355")]
		[Address(RVA = "0x24EA380", Offset = "0x24E8980", VA = "0x1824EA380", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x1700007E")]
	public abstract DataTable Table
	{
		[Token(Token = "0x6000356")]
		get;
	}

	[Token(Token = "0x1700007F")]
	[Browsable(false)]
	public PropertyCollection ExtendedProperties
	{
		[Token(Token = "0x6000357")]
		[Address(RVA = "0x24EA0C0", Offset = "0x24E86C0", VA = "0x1824EA0C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000080")]
	[CLSCompliant(false)]
	protected virtual DataSet _DataSet
	{
		[Token(Token = "0x6000362")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000358")]
	internal abstract bool ContainsColumn(DataColumn column);

	[Token(Token = "0x6000359")]
	internal abstract bool CanEnableConstraint();

	[Token(Token = "0x600035A")]
	internal abstract Constraint Clone(DataSet destination);

	[Token(Token = "0x600035B")]
	internal abstract Constraint Clone(DataSet destination, bool ignoreNSforTableLookup);

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x24E9F90", Offset = "0x24E8590", VA = "0x1824E9F90")]
	internal void CheckConstraint()
	{
	}

	[Token(Token = "0x600035D")]
	internal abstract void CheckCanAddToCollection(ConstraintCollection constraint);

	[Token(Token = "0x600035E")]
	internal abstract bool CanBeRemovedFromCollection(ConstraintCollection constraint, bool fThrowException);

	[Token(Token = "0x600035F")]
	internal abstract void CheckConstraint(DataRow row, DataRowAction action);

	[Token(Token = "0x6000360")]
	internal abstract void CheckState();

	[Token(Token = "0x6000361")]
	[Address(RVA = "0x24E9FF0", Offset = "0x24E85F0", VA = "0x1824E9FF0")]
	protected void CheckStateForProperty()
	{
	}

	[Token(Token = "0x6000363")]
	internal abstract bool IsConstraintViolated();

	[Token(Token = "0x6000364")]
	[Address(RVA = "0x1B47C10", Offset = "0x1B46210", VA = "0x181B47C10", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000365")]
	[Address(RVA = "0x24EA060", Offset = "0x24E8660", VA = "0x1824EA060")]
	protected Constraint()
	{
	}
}
