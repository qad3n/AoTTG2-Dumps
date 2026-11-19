// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.ExceptionBuilder
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x5E6BF00", Offset = "0x5E6AF00", VA = "0x5E6BF00")]
	private static void TraceException(string trace, Exception e)
	{
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x5E6BF90", Offset = "0x5E6AF90", VA = "0x5E6BF90")]
	internal static Exception TraceExceptionAsReturnValue(Exception e)
	{
		return null;
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x5E664E0", Offset = "0x5E654E0", VA = "0x5E664E0")]
	internal static Exception TraceExceptionForCapture(Exception e)
	{
		return null;
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x5E66840", Offset = "0x5E65840", VA = "0x5E66840")]
	internal static Exception TraceExceptionWithoutRethrow(Exception e)
	{
		return null;
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x5E6C060", Offset = "0x5E6B060", VA = "0x5E6C060")]
	internal static Exception _Argument(string error)
	{
		return null;
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x5E6C0C0", Offset = "0x5E6B0C0", VA = "0x5E6C0C0")]
	internal static Exception _Argument(string paramName, string error)
	{
		return null;
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x5E6C120", Offset = "0x5E6B120", VA = "0x5E6C120")]
	internal static Exception _Argument(string error, Exception innerException)
	{
		return null;
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x5E6C180", Offset = "0x5E6B180", VA = "0x5E6C180")]
	private static Exception _ArgumentNull(string paramName, string msg)
	{
		return null;
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x5E6C1E0", Offset = "0x5E6B1E0", VA = "0x5E6C1E0")]
	internal static Exception _ArgumentOutOfRange(string paramName, string msg)
	{
		return null;
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x5E6C240", Offset = "0x5E6B240", VA = "0x5E6C240")]
	private static Exception _IndexOutOfRange(string error)
	{
		return null;
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x5E6C2A0", Offset = "0x5E6B2A0", VA = "0x5E6C2A0")]
	private static Exception _InvalidOperation(string error)
	{
		return null;
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x5E6C300", Offset = "0x5E6B300", VA = "0x5E6C300")]
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
	[Address(RVA = "0x5E6C360", Offset = "0x5E6B360", VA = "0x5E6C360")]
	private static void ThrowDataException(string error, Exception innerException)
	{
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x5E6C3B0", Offset = "0x5E6B3B0", VA = "0x5E6C3B0")]
	private static Exception _Data(string error)
	{
		return null;
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x5E6C410", Offset = "0x5E6B410", VA = "0x5E6C410")]
	private static Exception _Constraint(string error)
	{
		return null;
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x5E6C470", Offset = "0x5E6B470", VA = "0x5E6C470")]
	private static Exception _InvalidConstraint(string error)
	{
		return null;
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x5E6C4D0", Offset = "0x5E6B4D0", VA = "0x5E6C4D0")]
	private static Exception _DeletedRowInaccessible(string error)
	{
		return null;
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x5E6C530", Offset = "0x5E6B530", VA = "0x5E6C530")]
	private static Exception _DuplicateName(string error)
	{
		return null;
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x5E6C590", Offset = "0x5E6B590", VA = "0x5E6C590")]
	private static Exception _InRowChangingEvent(string error)
	{
		return null;
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x5E6C5F0", Offset = "0x5E6B5F0", VA = "0x5E6C5F0")]
	private static Exception _NoNullAllowed(string error)
	{
		return null;
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x5E6C650", Offset = "0x5E6B650", VA = "0x5E6C650")]
	private static Exception _ReadOnly(string error)
	{
		return null;
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x5E6C6B0", Offset = "0x5E6B6B0", VA = "0x5E6C6B0")]
	private static Exception _RowNotInTable(string error)
	{
		return null;
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x5E6C710", Offset = "0x5E6B710", VA = "0x5E6C710")]
	private static Exception _VersionNotFound(string error)
	{
		return null;
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x5E61D60", Offset = "0x5E60D60", VA = "0x5E61D60")]
	public static Exception ArgumentNull(string paramName)
	{
		return null;
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x5E6C770", Offset = "0x5E6B770", VA = "0x5E6C770")]
	public static Exception ArgumentOutOfRange(string paramName)
	{
		return null;
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x5E6C880", Offset = "0x5E6B880", VA = "0x5E6C880")]
	public static Exception BadObjectPropertyAccess(string error)
	{
		return null;
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x5E6C990", Offset = "0x5E6B990", VA = "0x5E6C990")]
	public static Exception ArgumentContainsNull(string paramName)
	{
		return null;
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x5E6CAA0", Offset = "0x5E6BAA0", VA = "0x5E6CAA0")]
	public static Exception TypeNotAllowed(Type type)
	{
		return null;
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x5E6CB90", Offset = "0x5E6BB90", VA = "0x5E6CB90")]
	public static Exception CannotModifyCollection()
	{
		return null;
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x5E6CC10", Offset = "0x5E6BC10", VA = "0x5E6CC10")]
	public static Exception CaseInsensitiveNameConflict(string name)
	{
		return null;
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x5E6CD20", Offset = "0x5E6BD20", VA = "0x5E6CD20")]
	public static Exception NamespaceNameConflict(string name)
	{
		return null;
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x5E6CE30", Offset = "0x5E6BE30", VA = "0x5E6CE30")]
	public static Exception InvalidOffsetLength()
	{
		return null;
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x5E6CEB0", Offset = "0x5E6BEB0", VA = "0x5E6CEB0")]
	public static Exception ColumnNotInTheTable(string column, string table)
	{
		return null;
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x5E6CFC0", Offset = "0x5E6BFC0", VA = "0x5E6CFC0")]
	public static Exception ColumnNotInAnyTable()
	{
		return null;
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x5E6D040", Offset = "0x5E6C040", VA = "0x5E6D040")]
	public static Exception ColumnOutOfRange(int index)
	{
		return null;
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x5E6D150", Offset = "0x5E6C150", VA = "0x5E6D150")]
	public static Exception ColumnOutOfRange(string column)
	{
		return null;
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x5E6D260", Offset = "0x5E6C260", VA = "0x5E6D260")]
	public static Exception CannotAddColumn1(string column)
	{
		return null;
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x5E6D370", Offset = "0x5E6C370", VA = "0x5E6D370")]
	public static Exception CannotAddColumn2(string column)
	{
		return null;
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x5E68A60", Offset = "0x5E67A60", VA = "0x5E68A60")]
	public static Exception CannotAddColumn3()
	{
		return null;
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x5E68AE0", Offset = "0x5E67AE0", VA = "0x5E68AE0")]
	public static Exception CannotAddColumn4(string column)
	{
		return null;
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x5E6D480", Offset = "0x5E6C480", VA = "0x5E6D480")]
	public static Exception CannotAddDuplicate(string column)
	{
		return null;
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x5E6D590", Offset = "0x5E6C590", VA = "0x5E6D590")]
	public static Exception CannotAddDuplicate2(string table)
	{
		return null;
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x5E6D6A0", Offset = "0x5E6C6A0", VA = "0x5E6D6A0")]
	public static Exception CannotAddDuplicate3(string table)
	{
		return null;
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x5E6D7B0", Offset = "0x5E6C7B0", VA = "0x5E6D7B0")]
	public static Exception CannotRemoveColumn()
	{
		return null;
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x5E6D830", Offset = "0x5E6C830", VA = "0x5E6D830")]
	public static Exception CannotRemovePrimaryKey()
	{
		return null;
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x5E6D8B0", Offset = "0x5E6C8B0", VA = "0x5E6D8B0")]
	public static Exception CannotRemoveChildKey(string relation)
	{
		return null;
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x5E6D9C0", Offset = "0x5E6C9C0", VA = "0x5E6D9C0")]
	public static Exception CannotRemoveConstraint(string constraint, string table)
	{
		return null;
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x5E6DAD0", Offset = "0x5E6CAD0", VA = "0x5E6DAD0")]
	public static Exception CannotRemoveExpression(string column, string expression)
	{
		return null;
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x5E6DBE0", Offset = "0x5E6CBE0", VA = "0x5E6DBE0")]
	public static Exception AddPrimaryKeyConstraint()
	{
		return null;
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x5E6DC60", Offset = "0x5E6CC60", VA = "0x5E6DC60")]
	public static Exception NoConstraintName()
	{
		return null;
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x5E6DCE0", Offset = "0x5E6CCE0", VA = "0x5E6DCE0")]
	public static Exception ConstraintViolation(string constraint)
	{
		return null;
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x5E6DDF0", Offset = "0x5E6CDF0", VA = "0x5E6DDF0")]
	public static string KeysToString(object[] keys)
	{
		return null;
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x5E6DF00", Offset = "0x5E6CF00", VA = "0x5E6DF00")]
	public static string UniqueConstraintViolationText(DataColumn[] columns, object[] values)
	{
		return null;
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x5E6E100", Offset = "0x5E6D100", VA = "0x5E6E100")]
	public static Exception ConstraintViolation(DataColumn[] columns, object[] values)
	{
		return null;
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x5E6E160", Offset = "0x5E6D160", VA = "0x5E6E160")]
	public static Exception ConstraintOutOfRange(int index)
	{
		return null;
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x5E6E270", Offset = "0x5E6D270", VA = "0x5E6E270")]
	public static Exception DuplicateConstraint(string constraint)
	{
		return null;
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x5E6E380", Offset = "0x5E6D380", VA = "0x5E6E380")]
	public static Exception DuplicateConstraintName(string constraint)
	{
		return null;
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x5E6E490", Offset = "0x5E6D490", VA = "0x5E6E490")]
	public static Exception NeededForForeignKeyConstraint(UniqueConstraint key, ForeignKeyConstraint fk)
	{
		return null;
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x5E6E5A0", Offset = "0x5E6D5A0", VA = "0x5E6E5A0")]
	public static Exception UniqueConstraintViolation()
	{
		return null;
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x5E6E620", Offset = "0x5E6D620", VA = "0x5E6E620")]
	public static Exception ConstraintForeignTable()
	{
		return null;
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x5E6E6A0", Offset = "0x5E6D6A0", VA = "0x5E6E6A0")]
	public static Exception ConstraintParentValues()
	{
		return null;
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x5E6E720", Offset = "0x5E6D720", VA = "0x5E6E720")]
	public static Exception ConstraintAddFailed(DataTable table)
	{
		return null;
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x5E6E810", Offset = "0x5E6D810", VA = "0x5E6E810")]
	public static Exception ConstraintRemoveFailed()
	{
		return null;
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x5E6E890", Offset = "0x5E6D890", VA = "0x5E6E890")]
	public static Exception FailedCascadeDelete(string constraint)
	{
		return null;
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x5E6E9A0", Offset = "0x5E6D9A0", VA = "0x5E6E9A0")]
	public static Exception FailedCascadeUpdate(string constraint)
	{
		return null;
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x5E6EAB0", Offset = "0x5E6DAB0", VA = "0x5E6EAB0")]
	public static Exception FailedClearParentTable(string table, string constraint, string childTable)
	{
		return null;
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x5E6EBD0", Offset = "0x5E6DBD0", VA = "0x5E6EBD0")]
	public static Exception ForeignKeyViolation(string constraint, object[] keys)
	{
		return null;
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x5E6ECB0", Offset = "0x5E6DCB0", VA = "0x5E6ECB0")]
	public static Exception RemoveParentRow(ForeignKeyConstraint constraint)
	{
		return null;
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x5E6A410", Offset = "0x5E69410", VA = "0x5E6A410")]
	public static string MaxLengthViolationText(string columnName)
	{
		return null;
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x5E6A6A0", Offset = "0x5E696A0", VA = "0x5E6A6A0")]
	public static string NotAllowDBNullViolationText(string columnName)
	{
		return null;
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x5E6EDA0", Offset = "0x5E6DDA0", VA = "0x5E6EDA0")]
	public static Exception CantAddConstraintToMultipleNestedTable(string tableName)
	{
		return null;
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x5E63160", Offset = "0x5E62160", VA = "0x5E63160")]
	public static Exception AutoIncrementAndExpression()
	{
		return null;
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x5E631E0", Offset = "0x5E621E0", VA = "0x5E631E0")]
	public static Exception AutoIncrementAndDefaultValue()
	{
		return null;
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x5E6B180", Offset = "0x5E6A180", VA = "0x5E6B180")]
	public static Exception AutoIncrementSeed()
	{
		return null;
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x5E65210", Offset = "0x5E64210", VA = "0x5E65210")]
	public static Exception CantChangeDataType()
	{
		return null;
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x5E65290", Offset = "0x5E64290", VA = "0x5E65290")]
	public static Exception NullDataType()
	{
		return null;
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x5E64C10", Offset = "0x5E63C10", VA = "0x5E64C10")]
	public static Exception ColumnNameRequired()
	{
		return null;
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x5E66040", Offset = "0x5E65040", VA = "0x5E66040")]
	public static Exception DefaultValueAndAutoIncrement()
	{
		return null;
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x5E65A30", Offset = "0x5E64A30", VA = "0x5E65A30")]
	public static Exception DefaultValueDataType(string column, Type defaultType, Type columnType, Exception inner)
	{
		return null;
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x5E660C0", Offset = "0x5E650C0", VA = "0x5E660C0")]
	public static Exception DefaultValueColumnDataType(string column, Type defaultType, Type columnType, Exception inner)
	{
		return null;
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x5E66260", Offset = "0x5E65260", VA = "0x5E66260")]
	public static Exception ExpressionAndUnique()
	{
		return null;
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x5E665B0", Offset = "0x5E655B0", VA = "0x5E665B0")]
	public static Exception ExpressionAndReadOnly()
	{
		return null;
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x5E662E0", Offset = "0x5E652E0", VA = "0x5E662E0")]
	public static Exception ExpressionAndConstraint(DataColumn column, Constraint constraint)
	{
		return null;
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x5E6EEB0", Offset = "0x5E6DEB0", VA = "0x5E6EEB0")]
	public static Exception ExpressionInConstraint(DataColumn column)
	{
		return null;
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x5E66630", Offset = "0x5E65630", VA = "0x5E66630")]
	public static Exception ExpressionCircular()
	{
		return null;
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x5E69060", Offset = "0x5E68060", VA = "0x5E69060")]
	public static Exception NonUniqueValues(string column)
	{
		return null;
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x5E68E40", Offset = "0x5E67E40", VA = "0x5E68E40")]
	public static Exception NullKeyValues(string column)
	{
		return null;
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x5E68F50", Offset = "0x5E67F50", VA = "0x5E68F50")]
	public static Exception NullValues(string column)
	{
		return null;
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x5E67940", Offset = "0x5E66940", VA = "0x5E67940")]
	public static Exception ReadOnlyAndExpression()
	{
		return null;
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x5E6EF90", Offset = "0x5E6DF90", VA = "0x5E6EF90")]
	public static Exception ReadOnly(string column)
	{
		return null;
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x5E68540", Offset = "0x5E67540", VA = "0x5E68540")]
	public static Exception UniqueAndExpression()
	{
		return null;
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x5E67D40", Offset = "0x5E66D40", VA = "0x5E67D40")]
	public static Exception SetFailed(object value, DataColumn column, Type type, Exception innerException)
	{
		return null;
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x5E6F0A0", Offset = "0x5E6E0A0", VA = "0x5E6F0A0")]
	public static Exception CannotSetToNull(DataColumn column)
	{
		return null;
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x5E68D60", Offset = "0x5E67D60", VA = "0x5E68D60")]
	public static Exception LongerThanMaxLength(DataColumn column)
	{
		return null;
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x5E67340", Offset = "0x5E66340", VA = "0x5E67340")]
	public static Exception CannotSetMaxLength(DataColumn column, int value)
	{
		return null;
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x5E66DE0", Offset = "0x5E65DE0", VA = "0x5E66DE0")]
	public static Exception CannotSetMaxLength2(DataColumn column)
	{
		return null;
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x5E65C20", Offset = "0x5E64C20", VA = "0x5E65C20")]
	public static Exception CannotSetSimpleContentType(string columnName, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x5E68950", Offset = "0x5E67950", VA = "0x5E68950")]
	public static Exception CannotSetSimpleContent(string columnName, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x5E676D0", Offset = "0x5E666D0", VA = "0x5E676D0")]
	public static Exception CannotChangeNamespace(string columnName)
	{
		return null;
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x5E66EC0", Offset = "0x5E65EC0", VA = "0x5E66EC0")]
	public static Exception HasToBeStringType(DataColumn column)
	{
		return null;
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x5E63500", Offset = "0x5E62500", VA = "0x5E63500")]
	public static Exception AutoIncrementCannotSetIfHasData(string typeName)
	{
		return null;
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x5E6F180", Offset = "0x5E6E180", VA = "0x5E6F180")]
	public static Exception INullableUDTwithoutStaticNull(string typeName)
	{
		return null;
	}

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x5E6F290", Offset = "0x5E6E290", VA = "0x5E6F290")]
	public static Exception IComparableNotImplemented(string typeName)
	{
		return null;
	}

	[Token(Token = "0x600012B")]
	[Address(RVA = "0x5E6F3A0", Offset = "0x5E6E3A0", VA = "0x5E6F3A0")]
	public static Exception UDTImplementsIChangeTrackingButnotIRevertible(string typeName)
	{
		return null;
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x5E6F4B0", Offset = "0x5E6E4B0", VA = "0x5E6F4B0")]
	public static Exception InvalidDataColumnMapping(Type type)
	{
		return null;
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x5E65E40", Offset = "0x5E64E40", VA = "0x5E65E40")]
	public static Exception CannotSetDateTimeModeForNonDateTimeColumns()
	{
		return null;
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x5E66000", Offset = "0x5E65000", VA = "0x5E66000")]
	public static Exception InvalidDateTimeMode(DataSetDateTime mode)
	{
		return null;
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x5E65EC0", Offset = "0x5E64EC0", VA = "0x5E65EC0")]
	public static Exception CantChangeDateTimeMode(DataSetDateTime oldValue, DataSetDateTime newValue)
	{
		return null;
	}

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x5E61E70", Offset = "0x5E60E70", VA = "0x5E61E70")]
	public static Exception ColumnTypeNotSupported()
	{
		return null;
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x5E6F5A0", Offset = "0x5E6E5A0", VA = "0x5E6F5A0")]
	public static Exception SetFailed(string name)
	{
		return null;
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x5E6F6B0", Offset = "0x5E6E6B0", VA = "0x5E6F6B0")]
	public static Exception SetRowStateFilter()
	{
		return null;
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x5E6F730", Offset = "0x5E6E730", VA = "0x5E6F730")]
	public static Exception CanNotUseDataViewManager()
	{
		return null;
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x5E6F7B0", Offset = "0x5E6E7B0", VA = "0x5E6F7B0")]
	public static Exception CanNotSetTable()
	{
		return null;
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x5E6F830", Offset = "0x5E6E830", VA = "0x5E6F830")]
	public static Exception CanNotUse()
	{
		return null;
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x5E6F8B0", Offset = "0x5E6E8B0", VA = "0x5E6F8B0")]
	public static Exception CanNotBindTable()
	{
		return null;
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x5E6F930", Offset = "0x5E6E930", VA = "0x5E6F930")]
	public static Exception SetTable()
	{
		return null;
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x5E6F9B0", Offset = "0x5E6E9B0", VA = "0x5E6F9B0")]
	public static Exception SetIListObject()
	{
		return null;
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x5E6FA30", Offset = "0x5E6EA30", VA = "0x5E6FA30")]
	public static Exception AddNewNotAllowNull()
	{
		return null;
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x5E6FAB0", Offset = "0x5E6EAB0", VA = "0x5E6FAB0")]
	public static Exception NotOpen()
	{
		return null;
	}

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x5E6FB30", Offset = "0x5E6EB30", VA = "0x5E6FB30")]
	public static Exception CreateChildView()
	{
		return null;
	}

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x5E6FBB0", Offset = "0x5E6EBB0", VA = "0x5E6FBB0")]
	public static Exception CanNotDelete()
	{
		return null;
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x5E6FC30", Offset = "0x5E6EC30", VA = "0x5E6FC30")]
	public static Exception GetElementIndex(int index)
	{
		return null;
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x5E6FD40", Offset = "0x5E6ED40", VA = "0x5E6FD40")]
	public static Exception AddExternalObject()
	{
		return null;
	}

	[Token(Token = "0x600013F")]
	[Address(RVA = "0x5E6FDC0", Offset = "0x5E6EDC0", VA = "0x5E6FDC0")]
	public static Exception CanNotClear()
	{
		return null;
	}

	[Token(Token = "0x6000140")]
	[Address(RVA = "0x5E6FE40", Offset = "0x5E6EE40", VA = "0x5E6FE40")]
	public static Exception InsertExternalObject()
	{
		return null;
	}

	[Token(Token = "0x6000141")]
	[Address(RVA = "0x5E6FEC0", Offset = "0x5E6EEC0", VA = "0x5E6FEC0")]
	public static Exception RemoveExternalObject()
	{
		return null;
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x5E6FF40", Offset = "0x5E6EF40", VA = "0x5E6FF40")]
	public static Exception ColumnToSortIsOutOfRange(string column)
	{
		return null;
	}

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x5E70050", Offset = "0x5E6F050", VA = "0x5E70050")]
	public static Exception KeyTableMismatch()
	{
		return null;
	}

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x5E700D0", Offset = "0x5E6F0D0", VA = "0x5E700D0")]
	public static Exception KeyNoColumns()
	{
		return null;
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x5E70150", Offset = "0x5E6F150", VA = "0x5E70150")]
	public static Exception KeyTooManyColumns(int cols)
	{
		return null;
	}

	[Token(Token = "0x6000146")]
	[Address(RVA = "0x5E70260", Offset = "0x5E6F260", VA = "0x5E70260")]
	public static Exception KeyDuplicateColumns(string columnName)
	{
		return null;
	}

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x5E70370", Offset = "0x5E6F370", VA = "0x5E70370")]
	public static Exception RelationDataSetMismatch()
	{
		return null;
	}

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x5E65490", Offset = "0x5E64490", VA = "0x5E65490")]
	public static Exception ColumnsTypeMismatch()
	{
		return null;
	}

	[Token(Token = "0x6000149")]
	[Address(RVA = "0x5E703F0", Offset = "0x5E6F3F0", VA = "0x5E703F0")]
	public static Exception KeyLengthMismatch()
	{
		return null;
	}

	[Token(Token = "0x600014A")]
	[Address(RVA = "0x5E70470", Offset = "0x5E6F470", VA = "0x5E70470")]
	public static Exception KeyLengthZero()
	{
		return null;
	}

	[Token(Token = "0x600014B")]
	[Address(RVA = "0x5E704F0", Offset = "0x5E6F4F0", VA = "0x5E704F0")]
	public static Exception ForeignRelation()
	{
		return null;
	}

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x5E70570", Offset = "0x5E6F570", VA = "0x5E70570")]
	public static Exception KeyColumnsIdentical()
	{
		return null;
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x5E705F0", Offset = "0x5E6F5F0", VA = "0x5E705F0")]
	public static Exception RelationForeignTable(string t1, string t2)
	{
		return null;
	}

	[Token(Token = "0x600014E")]
	[Address(RVA = "0x5E70710", Offset = "0x5E6F710", VA = "0x5E70710")]
	public static Exception GetParentRowTableMismatch(string t1, string t2)
	{
		return null;
	}

	[Token(Token = "0x600014F")]
	[Address(RVA = "0x5E70830", Offset = "0x5E6F830", VA = "0x5E70830")]
	public static Exception SetParentRowTableMismatch(string t1, string t2)
	{
		return null;
	}

	[Token(Token = "0x6000150")]
	[Address(RVA = "0x5E70950", Offset = "0x5E6F950", VA = "0x5E70950")]
	public static Exception RelationForeignRow()
	{
		return null;
	}

	[Token(Token = "0x6000151")]
	[Address(RVA = "0x5E709D0", Offset = "0x5E6F9D0", VA = "0x5E709D0")]
	public static Exception RelationNestedReadOnly()
	{
		return null;
	}

	[Token(Token = "0x6000152")]
	[Address(RVA = "0x5E70A50", Offset = "0x5E6FA50", VA = "0x5E70A50")]
	public static Exception TableCantBeNestedInTwoTables(string tableName)
	{
		return null;
	}

	[Token(Token = "0x6000153")]
	[Address(RVA = "0x5E70B60", Offset = "0x5E6FB60", VA = "0x5E70B60")]
	public static Exception LoopInNestedRelations(string tableName)
	{
		return null;
	}

	[Token(Token = "0x6000154")]
	[Address(RVA = "0x5E70C70", Offset = "0x5E6FC70", VA = "0x5E70C70")]
	public static Exception RelationDoesNotExist()
	{
		return null;
	}

	[Token(Token = "0x6000155")]
	[Address(RVA = "0x5E70CF0", Offset = "0x5E6FCF0", VA = "0x5E70CF0")]
	public static Exception ParentOrChildColumnsDoNotHaveDataSet()
	{
		return null;
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x5E70D70", Offset = "0x5E6FD70", VA = "0x5E70D70")]
	public static Exception InValidNestedRelation(string childTableName)
	{
		return null;
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x5E70E80", Offset = "0x5E6FE80", VA = "0x5E70E80")]
	public static Exception InvalidParentNamespaceinNestedRelation(string childTableName)
	{
		return null;
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x5E70F90", Offset = "0x5E6FF90", VA = "0x5E70F90")]
	public static Exception RowNotInTheDataSet()
	{
		return null;
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x5E71010", Offset = "0x5E70010", VA = "0x5E71010")]
	public static Exception RowNotInTheTable()
	{
		return null;
	}

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x5E71090", Offset = "0x5E70090", VA = "0x5E71090")]
	public static Exception EditInRowChanging()
	{
		return null;
	}

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x5E71110", Offset = "0x5E70110", VA = "0x5E71110")]
	public static Exception EndEditInRowChanging()
	{
		return null;
	}

	[Token(Token = "0x600015C")]
	[Address(RVA = "0x5E71190", Offset = "0x5E70190", VA = "0x5E71190")]
	public static Exception BeginEditInRowChanging()
	{
		return null;
	}

	[Token(Token = "0x600015D")]
	[Address(RVA = "0x5E71210", Offset = "0x5E70210", VA = "0x5E71210")]
	public static Exception CancelEditInRowChanging()
	{
		return null;
	}

	[Token(Token = "0x600015E")]
	[Address(RVA = "0x5E71290", Offset = "0x5E70290", VA = "0x5E71290")]
	public static Exception DeleteInRowDeleting()
	{
		return null;
	}

	[Token(Token = "0x600015F")]
	[Address(RVA = "0x5E71310", Offset = "0x5E70310", VA = "0x5E71310")]
	public static Exception ValueArrayLength()
	{
		return null;
	}

	[Token(Token = "0x6000160")]
	[Address(RVA = "0x5E71390", Offset = "0x5E70390", VA = "0x5E71390")]
	public static Exception NoCurrentData()
	{
		return null;
	}

	[Token(Token = "0x6000161")]
	[Address(RVA = "0x5E71410", Offset = "0x5E70410", VA = "0x5E71410")]
	public static Exception NoOriginalData()
	{
		return null;
	}

	[Token(Token = "0x6000162")]
	[Address(RVA = "0x5E71490", Offset = "0x5E70490", VA = "0x5E71490")]
	public static Exception NoProposedData()
	{
		return null;
	}

	[Token(Token = "0x6000163")]
	[Address(RVA = "0x5E71510", Offset = "0x5E70510", VA = "0x5E71510")]
	public static Exception RowRemovedFromTheTable()
	{
		return null;
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x5E71590", Offset = "0x5E70590", VA = "0x5E71590")]
	public static Exception DeletedRowInaccessible()
	{
		return null;
	}

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x5E71610", Offset = "0x5E70610", VA = "0x5E71610")]
	public static Exception RowAlreadyDeleted()
	{
		return null;
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x5E71690", Offset = "0x5E70690", VA = "0x5E71690")]
	public static Exception RowEmpty()
	{
		return null;
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x5E71710", Offset = "0x5E70710", VA = "0x5E71710")]
	public static Exception InvalidRowVersion()
	{
		return null;
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x5E71790", Offset = "0x5E70790", VA = "0x5E71790")]
	public static Exception RowOutOfRange(int index)
	{
		return null;
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x5E718A0", Offset = "0x5E708A0", VA = "0x5E718A0")]
	public static Exception RowInsertTwice(int index, string tableName)
	{
		return null;
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x5E719C0", Offset = "0x5E709C0", VA = "0x5E719C0")]
	public static Exception RowInsertMissing(string tableName)
	{
		return null;
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x5E71AD0", Offset = "0x5E70AD0", VA = "0x5E71AD0")]
	public static Exception RowAlreadyRemoved()
	{
		return null;
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x5E71B50", Offset = "0x5E70B50", VA = "0x5E71B50")]
	public static Exception MultipleParents()
	{
		return null;
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x5E71BD0", Offset = "0x5E70BD0", VA = "0x5E71BD0")]
	public static Exception InvalidRowState(DataRowState state)
	{
		return null;
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x5E71C10", Offset = "0x5E70C10", VA = "0x5E71C10")]
	public static Exception InvalidRowBitPattern()
	{
		return null;
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x5E71C90", Offset = "0x5E70C90", VA = "0x5E71C90")]
	internal static Exception SetDataSetNameToEmpty()
	{
		return null;
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x5E71D10", Offset = "0x5E70D10", VA = "0x5E71D10")]
	internal static Exception SetDataSetNameConflicting(string name)
	{
		return null;
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x5E71E20", Offset = "0x5E70E20", VA = "0x5E71E20")]
	public static Exception DataSetUnsupportedSchema(string ns)
	{
		return null;
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x5E71F30", Offset = "0x5E70F30", VA = "0x5E71F30")]
	public static Exception MergeMissingDefinition(string obj)
	{
		return null;
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x5E72040", Offset = "0x5E71040", VA = "0x5E72040")]
	public static Exception TablesInDifferentSets()
	{
		return null;
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x5E720C0", Offset = "0x5E710C0", VA = "0x5E720C0")]
	public static Exception RelationAlreadyExists()
	{
		return null;
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x5E72140", Offset = "0x5E71140", VA = "0x5E72140")]
	public static Exception RowAlreadyInOtherCollection()
	{
		return null;
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x5E721C0", Offset = "0x5E711C0", VA = "0x5E721C0")]
	public static Exception RowAlreadyInTheCollection()
	{
		return null;
	}

	[Token(Token = "0x6000177")]
	[Address(RVA = "0x5E72240", Offset = "0x5E71240", VA = "0x5E72240")]
	public static Exception RecordStateRange()
	{
		return null;
	}

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x5E722C0", Offset = "0x5E712C0", VA = "0x5E722C0")]
	public static Exception IndexKeyLength(int length, int keyLength)
	{
		return null;
	}

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x5E72420", Offset = "0x5E71420", VA = "0x5E72420")]
	public static Exception RemovePrimaryKey(DataTable table)
	{
		return null;
	}

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x5E72530", Offset = "0x5E71530", VA = "0x5E72530")]
	public static Exception RelationAlreadyInOtherDataSet()
	{
		return null;
	}

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x5E725B0", Offset = "0x5E715B0", VA = "0x5E725B0")]
	public static Exception RelationAlreadyInTheDataSet()
	{
		return null;
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x5E72630", Offset = "0x5E71630", VA = "0x5E72630")]
	public static Exception RelationNotInTheDataSet(string relation)
	{
		return null;
	}

	[Token(Token = "0x600017D")]
	[Address(RVA = "0x5E72740", Offset = "0x5E71740", VA = "0x5E72740")]
	public static Exception RelationOutOfRange(object index)
	{
		return null;
	}

	[Token(Token = "0x600017E")]
	[Address(RVA = "0x5E72840", Offset = "0x5E71840", VA = "0x5E72840")]
	public static Exception DuplicateRelation(string relation)
	{
		return null;
	}

	[Token(Token = "0x600017F")]
	[Address(RVA = "0x5E72950", Offset = "0x5E71950", VA = "0x5E72950")]
	public static Exception RelationTableNull()
	{
		return null;
	}

	[Token(Token = "0x6000180")]
	[Address(RVA = "0x5E729D0", Offset = "0x5E719D0", VA = "0x5E729D0")]
	public static Exception RelationDataSetNull()
	{
		return null;
	}

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x5E72A50", Offset = "0x5E71A50", VA = "0x5E72A50")]
	public static Exception RelationTableWasRemoved()
	{
		return null;
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x5E72AD0", Offset = "0x5E71AD0", VA = "0x5E72AD0")]
	public static Exception ParentTableMismatch()
	{
		return null;
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x5E72B50", Offset = "0x5E71B50", VA = "0x5E72B50")]
	public static Exception ChildTableMismatch()
	{
		return null;
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x5E72BD0", Offset = "0x5E71BD0", VA = "0x5E72BD0")]
	public static Exception EnforceConstraint()
	{
		return null;
	}

	[Token(Token = "0x6000185")]
	[Address(RVA = "0x5E72C50", Offset = "0x5E71C50", VA = "0x5E72C50")]
	public static Exception CaseLocaleMismatch()
	{
		return null;
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x5E72CD0", Offset = "0x5E71CD0", VA = "0x5E72CD0")]
	public static Exception CannotChangeCaseLocale()
	{
		return null;
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x5E72D50", Offset = "0x5E71D50", VA = "0x5E72D50")]
	public static Exception CannotChangeCaseLocale(Exception innerException)
	{
		return null;
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x5E72DD0", Offset = "0x5E71DD0", VA = "0x5E72DD0")]
	public static Exception InvalidRemotingFormat(SerializationFormat mode)
	{
		return null;
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x5E72E10", Offset = "0x5E71E10", VA = "0x5E72E10")]
	public static Exception TableForeignPrimaryKey()
	{
		return null;
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x5E72E90", Offset = "0x5E71E90", VA = "0x5E72E90")]
	public static Exception TableCannotAddToSimpleContent()
	{
		return null;
	}

	[Token(Token = "0x600018B")]
	[Address(RVA = "0x5E72F10", Offset = "0x5E71F10", VA = "0x5E72F10")]
	public static Exception NoTableName()
	{
		return null;
	}

	[Token(Token = "0x600018C")]
	[Address(RVA = "0x5E72F90", Offset = "0x5E71F90", VA = "0x5E72F90")]
	public static Exception MultipleTextOnlyColumns()
	{
		return null;
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x5E73010", Offset = "0x5E72010", VA = "0x5E73010")]
	public static Exception InvalidSortString(string sort)
	{
		return null;
	}

	[Token(Token = "0x600018E")]
	[Address(RVA = "0x5E73120", Offset = "0x5E72120", VA = "0x5E73120")]
	public static Exception DuplicateTableName(string table)
	{
		return null;
	}

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x5E73230", Offset = "0x5E72230", VA = "0x5E73230")]
	public static Exception DuplicateTableName2(string table, string ns)
	{
		return null;
	}

	[Token(Token = "0x6000190")]
	[Address(RVA = "0x5E73350", Offset = "0x5E72350", VA = "0x5E73350")]
	public static Exception SelfnestedDatasetConflictingName(string table)
	{
		return null;
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x5E73460", Offset = "0x5E72460", VA = "0x5E73460")]
	public static Exception DatasetConflictingName(string table)
	{
		return null;
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x5E73570", Offset = "0x5E72570", VA = "0x5E73570")]
	public static Exception TableAlreadyInOtherDataSet()
	{
		return null;
	}

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x5E735F0", Offset = "0x5E725F0", VA = "0x5E735F0")]
	public static Exception TableAlreadyInTheDataSet()
	{
		return null;
	}

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x5E73670", Offset = "0x5E72670", VA = "0x5E73670")]
	public static Exception TableOutOfRange(int index)
	{
		return null;
	}

	[Token(Token = "0x6000195")]
	[Address(RVA = "0x5E73780", Offset = "0x5E72780", VA = "0x5E73780")]
	public static Exception TableNotInTheDataSet(string table)
	{
		return null;
	}

	[Token(Token = "0x6000196")]
	[Address(RVA = "0x5E73890", Offset = "0x5E72890", VA = "0x5E73890")]
	public static Exception TableInRelation()
	{
		return null;
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x5E73910", Offset = "0x5E72910", VA = "0x5E73910")]
	public static Exception TableInConstraint(DataTable table, Constraint constraint)
	{
		return null;
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x5E73A10", Offset = "0x5E72A10", VA = "0x5E73A10")]
	public static Exception CanNotSerializeDataTableHierarchy()
	{
		return null;
	}

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x5E73A90", Offset = "0x5E72A90", VA = "0x5E73A90")]
	public static Exception CanNotRemoteDataTable()
	{
		return null;
	}

	[Token(Token = "0x600019A")]
	[Address(RVA = "0x5E73B10", Offset = "0x5E72B10", VA = "0x5E73B10")]
	public static Exception CanNotSetRemotingFormat()
	{
		return null;
	}

	[Token(Token = "0x600019B")]
	[Address(RVA = "0x5E73B90", Offset = "0x5E72B90", VA = "0x5E73B90")]
	public static Exception CanNotSerializeDataTableWithEmptyName()
	{
		return null;
	}

	[Token(Token = "0x600019C")]
	[Address(RVA = "0x5E73C10", Offset = "0x5E72C10", VA = "0x5E73C10")]
	public static Exception TableNotFound(string tableName)
	{
		return null;
	}

	[Token(Token = "0x600019D")]
	[Address(RVA = "0x5E73D20", Offset = "0x5E72D20", VA = "0x5E73D20")]
	public static Exception AggregateException(AggregateType aggregateType, Type type)
	{
		return null;
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x5E73E60", Offset = "0x5E72E60", VA = "0x5E73E60")]
	public static Exception InvalidStorageType(TypeCode typecode)
	{
		return null;
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x5E73F70", Offset = "0x5E72F70", VA = "0x5E73F70")]
	public static Exception RangeArgument(int min, int max)
	{
		return null;
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x5E740A0", Offset = "0x5E730A0", VA = "0x5E740A0")]
	public static Exception NullRange()
	{
		return null;
	}

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x5E74120", Offset = "0x5E73120", VA = "0x5E74120")]
	public static Exception NegativeMinimumCapacity()
	{
		return null;
	}

	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x5E741A0", Offset = "0x5E731A0", VA = "0x5E741A0")]
	public static Exception ProblematicChars(char charValue)
	{
		return null;
	}

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x5E742E0", Offset = "0x5E732E0", VA = "0x5E742E0")]
	public static Exception StorageSetFailed()
	{
		return null;
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x5E74360", Offset = "0x5E73360", VA = "0x5E74360")]
	public static Exception SimpleTypeNotSupported()
	{
		return null;
	}

	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x5E743E0", Offset = "0x5E733E0", VA = "0x5E743E0")]
	public static Exception MissingAttribute(string attribute)
	{
		return null;
	}

	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x5E74400", Offset = "0x5E73400", VA = "0x5E74400")]
	public static Exception MissingAttribute(string element, string attribute)
	{
		return null;
	}

	[Token(Token = "0x60001A7")]
	[Address(RVA = "0x5E74520", Offset = "0x5E73520", VA = "0x5E74520")]
	public static Exception InvalidAttributeValue(string name, string value)
	{
		return null;
	}

	[Token(Token = "0x60001A8")]
	[Address(RVA = "0x5E74640", Offset = "0x5E73640", VA = "0x5E74640")]
	public static Exception AttributeValues(string name, string value1, string value2)
	{
		return null;
	}

	[Token(Token = "0x60001A9")]
	[Address(RVA = "0x5E74760", Offset = "0x5E73760", VA = "0x5E74760")]
	public static Exception ElementTypeNotFound(string name)
	{
		return null;
	}

	[Token(Token = "0x60001AA")]
	[Address(RVA = "0x5E74870", Offset = "0x5E73870", VA = "0x5E74870")]
	public static Exception RelationParentNameMissing(string rel)
	{
		return null;
	}

	[Token(Token = "0x60001AB")]
	[Address(RVA = "0x5E74980", Offset = "0x5E73980", VA = "0x5E74980")]
	public static Exception RelationChildNameMissing(string rel)
	{
		return null;
	}

	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x5E74A90", Offset = "0x5E73A90", VA = "0x5E74A90")]
	public static Exception RelationTableKeyMissing(string rel)
	{
		return null;
	}

	[Token(Token = "0x60001AD")]
	[Address(RVA = "0x5E74BA0", Offset = "0x5E73BA0", VA = "0x5E74BA0")]
	public static Exception RelationChildKeyMissing(string rel)
	{
		return null;
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x5E74CB0", Offset = "0x5E73CB0", VA = "0x5E74CB0")]
	public static Exception UndefinedDatatype(string name)
	{
		return null;
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x5E74DC0", Offset = "0x5E73DC0", VA = "0x5E74DC0")]
	public static Exception DatatypeNotDefined()
	{
		return null;
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x5E74E40", Offset = "0x5E73E40", VA = "0x5E74E40")]
	public static Exception MismatchKeyLength()
	{
		return null;
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x5E74EC0", Offset = "0x5E73EC0", VA = "0x5E74EC0")]
	public static Exception InvalidField(string name)
	{
		return null;
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x5E74FD0", Offset = "0x5E73FD0", VA = "0x5E74FD0")]
	public static Exception InvalidSelector(string name)
	{
		return null;
	}

	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x5E750E0", Offset = "0x5E740E0", VA = "0x5E750E0")]
	public static Exception CircularComplexType(string name)
	{
		return null;
	}

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x5E751F0", Offset = "0x5E741F0", VA = "0x5E751F0")]
	public static Exception CannotInstantiateAbstract(string name)
	{
		return null;
	}

	[Token(Token = "0x60001B5")]
	[Address(RVA = "0x5E75300", Offset = "0x5E74300", VA = "0x5E75300")]
	public static Exception InvalidKey(string name)
	{
		return null;
	}

	[Token(Token = "0x60001B6")]
	[Address(RVA = "0x5E75410", Offset = "0x5E74410", VA = "0x5E75410")]
	public static Exception DiffgramMissingTable(string name)
	{
		return null;
	}

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x5E75520", Offset = "0x5E74520", VA = "0x5E75520")]
	public static Exception DiffgramMissingSQL()
	{
		return null;
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x5E755A0", Offset = "0x5E745A0", VA = "0x5E755A0")]
	public static Exception DuplicateConstraintRead(string str)
	{
		return null;
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x5E756B0", Offset = "0x5E746B0", VA = "0x5E756B0")]
	public static Exception ColumnTypeConflict(string name)
	{
		return null;
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x5E757C0", Offset = "0x5E747C0", VA = "0x5E757C0")]
	public static Exception CannotConvert(string name, string type)
	{
		return null;
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x5E758E0", Offset = "0x5E748E0", VA = "0x5E758E0")]
	public static Exception MissingRefer(string name)
	{
		return null;
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x5E64F50", Offset = "0x5E63F50", VA = "0x5E64F50")]
	public static Exception InvalidPrefix(string name)
	{
		return null;
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x5E759F0", Offset = "0x5E749F0", VA = "0x5E759F0")]
	public static Exception CanNotDeserializeObjectType()
	{
		return null;
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x5E75A70", Offset = "0x5E74A70", VA = "0x5E75A70")]
	public static Exception IsDataSetAttributeMissingInSchema()
	{
		return null;
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x5E75AF0", Offset = "0x5E74AF0", VA = "0x5E75AF0")]
	public static Exception TooManyIsDataSetAtributeInSchema()
	{
		return null;
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x5E75B70", Offset = "0x5E74B70", VA = "0x5E75B70")]
	public static Exception NestedCircular(string name)
	{
		return null;
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x5E75C80", Offset = "0x5E74C80", VA = "0x5E75C80")]
	public static Exception MultipleParentRows(string tableQName)
	{
		return null;
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x5E75D90", Offset = "0x5E74D90", VA = "0x5E75D90")]
	public static Exception PolymorphismNotSupported(string typeName)
	{
		return null;
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x5E75EA0", Offset = "0x5E74EA0", VA = "0x5E75EA0")]
	public static Exception DataTableInferenceNotSupported()
	{
		return null;
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x5E75F20", Offset = "0x5E74F20", VA = "0x5E75F20")]
	internal static void ThrowMultipleTargetConverter(Exception innerException)
	{
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x5E75FB0", Offset = "0x5E74FB0", VA = "0x5E75FB0")]
	public static Exception DuplicateDeclaration(string name)
	{
		return null;
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x5E760C0", Offset = "0x5E750C0", VA = "0x5E760C0")]
	public static Exception FoundEntity()
	{
		return null;
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x5E76140", Offset = "0x5E75140", VA = "0x5E76140")]
	public static Exception MergeFailed(string name)
	{
		return null;
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x5E761A0", Offset = "0x5E751A0", VA = "0x5E761A0")]
	public static Exception ConvertFailed(Type type1, Type type2)
	{
		return null;
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x5E762C0", Offset = "0x5E752C0", VA = "0x5E762C0")]
	internal static Exception InvalidDuplicateNamedSimpleTypeDelaration(string stName, string errorStr)
	{
		return null;
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x5E763D0", Offset = "0x5E753D0", VA = "0x5E763D0")]
	internal static Exception InternalRBTreeError(RBTreeError internalError)
	{
		return null;
	}

	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x5E764C0", Offset = "0x5E754C0", VA = "0x5E764C0")]
	public static Exception EnumeratorModified()
	{
		return null;
	}
}
