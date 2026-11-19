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
		[Address(RVA = "0x5E8BF40", Offset = "0x5E8AF40", VA = "0x5E8BF40", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000351")]
		[Address(RVA = "0x5E8BF50", Offset = "0x5E8AF50", VA = "0x5E8BF50", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x1700007C")]
	internal string SchemaName
	{
		[Token(Token = "0x6000352")]
		[Address(RVA = "0x5E8C3E0", Offset = "0x5E8B3E0", VA = "0x5E8C3E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000353")]
		[Address(RVA = "0x5E8C410", Offset = "0x5E8B410", VA = "0x5E8C410")]
		set
		{
		}
	}

	[Token(Token = "0x1700007D")]
	internal virtual bool InCollection
	{
		[Token(Token = "0x6000354")]
		[Address(RVA = "0x5E8C450", Offset = "0x5E8B450", VA = "0x5E8C450", Slot = "6")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000355")]
		[Address(RVA = "0x5E8C460", Offset = "0x5E8B460", VA = "0x5E8C460", Slot = "7")]
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
		[Address(RVA = "0x5E8C4B0", Offset = "0x5E8B4B0", VA = "0x5E8C4B0")]
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
		[Address(RVA = "0x5E8C6D0", Offset = "0x5E8B6D0", VA = "0x5E8C6D0", Slot = "17")]
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
	[Address(RVA = "0x5E8C520", Offset = "0x5E8B520", VA = "0x5E8C520")]
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
	[Address(RVA = "0x5E8C580", Offset = "0x5E8B580", VA = "0x5E8C580")]
	protected void CheckStateForProperty()
	{
	}

	[Token(Token = "0x6000363")]
	internal abstract bool IsConstraintViolated();

	[Token(Token = "0x6000364")]
	[Address(RVA = "0x5E8C6E0", Offset = "0x5E8B6E0", VA = "0x5E8C6E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000365")]
	[Address(RVA = "0x5E8C700", Offset = "0x5E8B700", VA = "0x5E8C700")]
	protected Constraint()
	{
	}
}
