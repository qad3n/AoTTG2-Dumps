using System.Reflection;
using Il2CppDummyDll;

namespace System.Dynamic.Utils;

[Token(Token = "0x2000285")]
internal static class TypeUtils
{
	[Token(Token = "0x40004A0")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type[] s_arrayAssignableInterfaces;

	[Token(Token = "0x6000CAD")]
	[Address(RVA = "0x41EDFC0", Offset = "0x41EDFC0", VA = "0x41EDFC0")]
	public static Type GetNonNullableType(this Type type)
	{
		return null;
	}

	[Token(Token = "0x6000CAE")]
	[Address(RVA = "0x41EE110", Offset = "0x41EE110", VA = "0x41EE110")]
	public static Type GetNullableType(this Type type)
	{
		return null;
	}

	[Token(Token = "0x6000CAF")]
	[Address(RVA = "0x41EE060", Offset = "0x41EE060", VA = "0x41EE060")]
	public static bool IsNullableType(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CB0")]
	[Address(RVA = "0x41EE260", Offset = "0x41EE260", VA = "0x41EE260")]
	public static bool IsNullableOrReferenceType(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CB1")]
	[Address(RVA = "0x41EE2D0", Offset = "0x41EE2D0", VA = "0x41EE2D0")]
	public static bool IsBool(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CB2")]
	[Address(RVA = "0x41EE360", Offset = "0x41EE360", VA = "0x41EE360")]
	public static bool IsNumeric(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CB3")]
	[Address(RVA = "0x41EE480", Offset = "0x41EE480", VA = "0x41EE480")]
	public static bool IsInteger(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CB4")]
	[Address(RVA = "0x41EE5A0", Offset = "0x41EE5A0", VA = "0x41EE5A0")]
	public static bool IsArithmetic(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CB5")]
	[Address(RVA = "0x41EE6C0", Offset = "0x41EE6C0", VA = "0x41EE6C0")]
	public static bool IsUnsignedInt(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CB6")]
	[Address(RVA = "0x41EE7E0", Offset = "0x41EE7E0", VA = "0x41EE7E0")]
	public static bool IsIntegerOrBool(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CB7")]
	[Address(RVA = "0x41EE910", Offset = "0x41EE910", VA = "0x41EE910")]
	public static bool IsNumericOrBool(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CB8")]
	[Address(RVA = "0x41EE9A0", Offset = "0x41EE9A0", VA = "0x41EE9A0")]
	public static bool IsValidInstanceType(MemberInfo member, Type instanceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CB9")]
	[Address(RVA = "0x41EEF10", Offset = "0x41EEF10", VA = "0x41EEF10")]
	public static bool HasIdentityPrimitiveOrNullableConversionTo(this Type source, Type dest)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CBA")]
	[Address(RVA = "0x41EF390", Offset = "0x41EF390", VA = "0x41EF390")]
	public static bool HasReferenceConversionTo(this Type source, Type dest)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CBB")]
	[Address(RVA = "0x41EFA40", Offset = "0x41EFA40", VA = "0x41EFA40")]
	private static bool StrictHasReferenceConversionTo(this Type source, Type dest, bool skipNonArray)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CBC")]
	[Address(RVA = "0x41EFD50", Offset = "0x41EFD50", VA = "0x41EFD50")]
	private static bool HasArrayToInterfaceConversion(Type source, Type dest)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CBD")]
	[Address(RVA = "0x41F0000", Offset = "0x41F0000", VA = "0x41F0000")]
	private static bool HasInterfaceToArrayConversion(Type source, Type dest)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CBE")]
	[Address(RVA = "0x41F02E0", Offset = "0x41F02E0", VA = "0x41F02E0")]
	private static bool IsCovariant(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CBF")]
	[Address(RVA = "0x41F0300", Offset = "0x41F0300", VA = "0x41F0300")]
	private static bool IsContravariant(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC0")]
	[Address(RVA = "0x41F0330", Offset = "0x41F0330", VA = "0x41F0330")]
	private static bool IsInvariant(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC1")]
	[Address(RVA = "0x41F0360", Offset = "0x41F0360", VA = "0x41F0360")]
	private static bool IsDelegate(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC2")]
	[Address(RVA = "0x41EF580", Offset = "0x41EF580", VA = "0x41EF580")]
	public static bool IsLegalExplicitVariantDelegateConversion(Type source, Type dest)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC3")]
	[Address(RVA = "0x41EF290", Offset = "0x41EF290", VA = "0x41EF290")]
	public static bool IsConvertible(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC4")]
	[Address(RVA = "0x41F03E0", Offset = "0x41F03E0", VA = "0x41F03E0")]
	public static bool HasReferenceEquality(Type left, Type right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC5")]
	[Address(RVA = "0x41F04C0", Offset = "0x41F04C0", VA = "0x41F04C0")]
	public static bool HasBuiltInEqualityOperator(Type left, Type right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC6")]
	[Address(RVA = "0x41F0710", Offset = "0x41F0710", VA = "0x41F0710")]
	public static bool IsImplicitlyConvertibleTo(this Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC7")]
	[Address(RVA = "0x41F0BE0", Offset = "0x41F0BE0", VA = "0x41F0BE0")]
	public static MethodInfo GetUserDefinedCoercionMethod(Type convertFrom, Type convertToType)
	{
		return null;
	}

	[Token(Token = "0x6000CC8")]
	[Address(RVA = "0x41F0EC0", Offset = "0x41F0EC0", VA = "0x41F0EC0")]
	private static MethodInfo FindConversionOperator(MethodInfo[] methods, Type typeFrom, Type typeTo)
	{
		return null;
	}

	[Token(Token = "0x6000CC9")]
	[Address(RVA = "0x41F0890", Offset = "0x41F0890", VA = "0x41F0890")]
	private static bool IsImplicitNumericConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CCA")]
	[Address(RVA = "0x41F02B0", Offset = "0x41F02B0", VA = "0x41F02B0")]
	private static bool IsImplicitReferenceConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CCB")]
	[Address(RVA = "0x41F0A10", Offset = "0x41F0A10", VA = "0x41F0A10")]
	private static bool IsImplicitBoxingConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CCC")]
	[Address(RVA = "0x41F0B30", Offset = "0x41F0B30", VA = "0x41F0B30")]
	private static bool IsImplicitNullableConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CCD")]
	[Address(RVA = "0x41F1160", Offset = "0x41F1160", VA = "0x41F1160")]
	public static Type FindGenericType(Type definition, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000CCE")]
	[Address(RVA = "0x41F16F0", Offset = "0x41F16F0", VA = "0x41F16F0")]
	public static MethodInfo GetBooleanOperator(Type type, string name)
	{
		return null;
	}

	[Token(Token = "0x6000CCF")]
	[Address(RVA = "0x41F1910", Offset = "0x41F1910", VA = "0x41F1910")]
	public static Type GetNonRefType(this Type type)
	{
		return null;
	}

	[Token(Token = "0x6000CD0")]
	[Address(RVA = "0x41EACE0", Offset = "0x41EACE0", VA = "0x41EACE0")]
	public static bool AreEquivalent(Type t1, Type t2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CD1")]
	[Address(RVA = "0x41ECD50", Offset = "0x41ECD50", VA = "0x41ECD50")]
	public static bool AreReferenceAssignable(Type dest, Type src)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CD2")]
	[Address(RVA = "0x41ECF80", Offset = "0x41ECF80", VA = "0x41ECF80")]
	public static bool IsSameOrSubclass(Type type, Type subType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CD3")]
	[Address(RVA = "0x41F1950", Offset = "0x41F1950", VA = "0x41F1950")]
	public static void ValidateType(Type type, string paramName)
	{
	}

	[Token(Token = "0x6000CD4")]
	[Address(RVA = "0x41ECC80", Offset = "0x41ECC80", VA = "0x41ECC80")]
	public static void ValidateType(Type type, string paramName, bool allowByRef, bool allowPointer)
	{
	}

	[Token(Token = "0x6000CD5")]
	[Address(RVA = "0x41F19B0", Offset = "0x41F19B0", VA = "0x41F19B0")]
	public static bool ValidateType(Type type, string paramName, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CD6")]
	[Address(RVA = "0x41F1A80", Offset = "0x41F1A80", VA = "0x41F1A80")]
	public static MethodInfo GetInvokeMethod(this Type delegateType)
	{
		return null;
	}
}
