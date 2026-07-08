using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000023")]
internal static class ExceptionBuilder
{
	[Token(Token = "0x6000168")]
	[Address(RVA = "0x420A4A0", Offset = "0x420A4A0", VA = "0x420A4A0")]
	private static void TraceException(string trace, Exception e)
	{
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x420A530", Offset = "0x420A530", VA = "0x420A530")]
	internal static Exception TraceExceptionAsReturnValue(Exception e)
	{
		return null;
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x4200080", Offset = "0x4200080", VA = "0x4200080")]
	internal static Exception TraceExceptionForCapture(Exception e)
	{
		return null;
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x42003F0", Offset = "0x42003F0", VA = "0x42003F0")]
	internal static Exception TraceExceptionWithoutRethrow(Exception e)
	{
		return null;
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x420A600", Offset = "0x420A600", VA = "0x420A600")]
	internal static Exception _Argument(string error)
	{
		return null;
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x420A660", Offset = "0x420A660", VA = "0x420A660")]
	internal static Exception _Argument(string paramName, string error)
	{
		return null;
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x420A6C0", Offset = "0x420A6C0", VA = "0x420A6C0")]
	internal static Exception _Argument(string error, Exception innerException)
	{
		return null;
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x420A720", Offset = "0x420A720", VA = "0x420A720")]
	private static Exception _ArgumentNull(string paramName, string msg)
	{
		return null;
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x420A780", Offset = "0x420A780", VA = "0x420A780")]
	internal static Exception _ArgumentOutOfRange(string paramName, string msg)
	{
		return null;
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x420A7E0", Offset = "0x420A7E0", VA = "0x420A7E0")]
	private static Exception _IndexOutOfRange(string error)
	{
		return null;
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x420A840", Offset = "0x420A840", VA = "0x420A840")]
	private static Exception _InvalidOperation(string error)
	{
		return null;
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x420A8A0", Offset = "0x420A8A0", VA = "0x420A8A0")]
	private static Exception _InvalidEnumArgumentException(string error)
	{
		return null;
	}

	[Token(Token = "0x6000174")]
	private static Exception _InvalidEnumArgumentException<T>(T value)
	{
		return null;
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x420A900", Offset = "0x420A900", VA = "0x420A900")]
	private static void ThrowDataException(string error, Exception innerException)
	{
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x420A960", Offset = "0x420A960", VA = "0x420A960")]
	private static Exception _Data(string error)
	{
		return null;
	}

	[Token(Token = "0x6000177")]
	[Address(RVA = "0x420A9C0", Offset = "0x420A9C0", VA = "0x420A9C0")]
	private static Exception _Constraint(string error)
	{
		return null;
	}

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x420AA20", Offset = "0x420AA20", VA = "0x420AA20")]
	private static Exception _InvalidConstraint(string error)
	{
		return null;
	}

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x420AA80", Offset = "0x420AA80", VA = "0x420AA80")]
	private static Exception _DeletedRowInaccessible(string error)
	{
		return null;
	}

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x420AAE0", Offset = "0x420AAE0", VA = "0x420AAE0")]
	private static Exception _DuplicateName(string error)
	{
		return null;
	}

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x420AB40", Offset = "0x420AB40", VA = "0x420AB40")]
	private static Exception _InRowChangingEvent(string error)
	{
		return null;
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x420ABA0", Offset = "0x420ABA0", VA = "0x420ABA0")]
	private static Exception _NoNullAllowed(string error)
	{
		return null;
	}

	[Token(Token = "0x600017D")]
	[Address(RVA = "0x420AC00", Offset = "0x420AC00", VA = "0x420AC00")]
	private static Exception _ReadOnly(string error)
	{
		return null;
	}

	[Token(Token = "0x600017E")]
	[Address(RVA = "0x420AC60", Offset = "0x420AC60", VA = "0x420AC60")]
	private static Exception _RowNotInTable(string error)
	{
		return null;
	}

	[Token(Token = "0x600017F")]
	[Address(RVA = "0x420ACC0", Offset = "0x420ACC0", VA = "0x420ACC0")]
	private static Exception _VersionNotFound(string error)
	{
		return null;
	}

	[Token(Token = "0x6000180")]
	[Address(RVA = "0x41F7180", Offset = "0x41F7180", VA = "0x41F7180")]
	public static Exception ArgumentNull(string paramName)
	{
		return null;
	}

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x420AD20", Offset = "0x420AD20", VA = "0x420AD20")]
	public static Exception ArgumentOutOfRange(string paramName)
	{
		return null;
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x41F6500", Offset = "0x41F6500", VA = "0x41F6500")]
	public static Exception BadObjectPropertyAccess(string error)
	{
		return null;
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x420AE30", Offset = "0x420AE30", VA = "0x420AE30")]
	public static Exception ArgumentContainsNull(string paramName)
	{
		return null;
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x420AF40", Offset = "0x420AF40", VA = "0x420AF40")]
	public static Exception CannotModifyCollection()
	{
		return null;
	}

	[Token(Token = "0x6000185")]
	[Address(RVA = "0x41F6C40", Offset = "0x41F6C40", VA = "0x41F6C40")]
	public static Exception CaseInsensitiveNameConflict(string name)
	{
		return null;
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x420AFC0", Offset = "0x420AFC0", VA = "0x420AFC0")]
	public static Exception NamespaceNameConflict(string name)
	{
		return null;
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x420B0D0", Offset = "0x420B0D0", VA = "0x420B0D0")]
	public static Exception InvalidOffsetLength()
	{
		return null;
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x420B150", Offset = "0x420B150", VA = "0x420B150")]
	public static Exception ColumnNotInTheTable(string column, string table)
	{
		return null;
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x420B260", Offset = "0x420B260", VA = "0x420B260")]
	public static Exception ColumnNotInAnyTable()
	{
		return null;
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x42061A0", Offset = "0x42061A0", VA = "0x42061A0")]
	public static Exception ColumnOutOfRange(int index)
	{
		return null;
	}

	[Token(Token = "0x600018B")]
	[Address(RVA = "0x420B2E0", Offset = "0x420B2E0", VA = "0x420B2E0")]
	public static Exception ColumnOutOfRange(string column)
	{
		return null;
	}

	[Token(Token = "0x600018C")]
	[Address(RVA = "0x4207610", Offset = "0x4207610", VA = "0x4207610")]
	public static Exception CannotAddColumn1(string column)
	{
		return null;
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x4207720", Offset = "0x4207720", VA = "0x4207720")]
	public static Exception CannotAddColumn2(string column)
	{
		return null;
	}

	[Token(Token = "0x600018E")]
	[Address(RVA = "0x4202960", Offset = "0x4202960", VA = "0x4202960")]
	public static Exception CannotAddColumn3()
	{
		return null;
	}

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x42029E0", Offset = "0x42029E0", VA = "0x42029E0")]
	public static Exception CannotAddColumn4(string column)
	{
		return null;
	}

	[Token(Token = "0x6000190")]
	[Address(RVA = "0x4208E50", Offset = "0x4208E50", VA = "0x4208E50")]
	public static Exception CannotAddDuplicate(string column)
	{
		return null;
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x4209070", Offset = "0x4209070", VA = "0x4209070")]
	public static Exception CannotAddDuplicate2(string table)
	{
		return null;
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x4208F60", Offset = "0x4208F60", VA = "0x4208F60")]
	public static Exception CannotAddDuplicate3(string table)
	{
		return null;
	}

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x4208320", Offset = "0x4208320", VA = "0x4208320")]
	public static Exception CannotRemoveColumn()
	{
		return null;
	}

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x42083A0", Offset = "0x42083A0", VA = "0x42083A0")]
	public static Exception CannotRemovePrimaryKey()
	{
		return null;
	}

	[Token(Token = "0x6000195")]
	[Address(RVA = "0x4208420", Offset = "0x4208420", VA = "0x4208420")]
	public static Exception CannotRemoveChildKey(string relation)
	{
		return null;
	}

	[Token(Token = "0x6000196")]
	[Address(RVA = "0x4208530", Offset = "0x4208530", VA = "0x4208530")]
	public static Exception CannotRemoveConstraint(string constraint, string table)
	{
		return null;
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x4208640", Offset = "0x4208640", VA = "0x4208640")]
	public static Exception CannotRemoveExpression(string column, string expression)
	{
		return null;
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x41F7720", Offset = "0x41F7720", VA = "0x41F7720")]
	public static Exception AddPrimaryKeyConstraint()
	{
		return null;
	}

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x41F5E10", Offset = "0x41F5E10", VA = "0x41F5E10")]
	public static Exception NoConstraintName()
	{
		return null;
	}

	[Token(Token = "0x600019A")]
	[Address(RVA = "0x41F62D0", Offset = "0x41F62D0", VA = "0x41F62D0")]
	public static Exception ConstraintViolation(string constraint)
	{
		return null;
	}

	[Token(Token = "0x600019B")]
	[Address(RVA = "0x420B3F0", Offset = "0x420B3F0", VA = "0x420B3F0")]
	public static string KeysToString(object[] keys)
	{
		return null;
	}

	[Token(Token = "0x600019C")]
	[Address(RVA = "0x420B520", Offset = "0x420B520", VA = "0x420B520")]
	public static string UniqueConstraintViolationText(DataColumn[] columns, object[] values)
	{
		return null;
	}

	[Token(Token = "0x600019D")]
	[Address(RVA = "0x420B740", Offset = "0x420B740", VA = "0x420B740")]
	public static Exception ConstraintViolation(DataColumn[] columns, object[] values)
	{
		return null;
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x41F6850", Offset = "0x41F6850", VA = "0x41F6850")]
	public static Exception ConstraintOutOfRange(int index)
	{
		return null;
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x41F7450", Offset = "0x41F7450", VA = "0x41F7450")]
	public static Exception DuplicateConstraint(string constraint)
	{
		return null;
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x41F8E50", Offset = "0x41F8E50", VA = "0x41F8E50")]
	public static Exception DuplicateConstraintName(string constraint)
	{
		return null;
	}

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x420B7A0", Offset = "0x420B7A0", VA = "0x420B7A0")]
	public static Exception NeededForForeignKeyConstraint(UniqueConstraint key, ForeignKeyConstraint fk)
	{
		return null;
	}

	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x41F7D00", Offset = "0x41F7D00", VA = "0x41F7D00")]
	public static Exception UniqueConstraintViolation()
	{
		return null;
	}

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x41F7C80", Offset = "0x41F7C80", VA = "0x41F7C80")]
	public static Exception ConstraintForeignTable()
	{
		return null;
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x41F7D80", Offset = "0x41F7D80", VA = "0x41F7D80")]
	public static Exception ConstraintParentValues()
	{
		return null;
	}

	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x420B8B0", Offset = "0x420B8B0", VA = "0x420B8B0")]
	public static Exception ConstraintAddFailed(DataTable table)
	{
		return null;
	}

	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x41F83F0", Offset = "0x41F83F0", VA = "0x41F83F0")]
	public static Exception ConstraintRemoveFailed()
	{
		return null;
	}

	[Token(Token = "0x60001A7")]
	[Address(RVA = "0x420B9A0", Offset = "0x420B9A0", VA = "0x420B9A0")]
	public static Exception FailedCascadeDelete(string constraint)
	{
		return null;
	}

	[Token(Token = "0x60001A8")]
	[Address(RVA = "0x420BAB0", Offset = "0x420BAB0", VA = "0x420BAB0")]
	public static Exception FailedCascadeUpdate(string constraint)
	{
		return null;
	}

	[Token(Token = "0x60001A9")]
	[Address(RVA = "0x420BBC0", Offset = "0x420BBC0", VA = "0x420BBC0")]
	public static Exception FailedClearParentTable(string table, string constraint, string childTable)
	{
		return null;
	}

	[Token(Token = "0x60001AA")]
	[Address(RVA = "0x420BCE0", Offset = "0x420BCE0", VA = "0x420BCE0")]
	public static Exception ForeignKeyViolation(string constraint, object[] keys)
	{
		return null;
	}

	[Token(Token = "0x60001AB")]
	[Address(RVA = "0x420BDC0", Offset = "0x420BDC0", VA = "0x420BDC0")]
	public static Exception RemoveParentRow(ForeignKeyConstraint constraint)
	{
		return null;
	}

	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x4204560", Offset = "0x4204560", VA = "0x4204560")]
	public static string MaxLengthViolationText(string columnName)
	{
		return null;
	}

	[Token(Token = "0x60001AD")]
	[Address(RVA = "0x42047F0", Offset = "0x42047F0", VA = "0x42047F0")]
	public static string NotAllowDBNullViolationText(string columnName)
	{
		return null;
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x41F7610", Offset = "0x41F7610", VA = "0x41F7610")]
	public static Exception CantAddConstraintToMultipleNestedTable(string tableName)
	{
		return null;
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x41FC5D0", Offset = "0x41FC5D0", VA = "0x41FC5D0")]
	public static Exception AutoIncrementAndExpression()
	{
		return null;
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x41FC650", Offset = "0x41FC650", VA = "0x41FC650")]
	public static Exception AutoIncrementAndDefaultValue()
	{
		return null;
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x42052F0", Offset = "0x42052F0", VA = "0x42052F0")]
	public static Exception AutoIncrementSeed()
	{
		return null;
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x41FED90", Offset = "0x41FED90", VA = "0x41FED90")]
	public static Exception CantChangeDataType()
	{
		return null;
	}

	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x41FEE10", Offset = "0x41FEE10", VA = "0x41FEE10")]
	public static Exception NullDataType()
	{
		return null;
	}

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x41FE3E0", Offset = "0x41FE3E0", VA = "0x41FE3E0")]
	public static Exception ColumnNameRequired()
	{
		return null;
	}

	[Token(Token = "0x60001B5")]
	[Address(RVA = "0x41FFBD0", Offset = "0x41FFBD0", VA = "0x41FFBD0")]
	public static Exception DefaultValueAndAutoIncrement()
	{
		return null;
	}

	[Token(Token = "0x60001B6")]
	[Address(RVA = "0x41FF5F0", Offset = "0x41FF5F0", VA = "0x41FF5F0")]
	public static Exception DefaultValueDataType(string column, Type defaultType, Type columnType, Exception inner)
	{
		return null;
	}

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x41FFC50", Offset = "0x41FFC50", VA = "0x41FFC50")]
	public static Exception DefaultValueColumnDataType(string column, Type defaultType, Type columnType, Exception inner)
	{
		return null;
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x41FFDF0", Offset = "0x41FFDF0", VA = "0x41FFDF0")]
	public static Exception ExpressionAndUnique()
	{
		return null;
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x4200150", Offset = "0x4200150", VA = "0x4200150")]
	public static Exception ExpressionAndReadOnly()
	{
		return null;
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x41FFE70", Offset = "0x41FFE70", VA = "0x41FFE70")]
	public static Exception ExpressionAndConstraint(DataColumn column, Constraint constraint)
	{
		return null;
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x420BEB0", Offset = "0x420BEB0", VA = "0x420BEB0")]
	public static Exception ExpressionInConstraint(DataColumn column)
	{
		return null;
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x42001D0", Offset = "0x42001D0", VA = "0x42001D0")]
	public static Exception ExpressionCircular()
	{
		return null;
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x4202F60", Offset = "0x4202F60", VA = "0x4202F60")]
	public static Exception NonUniqueValues(string column)
	{
		return null;
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x4202D40", Offset = "0x4202D40", VA = "0x4202D40")]
	public static Exception NullKeyValues(string column)
	{
		return null;
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x4202E50", Offset = "0x4202E50", VA = "0x4202E50")]
	public static Exception NullValues(string column)
	{
		return null;
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x4201680", Offset = "0x4201680", VA = "0x4201680")]
	public static Exception ReadOnlyAndExpression()
	{
		return null;
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x420BF90", Offset = "0x420BF90", VA = "0x420BF90")]
	public static Exception ReadOnly(string column)
	{
		return null;
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x4202430", Offset = "0x4202430", VA = "0x4202430")]
	public static Exception UniqueAndExpression()
	{
		return null;
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x4201AA0", Offset = "0x4201AA0", VA = "0x4201AA0")]
	public static Exception SetFailed(object value, DataColumn column, Type type, Exception innerException)
	{
		return null;
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x420C0A0", Offset = "0x420C0A0", VA = "0x420C0A0")]
	public static Exception CannotSetToNull(DataColumn column)
	{
		return null;
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x4202C60", Offset = "0x4202C60", VA = "0x4202C60")]
	public static Exception LongerThanMaxLength(DataColumn column)
	{
		return null;
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x4201090", Offset = "0x4201090", VA = "0x4201090")]
	public static Exception CannotSetMaxLength(DataColumn column, int value)
	{
		return null;
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x4200A80", Offset = "0x4200A80", VA = "0x4200A80")]
	public static Exception CannotSetMaxLength2(DataColumn column)
	{
		return null;
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x41FF7B0", Offset = "0x41FF7B0", VA = "0x41FF7B0")]
	public static Exception CannotSetSimpleContentType(string columnName, Type type)
	{
		return null;
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x4202850", Offset = "0x4202850", VA = "0x4202850")]
	public static Exception CannotSetSimpleContent(string columnName, Type type)
	{
		return null;
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x4201410", Offset = "0x4201410", VA = "0x4201410")]
	public static Exception CannotChangeNamespace(string columnName)
	{
		return null;
	}

	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x4200B60", Offset = "0x4200B60", VA = "0x4200B60")]
	public static Exception HasToBeStringType(DataColumn column)
	{
		return null;
	}

	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x41FC970", Offset = "0x41FC970", VA = "0x41FC970")]
	public static Exception AutoIncrementCannotSetIfHasData(string typeName)
	{
		return null;
	}

	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x420C180", Offset = "0x420C180", VA = "0x420C180")]
	public static Exception INullableUDTwithoutStaticNull(string typeName)
	{
		return null;
	}

	[Token(Token = "0x60001CE")]
	[Address(RVA = "0x420C290", Offset = "0x420C290", VA = "0x420C290")]
	public static Exception IComparableNotImplemented(string typeName)
	{
		return null;
	}

	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x420C3A0", Offset = "0x420C3A0", VA = "0x420C3A0")]
	public static Exception UDTImplementsIChangeTrackingButnotIRevertible(string typeName)
	{
		return null;
	}

	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x420C4B0", Offset = "0x420C4B0", VA = "0x420C4B0")]
	public static Exception InvalidDataColumnMapping(Type type)
	{
		return null;
	}

	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x41FF9D0", Offset = "0x41FF9D0", VA = "0x41FF9D0")]
	public static Exception CannotSetDateTimeModeForNonDateTimeColumns()
	{
		return null;
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x41FFB90", Offset = "0x41FFB90", VA = "0x41FFB90")]
	public static Exception InvalidDateTimeMode(DataSetDateTime mode)
	{
		return null;
	}

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x41FFA50", Offset = "0x41FFA50", VA = "0x41FFA50")]
	public static Exception CantChangeDateTimeMode(DataSetDateTime oldValue, DataSetDateTime newValue)
	{
		return null;
	}

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x41FAFC0", Offset = "0x41FAFC0", VA = "0x41FAFC0")]
	public static Exception ColumnTypeNotSupported()
	{
		return null;
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x420C5A0", Offset = "0x420C5A0", VA = "0x420C5A0")]
	public static Exception SetFailed(string name)
	{
		return null;
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x420C6B0", Offset = "0x420C6B0", VA = "0x420C6B0")]
	public static Exception SetRowStateFilter()
	{
		return null;
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x420C730", Offset = "0x420C730", VA = "0x420C730")]
	public static Exception CanNotUseDataViewManager()
	{
		return null;
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x420C7B0", Offset = "0x420C7B0", VA = "0x420C7B0")]
	public static Exception CanNotSetTable()
	{
		return null;
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x420C830", Offset = "0x420C830", VA = "0x420C830")]
	public static Exception CanNotUse()
	{
		return null;
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x420C8B0", Offset = "0x420C8B0", VA = "0x420C8B0")]
	public static Exception CanNotBindTable()
	{
		return null;
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x420C930", Offset = "0x420C930", VA = "0x420C930")]
	public static Exception SetTable()
	{
		return null;
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x420C9B0", Offset = "0x420C9B0", VA = "0x420C9B0")]
	public static Exception SetIListObject()
	{
		return null;
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x420CA30", Offset = "0x420CA30", VA = "0x420CA30")]
	public static Exception AddNewNotAllowNull()
	{
		return null;
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x420CAB0", Offset = "0x420CAB0", VA = "0x420CAB0")]
	public static Exception NotOpen()
	{
		return null;
	}

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x420CB30", Offset = "0x420CB30", VA = "0x420CB30")]
	public static Exception CreateChildView()
	{
		return null;
	}

	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x420CBB0", Offset = "0x420CBB0", VA = "0x420CBB0")]
	public static Exception CanNotDelete()
	{
		return null;
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x420CC30", Offset = "0x420CC30", VA = "0x420CC30")]
	public static Exception GetElementIndex(int index)
	{
		return null;
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x420CD40", Offset = "0x420CD40", VA = "0x420CD40")]
	public static Exception AddExternalObject()
	{
		return null;
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x420CDC0", Offset = "0x420CDC0", VA = "0x420CDC0")]
	public static Exception CanNotClear()
	{
		return null;
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x420CE40", Offset = "0x420CE40", VA = "0x420CE40")]
	public static Exception InsertExternalObject()
	{
		return null;
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x420CEC0", Offset = "0x420CEC0", VA = "0x420CEC0")]
	public static Exception RemoveExternalObject()
	{
		return null;
	}

	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x420CF40", Offset = "0x420CF40", VA = "0x420CF40")]
	public static Exception ColumnToSortIsOutOfRange(string column)
	{
		return null;
	}

	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x420D050", Offset = "0x420D050", VA = "0x420D050")]
	public static Exception KeyTableMismatch()
	{
		return null;
	}

	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x420D0D0", Offset = "0x420D0D0", VA = "0x420D0D0")]
	public static Exception KeyNoColumns()
	{
		return null;
	}

	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x420D150", Offset = "0x420D150", VA = "0x420D150")]
	public static Exception KeyTooManyColumns(int cols)
	{
		return null;
	}

	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x420D260", Offset = "0x420D260", VA = "0x420D260")]
	public static Exception KeyDuplicateColumns(string columnName)
	{
		return null;
	}

	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x420D370", Offset = "0x420D370", VA = "0x420D370")]
	public static Exception RelationDataSetMismatch()
	{
		return null;
	}

	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x41FF030", Offset = "0x41FF030", VA = "0x41FF030")]
	public static Exception ColumnsTypeMismatch()
	{
		return null;
	}

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x420D3F0", Offset = "0x420D3F0", VA = "0x420D3F0")]
	public static Exception KeyLengthMismatch()
	{
		return null;
	}

	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x420D470", Offset = "0x420D470", VA = "0x420D470")]
	public static Exception KeyLengthZero()
	{
		return null;
	}

	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x420D4F0", Offset = "0x420D4F0", VA = "0x420D4F0")]
	public static Exception ForeignRelation()
	{
		return null;
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x420D570", Offset = "0x420D570", VA = "0x420D570")]
	public static Exception KeyColumnsIdentical()
	{
		return null;
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x420D5F0", Offset = "0x420D5F0", VA = "0x420D5F0")]
	public static Exception RelationForeignTable(string t1, string t2)
	{
		return null;
	}

	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x420D710", Offset = "0x420D710", VA = "0x420D710")]
	public static Exception GetParentRowTableMismatch(string t1, string t2)
	{
		return null;
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x420D830", Offset = "0x420D830", VA = "0x420D830")]
	public static Exception SetParentRowTableMismatch(string t1, string t2)
	{
		return null;
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x420D950", Offset = "0x420D950", VA = "0x420D950")]
	public static Exception RelationForeignRow()
	{
		return null;
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x420D9D0", Offset = "0x420D9D0", VA = "0x420D9D0")]
	public static Exception RelationNestedReadOnly()
	{
		return null;
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x420DA50", Offset = "0x420DA50", VA = "0x420DA50")]
	public static Exception TableCantBeNestedInTwoTables(string tableName)
	{
		return null;
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x420DB60", Offset = "0x420DB60", VA = "0x420DB60")]
	public static Exception LoopInNestedRelations(string tableName)
	{
		return null;
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x420DC70", Offset = "0x420DC70", VA = "0x420DC70")]
	public static Exception RelationDoesNotExist()
	{
		return null;
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x420DCF0", Offset = "0x420DCF0", VA = "0x420DCF0")]
	public static Exception ParentOrChildColumnsDoNotHaveDataSet()
	{
		return null;
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x420DD70", Offset = "0x420DD70", VA = "0x420DD70")]
	public static Exception InValidNestedRelation(string childTableName)
	{
		return null;
	}

	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x420DE80", Offset = "0x420DE80", VA = "0x420DE80")]
	public static Exception InvalidParentNamespaceinNestedRelation(string childTableName)
	{
		return null;
	}

	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x420DF90", Offset = "0x420DF90", VA = "0x420DF90")]
	public static Exception RowNotInTheDataSet()
	{
		return null;
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x420E010", Offset = "0x420E010", VA = "0x420E010")]
	public static Exception RowNotInTheTable()
	{
		return null;
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x420E090", Offset = "0x420E090", VA = "0x420E090")]
	public static Exception EditInRowChanging()
	{
		return null;
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x420E110", Offset = "0x420E110", VA = "0x420E110")]
	public static Exception EndEditInRowChanging()
	{
		return null;
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x420E190", Offset = "0x420E190", VA = "0x420E190")]
	public static Exception BeginEditInRowChanging()
	{
		return null;
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x420E210", Offset = "0x420E210", VA = "0x420E210")]
	public static Exception CancelEditInRowChanging()
	{
		return null;
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x420E290", Offset = "0x420E290", VA = "0x420E290")]
	public static Exception DeleteInRowDeleting()
	{
		return null;
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x420E310", Offset = "0x420E310", VA = "0x420E310")]
	public static Exception ValueArrayLength()
	{
		return null;
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x420E390", Offset = "0x420E390", VA = "0x420E390")]
	public static Exception NoCurrentData()
	{
		return null;
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x420E410", Offset = "0x420E410", VA = "0x420E410")]
	public static Exception NoOriginalData()
	{
		return null;
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x420E490", Offset = "0x420E490", VA = "0x420E490")]
	public static Exception NoProposedData()
	{
		return null;
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x420E510", Offset = "0x420E510", VA = "0x420E510")]
	public static Exception RowRemovedFromTheTable()
	{
		return null;
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x420E590", Offset = "0x420E590", VA = "0x420E590")]
	public static Exception DeletedRowInaccessible()
	{
		return null;
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x420E610", Offset = "0x420E610", VA = "0x420E610")]
	public static Exception RowAlreadyDeleted()
	{
		return null;
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x420E690", Offset = "0x420E690", VA = "0x420E690")]
	public static Exception RowEmpty()
	{
		return null;
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x420E710", Offset = "0x420E710", VA = "0x420E710")]
	public static Exception InvalidRowVersion()
	{
		return null;
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x420E790", Offset = "0x420E790", VA = "0x420E790")]
	public static Exception RowOutOfRange(int index)
	{
		return null;
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x420E8A0", Offset = "0x420E8A0", VA = "0x420E8A0")]
	public static Exception RowInsertTwice(int index, string tableName)
	{
		return null;
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x420E9B0", Offset = "0x420E9B0", VA = "0x420E9B0")]
	public static Exception RowInsertMissing(string tableName)
	{
		return null;
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x420EAC0", Offset = "0x420EAC0", VA = "0x420EAC0")]
	public static Exception RowAlreadyRemoved()
	{
		return null;
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x420EB40", Offset = "0x420EB40", VA = "0x420EB40")]
	public static Exception MultipleParents()
	{
		return null;
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x420EBC0", Offset = "0x420EBC0", VA = "0x420EBC0")]
	public static Exception InvalidRowState(DataRowState state)
	{
		return null;
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x420EC00", Offset = "0x420EC00", VA = "0x420EC00")]
	public static Exception InvalidRowBitPattern()
	{
		return null;
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x420EC80", Offset = "0x420EC80", VA = "0x420EC80")]
	internal static Exception SetDataSetNameToEmpty()
	{
		return null;
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x420ED00", Offset = "0x420ED00", VA = "0x420ED00")]
	internal static Exception SetDataSetNameConflicting(string name)
	{
		return null;
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x420EE10", Offset = "0x420EE10", VA = "0x420EE10")]
	public static Exception DataSetUnsupportedSchema(string ns)
	{
		return null;
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x420EF20", Offset = "0x420EF20", VA = "0x420EF20")]
	public static Exception MergeMissingDefinition(string obj)
	{
		return null;
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x420F030", Offset = "0x420F030", VA = "0x420F030")]
	public static Exception TablesInDifferentSets()
	{
		return null;
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x420F0B0", Offset = "0x420F0B0", VA = "0x420F0B0")]
	public static Exception RelationAlreadyExists()
	{
		return null;
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x420F130", Offset = "0x420F130", VA = "0x420F130")]
	public static Exception RowAlreadyInOtherCollection()
	{
		return null;
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x420F1B0", Offset = "0x420F1B0", VA = "0x420F1B0")]
	public static Exception RowAlreadyInTheCollection()
	{
		return null;
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x420F230", Offset = "0x420F230", VA = "0x420F230")]
	public static Exception RecordStateRange()
	{
		return null;
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x420F2B0", Offset = "0x420F2B0", VA = "0x420F2B0")]
	public static Exception IndexKeyLength(int length, int keyLength)
	{
		return null;
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x420F400", Offset = "0x420F400", VA = "0x420F400")]
	public static Exception RemovePrimaryKey(DataTable table)
	{
		return null;
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x420F510", Offset = "0x420F510", VA = "0x420F510")]
	public static Exception RelationAlreadyInOtherDataSet()
	{
		return null;
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x420F590", Offset = "0x420F590", VA = "0x420F590")]
	public static Exception RelationAlreadyInTheDataSet()
	{
		return null;
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x420F610", Offset = "0x420F610", VA = "0x420F610")]
	public static Exception RelationNotInTheDataSet(string relation)
	{
		return null;
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x420F720", Offset = "0x420F720", VA = "0x420F720")]
	public static Exception RelationOutOfRange(object index)
	{
		return null;
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x420F820", Offset = "0x420F820", VA = "0x420F820")]
	public static Exception DuplicateRelation(string relation)
	{
		return null;
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x420F930", Offset = "0x420F930", VA = "0x420F930")]
	public static Exception RelationTableNull()
	{
		return null;
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x420F9B0", Offset = "0x420F9B0", VA = "0x420F9B0")]
	public static Exception RelationDataSetNull()
	{
		return null;
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x420FA30", Offset = "0x420FA30", VA = "0x420FA30")]
	public static Exception RelationTableWasRemoved()
	{
		return null;
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x420FAB0", Offset = "0x420FAB0", VA = "0x420FAB0")]
	public static Exception ParentTableMismatch()
	{
		return null;
	}

	[Token(Token = "0x6000227")]
	[Address(RVA = "0x420FB30", Offset = "0x420FB30", VA = "0x420FB30")]
	public static Exception ChildTableMismatch()
	{
		return null;
	}

	[Token(Token = "0x6000228")]
	[Address(RVA = "0x420FBB0", Offset = "0x420FBB0", VA = "0x420FBB0")]
	public static Exception EnforceConstraint()
	{
		return null;
	}

	[Token(Token = "0x6000229")]
	[Address(RVA = "0x420FC30", Offset = "0x420FC30", VA = "0x420FC30")]
	public static Exception CaseLocaleMismatch()
	{
		return null;
	}

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x420FCB0", Offset = "0x420FCB0", VA = "0x420FCB0")]
	public static Exception CannotChangeCaseLocale()
	{
		return null;
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x420FD30", Offset = "0x420FD30", VA = "0x420FD30")]
	public static Exception CannotChangeCaseLocale(Exception innerException)
	{
		return null;
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x420FDB0", Offset = "0x420FDB0", VA = "0x420FDB0")]
	public static Exception InvalidRemotingFormat(SerializationFormat mode)
	{
		return null;
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x420FDF0", Offset = "0x420FDF0", VA = "0x420FDF0")]
	public static Exception TableForeignPrimaryKey()
	{
		return null;
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x420FE70", Offset = "0x420FE70", VA = "0x420FE70")]
	public static Exception TableCannotAddToSimpleContent()
	{
		return null;
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x420FEF0", Offset = "0x420FEF0", VA = "0x420FEF0")]
	public static Exception NoTableName()
	{
		return null;
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x420FF70", Offset = "0x420FF70", VA = "0x420FF70")]
	public static Exception MultipleTextOnlyColumns()
	{
		return null;
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x420FFF0", Offset = "0x420FFF0", VA = "0x420FFF0")]
	public static Exception InvalidSortString(string sort)
	{
		return null;
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x4210100", Offset = "0x4210100", VA = "0x4210100")]
	public static Exception DuplicateTableName(string table)
	{
		return null;
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x4210210", Offset = "0x4210210", VA = "0x4210210")]
	public static Exception DuplicateTableName2(string table, string ns)
	{
		return null;
	}

	[Token(Token = "0x6000234")]
	[Address(RVA = "0x4210330", Offset = "0x4210330", VA = "0x4210330")]
	public static Exception SelfnestedDatasetConflictingName(string table)
	{
		return null;
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x4210440", Offset = "0x4210440", VA = "0x4210440")]
	public static Exception DatasetConflictingName(string table)
	{
		return null;
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x4210550", Offset = "0x4210550", VA = "0x4210550")]
	public static Exception TableAlreadyInOtherDataSet()
	{
		return null;
	}

	[Token(Token = "0x6000237")]
	[Address(RVA = "0x42105D0", Offset = "0x42105D0", VA = "0x42105D0")]
	public static Exception TableAlreadyInTheDataSet()
	{
		return null;
	}

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x4210650", Offset = "0x4210650", VA = "0x4210650")]
	public static Exception TableOutOfRange(int index)
	{
		return null;
	}

	[Token(Token = "0x6000239")]
	[Address(RVA = "0x4210760", Offset = "0x4210760", VA = "0x4210760")]
	public static Exception TableNotInTheDataSet(string table)
	{
		return null;
	}

	[Token(Token = "0x600023A")]
	[Address(RVA = "0x4210870", Offset = "0x4210870", VA = "0x4210870")]
	public static Exception TableInRelation()
	{
		return null;
	}

	[Token(Token = "0x600023B")]
	[Address(RVA = "0x42108F0", Offset = "0x42108F0", VA = "0x42108F0")]
	public static Exception TableInConstraint(DataTable table, Constraint constraint)
	{
		return null;
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x42109F0", Offset = "0x42109F0", VA = "0x42109F0")]
	public static Exception CanNotSerializeDataTableHierarchy()
	{
		return null;
	}

	[Token(Token = "0x600023D")]
	[Address(RVA = "0x4210A70", Offset = "0x4210A70", VA = "0x4210A70")]
	public static Exception CanNotRemoteDataTable()
	{
		return null;
	}

	[Token(Token = "0x600023E")]
	[Address(RVA = "0x4210AF0", Offset = "0x4210AF0", VA = "0x4210AF0")]
	public static Exception CanNotSetRemotingFormat()
	{
		return null;
	}

	[Token(Token = "0x600023F")]
	[Address(RVA = "0x4210B70", Offset = "0x4210B70", VA = "0x4210B70")]
	public static Exception CanNotSerializeDataTableWithEmptyName()
	{
		return null;
	}

	[Token(Token = "0x6000240")]
	[Address(RVA = "0x4210BF0", Offset = "0x4210BF0", VA = "0x4210BF0")]
	public static Exception TableNotFound(string tableName)
	{
		return null;
	}

	[Token(Token = "0x6000241")]
	[Address(RVA = "0x4210D00", Offset = "0x4210D00", VA = "0x4210D00")]
	public static Exception AggregateException(AggregateType aggregateType, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000242")]
	[Address(RVA = "0x4210E40", Offset = "0x4210E40", VA = "0x4210E40")]
	public static Exception InvalidStorageType(TypeCode typecode)
	{
		return null;
	}

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x4210F50", Offset = "0x4210F50", VA = "0x4210F50")]
	public static Exception RangeArgument(int min, int max)
	{
		return null;
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x4211080", Offset = "0x4211080", VA = "0x4211080")]
	public static Exception NullRange()
	{
		return null;
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x4211100", Offset = "0x4211100", VA = "0x4211100")]
	public static Exception NegativeMinimumCapacity()
	{
		return null;
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x4211180", Offset = "0x4211180", VA = "0x4211180")]
	public static Exception ProblematicChars(char charValue)
	{
		return null;
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x42112C0", Offset = "0x42112C0", VA = "0x42112C0")]
	public static Exception StorageSetFailed()
	{
		return null;
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x4211340", Offset = "0x4211340", VA = "0x4211340")]
	public static Exception SimpleTypeNotSupported()
	{
		return null;
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x42113C0", Offset = "0x42113C0", VA = "0x42113C0")]
	public static Exception MissingAttribute(string attribute)
	{
		return null;
	}

	[Token(Token = "0x600024A")]
	[Address(RVA = "0x42113E0", Offset = "0x42113E0", VA = "0x42113E0")]
	public static Exception MissingAttribute(string element, string attribute)
	{
		return null;
	}

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x4211500", Offset = "0x4211500", VA = "0x4211500")]
	public static Exception InvalidAttributeValue(string name, string value)
	{
		return null;
	}

	[Token(Token = "0x600024C")]
	[Address(RVA = "0x4211620", Offset = "0x4211620", VA = "0x4211620")]
	public static Exception AttributeValues(string name, string value1, string value2)
	{
		return null;
	}

	[Token(Token = "0x600024D")]
	[Address(RVA = "0x4211740", Offset = "0x4211740", VA = "0x4211740")]
	public static Exception ElementTypeNotFound(string name)
	{
		return null;
	}

	[Token(Token = "0x600024E")]
	[Address(RVA = "0x4211850", Offset = "0x4211850", VA = "0x4211850")]
	public static Exception RelationParentNameMissing(string rel)
	{
		return null;
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x4211960", Offset = "0x4211960", VA = "0x4211960")]
	public static Exception RelationChildNameMissing(string rel)
	{
		return null;
	}

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x4211A70", Offset = "0x4211A70", VA = "0x4211A70")]
	public static Exception RelationTableKeyMissing(string rel)
	{
		return null;
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x4211B80", Offset = "0x4211B80", VA = "0x4211B80")]
	public static Exception RelationChildKeyMissing(string rel)
	{
		return null;
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x4211C90", Offset = "0x4211C90", VA = "0x4211C90")]
	public static Exception UndefinedDatatype(string name)
	{
		return null;
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x4211DA0", Offset = "0x4211DA0", VA = "0x4211DA0")]
	public static Exception DatatypeNotDefined()
	{
		return null;
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x4211E20", Offset = "0x4211E20", VA = "0x4211E20")]
	public static Exception MismatchKeyLength()
	{
		return null;
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x4211EA0", Offset = "0x4211EA0", VA = "0x4211EA0")]
	public static Exception InvalidField(string name)
	{
		return null;
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x4211FB0", Offset = "0x4211FB0", VA = "0x4211FB0")]
	public static Exception InvalidSelector(string name)
	{
		return null;
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x42120C0", Offset = "0x42120C0", VA = "0x42120C0")]
	public static Exception CircularComplexType(string name)
	{
		return null;
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x42121D0", Offset = "0x42121D0", VA = "0x42121D0")]
	public static Exception CannotInstantiateAbstract(string name)
	{
		return null;
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x42122E0", Offset = "0x42122E0", VA = "0x42122E0")]
	public static Exception InvalidKey(string name)
	{
		return null;
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x42123F0", Offset = "0x42123F0", VA = "0x42123F0")]
	public static Exception DiffgramMissingTable(string name)
	{
		return null;
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x4212500", Offset = "0x4212500", VA = "0x4212500")]
	public static Exception DiffgramMissingSQL()
	{
		return null;
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x4212580", Offset = "0x4212580", VA = "0x4212580")]
	public static Exception DuplicateConstraintRead(string str)
	{
		return null;
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x4212690", Offset = "0x4212690", VA = "0x4212690")]
	public static Exception ColumnTypeConflict(string name)
	{
		return null;
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x42127A0", Offset = "0x42127A0", VA = "0x42127A0")]
	public static Exception CannotConvert(string name, string type)
	{
		return null;
	}

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x42128C0", Offset = "0x42128C0", VA = "0x42128C0")]
	public static Exception MissingRefer(string name)
	{
		return null;
	}

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x41FEAD0", Offset = "0x41FEAD0", VA = "0x41FEAD0")]
	public static Exception InvalidPrefix(string name)
	{
		return null;
	}

	[Token(Token = "0x6000261")]
	[Address(RVA = "0x42129D0", Offset = "0x42129D0", VA = "0x42129D0")]
	public static Exception CanNotDeserializeObjectType()
	{
		return null;
	}

	[Token(Token = "0x6000262")]
	[Address(RVA = "0x4212A50", Offset = "0x4212A50", VA = "0x4212A50")]
	public static Exception IsDataSetAttributeMissingInSchema()
	{
		return null;
	}

	[Token(Token = "0x6000263")]
	[Address(RVA = "0x4212AD0", Offset = "0x4212AD0", VA = "0x4212AD0")]
	public static Exception TooManyIsDataSetAtributeInSchema()
	{
		return null;
	}

	[Token(Token = "0x6000264")]
	[Address(RVA = "0x4212B50", Offset = "0x4212B50", VA = "0x4212B50")]
	public static Exception NestedCircular(string name)
	{
		return null;
	}

	[Token(Token = "0x6000265")]
	[Address(RVA = "0x4212C60", Offset = "0x4212C60", VA = "0x4212C60")]
	public static Exception MultipleParentRows(string tableQName)
	{
		return null;
	}

	[Token(Token = "0x6000266")]
	[Address(RVA = "0x4212D70", Offset = "0x4212D70", VA = "0x4212D70")]
	public static Exception PolymorphismNotSupported(string typeName)
	{
		return null;
	}

	[Token(Token = "0x6000267")]
	[Address(RVA = "0x4212E80", Offset = "0x4212E80", VA = "0x4212E80")]
	public static Exception DataTableInferenceNotSupported()
	{
		return null;
	}

	[Token(Token = "0x6000268")]
	[Address(RVA = "0x4212F00", Offset = "0x4212F00", VA = "0x4212F00")]
	internal static void ThrowMultipleTargetConverter(Exception innerException)
	{
	}

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x4212F60", Offset = "0x4212F60", VA = "0x4212F60")]
	public static Exception DuplicateDeclaration(string name)
	{
		return null;
	}

	[Token(Token = "0x600026A")]
	[Address(RVA = "0x4213070", Offset = "0x4213070", VA = "0x4213070")]
	public static Exception FoundEntity()
	{
		return null;
	}

	[Token(Token = "0x600026B")]
	[Address(RVA = "0x42130F0", Offset = "0x42130F0", VA = "0x42130F0")]
	public static Exception MergeFailed(string name)
	{
		return null;
	}

	[Token(Token = "0x600026C")]
	[Address(RVA = "0x4213150", Offset = "0x4213150", VA = "0x4213150")]
	public static Exception ConvertFailed(Type type1, Type type2)
	{
		return null;
	}

	[Token(Token = "0x600026D")]
	[Address(RVA = "0x4213270", Offset = "0x4213270", VA = "0x4213270")]
	internal static Exception InvalidDuplicateNamedSimpleTypeDelaration(string stName, string errorStr)
	{
		return null;
	}

	[Token(Token = "0x600026E")]
	[Address(RVA = "0x4213380", Offset = "0x4213380", VA = "0x4213380")]
	internal static Exception InternalRBTreeError(RBTreeError internalError)
	{
		return null;
	}

	[Token(Token = "0x600026F")]
	[Address(RVA = "0x4213470", Offset = "0x4213470", VA = "0x4213470")]
	public static Exception EnumeratorModified()
	{
		return null;
	}
}
