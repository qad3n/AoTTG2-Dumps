// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.ExceptionBuilder
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000017")]
internal static class ExceptionBuilder
{
	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x24DEB90", Offset = "0x24DD190", VA = "0x1824DEB90")]
	private static void TraceException(string trace, Exception e)
	{
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x24DE950", Offset = "0x24DCF50", VA = "0x1824DE950")]
	internal static Exception TraceExceptionAsReturnValue(Exception e)
	{
		return null;
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x24DEA10", Offset = "0x24DD010", VA = "0x1824DEA10")]
	internal static Exception TraceExceptionForCapture(Exception e)
	{
		return null;
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x24DEAD0", Offset = "0x24DD0D0", VA = "0x1824DEAD0")]
	internal static Exception TraceExceptionWithoutRethrow(Exception e)
	{
		return null;
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x24DF470", Offset = "0x24DDA70", VA = "0x1824DF470")]
	internal static Exception _Argument(string error)
	{
		return null;
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x24DF3A0", Offset = "0x24DD9A0", VA = "0x1824DF3A0")]
	internal static Exception _Argument(string paramName, string error)
	{
		return null;
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x24DF400", Offset = "0x24DDA00", VA = "0x1824DF400")]
	internal static Exception _Argument(string error, Exception innerException)
	{
		return null;
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x24DF2C0", Offset = "0x24DD8C0", VA = "0x1824DF2C0")]
	private static Exception _ArgumentNull(string paramName, string msg)
	{
		return null;
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x24DF330", Offset = "0x24DD930", VA = "0x1824DF330")]
	internal static Exception _ArgumentOutOfRange(string paramName, string msg)
	{
		return null;
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x24DF690", Offset = "0x24DDC90", VA = "0x1824DF690")]
	private static Exception _IndexOutOfRange(string error)
	{
		return null;
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x24DF7C0", Offset = "0x24DDDC0", VA = "0x1824DF7C0")]
	private static Exception _InvalidOperation(string error)
	{
		return null;
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x24DF760", Offset = "0x24DDD60", VA = "0x1824DF760")]
	private static Exception _InvalidEnumArgumentException(string error)
	{
		return null;
	}

	[Token(Token = "0x60000CF")]
	private static Exception _InvalidEnumArgumentException<T>(T value)
	{
		return null;
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x24DE800", Offset = "0x24DCE00", VA = "0x1824DE800")]
	private static void ThrowDataException(string error, Exception innerException)
	{
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x24DAE80", Offset = "0x24D9480", VA = "0x1824DAE80")]
	private static Exception _Data(string error)
	{
		return null;
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x24DF4D0", Offset = "0x24DDAD0", VA = "0x1824DF4D0")]
	private static Exception _Constraint(string error)
	{
		return null;
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x24DF6F0", Offset = "0x24DDCF0", VA = "0x1824DF6F0")]
	private static Exception _InvalidConstraint(string error)
	{
		return null;
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x24DF540", Offset = "0x24DDB40", VA = "0x1824DF540")]
	private static Exception _DeletedRowInaccessible(string error)
	{
		return null;
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x24DF5B0", Offset = "0x24DDBB0", VA = "0x1824DF5B0")]
	private static Exception _DuplicateName(string error)
	{
		return null;
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x24DF620", Offset = "0x24DDC20", VA = "0x1824DF620")]
	private static Exception _InRowChangingEvent(string error)
	{
		return null;
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x24DF820", Offset = "0x24DDE20", VA = "0x1824DF820")]
	private static Exception _NoNullAllowed(string error)
	{
		return null;
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x24DF890", Offset = "0x24DDE90", VA = "0x1824DF890")]
	private static Exception _ReadOnly(string error)
	{
		return null;
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x24DF900", Offset = "0x24DDF00", VA = "0x1824DF900")]
	private static Exception _RowNotInTable(string error)
	{
		return null;
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x24DF970", Offset = "0x24DDF70", VA = "0x1824DF970")]
	private static Exception _VersionNotFound(string error)
	{
		return null;
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x24D4E50", Offset = "0x24D3450", VA = "0x1824D4E50")]
	public static Exception ArgumentNull(string paramName)
	{
		return null;
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x24D4F30", Offset = "0x24D3530", VA = "0x1824D4F30")]
	public static Exception ArgumentOutOfRange(string paramName)
	{
		return null;
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x24D5350", Offset = "0x24D3950", VA = "0x1824D5350")]
	public static Exception BadObjectPropertyAccess(string error)
	{
		return null;
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x24D4D80", Offset = "0x24D3380", VA = "0x1824D4D80")]
	public static Exception ArgumentContainsNull(string paramName)
	{
		return null;
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x24DEC20", Offset = "0x24DD220", VA = "0x1824DEC20")]
	public static Exception TypeNotAllowed(Type type)
	{
		return null;
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x24D6350", Offset = "0x24D4950", VA = "0x1824D6350")]
	public static Exception CannotModifyCollection()
	{
		return null;
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x24D6D80", Offset = "0x24D5380", VA = "0x1824D6D80")]
	public static Exception CaseInsensitiveNameConflict(string name)
	{
		return null;
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x24DB490", Offset = "0x24D9A90", VA = "0x1824DB490")]
	public static Exception NamespaceNameConflict(string name)
	{
		return null;
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x24D9FC0", Offset = "0x24D85C0", VA = "0x1824D9FC0")]
	public static Exception InvalidOffsetLength()
	{
		return null;
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x24D7120", Offset = "0x24D5720", VA = "0x1824D7120")]
	public static Exception ColumnNotInTheTable(string column, string table)
	{
		return null;
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x24D70A0", Offset = "0x24D56A0", VA = "0x1824D70A0")]
	public static Exception ColumnNotInAnyTable()
	{
		return null;
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x24D71C0", Offset = "0x24D57C0", VA = "0x1824D71C0")]
	public static Exception ColumnOutOfRange(int index)
	{
		return null;
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x24D72D0", Offset = "0x24D58D0", VA = "0x1824D72D0")]
	public static Exception ColumnOutOfRange(string column)
	{
		return null;
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x24D5B10", Offset = "0x24D4110", VA = "0x1824D5B10")]
	public static Exception CannotAddColumn1(string column)
	{
		return null;
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x24D5BE0", Offset = "0x24D41E0", VA = "0x1824D5BE0")]
	public static Exception CannotAddColumn2(string column)
	{
		return null;
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x24D5CB0", Offset = "0x24D42B0", VA = "0x1824D5CB0")]
	public static Exception CannotAddColumn3()
	{
		return null;
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x24D5D30", Offset = "0x24D4330", VA = "0x1824D5D30")]
	public static Exception CannotAddColumn4(string column)
	{
		return null;
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x24D5FA0", Offset = "0x24D45A0", VA = "0x1824D5FA0")]
	public static Exception CannotAddDuplicate(string column)
	{
		return null;
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x24D5E00", Offset = "0x24D4400", VA = "0x1824D5E00")]
	public static Exception CannotAddDuplicate2(string table)
	{
		return null;
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x24D5ED0", Offset = "0x24D44D0", VA = "0x1824D5ED0")]
	public static Exception CannotAddDuplicate3(string table)
	{
		return null;
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x24D64A0", Offset = "0x24D4AA0", VA = "0x1824D64A0")]
	public static Exception CannotRemoveColumn()
	{
		return null;
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x24D6660", Offset = "0x24D4C60", VA = "0x1824D6660")]
	public static Exception CannotRemovePrimaryKey()
	{
		return null;
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x24D63D0", Offset = "0x24D49D0", VA = "0x1824D63D0")]
	public static Exception CannotRemoveChildKey(string relation)
	{
		return null;
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x24D6520", Offset = "0x24D4B20", VA = "0x1824D6520")]
	public static Exception CannotRemoveConstraint(string constraint, string table)
	{
		return null;
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x24D65C0", Offset = "0x24D4BC0", VA = "0x1824D65C0")]
	public static Exception CannotRemoveExpression(string column, string expression)
	{
		return null;
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x24D4C10", Offset = "0x24D3210", VA = "0x1824D4C10")]
	public static Exception AddPrimaryKeyConstraint()
	{
		return null;
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x24DB780", Offset = "0x24D9D80", VA = "0x1824DB780")]
	public static Exception NoConstraintName()
	{
		return null;
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x24D7A20", Offset = "0x24D6020", VA = "0x1824D7A20")]
	public static Exception ConstraintViolation(string constraint)
	{
		return null;
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x24DAB40", Offset = "0x24D9140", VA = "0x1824DAB40")]
	public static string KeysToString(object[] keys)
	{
		return null;
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x24DEF30", Offset = "0x24DD530", VA = "0x1824DEF30")]
	public static string UniqueConstraintViolationText(DataColumn[] columns, object[] values)
	{
		return null;
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x24D79B0", Offset = "0x24D5FB0", VA = "0x1824D79B0")]
	public static Exception ConstraintViolation(DataColumn[] columns, object[] values)
	{
		return null;
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x24D77A0", Offset = "0x24D5DA0", VA = "0x1824D77A0")]
	public static Exception ConstraintOutOfRange(int index)
	{
		return null;
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x24D85E0", Offset = "0x24D6BE0", VA = "0x1824D85E0")]
	public static Exception DuplicateConstraint(string constraint)
	{
		return null;
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x24D8440", Offset = "0x24D6A40", VA = "0x1824D8440")]
	public static Exception DuplicateConstraintName(string constraint)
	{
		return null;
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x24DB560", Offset = "0x24D9B60", VA = "0x1824DB560")]
	public static Exception NeededForForeignKeyConstraint(UniqueConstraint key, ForeignKeyConstraint fk)
	{
		return null;
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x24DF1C0", Offset = "0x24DD7C0", VA = "0x1824DF1C0")]
	public static Exception UniqueConstraintViolation()
	{
		return null;
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x24D7720", Offset = "0x24D5D20", VA = "0x1824D7720")]
	public static Exception ConstraintForeignTable()
	{
		return null;
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x24D78B0", Offset = "0x24D5EB0", VA = "0x1824D78B0")]
	public static Exception ConstraintParentValues()
	{
		return null;
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x24D7630", Offset = "0x24D5C30", VA = "0x1824D7630")]
	public static Exception ConstraintAddFailed(DataTable table)
	{
		return null;
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x24D7930", Offset = "0x24D5F30", VA = "0x1824D7930")]
	public static Exception ConstraintRemoveFailed()
	{
		return null;
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x24D8FE0", Offset = "0x24D75E0", VA = "0x1824D8FE0")]
	public static Exception FailedCascadeDelete(string constraint)
	{
		return null;
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x24D90B0", Offset = "0x24D76B0", VA = "0x1824D90B0")]
	public static Exception FailedCascadeUpdate(string constraint)
	{
		return null;
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x24D9180", Offset = "0x24D7780", VA = "0x1824D9180")]
	public static Exception FailedClearParentTable(string table, string constraint, string childTable)
	{
		return null;
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x24D9270", Offset = "0x24D7870", VA = "0x1824D9270")]
	public static Exception ForeignKeyViolation(string constraint, object[] keys)
	{
		return null;
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x24DD000", Offset = "0x24DB600", VA = "0x1824DD000")]
	public static Exception RemoveParentRow(ForeignKeyConstraint constraint)
	{
		return null;
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x24DADF0", Offset = "0x24D93F0", VA = "0x1824DADF0")]
	public static string MaxLengthViolationText(string columnName)
	{
		return null;
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x24DBB00", Offset = "0x24DA100", VA = "0x1824DBB00")]
	public static string NotAllowDBNullViolationText(string columnName)
	{
		return null;
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x24D6B40", Offset = "0x24D5140", VA = "0x1824D6B40")]
	public static Exception CantAddConstraintToMultipleNestedTable(string tableName)
	{
		return null;
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x24D5180", Offset = "0x24D3780", VA = "0x1824D5180")]
	public static Exception AutoIncrementAndExpression()
	{
		return null;
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x24D5100", Offset = "0x24D3700", VA = "0x1824D5100")]
	public static Exception AutoIncrementAndDefaultValue()
	{
		return null;
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x24D52D0", Offset = "0x24D38D0", VA = "0x1824D52D0")]
	public static Exception AutoIncrementSeed()
	{
		return null;
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x24D6C10", Offset = "0x24D5210", VA = "0x1824D6C10")]
	public static Exception CantChangeDataType()
	{
		return null;
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x24DBC20", Offset = "0x24DA220", VA = "0x1824DBC20")]
	public static Exception NullDataType()
	{
		return null;
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x24D7020", Offset = "0x24D5620", VA = "0x1824D7020")]
	public static Exception ColumnNameRequired()
	{
		return null;
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x24D7F00", Offset = "0x24D6500", VA = "0x1824D7F00")]
	public static Exception DefaultValueAndAutoIncrement()
	{
		return null;
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x24D80C0", Offset = "0x24D66C0", VA = "0x1824D80C0")]
	public static Exception DefaultValueDataType(string column, Type defaultType, Type columnType, Exception inner)
	{
		return null;
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x24D7F80", Offset = "0x24D6580", VA = "0x1824D7F80")]
	public static Exception DefaultValueColumnDataType(string column, Type defaultType, Type columnType, Exception inner)
	{
		return null;
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x24D8E00", Offset = "0x24D7400", VA = "0x1824D8E00")]
	public static Exception ExpressionAndUnique()
	{
		return null;
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x24D8D80", Offset = "0x24D7380", VA = "0x1824D8D80")]
	public static Exception ExpressionAndReadOnly()
	{
		return null;
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x24D8CC0", Offset = "0x24D72C0", VA = "0x1824D8CC0")]
	public static Exception ExpressionAndConstraint(DataColumn column, Constraint constraint)
	{
		return null;
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x24D8F00", Offset = "0x24D7500", VA = "0x1824D8F00")]
	public static Exception ExpressionInConstraint(DataColumn column)
	{
		return null;
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x24D8E80", Offset = "0x24D7480", VA = "0x1824D8E80")]
	public static Exception ExpressionCircular()
	{
		return null;
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x24DBA30", Offset = "0x24DA030", VA = "0x1824DBA30")]
	public static Exception NonUniqueValues(string column)
	{
		return null;
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x24DBCA0", Offset = "0x24DA2A0", VA = "0x1824DBCA0")]
	public static Exception NullKeyValues(string column)
	{
		return null;
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x24DBE00", Offset = "0x24DA400", VA = "0x1824DBE00")]
	public static Exception NullValues(string column)
	{
		return null;
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x24DC2E0", Offset = "0x24DA8E0", VA = "0x1824DC2E0")]
	public static Exception ReadOnlyAndExpression()
	{
		return null;
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x24DC370", Offset = "0x24DA970", VA = "0x1824DC370")]
	public static Exception ReadOnly(string column)
	{
		return null;
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x24DEEB0", Offset = "0x24DD4B0", VA = "0x1824DEEB0")]
	public static Exception UniqueAndExpression()
	{
		return null;
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x24DDB20", Offset = "0x24DC120", VA = "0x1824DDB20")]
	public static Exception SetFailed(object value, DataColumn column, Type type, Exception innerException)
	{
		return null;
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x24D6A60", Offset = "0x24D5060", VA = "0x1824D6A60")]
	public static Exception CannotSetToNull(DataColumn column)
	{
		return null;
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x24DAC40", Offset = "0x24D9240", VA = "0x1824DAC40")]
	public static Exception LongerThanMaxLength(DataColumn column)
	{
		return null;
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x24D6840", Offset = "0x24D4E40", VA = "0x1824D6840")]
	public static Exception CannotSetMaxLength(DataColumn column, int value)
	{
		return null;
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x24D6760", Offset = "0x24D4D60", VA = "0x1824D6760")]
	public static Exception CannotSetMaxLength2(DataColumn column)
	{
		return null;
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x24D6920", Offset = "0x24D4F20", VA = "0x1824D6920")]
	public static Exception CannotSetSimpleContentType(string columnName, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x24D69C0", Offset = "0x24D4FC0", VA = "0x1824D69C0")]
	public static Exception CannotSetSimpleContent(string columnName, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x24D6110", Offset = "0x24D4710", VA = "0x1824D6110")]
	public static Exception CannotChangeNamespace(string columnName)
	{
		return null;
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x24D95E0", Offset = "0x24D7BE0", VA = "0x1824D95E0")]
	public static Exception HasToBeStringType(DataColumn column)
	{
		return null;
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x24D5200", Offset = "0x24D3800", VA = "0x1824D5200")]
	public static Exception AutoIncrementCannotSetIfHasData(string typeName)
	{
		return null;
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x24D9790", Offset = "0x24D7D90", VA = "0x1824D9790")]
	public static Exception INullableUDTwithoutStaticNull(string typeName)
	{
		return null;
	}

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x24D96C0", Offset = "0x24D7CC0", VA = "0x1824D96C0")]
	public static Exception IComparableNotImplemented(string typeName)
	{
		return null;
	}

	[Token(Token = "0x600012B")]
	[Address(RVA = "0x24DED10", Offset = "0x24DD310", VA = "0x1824DED10")]
	public static Exception UDTImplementsIChangeTrackingButnotIRevertible(string typeName)
	{
		return null;
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x24D9C50", Offset = "0x24D8250", VA = "0x1824D9C50")]
	public static Exception InvalidDataColumnMapping(Type type)
	{
		return null;
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x24D66E0", Offset = "0x24D4CE0", VA = "0x1824D66E0")]
	public static Exception CannotSetDateTimeModeForNonDateTimeColumns()
	{
		return null;
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x24D9D40", Offset = "0x24D8340", VA = "0x1824D9D40")]
	public static Exception InvalidDateTimeMode(DataSetDateTime mode)
	{
		return null;
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x24D6C90", Offset = "0x24D5290", VA = "0x1824D6C90")]
	public static Exception CantChangeDateTimeMode(DataSetDateTime oldValue, DataSetDateTime newValue)
	{
		return null;
	}

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x24D7540", Offset = "0x24D5B40", VA = "0x1824D7540")]
	public static Exception ColumnTypeNotSupported()
	{
		return null;
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x24DDCA0", Offset = "0x24DC2A0", VA = "0x1824DDCA0")]
	public static Exception SetFailed(string name)
	{
		return null;
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x24DDE90", Offset = "0x24DC490", VA = "0x1824DDE90")]
	public static Exception SetRowStateFilter()
	{
		return null;
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x24D5960", Offset = "0x24D3F60", VA = "0x1824D5960")]
	public static Exception CanNotUseDataViewManager()
	{
		return null;
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x24D58D0", Offset = "0x24D3ED0", VA = "0x1824D58D0")]
	public static Exception CanNotSetTable()
	{
		return null;
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x24D59F0", Offset = "0x24D3FF0", VA = "0x1824D59F0")]
	public static Exception CanNotUse()
	{
		return null;
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x24D54B0", Offset = "0x24D3AB0", VA = "0x1824D54B0")]
	public static Exception CanNotBindTable()
	{
		return null;
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x24DDF20", Offset = "0x24DC520", VA = "0x1824DDF20")]
	public static Exception SetTable()
	{
		return null;
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x24DDD70", Offset = "0x24DC370", VA = "0x1824DDD70")]
	public static Exception SetIListObject()
	{
		return null;
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x24D4B80", Offset = "0x24D3180", VA = "0x1824D4B80")]
	public static Exception AddNewNotAllowNull()
	{
		return null;
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x24DBB90", Offset = "0x24DA190", VA = "0x1824DBB90")]
	public static Exception NotOpen()
	{
		return null;
	}

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x24D7BD0", Offset = "0x24D61D0", VA = "0x1824D7BD0")]
	public static Exception CreateChildView()
	{
		return null;
	}

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x24D55C0", Offset = "0x24D3BC0", VA = "0x1824D55C0")]
	public static Exception CanNotDelete()
	{
		return null;
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x24D9430", Offset = "0x24D7A30", VA = "0x1824D9430")]
	public static Exception GetElementIndex(int index)
	{
		return null;
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x24D4B00", Offset = "0x24D3100", VA = "0x1824D4B00")]
	public static Exception AddExternalObject()
	{
		return null;
	}

	[Token(Token = "0x600013F")]
	[Address(RVA = "0x24D5540", Offset = "0x24D3B40", VA = "0x1824D5540")]
	public static Exception CanNotClear()
	{
		return null;
	}

	[Token(Token = "0x6000140")]
	[Address(RVA = "0x24D9A40", Offset = "0x24D8040", VA = "0x1824D9A40")]
	public static Exception InsertExternalObject()
	{
		return null;
	}

	[Token(Token = "0x6000141")]
	[Address(RVA = "0x24DCF80", Offset = "0x24DB580", VA = "0x1824DCF80")]
	public static Exception RemoveExternalObject()
	{
		return null;
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x24D73A0", Offset = "0x24D59A0", VA = "0x1824D73A0")]
	public static Exception ColumnToSortIsOutOfRange(string column)
	{
		return null;
	}

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x24DA9A0", Offset = "0x24D8FA0", VA = "0x1824DA9A0")]
	public static Exception KeyTableMismatch()
	{
		return null;
	}

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x24DA910", Offset = "0x24D8F10", VA = "0x1824DA910")]
	public static Exception KeyNoColumns()
	{
		return null;
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x24DAA30", Offset = "0x24D9030", VA = "0x1824DAA30")]
	public static Exception KeyTooManyColumns(int cols)
	{
		return null;
	}

	[Token(Token = "0x6000146")]
	[Address(RVA = "0x24DA740", Offset = "0x24D8D40", VA = "0x1824DA740")]
	public static Exception KeyDuplicateColumns(string columnName)
	{
		return null;
	}

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x24DC7E0", Offset = "0x24DADE0", VA = "0x1824DC7E0")]
	public static Exception RelationDataSetMismatch()
	{
		return null;
	}

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x24D75A0", Offset = "0x24D5BA0", VA = "0x1824D75A0")]
	public static Exception ColumnsTypeMismatch()
	{
		return null;
	}

	[Token(Token = "0x6000149")]
	[Address(RVA = "0x24DA810", Offset = "0x24D8E10", VA = "0x1824DA810")]
	public static Exception KeyLengthMismatch()
	{
		return null;
	}

	[Token(Token = "0x600014A")]
	[Address(RVA = "0x24DA890", Offset = "0x24D8E90", VA = "0x1824DA890")]
	public static Exception KeyLengthZero()
	{
		return null;
	}

	[Token(Token = "0x600014B")]
	[Address(RVA = "0x24D9320", Offset = "0x24D7920", VA = "0x1824D9320")]
	public static Exception ForeignRelation()
	{
		return null;
	}

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x24DA6B0", Offset = "0x24D8CB0", VA = "0x1824DA6B0")]
	public static Exception KeyColumnsIdentical()
	{
		return null;
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x24DC9F0", Offset = "0x24DAFF0", VA = "0x1824DC9F0")]
	public static Exception RelationForeignTable(string t1, string t2)
	{
		return null;
	}

	[Token(Token = "0x600014E")]
	[Address(RVA = "0x24D9540", Offset = "0x24D7B40", VA = "0x1824D9540")]
	public static Exception GetParentRowTableMismatch(string t1, string t2)
	{
		return null;
	}

	[Token(Token = "0x600014F")]
	[Address(RVA = "0x24DDDF0", Offset = "0x24DC3F0", VA = "0x1824DDDF0")]
	public static Exception SetParentRowTableMismatch(string t1, string t2)
	{
		return null;
	}

	[Token(Token = "0x6000150")]
	[Address(RVA = "0x24DC970", Offset = "0x24DAF70", VA = "0x1824DC970")]
	public static Exception RelationForeignRow()
	{
		return null;
	}

	[Token(Token = "0x6000151")]
	[Address(RVA = "0x24DCA90", Offset = "0x24DB090", VA = "0x1824DCA90")]
	public static Exception RelationNestedReadOnly()
	{
		return null;
	}

	[Token(Token = "0x6000152")]
	[Address(RVA = "0x24DE240", Offset = "0x24DC840", VA = "0x1824DE240")]
	public static Exception TableCantBeNestedInTwoTables(string tableName)
	{
		return null;
	}

	[Token(Token = "0x6000153")]
	[Address(RVA = "0x24DAD20", Offset = "0x24D9320", VA = "0x1824DAD20")]
	public static Exception LoopInNestedRelations(string tableName)
	{
		return null;
	}

	[Token(Token = "0x6000154")]
	[Address(RVA = "0x24DC8F0", Offset = "0x24DAEF0", VA = "0x1824DC8F0")]
	public static Exception RelationDoesNotExist()
	{
		return null;
	}

	[Token(Token = "0x6000155")]
	[Address(RVA = "0x24DBED0", Offset = "0x24DA4D0", VA = "0x1824DBED0")]
	public static Exception ParentOrChildColumnsDoNotHaveDataSet()
	{
		return null;
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x24D9860", Offset = "0x24D7E60", VA = "0x1824D9860")]
	public static Exception InValidNestedRelation(string childTableName)
	{
		return null;
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x24DA040", Offset = "0x24D8640", VA = "0x1824DA040")]
	public static Exception InvalidParentNamespaceinNestedRelation(string childTableName)
	{
		return null;
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x24DD650", Offset = "0x24DBC50", VA = "0x1824DD650")]
	public static Exception RowNotInTheDataSet()
	{
		return null;
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x24DD6D0", Offset = "0x24DBCD0", VA = "0x1824DD6D0")]
	public static Exception RowNotInTheTable()
	{
		return null;
	}

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x24D89C0", Offset = "0x24D6FC0", VA = "0x1824D89C0")]
	public static Exception EditInRowChanging()
	{
		return null;
	}

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x24D8B20", Offset = "0x24D7120", VA = "0x1824D8B20")]
	public static Exception EndEditInRowChanging()
	{
		return null;
	}

	[Token(Token = "0x600015C")]
	[Address(RVA = "0x24D5420", Offset = "0x24D3A20", VA = "0x1824D5420")]
	public static Exception BeginEditInRowChanging()
	{
		return null;
	}

	[Token(Token = "0x600015D")]
	[Address(RVA = "0x24D5A80", Offset = "0x24D4080", VA = "0x1824D5A80")]
	public static Exception CancelEditInRowChanging()
	{
		return null;
	}

	[Token(Token = "0x600015E")]
	[Address(RVA = "0x24D81C0", Offset = "0x24D67C0", VA = "0x1824D81C0")]
	public static Exception DeleteInRowDeleting()
	{
		return null;
	}

	[Token(Token = "0x600015F")]
	[Address(RVA = "0x24DF240", Offset = "0x24DD840", VA = "0x1824DF240")]
	public static Exception ValueArrayLength()
	{
		return null;
	}

	[Token(Token = "0x6000160")]
	[Address(RVA = "0x24DB800", Offset = "0x24D9E00", VA = "0x1824DB800")]
	public static Exception NoCurrentData()
	{
		return null;
	}

	[Token(Token = "0x6000161")]
	[Address(RVA = "0x24DB890", Offset = "0x24D9E90", VA = "0x1824DB890")]
	public static Exception NoOriginalData()
	{
		return null;
	}

	[Token(Token = "0x6000162")]
	[Address(RVA = "0x24DB920", Offset = "0x24D9F20", VA = "0x1824DB920")]
	public static Exception NoProposedData()
	{
		return null;
	}

	[Token(Token = "0x6000163")]
	[Address(RVA = "0x24DD870", Offset = "0x24DBE70", VA = "0x1824DD870")]
	public static Exception RowRemovedFromTheTable()
	{
		return null;
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x24D8250", Offset = "0x24D6850", VA = "0x1824D8250")]
	public static Exception DeletedRowInaccessible()
	{
		return null;
	}

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x24DD210", Offset = "0x24DB810", VA = "0x1824DD210")]
	public static Exception RowAlreadyDeleted()
	{
		return null;
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x24DD430", Offset = "0x24DBA30", VA = "0x1824DD430")]
	public static Exception RowEmpty()
	{
		return null;
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x24DA2E0", Offset = "0x24D88E0", VA = "0x1824DA2E0")]
	public static Exception InvalidRowVersion()
	{
		return null;
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x24DD760", Offset = "0x24DBD60", VA = "0x1824DD760")]
	public static Exception RowOutOfRange(int index)
	{
		return null;
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x24DD580", Offset = "0x24DBB80", VA = "0x1824DD580")]
	public static Exception RowInsertTwice(int index, string tableName)
	{
		return null;
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x24DD4B0", Offset = "0x24DBAB0", VA = "0x1824DD4B0")]
	public static Exception RowInsertMissing(string tableName)
	{
		return null;
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x24DD3A0", Offset = "0x24DB9A0", VA = "0x1824DD3A0")]
	public static Exception RowAlreadyRemoved()
	{
		return null;
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x24DB380", Offset = "0x24D9980", VA = "0x1824DB380")]
	public static Exception MultipleParents()
	{
		return null;
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x24DA2A0", Offset = "0x24D88A0", VA = "0x1824DA2A0")]
	public static Exception InvalidRowState(DataRowState state)
	{
		return null;
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x24DA220", Offset = "0x24D8820", VA = "0x1824DA220")]
	public static Exception InvalidRowBitPattern()
	{
		return null;
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x24DDAA0", Offset = "0x24DC0A0", VA = "0x1824DDAA0")]
	internal static Exception SetDataSetNameToEmpty()
	{
		return null;
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x24DD9D0", Offset = "0x24DBFD0", VA = "0x1824DD9D0")]
	internal static Exception SetDataSetNameConflicting(string name)
	{
		return null;
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x24D7C50", Offset = "0x24D6250", VA = "0x1824D7C50")]
	public static Exception DataSetUnsupportedSchema(string ns)
	{
		return null;
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x24DAEF0", Offset = "0x24D94F0", VA = "0x1824DAEF0")]
	public static Exception MergeMissingDefinition(string obj)
	{
		return null;
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x24DE780", Offset = "0x24DCD80", VA = "0x1824DE780")]
	public static Exception TablesInDifferentSets()
	{
		return null;
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x24DC4C0", Offset = "0x24DAAC0", VA = "0x1824DC4C0")]
	public static Exception RelationAlreadyExists()
	{
		return null;
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x24DD2A0", Offset = "0x24DB8A0", VA = "0x1824DD2A0")]
	public static Exception RowAlreadyInOtherCollection()
	{
		return null;
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x24DD320", Offset = "0x24DB920", VA = "0x1824DD320")]
	public static Exception RowAlreadyInTheCollection()
	{
		return null;
	}

	[Token(Token = "0x6000177")]
	[Address(RVA = "0x24DC440", Offset = "0x24DAA40", VA = "0x1824DC440")]
	public static Exception RecordStateRange()
	{
		return null;
	}

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x24D9930", Offset = "0x24D7F30", VA = "0x1824D9930")]
	public static Exception IndexKeyLength(int length, int keyLength)
	{
		return null;
	}

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x24DD100", Offset = "0x24DB700", VA = "0x1824DD100")]
	public static Exception RemovePrimaryKey(DataTable table)
	{
		return null;
	}

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x24DC540", Offset = "0x24DAB40", VA = "0x1824DC540")]
	public static Exception RelationAlreadyInOtherDataSet()
	{
		return null;
	}

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x24DC5C0", Offset = "0x24DABC0", VA = "0x1824DC5C0")]
	public static Exception RelationAlreadyInTheDataSet()
	{
		return null;
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x24DCB10", Offset = "0x24DB110", VA = "0x1824DCB10")]
	public static Exception RelationNotInTheDataSet(string relation)
	{
		return null;
	}

	[Token(Token = "0x600017D")]
	[Address(RVA = "0x24DCBE0", Offset = "0x24DB1E0", VA = "0x1824DCBE0")]
	public static Exception RelationOutOfRange(object index)
	{
		return null;
	}

	[Token(Token = "0x600017E")]
	[Address(RVA = "0x24D8780", Offset = "0x24D6D80", VA = "0x1824D8780")]
	public static Exception DuplicateRelation(string relation)
	{
		return null;
	}

	[Token(Token = "0x600017F")]
	[Address(RVA = "0x24DCE80", Offset = "0x24DB480", VA = "0x1824DCE80")]
	public static Exception RelationTableNull()
	{
		return null;
	}

	[Token(Token = "0x6000180")]
	[Address(RVA = "0x24DC870", Offset = "0x24DAE70", VA = "0x1824DC870")]
	public static Exception RelationDataSetNull()
	{
		return null;
	}

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x24DCF00", Offset = "0x24DB500", VA = "0x1824DCF00")]
	public static Exception RelationTableWasRemoved()
	{
		return null;
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x24DBF60", Offset = "0x24DA560", VA = "0x1824DBF60")]
	public static Exception ParentTableMismatch()
	{
		return null;
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x24D6ED0", Offset = "0x24D54D0", VA = "0x1824D6ED0")]
	public static Exception ChildTableMismatch()
	{
		return null;
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x24D8BB0", Offset = "0x24D71B0", VA = "0x1824D8BB0")]
	public static Exception EnforceConstraint()
	{
		return null;
	}

	[Token(Token = "0x6000185")]
	[Address(RVA = "0x24D6E50", Offset = "0x24D5450", VA = "0x1824D6E50")]
	public static Exception CaseLocaleMismatch()
	{
		return null;
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x24D6070", Offset = "0x24D4670", VA = "0x1824D6070")]
	public static Exception CannotChangeCaseLocale()
	{
		return null;
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x24D6080", Offset = "0x24D4680", VA = "0x1824D6080")]
	public static Exception CannotChangeCaseLocale(Exception innerException)
	{
		return null;
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x24DA1E0", Offset = "0x24D87E0", VA = "0x1824DA1E0")]
	public static Exception InvalidRemotingFormat(SerializationFormat mode)
	{
		return null;
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x24DE310", Offset = "0x24DC910", VA = "0x1824DE310")]
	public static Exception TableForeignPrimaryKey()
	{
		return null;
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x24DE1C0", Offset = "0x24DC7C0", VA = "0x1824DE1C0")]
	public static Exception TableCannotAddToSimpleContent()
	{
		return null;
	}

	[Token(Token = "0x600018B")]
	[Address(RVA = "0x24DB9B0", Offset = "0x24D9FB0", VA = "0x1824DB9B0")]
	public static Exception NoTableName()
	{
		return null;
	}

	[Token(Token = "0x600018C")]
	[Address(RVA = "0x24DB410", Offset = "0x24D9A10", VA = "0x1824DB410")]
	public static Exception MultipleTextOnlyColumns()
	{
		return null;
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x24DA440", Offset = "0x24D8A40", VA = "0x1824DA440")]
	public static Exception InvalidSortString(string sort)
	{
		return null;
	}

	[Token(Token = "0x600018E")]
	[Address(RVA = "0x24D88F0", Offset = "0x24D6EF0", VA = "0x1824D88F0")]
	public static Exception DuplicateTableName(string table)
	{
		return null;
	}

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x24D8850", Offset = "0x24D6E50", VA = "0x1824D8850")]
	public static Exception DuplicateTableName2(string table, string ns)
	{
		return null;
	}

	[Token(Token = "0x6000190")]
	[Address(RVA = "0x24DD900", Offset = "0x24DBF00", VA = "0x1824DD900")]
	public static Exception SelfnestedDatasetConflictingName(string table)
	{
		return null;
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x24D7DA0", Offset = "0x24D63A0", VA = "0x1824D7DA0")]
	public static Exception DatasetConflictingName(string table)
	{
		return null;
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x24DE0C0", Offset = "0x24DC6C0", VA = "0x1824DE0C0")]
	public static Exception TableAlreadyInOtherDataSet()
	{
		return null;
	}

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x24DE140", Offset = "0x24DC740", VA = "0x1824DE140")]
	public static Exception TableAlreadyInTheDataSet()
	{
		return null;
	}

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x24DE670", Offset = "0x24DCC70", VA = "0x1824DE670")]
	public static Exception TableOutOfRange(int index)
	{
		return null;
	}

	[Token(Token = "0x6000195")]
	[Address(RVA = "0x24DE5A0", Offset = "0x24DCBA0", VA = "0x1824DE5A0")]
	public static Exception TableNotInTheDataSet(string table)
	{
		return null;
	}

	[Token(Token = "0x6000196")]
	[Address(RVA = "0x24DE450", Offset = "0x24DCA50", VA = "0x1824DE450")]
	public static Exception TableInRelation()
	{
		return null;
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x24DE390", Offset = "0x24DC990", VA = "0x1824DE390")]
	public static Exception TableInConstraint(DataTable table, Constraint constraint)
	{
		return null;
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x24D5750", Offset = "0x24D3D50", VA = "0x1824D5750")]
	public static Exception CanNotSerializeDataTableHierarchy()
	{
		return null;
	}

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x24D56D0", Offset = "0x24D3CD0", VA = "0x1824D56D0")]
	public static Exception CanNotRemoteDataTable()
	{
		return null;
	}

	[Token(Token = "0x600019A")]
	[Address(RVA = "0x24D5850", Offset = "0x24D3E50", VA = "0x1824D5850")]
	public static Exception CanNotSetRemotingFormat()
	{
		return null;
	}

	[Token(Token = "0x600019B")]
	[Address(RVA = "0x24D57D0", Offset = "0x24D3DD0", VA = "0x1824D57D0")]
	public static Exception CanNotSerializeDataTableWithEmptyName()
	{
		return null;
	}

	[Token(Token = "0x600019C")]
	[Address(RVA = "0x24DE4D0", Offset = "0x24DCAD0", VA = "0x1824DE4D0")]
	public static Exception TableNotFound(string tableName)
	{
		return null;
	}

	[Token(Token = "0x600019D")]
	[Address(RVA = "0x24D4C90", Offset = "0x24D3290", VA = "0x1824D4C90")]
	public static Exception AggregateException(AggregateType aggregateType, Type type)
	{
		return null;
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x24DA510", Offset = "0x24D8B10", VA = "0x1824DA510")]
	public static Exception InvalidStorageType(TypeCode typecode)
	{
		return null;
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x24DC1F0", Offset = "0x24DA7F0", VA = "0x1824DC1F0")]
	public static Exception RangeArgument(int min, int max)
	{
		return null;
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x24DBD70", Offset = "0x24DA370", VA = "0x1824DBD70")]
	public static Exception NullRange()
	{
		return null;
	}

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x24DB630", Offset = "0x24D9C30", VA = "0x1824DB630")]
	public static Exception NegativeMinimumCapacity()
	{
		return null;
	}

	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x24DC0B0", Offset = "0x24DA6B0", VA = "0x1824DC0B0")]
	public static Exception ProblematicChars(char charValue)
	{
		return null;
	}

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x24DE040", Offset = "0x24DC640", VA = "0x1824DE040")]
	public static Exception StorageSetFailed()
	{
		return null;
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x24DDFB0", Offset = "0x24DC5B0", VA = "0x1824DDFB0")]
	public static Exception SimpleTypeNotSupported()
	{
		return null;
	}

	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x24DB0F0", Offset = "0x24D96F0", VA = "0x1824DB0F0")]
	public static Exception MissingAttribute(string attribute)
	{
		return null;
	}

	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x24DB050", Offset = "0x24D9650", VA = "0x1824DB050")]
	public static Exception MissingAttribute(string element, string attribute)
	{
		return null;
	}

	[Token(Token = "0x60001A7")]
	[Address(RVA = "0x24D9BB0", Offset = "0x24D81B0", VA = "0x1824D9BB0")]
	public static Exception InvalidAttributeValue(string name, string value)
	{
		return null;
	}

	[Token(Token = "0x60001A8")]
	[Address(RVA = "0x24D5010", Offset = "0x24D3610", VA = "0x1824D5010")]
	public static Exception AttributeValues(string name, string value1, string value2)
	{
		return null;
	}

	[Token(Token = "0x60001A9")]
	[Address(RVA = "0x24D8A50", Offset = "0x24D7050", VA = "0x1824D8A50")]
	public static Exception ElementTypeNotFound(string name)
	{
		return null;
	}

	[Token(Token = "0x60001AA")]
	[Address(RVA = "0x24DCCE0", Offset = "0x24DB2E0", VA = "0x1824DCCE0")]
	public static Exception RelationParentNameMissing(string rel)
	{
		return null;
	}

	[Token(Token = "0x60001AB")]
	[Address(RVA = "0x24DC710", Offset = "0x24DAD10", VA = "0x1824DC710")]
	public static Exception RelationChildNameMissing(string rel)
	{
		return null;
	}

	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x24DCDB0", Offset = "0x24DB3B0", VA = "0x1824DCDB0")]
	public static Exception RelationTableKeyMissing(string rel)
	{
		return null;
	}

	[Token(Token = "0x60001AD")]
	[Address(RVA = "0x24DC640", Offset = "0x24DAC40", VA = "0x1824DC640")]
	public static Exception RelationChildKeyMissing(string rel)
	{
		return null;
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x24DEDE0", Offset = "0x24DD3E0", VA = "0x1824DEDE0")]
	public static Exception UndefinedDatatype(string name)
	{
		return null;
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x24D7E70", Offset = "0x24D6470", VA = "0x1824D7E70")]
	public static Exception DatatypeNotDefined()
	{
		return null;
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x24DAFC0", Offset = "0x24D95C0", VA = "0x1824DAFC0")]
	public static Exception MismatchKeyLength()
	{
		return null;
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x24D9E20", Offset = "0x24D8420", VA = "0x1824D9E20")]
	public static Exception InvalidField(string name)
	{
		return null;
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x24DA370", Offset = "0x24D8970", VA = "0x1824DA370")]
	public static Exception InvalidSelector(string name)
	{
		return null;
	}

	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x24D6F50", Offset = "0x24D5550", VA = "0x1824D6F50")]
	public static Exception CircularComplexType(string name)
	{
		return null;
	}

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x24D6280", Offset = "0x24D4880", VA = "0x1824D6280")]
	public static Exception CannotInstantiateAbstract(string name)
	{
		return null;
	}

	[Token(Token = "0x60001B5")]
	[Address(RVA = "0x24D9EF0", Offset = "0x24D84F0", VA = "0x1824D9EF0")]
	public static Exception InvalidKey(string name)
	{
		return null;
	}

	[Token(Token = "0x60001B6")]
	[Address(RVA = "0x24D8370", Offset = "0x24D6970", VA = "0x1824D8370")]
	public static Exception DiffgramMissingTable(string name)
	{
		return null;
	}

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x24D82E0", Offset = "0x24D68E0", VA = "0x1824D82E0")]
	public static Exception DiffgramMissingSQL()
	{
		return null;
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x24D8510", Offset = "0x24D6B10", VA = "0x1824D8510")]
	public static Exception DuplicateConstraintRead(string str)
	{
		return null;
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x24D7470", Offset = "0x24D5A70", VA = "0x1824D7470")]
	public static Exception ColumnTypeConflict(string name)
	{
		return null;
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x24D61E0", Offset = "0x24D47E0", VA = "0x1824D61E0")]
	public static Exception CannotConvert(string name, string type)
	{
		return null;
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x24DB1A0", Offset = "0x24D97A0", VA = "0x1824DB1A0")]
	public static Exception MissingRefer(string name)
	{
		return null;
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x24DA110", Offset = "0x24D8710", VA = "0x1824DA110")]
	public static Exception InvalidPrefix(string name)
	{
		return null;
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x24D5650", Offset = "0x24D3C50", VA = "0x1824D5650")]
	public static Exception CanNotDeserializeObjectType()
	{
		return null;
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x24DA620", Offset = "0x24D8C20", VA = "0x1824DA620")]
	public static Exception IsDataSetAttributeMissingInSchema()
	{
		return null;
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x24DE8C0", Offset = "0x24DCEC0", VA = "0x1824DE8C0")]
	public static Exception TooManyIsDataSetAtributeInSchema()
	{
		return null;
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x24DB6B0", Offset = "0x24D9CB0", VA = "0x1824DB6B0")]
	public static Exception NestedCircular(string name)
	{
		return null;
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x24DB2B0", Offset = "0x24D98B0", VA = "0x1824DB2B0")]
	public static Exception MultipleParentRows(string tableQName)
	{
		return null;
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x24DBFE0", Offset = "0x24DA5E0", VA = "0x1824DBFE0")]
	public static Exception PolymorphismNotSupported(string typeName)
	{
		return null;
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x24D7D20", Offset = "0x24D6320", VA = "0x1824D7D20")]
	public static Exception DataTableInferenceNotSupported()
	{
		return null;
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x24DE870", Offset = "0x24DCE70", VA = "0x1824DE870")]
	internal static void ThrowMultipleTargetConverter(Exception innerException)
	{
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x24D86B0", Offset = "0x24D6CB0", VA = "0x1824D86B0")]
	public static Exception DuplicateDeclaration(string name)
	{
		return null;
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x24D93A0", Offset = "0x24D79A0", VA = "0x1824D93A0")]
	public static Exception FoundEntity()
	{
		return null;
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x24DAE80", Offset = "0x24D9480", VA = "0x1824DAE80")]
	public static Exception MergeFailed(string name)
	{
		return null;
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x24D7AF0", Offset = "0x24D60F0", VA = "0x1824D7AF0")]
	public static Exception ConvertFailed(Type type1, Type type2)
	{
		return null;
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x24D9D80", Offset = "0x24D8380", VA = "0x1824D9D80")]
	internal static Exception InvalidDuplicateNamedSimpleTypeDelaration(string stName, string errorStr)
	{
		return null;
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x24D9AC0", Offset = "0x24D80C0", VA = "0x1824D9AC0")]
	internal static Exception InternalRBTreeError(RBTreeError internalError)
	{
		return null;
	}

	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x24D8C40", Offset = "0x24D7240", VA = "0x1824D8C40")]
	public static Exception EnumeratorModified()
	{
		return null;
	}
}
