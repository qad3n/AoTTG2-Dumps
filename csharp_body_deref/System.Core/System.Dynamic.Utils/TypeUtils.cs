// ==================== AoTTG2 cross-reference ====================
// Type: System.Dynamic.Utils.TypeUtils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace System.Dynamic.Utils;

[Token(Token = "0x2000285")]
internal static class TypeUtils
{
	[Token(Token = "0x40004A0")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type[] s_arrayAssignableInterfaces;

	[Token(Token = "0x6000CAC")]
	[Address(RVA = "0x248A370", Offset = "0x2488970", VA = "0x18248A370")]
	public static Type GetNonNullableType(this Type type)
	{
		return null;
	}

	[Token(Token = "0x6000CAD")]
	[Address(RVA = "0x248A4E0", Offset = "0x2488AE0", VA = "0x18248A4E0")]
	public static Type GetNullableType(this Type type)
	{
		return null;
	}

	[Token(Token = "0x6000CAE")]
	[Address(RVA = "0x248C760", Offset = "0x248AD60", VA = "0x18248C760")]
	public static bool IsNullableType(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CAF")]
	[Address(RVA = "0x248C6F0", Offset = "0x248ACF0", VA = "0x18248C6F0")]
	public static bool IsNullableOrReferenceType(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CB0")]
	[Address(RVA = "0x248B5F0", Offset = "0x2489BF0", VA = "0x18248B5F0")]
	public static bool IsBool(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CB1")]
	[Address(RVA = "0x248C900", Offset = "0x248AF00", VA = "0x18248C900")]
	public static bool IsNumeric(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CB2")]
	[Address(RVA = "0x248C200", Offset = "0x248A800", VA = "0x18248C200")]
	public static bool IsInteger(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CB3")]
	[Address(RVA = "0x248B520", Offset = "0x2489B20", VA = "0x18248B520")]
	public static bool IsArithmetic(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CB4")]
	[Address(RVA = "0x248CA90", Offset = "0x248B090", VA = "0x18248CA90")]
	public static bool IsUnsignedInt(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CB5")]
	[Address(RVA = "0x248C130", Offset = "0x248A730", VA = "0x18248C130")]
	public static bool IsIntegerOrBool(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CB6")]
	[Address(RVA = "0x248C810", Offset = "0x248AE10", VA = "0x18248C810")]
	public static bool IsNumericOrBool(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CB7")]
	[Address(RVA = "0x248CB70", Offset = "0x248B170", VA = "0x18248CB70")]
	public static bool IsValidInstanceType(MemberInfo member, Type instanceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CB8")]
	[Address(RVA = "0x248AD10", Offset = "0x2489310", VA = "0x18248AD10")]
	public static bool HasIdentityPrimitiveOrNullableConversionTo(this Type source, Type dest)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CB9")]
	[Address(RVA = "0x248B230", Offset = "0x2489830", VA = "0x18248B230")]
	public static bool HasReferenceConversionTo(this Type source, Type dest)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CBA")]
	[Address(RVA = "0x248D050", Offset = "0x248B650", VA = "0x18248D050")]
	private static bool StrictHasReferenceConversionTo(this Type source, Type dest, bool skipNonArray)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CBB")]
	[Address(RVA = "0x248A8E0", Offset = "0x2488EE0", VA = "0x18248A8E0")]
	private static bool HasArrayToInterfaceConversion(Type source, Type dest)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CBC")]
	[Address(RVA = "0x248B020", Offset = "0x2489620", VA = "0x18248B020")]
	private static bool HasInterfaceToArrayConversion(Type source, Type dest)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CBD")]
	[Address(RVA = "0x248B780", Offset = "0x2489D80", VA = "0x18248B780")]
	private static bool IsCovariant(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CBE")]
	[Address(RVA = "0x248B680", Offset = "0x2489C80", VA = "0x18248B680")]
	private static bool IsContravariant(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CBF")]
	[Address(RVA = "0x248C2D0", Offset = "0x248A8D0", VA = "0x18248C2D0")]
	private static bool IsInvariant(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC0")]
	[Address(RVA = "0x248B7B0", Offset = "0x2489DB0", VA = "0x18248B7B0")]
	private static bool IsDelegate(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC1")]
	[Address(RVA = "0x248C300", Offset = "0x248A900", VA = "0x18248C300")]
	public static bool IsLegalExplicitVariantDelegateConversion(Type source, Type dest)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC2")]
	[Address(RVA = "0x248B6B0", Offset = "0x2489CB0", VA = "0x18248B6B0")]
	public static bool IsConvertible(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC3")]
	[Address(RVA = "0x248B430", Offset = "0x2489A30", VA = "0x18248B430")]
	public static bool HasReferenceEquality(Type left, Type right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC4")]
	[Address(RVA = "0x248AAF0", Offset = "0x24890F0", VA = "0x18248AAF0")]
	public static bool HasBuiltInEqualityOperator(Type left, Type right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC5")]
	[Address(RVA = "0x248BC90", Offset = "0x248A290", VA = "0x18248BC90")]
	public static bool IsImplicitlyConvertibleTo(this Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC6")]
	[Address(RVA = "0x248A630", Offset = "0x2488C30", VA = "0x18248A630")]
	public static MethodInfo GetUserDefinedCoercionMethod(Type convertFrom, Type convertToType)
	{
		return null;
	}

	[Token(Token = "0x6000CC7")]
	[Address(RVA = "0x2489BC0", Offset = "0x24881C0", VA = "0x182489BC0")]
	private static MethodInfo FindConversionOperator(MethodInfo[] methods, Type typeFrom, Type typeTo)
	{
		return null;
	}

	[Token(Token = "0x6000CC8")]
	[Address(RVA = "0x248BAA0", Offset = "0x248A0A0", VA = "0x18248BAA0")]
	private static bool IsImplicitNumericConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC9")]
	[Address(RVA = "0x248BC60", Offset = "0x248A260", VA = "0x18248BC60")]
	private static bool IsImplicitReferenceConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CCA")]
	[Address(RVA = "0x248B830", Offset = "0x2489E30", VA = "0x18248B830")]
	private static bool IsImplicitBoxingConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CCB")]
	[Address(RVA = "0x248B960", Offset = "0x2489F60", VA = "0x18248B960")]
	private static bool IsImplicitNullableConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CCC")]
	[Address(RVA = "0x2489E10", Offset = "0x2488410", VA = "0x182489E10")]
	public static Type FindGenericType(Type definition, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000CCD")]
	[Address(RVA = "0x248A140", Offset = "0x2488740", VA = "0x18248A140")]
	public static MethodInfo GetBooleanOperator(Type type, string name)
	{
		return null;
	}

	[Token(Token = "0x6000CCE")]
	[Address(RVA = "0x248A490", Offset = "0x2488A90", VA = "0x18248A490")]
	public static Type GetNonRefType(this Type type)
	{
		return null;
	}

	[Token(Token = "0x6000CCF")]
	[Address(RVA = "0x2489A60", Offset = "0x2488060", VA = "0x182489A60")]
	public static bool AreEquivalent(Type t1, Type t2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CD0")]
	[Address(RVA = "0x2489AD0", Offset = "0x24880D0", VA = "0x182489AD0")]
	public static bool AreReferenceAssignable(Type dest, Type src)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CD1")]
	[Address(RVA = "0x248C9D0", Offset = "0x248AFD0", VA = "0x18248C9D0")]
	public static bool IsSameOrSubclass(Type type, Type subType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CD2")]
	[Address(RVA = "0x248D4E0", Offset = "0x248BAE0", VA = "0x18248D4E0")]
	public static void ValidateType(Type type, string paramName)
	{
	}

	[Token(Token = "0x6000CD3")]
	[Address(RVA = "0x248D360", Offset = "0x248B960", VA = "0x18248D360")]
	public static void ValidateType(Type type, string paramName, bool allowByRef, bool allowPointer)
	{
	}

	[Token(Token = "0x6000CD4")]
	[Address(RVA = "0x248D550", Offset = "0x248BB50", VA = "0x18248D550")]
	public static bool ValidateType(Type type, string paramName, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CD5")]
	[Address(RVA = "0x248A320", Offset = "0x2488920", VA = "0x18248A320")]
	public static MethodInfo GetInvokeMethod(this Type delegateType)
	{
		return null;
	}
}
