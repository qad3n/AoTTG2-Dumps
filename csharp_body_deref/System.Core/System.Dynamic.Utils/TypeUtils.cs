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

	[Token(Token = "0x6000CAD")]
	[Address(RVA = "0x45130C0", Offset = "0x45130C0", VA = "0x45130C0")]
	public static Type GetNonNullableType(this Type type)
	{
		return null;
	}

	[Token(Token = "0x6000CAE")]
	[Address(RVA = "0x4513210", Offset = "0x4513210", VA = "0x4513210")]
	public static Type GetNullableType(this Type type)
	{
		return null;
	}

	[Token(Token = "0x6000CAF")]
	[Address(RVA = "0x4513160", Offset = "0x4513160", VA = "0x4513160")]
	public static bool IsNullableType(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CB0")]
	[Address(RVA = "0x4513360", Offset = "0x4513360", VA = "0x4513360")]
	public static bool IsNullableOrReferenceType(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CB1")]
	[Address(RVA = "0x45133D0", Offset = "0x45133D0", VA = "0x45133D0")]
	public static bool IsBool(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CB2")]
	[Address(RVA = "0x4513460", Offset = "0x4513460", VA = "0x4513460")]
	public static bool IsNumeric(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CB3")]
	[Address(RVA = "0x4513580", Offset = "0x4513580", VA = "0x4513580")]
	public static bool IsInteger(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CB4")]
	[Address(RVA = "0x45136A0", Offset = "0x45136A0", VA = "0x45136A0")]
	public static bool IsArithmetic(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CB5")]
	[Address(RVA = "0x45137C0", Offset = "0x45137C0", VA = "0x45137C0")]
	public static bool IsUnsignedInt(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CB6")]
	[Address(RVA = "0x45138E0", Offset = "0x45138E0", VA = "0x45138E0")]
	public static bool IsIntegerOrBool(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CB7")]
	[Address(RVA = "0x4513A10", Offset = "0x4513A10", VA = "0x4513A10")]
	public static bool IsNumericOrBool(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CB8")]
	[Address(RVA = "0x4513AA0", Offset = "0x4513AA0", VA = "0x4513AA0")]
	public static bool IsValidInstanceType(MemberInfo member, Type instanceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CB9")]
	[Address(RVA = "0x4514010", Offset = "0x4514010", VA = "0x4514010")]
	public static bool HasIdentityPrimitiveOrNullableConversionTo(this Type source, Type dest)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CBA")]
	[Address(RVA = "0x4514490", Offset = "0x4514490", VA = "0x4514490")]
	public static bool HasReferenceConversionTo(this Type source, Type dest)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CBB")]
	[Address(RVA = "0x4514B40", Offset = "0x4514B40", VA = "0x4514B40")]
	private static bool StrictHasReferenceConversionTo(this Type source, Type dest, bool skipNonArray)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CBC")]
	[Address(RVA = "0x4514E50", Offset = "0x4514E50", VA = "0x4514E50")]
	private static bool HasArrayToInterfaceConversion(Type source, Type dest)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CBD")]
	[Address(RVA = "0x4515100", Offset = "0x4515100", VA = "0x4515100")]
	private static bool HasInterfaceToArrayConversion(Type source, Type dest)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CBE")]
	[Address(RVA = "0x45153E0", Offset = "0x45153E0", VA = "0x45153E0")]
	private static bool IsCovariant(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CBF")]
	[Address(RVA = "0x4515400", Offset = "0x4515400", VA = "0x4515400")]
	private static bool IsContravariant(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC0")]
	[Address(RVA = "0x4515430", Offset = "0x4515430", VA = "0x4515430")]
	private static bool IsInvariant(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC1")]
	[Address(RVA = "0x4515460", Offset = "0x4515460", VA = "0x4515460")]
	private static bool IsDelegate(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC2")]
	[Address(RVA = "0x4514680", Offset = "0x4514680", VA = "0x4514680")]
	public static bool IsLegalExplicitVariantDelegateConversion(Type source, Type dest)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC3")]
	[Address(RVA = "0x4514390", Offset = "0x4514390", VA = "0x4514390")]
	public static bool IsConvertible(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC4")]
	[Address(RVA = "0x45154E0", Offset = "0x45154E0", VA = "0x45154E0")]
	public static bool HasReferenceEquality(Type left, Type right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC5")]
	[Address(RVA = "0x45155C0", Offset = "0x45155C0", VA = "0x45155C0")]
	public static bool HasBuiltInEqualityOperator(Type left, Type right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC6")]
	[Address(RVA = "0x4515810", Offset = "0x4515810", VA = "0x4515810")]
	public static bool IsImplicitlyConvertibleTo(this Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC7")]
	[Address(RVA = "0x4515CE0", Offset = "0x4515CE0", VA = "0x4515CE0")]
	public static MethodInfo GetUserDefinedCoercionMethod(Type convertFrom, Type convertToType)
	{
		return null;
	}

	[Token(Token = "0x6000CC8")]
	[Address(RVA = "0x4515FC0", Offset = "0x4515FC0", VA = "0x4515FC0")]
	private static MethodInfo FindConversionOperator(MethodInfo[] methods, Type typeFrom, Type typeTo)
	{
		return null;
	}

	[Token(Token = "0x6000CC9")]
	[Address(RVA = "0x4515990", Offset = "0x4515990", VA = "0x4515990")]
	private static bool IsImplicitNumericConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CCA")]
	[Address(RVA = "0x45153B0", Offset = "0x45153B0", VA = "0x45153B0")]
	private static bool IsImplicitReferenceConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CCB")]
	[Address(RVA = "0x4515B10", Offset = "0x4515B10", VA = "0x4515B10")]
	private static bool IsImplicitBoxingConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CCC")]
	[Address(RVA = "0x4515C30", Offset = "0x4515C30", VA = "0x4515C30")]
	private static bool IsImplicitNullableConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CCD")]
	[Address(RVA = "0x4516260", Offset = "0x4516260", VA = "0x4516260")]
	public static Type FindGenericType(Type definition, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000CCE")]
	[Address(RVA = "0x45167F0", Offset = "0x45167F0", VA = "0x45167F0")]
	public static MethodInfo GetBooleanOperator(Type type, string name)
	{
		return null;
	}

	[Token(Token = "0x6000CCF")]
	[Address(RVA = "0x4516A10", Offset = "0x4516A10", VA = "0x4516A10")]
	public static Type GetNonRefType(this Type type)
	{
		return null;
	}

	[Token(Token = "0x6000CD0")]
	[Address(RVA = "0x450FDE0", Offset = "0x450FDE0", VA = "0x450FDE0")]
	public static bool AreEquivalent(Type t1, Type t2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CD1")]
	[Address(RVA = "0x4511E50", Offset = "0x4511E50", VA = "0x4511E50")]
	public static bool AreReferenceAssignable(Type dest, Type src)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CD2")]
	[Address(RVA = "0x4512080", Offset = "0x4512080", VA = "0x4512080")]
	public static bool IsSameOrSubclass(Type type, Type subType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CD3")]
	[Address(RVA = "0x4516A50", Offset = "0x4516A50", VA = "0x4516A50")]
	public static void ValidateType(Type type, string paramName)
	{
	}

	[Token(Token = "0x6000CD4")]
	[Address(RVA = "0x4511D80", Offset = "0x4511D80", VA = "0x4511D80")]
	public static void ValidateType(Type type, string paramName, bool allowByRef, bool allowPointer)
	{
	}

	[Token(Token = "0x6000CD5")]
	[Address(RVA = "0x4516AB0", Offset = "0x4516AB0", VA = "0x4516AB0")]
	public static bool ValidateType(Type type, string paramName, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CD6")]
	[Address(RVA = "0x4516B80", Offset = "0x4516B80", VA = "0x4516B80")]
	public static MethodInfo GetInvokeMethod(this Type delegateType)
	{
		return null;
	}
}
