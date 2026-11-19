// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.ConversionUtility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20000E3")]
public static class ConversionUtility
{
	[Token(Token = "0x20000E4")]
	public enum ConversionType
	{
		[Token(Token = "0x4000168")]
		Impossible,
		[Token(Token = "0x4000169")]
		Identity,
		[Token(Token = "0x400016A")]
		Upcast,
		[Token(Token = "0x400016B")]
		Downcast,
		[Token(Token = "0x400016C")]
		NumericImplicit,
		[Token(Token = "0x400016D")]
		NumericExplicit,
		[Token(Token = "0x400016E")]
		UserDefinedImplicit,
		[Token(Token = "0x400016F")]
		UserDefinedExplicit,
		[Token(Token = "0x4000170")]
		UserDefinedThenNumericImplicit,
		[Token(Token = "0x4000171")]
		UserDefinedThenNumericExplicit,
		[Token(Token = "0x4000172")]
		UnityHierarchy,
		[Token(Token = "0x4000173")]
		EnumerableToArray,
		[Token(Token = "0x4000174")]
		EnumerableToList,
		[Token(Token = "0x4000175")]
		ToString
	}

	[Token(Token = "0x20000E5")]
	private struct ConversionQuery : IEquatable<ConversionQuery>
	{
		[Token(Token = "0x4000176")]
		[FieldOffset(Offset = "0x0")]
		public readonly Type source;

		[Token(Token = "0x4000177")]
		[FieldOffset(Offset = "0x8")]
		public readonly Type destination;

		[Token(Token = "0x6000596")]
		[Address(RVA = "0x67AC640", Offset = "0x67AB640", VA = "0x67AC640")]
		public ConversionQuery(Type source, Type destination)
		{
		}

		[Token(Token = "0x6000597")]
		[Address(RVA = "0x67B0040", Offset = "0x67AF040", VA = "0x67B0040", Slot = "4")]
		public bool Equals(ConversionQuery other)
		{
			return default(bool);
		}

		[Token(Token = "0x6000598")]
		[Address(RVA = "0x67B00C0", Offset = "0x67AF0C0", VA = "0x67B00C0", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6000599")]
		[Address(RVA = "0x67B0180", Offset = "0x67AF180", VA = "0x67B0180", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}
	}

	[Token(Token = "0x20000E6")]
	private struct ConversionQueryComparer : IEqualityComparer<ConversionQuery>
	{
		[Token(Token = "0x600059A")]
		[Address(RVA = "0x67B01C0", Offset = "0x67AF1C0", VA = "0x67B01C0", Slot = "4")]
		public bool Equals(ConversionQuery x, ConversionQuery y)
		{
			return default(bool);
		}

		[Token(Token = "0x600059B")]
		[Address(RVA = "0x67B0240", Offset = "0x67AF240", VA = "0x67B0240", Slot = "5")]
		public int GetHashCode(ConversionQuery obj)
		{
			return default(int);
		}
	}

	[Token(Token = "0x4000162")]
	private const BindingFlags UserDefinedBindingFlags = BindingFlags.Static | BindingFlags.Public;

	[Token(Token = "0x4000163")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<ConversionQuery, ConversionType> conversionTypesCache;

	[Token(Token = "0x4000164")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<ConversionQuery, MethodInfo[]> userConversionMethodsCache;

	[Token(Token = "0x4000165")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Dictionary<Type, HashSet<Type>> implicitNumericConversions;

	[Token(Token = "0x4000166")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Dictionary<Type, HashSet<Type>> explicitNumericConversions;

	[Token(Token = "0x6000573")]
	[Address(RVA = "0x67ABE10", Offset = "0x67AAE10", VA = "0x67ABE10")]
	private static bool RespectsIdentity(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x67ABE50", Offset = "0x67AAE50", VA = "0x67ABE50")]
	private static bool IsUpcast(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000575")]
	[Address(RVA = "0x67ABE80", Offset = "0x67AAE80", VA = "0x67ABE80")]
	private static bool IsDowncast(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0x67ABEA0", Offset = "0x67AAEA0", VA = "0x67ABEA0")]
	private static bool ExpectsString(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000577")]
	[Address(RVA = "0x67ABEF0", Offset = "0x67AAEF0", VA = "0x67ABEF0")]
	public static bool HasImplicitNumericConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000578")]
	[Address(RVA = "0x67AC010", Offset = "0x67AB010", VA = "0x67AC010")]
	public static bool HasExplicitNumericConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000579")]
	[Address(RVA = "0x67AC130", Offset = "0x67AB130", VA = "0x67AC130")]
	public static bool HasNumericConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x600057A")]
	[Address(RVA = "0x67AC1B0", Offset = "0x67AB1B0", VA = "0x67AC1B0")]
	private static IEnumerable<MethodInfo> FindUserDefinedConversionMethods(ConversionQuery query)
	{
		return null;
	}

	[Token(Token = "0x600057B")]
	[Address(RVA = "0x67AC4A0", Offset = "0x67AB4A0", VA = "0x67AC4A0")]
	private static MethodInfo[] GetUserDefinedConversionMethods(Type source, Type destination)
	{
		return null;
	}

	[Token(Token = "0x600057C")]
	[Address(RVA = "0x67AC670", Offset = "0x67AB670", VA = "0x67AC670")]
	private static ConversionType GetUserDefinedConversionType(Type source, Type destination)
	{
		return default(ConversionType);
	}

	[Token(Token = "0x600057D")]
	[Address(RVA = "0x67ACA00", Offset = "0x67ABA00", VA = "0x67ACA00")]
	private static bool HasEnumerableToArrayConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x600057E")]
	[Address(RVA = "0x67ACB00", Offset = "0x67ABB00", VA = "0x67ACB00")]
	private static bool HasEnumerableToListConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x600057F")]
	[Address(RVA = "0x67ACC60", Offset = "0x67ABC60", VA = "0x67ACC60")]
	private static bool HasUnityHierarchyConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000580")]
	[Address(RVA = "0x67ACDF0", Offset = "0x67ABDF0", VA = "0x67ACDF0")]
	private static bool IsValidConversion(ConversionType conversionType, bool guaranteed)
	{
		return default(bool);
	}

	[Token(Token = "0x6000581")]
	[Address(RVA = "0x67ACE10", Offset = "0x67ABE10", VA = "0x67ACE10")]
	public static bool CanConvert(object value, Type type, bool guaranteed)
	{
		return default(bool);
	}

	[Token(Token = "0x6000582")]
	[Address(RVA = "0x67AD030", Offset = "0x67AC030", VA = "0x67AD030")]
	public static bool CanConvert(Type source, Type destination, bool guaranteed)
	{
		return default(bool);
	}

	[Token(Token = "0x6000583")]
	[Address(RVA = "0x67AD1E0", Offset = "0x67AC1E0", VA = "0x67AD1E0")]
	public static object Convert(object value, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000584")]
	public static T Convert<T>(object value)
	{
		return (T)null;
	}

	[Token(Token = "0x6000585")]
	[Address(RVA = "0x67AD720", Offset = "0x67AC720", VA = "0x67AD720")]
	public static bool TryConvert(object value, Type type, out object result, bool guaranteed)
	{
		return default(bool);
	}

	[Token(Token = "0x6000586")]
	public static bool TryConvert<T>(object value, out T result, bool guaranteed)
	{
		return default(bool);
	}

	[Token(Token = "0x6000587")]
	[Address(RVA = "0x67AD7E0", Offset = "0x67AC7E0", VA = "0x67AD7E0")]
	public static bool IsConvertibleTo(this Type source, Type destination, bool guaranteed)
	{
		return default(bool);
	}

	[Token(Token = "0x6000588")]
	[Address(RVA = "0x67AD8C0", Offset = "0x67AC8C0", VA = "0x67AD8C0")]
	public static bool IsConvertibleTo(this object source, Type type, bool guaranteed)
	{
		return default(bool);
	}

	[Token(Token = "0x6000589")]
	public static bool IsConvertibleTo<T>(this object source, bool guaranteed)
	{
		return default(bool);
	}

	[Token(Token = "0x600058A")]
	[Address(RVA = "0x67AD9A0", Offset = "0x67AC9A0", VA = "0x67AD9A0")]
	public static object ConvertTo(this object source, Type type)
	{
		return null;
	}

	[Token(Token = "0x600058B")]
	public static T ConvertTo<T>(this object source)
	{
		return (T)null;
	}

	[Token(Token = "0x600058C")]
	[Address(RVA = "0x67AD0A0", Offset = "0x67AC0A0", VA = "0x67AD0A0")]
	public static ConversionType GetRequiredConversion(Type source, Type destination)
	{
		return default(ConversionType);
	}

	[Token(Token = "0x600058D")]
	[Address(RVA = "0x67ADA60", Offset = "0x67ACA60", VA = "0x67ADA60")]
	private static ConversionType DetermineConversionType(ConversionQuery query)
	{
		return default(ConversionType);
	}

	[Token(Token = "0x600058E")]
	[Address(RVA = "0x67ACE80", Offset = "0x67ABE80", VA = "0x67ACE80")]
	public static ConversionType GetRequiredConversion(object value, Type type)
	{
		return default(ConversionType);
	}

	[Token(Token = "0x600058F")]
	[Address(RVA = "0x67ADDD0", Offset = "0x67ACDD0", VA = "0x67ADDD0")]
	private static object NumericConversion(object value, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000590")]
	[Address(RVA = "0x67ADE30", Offset = "0x67ACE30", VA = "0x67ADE30")]
	private static object UserDefinedConversion(ConversionType conversion, object value, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000591")]
	[Address(RVA = "0x67AE130", Offset = "0x67AD130", VA = "0x67AE130")]
	private static object EnumerableToArrayConversion(object value, Type arrayType)
	{
		return null;
	}

	[Token(Token = "0x6000592")]
	[Address(RVA = "0x67AE280", Offset = "0x67AD280", VA = "0x67AE280")]
	private static object EnumerableToListConversion(object value, Type listType)
	{
		return null;
	}

	[Token(Token = "0x6000593")]
	[Address(RVA = "0x67AE4E0", Offset = "0x67AD4E0", VA = "0x67AE4E0")]
	private static object UnityHierarchyConversion(object value, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000594")]
	[Address(RVA = "0x67AD240", Offset = "0x67AC240", VA = "0x67AD240")]
	private static object Convert(object value, Type type, ConversionType conversionType)
	{
		return null;
	}
}
