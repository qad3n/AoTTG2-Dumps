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

[Token(Token = "0x2000286")]
internal static class TypeUtils
{
	[Token(Token = "0x40004A9")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type[] s_arrayAssignableInterfaces;

	[Token(Token = "0x6000CB7")]
	[Address(RVA = "0x5E27C80", Offset = "0x5E26C80", VA = "0x5E27C80")]
	public static Type GetNonNullableType(this Type type)
	{
		return null;
	}

	[Token(Token = "0x6000CB8")]
	[Address(RVA = "0x5E27DD0", Offset = "0x5E26DD0", VA = "0x5E27DD0")]
	public static Type GetNullableType(this Type type)
	{
		return null;
	}

	[Token(Token = "0x6000CB9")]
	[Address(RVA = "0x5E27D20", Offset = "0x5E26D20", VA = "0x5E27D20")]
	public static bool IsNullableType(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CBA")]
	[Address(RVA = "0x5E27F20", Offset = "0x5E26F20", VA = "0x5E27F20")]
	public static bool IsNullableOrReferenceType(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CBB")]
	[Address(RVA = "0x5E27F90", Offset = "0x5E26F90", VA = "0x5E27F90")]
	public static bool IsBool(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CBC")]
	[Address(RVA = "0x5E28020", Offset = "0x5E27020", VA = "0x5E28020")]
	public static bool IsNumeric(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CBD")]
	[Address(RVA = "0x5E28140", Offset = "0x5E27140", VA = "0x5E28140")]
	public static bool IsInteger(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CBE")]
	[Address(RVA = "0x5E28260", Offset = "0x5E27260", VA = "0x5E28260")]
	public static bool IsArithmetic(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CBF")]
	[Address(RVA = "0x5E28380", Offset = "0x5E27380", VA = "0x5E28380")]
	public static bool IsUnsignedInt(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC0")]
	[Address(RVA = "0x5E284A0", Offset = "0x5E274A0", VA = "0x5E284A0")]
	public static bool IsIntegerOrBool(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC1")]
	[Address(RVA = "0x5E285C0", Offset = "0x5E275C0", VA = "0x5E285C0")]
	public static bool IsNumericOrBool(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC2")]
	[Address(RVA = "0x5E28650", Offset = "0x5E27650", VA = "0x5E28650")]
	public static bool IsValidInstanceType(MemberInfo member, Type instanceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC3")]
	[Address(RVA = "0x5E28A80", Offset = "0x5E27A80", VA = "0x5E28A80")]
	public static bool HasIdentityPrimitiveOrNullableConversionTo(this Type source, Type dest)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC4")]
	[Address(RVA = "0x5E28F00", Offset = "0x5E27F00", VA = "0x5E28F00")]
	public static bool HasReferenceConversionTo(this Type source, Type dest)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC5")]
	[Address(RVA = "0x5E295E0", Offset = "0x5E285E0", VA = "0x5E295E0")]
	private static bool StrictHasReferenceConversionTo(this Type source, Type dest, bool skipNonArray)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC6")]
	[Address(RVA = "0x5E298E0", Offset = "0x5E288E0", VA = "0x5E298E0")]
	private static bool HasArrayToInterfaceConversion(Type source, Type dest)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC7")]
	[Address(RVA = "0x5E29B80", Offset = "0x5E28B80", VA = "0x5E29B80")]
	private static bool HasInterfaceToArrayConversion(Type source, Type dest)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC8")]
	[Address(RVA = "0x5E29E50", Offset = "0x5E28E50", VA = "0x5E29E50")]
	private static bool IsCovariant(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC9")]
	[Address(RVA = "0x5E29E70", Offset = "0x5E28E70", VA = "0x5E29E70")]
	private static bool IsContravariant(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CCA")]
	[Address(RVA = "0x5E29EA0", Offset = "0x5E28EA0", VA = "0x5E29EA0")]
	private static bool IsInvariant(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CCB")]
	[Address(RVA = "0x5E29ED0", Offset = "0x5E28ED0", VA = "0x5E29ED0")]
	private static bool IsDelegate(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CCC")]
	[Address(RVA = "0x5E290F0", Offset = "0x5E280F0", VA = "0x5E290F0")]
	public static bool IsLegalExplicitVariantDelegateConversion(Type source, Type dest)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CCD")]
	[Address(RVA = "0x5E28DE0", Offset = "0x5E27DE0", VA = "0x5E28DE0")]
	public static bool IsConvertible(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CCE")]
	[Address(RVA = "0x5E29F50", Offset = "0x5E28F50", VA = "0x5E29F50")]
	public static bool HasReferenceEquality(Type left, Type right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CCF")]
	[Address(RVA = "0x5E2A030", Offset = "0x5E29030", VA = "0x5E2A030")]
	public static bool HasBuiltInEqualityOperator(Type left, Type right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CD0")]
	[Address(RVA = "0x5E2A270", Offset = "0x5E29270", VA = "0x5E2A270")]
	public static bool IsImplicitlyConvertibleTo(this Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CD1")]
	[Address(RVA = "0x5E2A770", Offset = "0x5E29770", VA = "0x5E2A770")]
	public static MethodInfo GetUserDefinedCoercionMethod(Type convertFrom, Type convertToType)
	{
		return null;
	}

	[Token(Token = "0x6000CD2")]
	[Address(RVA = "0x5E2AA50", Offset = "0x5E29A50", VA = "0x5E2AA50")]
	private static MethodInfo FindConversionOperator(MethodInfo[] methods, Type typeFrom, Type typeTo)
	{
		return null;
	}

	[Token(Token = "0x6000CD3")]
	[Address(RVA = "0x5E2A3F0", Offset = "0x5E293F0", VA = "0x5E2A3F0")]
	private static bool IsImplicitNumericConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CD4")]
	[Address(RVA = "0x5E29E20", Offset = "0x5E28E20", VA = "0x5E29E20")]
	private static bool IsImplicitReferenceConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CD5")]
	[Address(RVA = "0x5E2A5A0", Offset = "0x5E295A0", VA = "0x5E2A5A0")]
	private static bool IsImplicitBoxingConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CD6")]
	[Address(RVA = "0x5E2A6C0", Offset = "0x5E296C0", VA = "0x5E2A6C0")]
	private static bool IsImplicitNullableConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CD7")]
	[Address(RVA = "0x5E2ACF0", Offset = "0x5E29CF0", VA = "0x5E2ACF0")]
	public static Type FindGenericType(Type definition, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000CD8")]
	[Address(RVA = "0x5E2B200", Offset = "0x5E2A200", VA = "0x5E2B200")]
	public static MethodInfo GetBooleanOperator(Type type, string name)
	{
		return null;
	}

	[Token(Token = "0x6000CD9")]
	[Address(RVA = "0x5E2B410", Offset = "0x5E2A410", VA = "0x5E2B410")]
	public static Type GetNonRefType(this Type type)
	{
		return null;
	}

	[Token(Token = "0x6000CDA")]
	[Address(RVA = "0x5E24A30", Offset = "0x5E23A30", VA = "0x5E24A30")]
	public static bool AreEquivalent(Type t1, Type t2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CDB")]
	[Address(RVA = "0x5E26A00", Offset = "0x5E25A00", VA = "0x5E26A00")]
	public static bool AreReferenceAssignable(Type dest, Type src)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CDC")]
	[Address(RVA = "0x5E26C30", Offset = "0x5E25C30", VA = "0x5E26C30")]
	public static bool IsSameOrSubclass(Type type, Type subType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CDD")]
	[Address(RVA = "0x5E2B450", Offset = "0x5E2A450", VA = "0x5E2B450")]
	public static void ValidateType(Type type, string paramName)
	{
	}

	[Token(Token = "0x6000CDE")]
	[Address(RVA = "0x5E26930", Offset = "0x5E25930", VA = "0x5E26930")]
	public static void ValidateType(Type type, string paramName, bool allowByRef, bool allowPointer)
	{
	}

	[Token(Token = "0x6000CDF")]
	[Address(RVA = "0x5E2B4B0", Offset = "0x5E2A4B0", VA = "0x5E2B4B0")]
	public static bool ValidateType(Type type, string paramName, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CE0")]
	[Address(RVA = "0x5E2B580", Offset = "0x5E2A580", VA = "0x5E2B580")]
	public static MethodInfo GetInvokeMethod(this Type delegateType)
	{
		return null;
	}
}
