// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.ExceptionBuilder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000023")]
internal static class ExceptionBuilder
{
	[Token(Token = "0x6000168")]
	[Address(RVA = "0x4547C00", Offset = "0x4547C00", VA = "0x4547C00")]
	private static void TraceException(string trace, Exception e)
	{
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x4547C90", Offset = "0x4547C90", VA = "0x4547C90")]
	internal static Exception TraceExceptionAsReturnValue(Exception e)
	{
		return null;
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x453D7E0", Offset = "0x453D7E0", VA = "0x453D7E0")]
	internal static Exception TraceExceptionForCapture(Exception e)
	{
		return null;
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x453DB50", Offset = "0x453DB50", VA = "0x453DB50")]
	internal static Exception TraceExceptionWithoutRethrow(Exception e)
	{
		return null;
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x4547D60", Offset = "0x4547D60", VA = "0x4547D60")]
	internal static Exception _Argument(string error)
	{
		return null;
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x4547DC0", Offset = "0x4547DC0", VA = "0x4547DC0")]
	internal static Exception _Argument(string paramName, string error)
	{
		return null;
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x4547E20", Offset = "0x4547E20", VA = "0x4547E20")]
	internal static Exception _Argument(string error, Exception innerException)
	{
		return null;
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x4547E80", Offset = "0x4547E80", VA = "0x4547E80")]
	private static Exception _ArgumentNull(string paramName, string msg)
	{
		return null;
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x4547EE0", Offset = "0x4547EE0", VA = "0x4547EE0")]
	internal static Exception _ArgumentOutOfRange(string paramName, string msg)
	{
		return null;
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x4547F40", Offset = "0x4547F40", VA = "0x4547F40")]
	private static Exception _IndexOutOfRange(string error)
	{
		return null;
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x4547FA0", Offset = "0x4547FA0", VA = "0x4547FA0")]
	private static Exception _InvalidOperation(string error)
	{
		return null;
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x4548000", Offset = "0x4548000", VA = "0x4548000")]
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
	[Address(RVA = "0x4548060", Offset = "0x4548060", VA = "0x4548060")]
	private static void ThrowDataException(string error, Exception innerException)
	{
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x45480C0", Offset = "0x45480C0", VA = "0x45480C0")]
	private static Exception _Data(string error)
	{
		return null;
	}

	[Token(Token = "0x6000177")]
	[Address(RVA = "0x4548120", Offset = "0x4548120", VA = "0x4548120")]
	private static Exception _Constraint(string error)
	{
		return null;
	}

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x4548180", Offset = "0x4548180", VA = "0x4548180")]
	private static Exception _InvalidConstraint(string error)
	{
		return null;
	}

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x45481E0", Offset = "0x45481E0", VA = "0x45481E0")]
	private static Exception _DeletedRowInaccessible(string error)
	{
		return null;
	}

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x4548240", Offset = "0x4548240", VA = "0x4548240")]
	private static Exception _DuplicateName(string error)
	{
		return null;
	}

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x45482A0", Offset = "0x45482A0", VA = "0x45482A0")]
	private static Exception _InRowChangingEvent(string error)
	{
		return null;
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x4548300", Offset = "0x4548300", VA = "0x4548300")]
	private static Exception _NoNullAllowed(string error)
	{
		return null;
	}

	[Token(Token = "0x600017D")]
	[Address(RVA = "0x4548360", Offset = "0x4548360", VA = "0x4548360")]
	private static Exception _ReadOnly(string error)
	{
		return null;
	}

	[Token(Token = "0x600017E")]
	[Address(RVA = "0x45483C0", Offset = "0x45483C0", VA = "0x45483C0")]
	private static Exception _RowNotInTable(string error)
	{
		return null;
	}

	[Token(Token = "0x600017F")]
	[Address(RVA = "0x4548420", Offset = "0x4548420", VA = "0x4548420")]
	private static Exception _VersionNotFound(string error)
	{
		return null;
	}

	[Token(Token = "0x6000180")]
	[Address(RVA = "0x45348E0", Offset = "0x45348E0", VA = "0x45348E0")]
	public static Exception ArgumentNull(string paramName)
	{
		return null;
	}

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x4548480", Offset = "0x4548480", VA = "0x4548480")]
	public static Exception ArgumentOutOfRange(string paramName)
	{
		return null;
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x4533C60", Offset = "0x4533C60", VA = "0x4533C60")]
	public static Exception BadObjectPropertyAccess(string error)
	{
		return null;
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x4548590", Offset = "0x4548590", VA = "0x4548590")]
	public static Exception ArgumentContainsNull(string paramName)
	{
		return null;
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x45486A0", Offset = "0x45486A0", VA = "0x45486A0")]
	public static Exception CannotModifyCollection()
	{
		return null;
	}

	[Token(Token = "0x6000185")]
	[Address(RVA = "0x45343A0", Offset = "0x45343A0", VA = "0x45343A0")]
	public static Exception CaseInsensitiveNameConflict(string name)
	{
		return null;
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x4548720", Offset = "0x4548720", VA = "0x4548720")]
	public static Exception NamespaceNameConflict(string name)
	{
		return null;
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x4548830", Offset = "0x4548830", VA = "0x4548830")]
	public static Exception InvalidOffsetLength()
	{
		return null;
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x45488B0", Offset = "0x45488B0", VA = "0x45488B0")]
	public static Exception ColumnNotInTheTable(string column, string table)
	{
		return null;
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x45489C0", Offset = "0x45489C0", VA = "0x45489C0")]
	public static Exception ColumnNotInAnyTable()
	{
		return null;
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x4543900", Offset = "0x4543900", VA = "0x4543900")]
	public static Exception ColumnOutOfRange(int index)
	{
		return null;
	}

	[Token(Token = "0x600018B")]
	[Address(RVA = "0x4548A40", Offset = "0x4548A40", VA = "0x4548A40")]
	public static Exception ColumnOutOfRange(string column)
	{
		return null;
	}

	[Token(Token = "0x600018C")]
	[Address(RVA = "0x4544D70", Offset = "0x4544D70", VA = "0x4544D70")]
	public static Exception CannotAddColumn1(string column)
	{
		return null;
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x4544E80", Offset = "0x4544E80", VA = "0x4544E80")]
	public static Exception CannotAddColumn2(string column)
	{
		return null;
	}

	[Token(Token = "0x600018E")]
	[Address(RVA = "0x45400C0", Offset = "0x45400C0", VA = "0x45400C0")]
	public static Exception CannotAddColumn3()
	{
		return null;
	}

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x4540140", Offset = "0x4540140", VA = "0x4540140")]
	public static Exception CannotAddColumn4(string column)
	{
		return null;
	}

	[Token(Token = "0x6000190")]
	[Address(RVA = "0x45465B0", Offset = "0x45465B0", VA = "0x45465B0")]
	public static Exception CannotAddDuplicate(string column)
	{
		return null;
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x45467D0", Offset = "0x45467D0", VA = "0x45467D0")]
	public static Exception CannotAddDuplicate2(string table)
	{
		return null;
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x45466C0", Offset = "0x45466C0", VA = "0x45466C0")]
	public static Exception CannotAddDuplicate3(string table)
	{
		return null;
	}

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x4545A80", Offset = "0x4545A80", VA = "0x4545A80")]
	public static Exception CannotRemoveColumn()
	{
		return null;
	}

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x4545B00", Offset = "0x4545B00", VA = "0x4545B00")]
	public static Exception CannotRemovePrimaryKey()
	{
		return null;
	}

	[Token(Token = "0x6000195")]
	[Address(RVA = "0x4545B80", Offset = "0x4545B80", VA = "0x4545B80")]
	public static Exception CannotRemoveChildKey(string relation)
	{
		return null;
	}

	[Token(Token = "0x6000196")]
	[Address(RVA = "0x4545C90", Offset = "0x4545C90", VA = "0x4545C90")]
	public static Exception CannotRemoveConstraint(string constraint, string table)
	{
		return null;
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x4545DA0", Offset = "0x4545DA0", VA = "0x4545DA0")]
	public static Exception CannotRemoveExpression(string column, string expression)
	{
		return null;
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x4534E80", Offset = "0x4534E80", VA = "0x4534E80")]
	public static Exception AddPrimaryKeyConstraint()
	{
		return null;
	}

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x4533570", Offset = "0x4533570", VA = "0x4533570")]
	public static Exception NoConstraintName()
	{
		return null;
	}

	[Token(Token = "0x600019A")]
	[Address(RVA = "0x4533A30", Offset = "0x4533A30", VA = "0x4533A30")]
	public static Exception ConstraintViolation(string constraint)
	{
		return null;
	}

	[Token(Token = "0x600019B")]
	[Address(RVA = "0x4548B50", Offset = "0x4548B50", VA = "0x4548B50")]
	public static string KeysToString(object[] keys)
	{
		return null;
	}

	[Token(Token = "0x600019C")]
	[Address(RVA = "0x4548C80", Offset = "0x4548C80", VA = "0x4548C80")]
	public static string UniqueConstraintViolationText(DataColumn[] columns, object[] values)
	{
		return null;
	}

	[Token(Token = "0x600019D")]
	[Address(RVA = "0x4548EA0", Offset = "0x4548EA0", VA = "0x4548EA0")]
	public static Exception ConstraintViolation(DataColumn[] columns, object[] values)
	{
		return null;
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x4533FB0", Offset = "0x4533FB0", VA = "0x4533FB0")]
	public static Exception ConstraintOutOfRange(int index)
	{
		return null;
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x4534BB0", Offset = "0x4534BB0", VA = "0x4534BB0")]
	public static Exception DuplicateConstraint(string constraint)
	{
		return null;
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x45365B0", Offset = "0x45365B0", VA = "0x45365B0")]
	public static Exception DuplicateConstraintName(string constraint)
	{
		return null;
	}

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x4548F00", Offset = "0x4548F00", VA = "0x4548F00")]
	public static Exception NeededForForeignKeyConstraint(UniqueConstraint key, ForeignKeyConstraint fk)
	{
		return null;
	}

	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x4535460", Offset = "0x4535460", VA = "0x4535460")]
	public static Exception UniqueConstraintViolation()
	{
		return null;
	}

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x45353E0", Offset = "0x45353E0", VA = "0x45353E0")]
	public static Exception ConstraintForeignTable()
	{
		return null;
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x45354E0", Offset = "0x45354E0", VA = "0x45354E0")]
	public static Exception ConstraintParentValues()
	{
		return null;
	}

	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x4549010", Offset = "0x4549010", VA = "0x4549010")]
	public static Exception ConstraintAddFailed(DataTable table)
	{
		return null;
	}

	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x4535B50", Offset = "0x4535B50", VA = "0x4535B50")]
	public static Exception ConstraintRemoveFailed()
	{
		return null;
	}

	[Token(Token = "0x60001A7")]
	[Address(RVA = "0x4549100", Offset = "0x4549100", VA = "0x4549100")]
	public static Exception FailedCascadeDelete(string constraint)
	{
		return null;
	}

	[Token(Token = "0x60001A8")]
	[Address(RVA = "0x4549210", Offset = "0x4549210", VA = "0x4549210")]
	public static Exception FailedCascadeUpdate(string constraint)
	{
		return null;
	}

	[Token(Token = "0x60001A9")]
	[Address(RVA = "0x4549320", Offset = "0x4549320", VA = "0x4549320")]
	public static Exception FailedClearParentTable(string table, string constraint, string childTable)
	{
		return null;
	}

	[Token(Token = "0x60001AA")]
	[Address(RVA = "0x4549440", Offset = "0x4549440", VA = "0x4549440")]
	public static Exception ForeignKeyViolation(string constraint, object[] keys)
	{
		return null;
	}

	[Token(Token = "0x60001AB")]
	[Address(RVA = "0x4549520", Offset = "0x4549520", VA = "0x4549520")]
	public static Exception RemoveParentRow(ForeignKeyConstraint constraint)
	{
		return null;
	}

	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x4541CC0", Offset = "0x4541CC0", VA = "0x4541CC0")]
	public static string MaxLengthViolationText(string columnName)
	{
		return null;
	}

	[Token(Token = "0x60001AD")]
	[Address(RVA = "0x4541F50", Offset = "0x4541F50", VA = "0x4541F50")]
	public static string NotAllowDBNullViolationText(string columnName)
	{
		return null;
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x4534D70", Offset = "0x4534D70", VA = "0x4534D70")]
	public static Exception CantAddConstraintToMultipleNestedTable(string tableName)
	{
		return null;
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x4539D30", Offset = "0x4539D30", VA = "0x4539D30")]
	public static Exception AutoIncrementAndExpression()
	{
		return null;
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x4539DB0", Offset = "0x4539DB0", VA = "0x4539DB0")]
	public static Exception AutoIncrementAndDefaultValue()
	{
		return null;
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x4542A50", Offset = "0x4542A50", VA = "0x4542A50")]
	public static Exception AutoIncrementSeed()
	{
		return null;
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x453C4F0", Offset = "0x453C4F0", VA = "0x453C4F0")]
	public static Exception CantChangeDataType()
	{
		return null;
	}

	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x453C570", Offset = "0x453C570", VA = "0x453C570")]
	public static Exception NullDataType()
	{
		return null;
	}

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x453BB40", Offset = "0x453BB40", VA = "0x453BB40")]
	public static Exception ColumnNameRequired()
	{
		return null;
	}

	[Token(Token = "0x60001B5")]
	[Address(RVA = "0x453D330", Offset = "0x453D330", VA = "0x453D330")]
	public static Exception DefaultValueAndAutoIncrement()
	{
		return null;
	}

	[Token(Token = "0x60001B6")]
	[Address(RVA = "0x453CD50", Offset = "0x453CD50", VA = "0x453CD50")]
	public static Exception DefaultValueDataType(string column, Type defaultType, Type columnType, Exception inner)
	{
		return null;
	}

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x453D3B0", Offset = "0x453D3B0", VA = "0x453D3B0")]
	public static Exception DefaultValueColumnDataType(string column, Type defaultType, Type columnType, Exception inner)
	{
		return null;
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x453D550", Offset = "0x453D550", VA = "0x453D550")]
	public static Exception ExpressionAndUnique()
	{
		return null;
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x453D8B0", Offset = "0x453D8B0", VA = "0x453D8B0")]
	public static Exception ExpressionAndReadOnly()
	{
		return null;
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x453D5D0", Offset = "0x453D5D0", VA = "0x453D5D0")]
	public static Exception ExpressionAndConstraint(DataColumn column, Constraint constraint)
	{
		return null;
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x4549610", Offset = "0x4549610", VA = "0x4549610")]
	public static Exception ExpressionInConstraint(DataColumn column)
	{
		return null;
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x453D930", Offset = "0x453D930", VA = "0x453D930")]
	public static Exception ExpressionCircular()
	{
		return null;
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x45406C0", Offset = "0x45406C0", VA = "0x45406C0")]
	public static Exception NonUniqueValues(string column)
	{
		return null;
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x45404A0", Offset = "0x45404A0", VA = "0x45404A0")]
	public static Exception NullKeyValues(string column)
	{
		return null;
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x45405B0", Offset = "0x45405B0", VA = "0x45405B0")]
	public static Exception NullValues(string column)
	{
		return null;
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x453EDE0", Offset = "0x453EDE0", VA = "0x453EDE0")]
	public static Exception ReadOnlyAndExpression()
	{
		return null;
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x45496F0", Offset = "0x45496F0", VA = "0x45496F0")]
	public static Exception ReadOnly(string column)
	{
		return null;
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x453FB90", Offset = "0x453FB90", VA = "0x453FB90")]
	public static Exception UniqueAndExpression()
	{
		return null;
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x453F200", Offset = "0x453F200", VA = "0x453F200")]
	public static Exception SetFailed(object value, DataColumn column, Type type, Exception innerException)
	{
		return null;
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x4549800", Offset = "0x4549800", VA = "0x4549800")]
	public static Exception CannotSetToNull(DataColumn column)
	{
		return null;
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x45403C0", Offset = "0x45403C0", VA = "0x45403C0")]
	public static Exception LongerThanMaxLength(DataColumn column)
	{
		return null;
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x453E7F0", Offset = "0x453E7F0", VA = "0x453E7F0")]
	public static Exception CannotSetMaxLength(DataColumn column, int value)
	{
		return null;
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x453E1E0", Offset = "0x453E1E0", VA = "0x453E1E0")]
	public static Exception CannotSetMaxLength2(DataColumn column)
	{
		return null;
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x453CF10", Offset = "0x453CF10", VA = "0x453CF10")]
	public static Exception CannotSetSimpleContentType(string columnName, Type type)
	{
		return null;
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x453FFB0", Offset = "0x453FFB0", VA = "0x453FFB0")]
	public static Exception CannotSetSimpleContent(string columnName, Type type)
	{
		return null;
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x453EB70", Offset = "0x453EB70", VA = "0x453EB70")]
	public static Exception CannotChangeNamespace(string columnName)
	{
		return null;
	}

	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x453E2C0", Offset = "0x453E2C0", VA = "0x453E2C0")]
	public static Exception HasToBeStringType(DataColumn column)
	{
		return null;
	}

	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x453A0D0", Offset = "0x453A0D0", VA = "0x453A0D0")]
	public static Exception AutoIncrementCannotSetIfHasData(string typeName)
	{
		return null;
	}

	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x45498E0", Offset = "0x45498E0", VA = "0x45498E0")]
	public static Exception INullableUDTwithoutStaticNull(string typeName)
	{
		return null;
	}

	[Token(Token = "0x60001CE")]
	[Address(RVA = "0x45499F0", Offset = "0x45499F0", VA = "0x45499F0")]
	public static Exception IComparableNotImplemented(string typeName)
	{
		return null;
	}

	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x4549B00", Offset = "0x4549B00", VA = "0x4549B00")]
	public static Exception UDTImplementsIChangeTrackingButnotIRevertible(string typeName)
	{
		return null;
	}

	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x4549C10", Offset = "0x4549C10", VA = "0x4549C10")]
	public static Exception InvalidDataColumnMapping(Type type)
	{
		return null;
	}

	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x453D130", Offset = "0x453D130", VA = "0x453D130")]
	public static Exception CannotSetDateTimeModeForNonDateTimeColumns()
	{
		return null;
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x453D2F0", Offset = "0x453D2F0", VA = "0x453D2F0")]
	public static Exception InvalidDateTimeMode(DataSetDateTime mode)
	{
		return null;
	}

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x453D1B0", Offset = "0x453D1B0", VA = "0x453D1B0")]
	public static Exception CantChangeDateTimeMode(DataSetDateTime oldValue, DataSetDateTime newValue)
	{
		return null;
	}

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x4538720", Offset = "0x4538720", VA = "0x4538720")]
	public static Exception ColumnTypeNotSupported()
	{
		return null;
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x4549D00", Offset = "0x4549D00", VA = "0x4549D00")]
	public static Exception SetFailed(string name)
	{
		return null;
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x4549E10", Offset = "0x4549E10", VA = "0x4549E10")]
	public static Exception SetRowStateFilter()
	{
		return null;
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x4549E90", Offset = "0x4549E90", VA = "0x4549E90")]
	public static Exception CanNotUseDataViewManager()
	{
		return null;
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x4549F10", Offset = "0x4549F10", VA = "0x4549F10")]
	public static Exception CanNotSetTable()
	{
		return null;
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x4549F90", Offset = "0x4549F90", VA = "0x4549F90")]
	public static Exception CanNotUse()
	{
		return null;
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x454A010", Offset = "0x454A010", VA = "0x454A010")]
	public static Exception CanNotBindTable()
	{
		return null;
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x454A090", Offset = "0x454A090", VA = "0x454A090")]
	public static Exception SetTable()
	{
		return null;
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x454A110", Offset = "0x454A110", VA = "0x454A110")]
	public static Exception SetIListObject()
	{
		return null;
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x454A190", Offset = "0x454A190", VA = "0x454A190")]
	public static Exception AddNewNotAllowNull()
	{
		return null;
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x454A210", Offset = "0x454A210", VA = "0x454A210")]
	public static Exception NotOpen()
	{
		return null;
	}

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x454A290", Offset = "0x454A290", VA = "0x454A290")]
	public static Exception CreateChildView()
	{
		return null;
	}

	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x454A310", Offset = "0x454A310", VA = "0x454A310")]
	public static Exception CanNotDelete()
	{
		return null;
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x454A390", Offset = "0x454A390", VA = "0x454A390")]
	public static Exception GetElementIndex(int index)
	{
		return null;
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x454A4A0", Offset = "0x454A4A0", VA = "0x454A4A0")]
	public static Exception AddExternalObject()
	{
		return null;
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x454A520", Offset = "0x454A520", VA = "0x454A520")]
	public static Exception CanNotClear()
	{
		return null;
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x454A5A0", Offset = "0x454A5A0", VA = "0x454A5A0")]
	public static Exception InsertExternalObject()
	{
		return null;
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x454A620", Offset = "0x454A620", VA = "0x454A620")]
	public static Exception RemoveExternalObject()
	{
		return null;
	}

	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x454A6A0", Offset = "0x454A6A0", VA = "0x454A6A0")]
	public static Exception ColumnToSortIsOutOfRange(string column)
	{
		return null;
	}

	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x454A7B0", Offset = "0x454A7B0", VA = "0x454A7B0")]
	public static Exception KeyTableMismatch()
	{
		return null;
	}

	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x454A830", Offset = "0x454A830", VA = "0x454A830")]
	public static Exception KeyNoColumns()
	{
		return null;
	}

	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x454A8B0", Offset = "0x454A8B0", VA = "0x454A8B0")]
	public static Exception KeyTooManyColumns(int cols)
	{
		return null;
	}

	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x454A9C0", Offset = "0x454A9C0", VA = "0x454A9C0")]
	public static Exception KeyDuplicateColumns(string columnName)
	{
		return null;
	}

	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x454AAD0", Offset = "0x454AAD0", VA = "0x454AAD0")]
	public static Exception RelationDataSetMismatch()
	{
		return null;
	}

	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x453C790", Offset = "0x453C790", VA = "0x453C790")]
	public static Exception ColumnsTypeMismatch()
	{
		return null;
	}

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x454AB50", Offset = "0x454AB50", VA = "0x454AB50")]
	public static Exception KeyLengthMismatch()
	{
		return null;
	}

	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x454ABD0", Offset = "0x454ABD0", VA = "0x454ABD0")]
	public static Exception KeyLengthZero()
	{
		return null;
	}

	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x454AC50", Offset = "0x454AC50", VA = "0x454AC50")]
	public static Exception ForeignRelation()
	{
		return null;
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x454ACD0", Offset = "0x454ACD0", VA = "0x454ACD0")]
	public static Exception KeyColumnsIdentical()
	{
		return null;
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x454AD50", Offset = "0x454AD50", VA = "0x454AD50")]
	public static Exception RelationForeignTable(string t1, string t2)
	{
		return null;
	}

	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x454AE70", Offset = "0x454AE70", VA = "0x454AE70")]
	public static Exception GetParentRowTableMismatch(string t1, string t2)
	{
		return null;
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x454AF90", Offset = "0x454AF90", VA = "0x454AF90")]
	public static Exception SetParentRowTableMismatch(string t1, string t2)
	{
		return null;
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x454B0B0", Offset = "0x454B0B0", VA = "0x454B0B0")]
	public static Exception RelationForeignRow()
	{
		return null;
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x454B130", Offset = "0x454B130", VA = "0x454B130")]
	public static Exception RelationNestedReadOnly()
	{
		return null;
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x454B1B0", Offset = "0x454B1B0", VA = "0x454B1B0")]
	public static Exception TableCantBeNestedInTwoTables(string tableName)
	{
		return null;
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x454B2C0", Offset = "0x454B2C0", VA = "0x454B2C0")]
	public static Exception LoopInNestedRelations(string tableName)
	{
		return null;
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x454B3D0", Offset = "0x454B3D0", VA = "0x454B3D0")]
	public static Exception RelationDoesNotExist()
	{
		return null;
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x454B450", Offset = "0x454B450", VA = "0x454B450")]
	public static Exception ParentOrChildColumnsDoNotHaveDataSet()
	{
		return null;
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x454B4D0", Offset = "0x454B4D0", VA = "0x454B4D0")]
	public static Exception InValidNestedRelation(string childTableName)
	{
		return null;
	}

	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x454B5E0", Offset = "0x454B5E0", VA = "0x454B5E0")]
	public static Exception InvalidParentNamespaceinNestedRelation(string childTableName)
	{
		return null;
	}

	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x454B6F0", Offset = "0x454B6F0", VA = "0x454B6F0")]
	public static Exception RowNotInTheDataSet()
	{
		return null;
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x454B770", Offset = "0x454B770", VA = "0x454B770")]
	public static Exception RowNotInTheTable()
	{
		return null;
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x454B7F0", Offset = "0x454B7F0", VA = "0x454B7F0")]
	public static Exception EditInRowChanging()
	{
		return null;
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x454B870", Offset = "0x454B870", VA = "0x454B870")]
	public static Exception EndEditInRowChanging()
	{
		return null;
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x454B8F0", Offset = "0x454B8F0", VA = "0x454B8F0")]
	public static Exception BeginEditInRowChanging()
	{
		return null;
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x454B970", Offset = "0x454B970", VA = "0x454B970")]
	public static Exception CancelEditInRowChanging()
	{
		return null;
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x454B9F0", Offset = "0x454B9F0", VA = "0x454B9F0")]
	public static Exception DeleteInRowDeleting()
	{
		return null;
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x454BA70", Offset = "0x454BA70", VA = "0x454BA70")]
	public static Exception ValueArrayLength()
	{
		return null;
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x454BAF0", Offset = "0x454BAF0", VA = "0x454BAF0")]
	public static Exception NoCurrentData()
	{
		return null;
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x454BB70", Offset = "0x454BB70", VA = "0x454BB70")]
	public static Exception NoOriginalData()
	{
		return null;
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x454BBF0", Offset = "0x454BBF0", VA = "0x454BBF0")]
	public static Exception NoProposedData()
	{
		return null;
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x454BC70", Offset = "0x454BC70", VA = "0x454BC70")]
	public static Exception RowRemovedFromTheTable()
	{
		return null;
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x454BCF0", Offset = "0x454BCF0", VA = "0x454BCF0")]
	public static Exception DeletedRowInaccessible()
	{
		return null;
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x454BD70", Offset = "0x454BD70", VA = "0x454BD70")]
	public static Exception RowAlreadyDeleted()
	{
		return null;
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x454BDF0", Offset = "0x454BDF0", VA = "0x454BDF0")]
	public static Exception RowEmpty()
	{
		return null;
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x454BE70", Offset = "0x454BE70", VA = "0x454BE70")]
	public static Exception InvalidRowVersion()
	{
		return null;
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x454BEF0", Offset = "0x454BEF0", VA = "0x454BEF0")]
	public static Exception RowOutOfRange(int index)
	{
		return null;
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x454C000", Offset = "0x454C000", VA = "0x454C000")]
	public static Exception RowInsertTwice(int index, string tableName)
	{
		return null;
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x454C110", Offset = "0x454C110", VA = "0x454C110")]
	public static Exception RowInsertMissing(string tableName)
	{
		return null;
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x454C220", Offset = "0x454C220", VA = "0x454C220")]
	public static Exception RowAlreadyRemoved()
	{
		return null;
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x454C2A0", Offset = "0x454C2A0", VA = "0x454C2A0")]
	public static Exception MultipleParents()
	{
		return null;
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x454C320", Offset = "0x454C320", VA = "0x454C320")]
	public static Exception InvalidRowState(DataRowState state)
	{
		return null;
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x454C360", Offset = "0x454C360", VA = "0x454C360")]
	public static Exception InvalidRowBitPattern()
	{
		return null;
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x454C3E0", Offset = "0x454C3E0", VA = "0x454C3E0")]
	internal static Exception SetDataSetNameToEmpty()
	{
		return null;
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x454C460", Offset = "0x454C460", VA = "0x454C460")]
	internal static Exception SetDataSetNameConflicting(string name)
	{
		return null;
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x454C570", Offset = "0x454C570", VA = "0x454C570")]
	public static Exception DataSetUnsupportedSchema(string ns)
	{
		return null;
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x454C680", Offset = "0x454C680", VA = "0x454C680")]
	public static Exception MergeMissingDefinition(string obj)
	{
		return null;
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x454C790", Offset = "0x454C790", VA = "0x454C790")]
	public static Exception TablesInDifferentSets()
	{
		return null;
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x454C810", Offset = "0x454C810", VA = "0x454C810")]
	public static Exception RelationAlreadyExists()
	{
		return null;
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x454C890", Offset = "0x454C890", VA = "0x454C890")]
	public static Exception RowAlreadyInOtherCollection()
	{
		return null;
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x454C910", Offset = "0x454C910", VA = "0x454C910")]
	public static Exception RowAlreadyInTheCollection()
	{
		return null;
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x454C990", Offset = "0x454C990", VA = "0x454C990")]
	public static Exception RecordStateRange()
	{
		return null;
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x454CA10", Offset = "0x454CA10", VA = "0x454CA10")]
	public static Exception IndexKeyLength(int length, int keyLength)
	{
		return null;
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x454CB60", Offset = "0x454CB60", VA = "0x454CB60")]
	public static Exception RemovePrimaryKey(DataTable table)
	{
		return null;
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x454CC70", Offset = "0x454CC70", VA = "0x454CC70")]
	public static Exception RelationAlreadyInOtherDataSet()
	{
		return null;
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x454CCF0", Offset = "0x454CCF0", VA = "0x454CCF0")]
	public static Exception RelationAlreadyInTheDataSet()
	{
		return null;
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x454CD70", Offset = "0x454CD70", VA = "0x454CD70")]
	public static Exception RelationNotInTheDataSet(string relation)
	{
		return null;
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x454CE80", Offset = "0x454CE80", VA = "0x454CE80")]
	public static Exception RelationOutOfRange(object index)
	{
		return null;
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x454CF80", Offset = "0x454CF80", VA = "0x454CF80")]
	public static Exception DuplicateRelation(string relation)
	{
		return null;
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x454D090", Offset = "0x454D090", VA = "0x454D090")]
	public static Exception RelationTableNull()
	{
		return null;
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x454D110", Offset = "0x454D110", VA = "0x454D110")]
	public static Exception RelationDataSetNull()
	{
		return null;
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x454D190", Offset = "0x454D190", VA = "0x454D190")]
	public static Exception RelationTableWasRemoved()
	{
		return null;
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x454D210", Offset = "0x454D210", VA = "0x454D210")]
	public static Exception ParentTableMismatch()
	{
		return null;
	}

	[Token(Token = "0x6000227")]
	[Address(RVA = "0x454D290", Offset = "0x454D290", VA = "0x454D290")]
	public static Exception ChildTableMismatch()
	{
		return null;
	}

	[Token(Token = "0x6000228")]
	[Address(RVA = "0x454D310", Offset = "0x454D310", VA = "0x454D310")]
	public static Exception EnforceConstraint()
	{
		return null;
	}

	[Token(Token = "0x6000229")]
	[Address(RVA = "0x454D390", Offset = "0x454D390", VA = "0x454D390")]
	public static Exception CaseLocaleMismatch()
	{
		return null;
	}

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x454D410", Offset = "0x454D410", VA = "0x454D410")]
	public static Exception CannotChangeCaseLocale()
	{
		return null;
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x454D490", Offset = "0x454D490", VA = "0x454D490")]
	public static Exception CannotChangeCaseLocale(Exception innerException)
	{
		return null;
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x454D510", Offset = "0x454D510", VA = "0x454D510")]
	public static Exception InvalidRemotingFormat(SerializationFormat mode)
	{
		return null;
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x454D550", Offset = "0x454D550", VA = "0x454D550")]
	public static Exception TableForeignPrimaryKey()
	{
		return null;
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x454D5D0", Offset = "0x454D5D0", VA = "0x454D5D0")]
	public static Exception TableCannotAddToSimpleContent()
	{
		return null;
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x454D650", Offset = "0x454D650", VA = "0x454D650")]
	public static Exception NoTableName()
	{
		return null;
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x454D6D0", Offset = "0x454D6D0", VA = "0x454D6D0")]
	public static Exception MultipleTextOnlyColumns()
	{
		return null;
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x454D750", Offset = "0x454D750", VA = "0x454D750")]
	public static Exception InvalidSortString(string sort)
	{
		return null;
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x454D860", Offset = "0x454D860", VA = "0x454D860")]
	public static Exception DuplicateTableName(string table)
	{
		return null;
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x454D970", Offset = "0x454D970", VA = "0x454D970")]
	public static Exception DuplicateTableName2(string table, string ns)
	{
		return null;
	}

	[Token(Token = "0x6000234")]
	[Address(RVA = "0x454DA90", Offset = "0x454DA90", VA = "0x454DA90")]
	public static Exception SelfnestedDatasetConflictingName(string table)
	{
		return null;
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x454DBA0", Offset = "0x454DBA0", VA = "0x454DBA0")]
	public static Exception DatasetConflictingName(string table)
	{
		return null;
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x454DCB0", Offset = "0x454DCB0", VA = "0x454DCB0")]
	public static Exception TableAlreadyInOtherDataSet()
	{
		return null;
	}

	[Token(Token = "0x6000237")]
	[Address(RVA = "0x454DD30", Offset = "0x454DD30", VA = "0x454DD30")]
	public static Exception TableAlreadyInTheDataSet()
	{
		return null;
	}

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x454DDB0", Offset = "0x454DDB0", VA = "0x454DDB0")]
	public static Exception TableOutOfRange(int index)
	{
		return null;
	}

	[Token(Token = "0x6000239")]
	[Address(RVA = "0x454DEC0", Offset = "0x454DEC0", VA = "0x454DEC0")]
	public static Exception TableNotInTheDataSet(string table)
	{
		return null;
	}

	[Token(Token = "0x600023A")]
	[Address(RVA = "0x454DFD0", Offset = "0x454DFD0", VA = "0x454DFD0")]
	public static Exception TableInRelation()
	{
		return null;
	}

	[Token(Token = "0x600023B")]
	[Address(RVA = "0x454E050", Offset = "0x454E050", VA = "0x454E050")]
	public static Exception TableInConstraint(DataTable table, Constraint constraint)
	{
		return null;
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x454E150", Offset = "0x454E150", VA = "0x454E150")]
	public static Exception CanNotSerializeDataTableHierarchy()
	{
		return null;
	}

	[Token(Token = "0x600023D")]
	[Address(RVA = "0x454E1D0", Offset = "0x454E1D0", VA = "0x454E1D0")]
	public static Exception CanNotRemoteDataTable()
	{
		return null;
	}

	[Token(Token = "0x600023E")]
	[Address(RVA = "0x454E250", Offset = "0x454E250", VA = "0x454E250")]
	public static Exception CanNotSetRemotingFormat()
	{
		return null;
	}

	[Token(Token = "0x600023F")]
	[Address(RVA = "0x454E2D0", Offset = "0x454E2D0", VA = "0x454E2D0")]
	public static Exception CanNotSerializeDataTableWithEmptyName()
	{
		return null;
	}

	[Token(Token = "0x6000240")]
	[Address(RVA = "0x454E350", Offset = "0x454E350", VA = "0x454E350")]
	public static Exception TableNotFound(string tableName)
	{
		return null;
	}

	[Token(Token = "0x6000241")]
	[Address(RVA = "0x454E460", Offset = "0x454E460", VA = "0x454E460")]
	public static Exception AggregateException(AggregateType aggregateType, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000242")]
	[Address(RVA = "0x454E5A0", Offset = "0x454E5A0", VA = "0x454E5A0")]
	public static Exception InvalidStorageType(TypeCode typecode)
	{
		return null;
	}

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x454E6B0", Offset = "0x454E6B0", VA = "0x454E6B0")]
	public static Exception RangeArgument(int min, int max)
	{
		return null;
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x454E7E0", Offset = "0x454E7E0", VA = "0x454E7E0")]
	public static Exception NullRange()
	{
		return null;
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x454E860", Offset = "0x454E860", VA = "0x454E860")]
	public static Exception NegativeMinimumCapacity()
	{
		return null;
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x454E8E0", Offset = "0x454E8E0", VA = "0x454E8E0")]
	public static Exception ProblematicChars(char charValue)
	{
		return null;
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x454EA20", Offset = "0x454EA20", VA = "0x454EA20")]
	public static Exception StorageSetFailed()
	{
		return null;
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x454EAA0", Offset = "0x454EAA0", VA = "0x454EAA0")]
	public static Exception SimpleTypeNotSupported()
	{
		return null;
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x454EB20", Offset = "0x454EB20", VA = "0x454EB20")]
	public static Exception MissingAttribute(string attribute)
	{
		return null;
	}

	[Token(Token = "0x600024A")]
	[Address(RVA = "0x454EB40", Offset = "0x454EB40", VA = "0x454EB40")]
	public static Exception MissingAttribute(string element, string attribute)
	{
		return null;
	}

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x454EC60", Offset = "0x454EC60", VA = "0x454EC60")]
	public static Exception InvalidAttributeValue(string name, string value)
	{
		return null;
	}

	[Token(Token = "0x600024C")]
	[Address(RVA = "0x454ED80", Offset = "0x454ED80", VA = "0x454ED80")]
	public static Exception AttributeValues(string name, string value1, string value2)
	{
		return null;
	}

	[Token(Token = "0x600024D")]
	[Address(RVA = "0x454EEA0", Offset = "0x454EEA0", VA = "0x454EEA0")]
	public static Exception ElementTypeNotFound(string name)
	{
		return null;
	}

	[Token(Token = "0x600024E")]
	[Address(RVA = "0x454EFB0", Offset = "0x454EFB0", VA = "0x454EFB0")]
	public static Exception RelationParentNameMissing(string rel)
	{
		return null;
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x454F0C0", Offset = "0x454F0C0", VA = "0x454F0C0")]
	public static Exception RelationChildNameMissing(string rel)
	{
		return null;
	}

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x454F1D0", Offset = "0x454F1D0", VA = "0x454F1D0")]
	public static Exception RelationTableKeyMissing(string rel)
	{
		return null;
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x454F2E0", Offset = "0x454F2E0", VA = "0x454F2E0")]
	public static Exception RelationChildKeyMissing(string rel)
	{
		return null;
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x454F3F0", Offset = "0x454F3F0", VA = "0x454F3F0")]
	public static Exception UndefinedDatatype(string name)
	{
		return null;
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x454F500", Offset = "0x454F500", VA = "0x454F500")]
	public static Exception DatatypeNotDefined()
	{
		return null;
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x454F580", Offset = "0x454F580", VA = "0x454F580")]
	public static Exception MismatchKeyLength()
	{
		return null;
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x454F600", Offset = "0x454F600", VA = "0x454F600")]
	public static Exception InvalidField(string name)
	{
		return null;
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x454F710", Offset = "0x454F710", VA = "0x454F710")]
	public static Exception InvalidSelector(string name)
	{
		return null;
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x454F820", Offset = "0x454F820", VA = "0x454F820")]
	public static Exception CircularComplexType(string name)
	{
		return null;
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x454F930", Offset = "0x454F930", VA = "0x454F930")]
	public static Exception CannotInstantiateAbstract(string name)
	{
		return null;
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x454FA40", Offset = "0x454FA40", VA = "0x454FA40")]
	public static Exception InvalidKey(string name)
	{
		return null;
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x454FB50", Offset = "0x454FB50", VA = "0x454FB50")]
	public static Exception DiffgramMissingTable(string name)
	{
		return null;
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x454FC60", Offset = "0x454FC60", VA = "0x454FC60")]
	public static Exception DiffgramMissingSQL()
	{
		return null;
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x454FCE0", Offset = "0x454FCE0", VA = "0x454FCE0")]
	public static Exception DuplicateConstraintRead(string str)
	{
		return null;
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x454FDF0", Offset = "0x454FDF0", VA = "0x454FDF0")]
	public static Exception ColumnTypeConflict(string name)
	{
		return null;
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x454FF00", Offset = "0x454FF00", VA = "0x454FF00")]
	public static Exception CannotConvert(string name, string type)
	{
		return null;
	}

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x4550020", Offset = "0x4550020", VA = "0x4550020")]
	public static Exception MissingRefer(string name)
	{
		return null;
	}

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x453C230", Offset = "0x453C230", VA = "0x453C230")]
	public static Exception InvalidPrefix(string name)
	{
		return null;
	}

	[Token(Token = "0x6000261")]
	[Address(RVA = "0x4550130", Offset = "0x4550130", VA = "0x4550130")]
	public static Exception CanNotDeserializeObjectType()
	{
		return null;
	}

	[Token(Token = "0x6000262")]
	[Address(RVA = "0x45501B0", Offset = "0x45501B0", VA = "0x45501B0")]
	public static Exception IsDataSetAttributeMissingInSchema()
	{
		return null;
	}

	[Token(Token = "0x6000263")]
	[Address(RVA = "0x4550230", Offset = "0x4550230", VA = "0x4550230")]
	public static Exception TooManyIsDataSetAtributeInSchema()
	{
		return null;
	}

	[Token(Token = "0x6000264")]
	[Address(RVA = "0x45502B0", Offset = "0x45502B0", VA = "0x45502B0")]
	public static Exception NestedCircular(string name)
	{
		return null;
	}

	[Token(Token = "0x6000265")]
	[Address(RVA = "0x45503C0", Offset = "0x45503C0", VA = "0x45503C0")]
	public static Exception MultipleParentRows(string tableQName)
	{
		return null;
	}

	[Token(Token = "0x6000266")]
	[Address(RVA = "0x45504D0", Offset = "0x45504D0", VA = "0x45504D0")]
	public static Exception PolymorphismNotSupported(string typeName)
	{
		return null;
	}

	[Token(Token = "0x6000267")]
	[Address(RVA = "0x45505E0", Offset = "0x45505E0", VA = "0x45505E0")]
	public static Exception DataTableInferenceNotSupported()
	{
		return null;
	}

	[Token(Token = "0x6000268")]
	[Address(RVA = "0x4550660", Offset = "0x4550660", VA = "0x4550660")]
	internal static void ThrowMultipleTargetConverter(Exception innerException)
	{
	}

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x45506C0", Offset = "0x45506C0", VA = "0x45506C0")]
	public static Exception DuplicateDeclaration(string name)
	{
		return null;
	}

	[Token(Token = "0x600026A")]
	[Address(RVA = "0x45507D0", Offset = "0x45507D0", VA = "0x45507D0")]
	public static Exception FoundEntity()
	{
		return null;
	}

	[Token(Token = "0x600026B")]
	[Address(RVA = "0x4550850", Offset = "0x4550850", VA = "0x4550850")]
	public static Exception MergeFailed(string name)
	{
		return null;
	}

	[Token(Token = "0x600026C")]
	[Address(RVA = "0x45508B0", Offset = "0x45508B0", VA = "0x45508B0")]
	public static Exception ConvertFailed(Type type1, Type type2)
	{
		return null;
	}

	[Token(Token = "0x600026D")]
	[Address(RVA = "0x45509D0", Offset = "0x45509D0", VA = "0x45509D0")]
	internal static Exception InvalidDuplicateNamedSimpleTypeDelaration(string stName, string errorStr)
	{
		return null;
	}

	[Token(Token = "0x600026E")]
	[Address(RVA = "0x4550AE0", Offset = "0x4550AE0", VA = "0x4550AE0")]
	internal static Exception InternalRBTreeError(RBTreeError internalError)
	{
		return null;
	}

	[Token(Token = "0x600026F")]
	[Address(RVA = "0x4550BD0", Offset = "0x4550BD0", VA = "0x4550BD0")]
	public static Exception EnumeratorModified()
	{
		return null;
	}
}
