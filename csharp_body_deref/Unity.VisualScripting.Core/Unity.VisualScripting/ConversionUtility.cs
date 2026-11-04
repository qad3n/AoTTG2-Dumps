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
		[Address(RVA = "0xB5D000", Offset = "0xB5B600", VA = "0x180B5D000")]
		public ConversionQuery(Type source, Type destination)
		{
		}

		[Token(Token = "0x6000597")]
		[Address(RVA = "0x2D9DC00", Offset = "0x2D9C200", VA = "0x182D9DC00", Slot = "4")]
		public bool Equals(ConversionQuery other)
		{
			return default(bool);
		}

		[Token(Token = "0x6000598")]
		[Address(RVA = "0x2D9DC90", Offset = "0x2D9C290", VA = "0x182D9DC90", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6000599")]
		[Address(RVA = "0x2D9DD90", Offset = "0x2D9C390", VA = "0x182D9DD90", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}
	}

	[Token(Token = "0x20000E6")]
	private struct ConversionQueryComparer : IEqualityComparer<ConversionQuery>
	{
		[Token(Token = "0x600059A")]
		[Address(RVA = "0x2D9DB40", Offset = "0x2D9C140", VA = "0x182D9DB40", Slot = "4")]
		public bool Equals(ConversionQuery x, ConversionQuery y)
		{
			return default(bool);
		}

		[Token(Token = "0x600059B")]
		[Address(RVA = "0x2D9DBC0", Offset = "0x2D9C1C0", VA = "0x182D9DBC0", Slot = "5")]
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
	[Address(RVA = "0x2DA02A0", Offset = "0x2D9E8A0", VA = "0x182DA02A0")]
	private static bool RespectsIdentity(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x248BC60", Offset = "0x248A260", VA = "0x18248BC60")]
	private static bool IsUpcast(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000575")]
	[Address(RVA = "0x1D67630", Offset = "0x1D65C30", VA = "0x181D67630")]
	private static bool IsDowncast(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0x2D9EF60", Offset = "0x2D9D560", VA = "0x182D9EF60")]
	private static bool ExpectsString(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000577")]
	[Address(RVA = "0x2D9FD70", Offset = "0x2D9E370", VA = "0x182D9FD70")]
	public static bool HasImplicitNumericConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000578")]
	[Address(RVA = "0x2D9FC60", Offset = "0x2D9E260", VA = "0x182D9FC60")]
	public static bool HasExplicitNumericConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000579")]
	[Address(RVA = "0x2D9FE80", Offset = "0x2D9E480", VA = "0x182D9FE80")]
	public static bool HasNumericConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x600057A")]
	[Address(RVA = "0x2D9EFB0", Offset = "0x2D9D5B0", VA = "0x182D9EFB0")]
	private static IEnumerable<MethodInfo> FindUserDefinedConversionMethods(ConversionQuery query)
	{
		return null;
	}

	[Token(Token = "0x600057B")]
	[Address(RVA = "0x2D9F4C0", Offset = "0x2D9DAC0", VA = "0x182D9F4C0")]
	private static MethodInfo[] GetUserDefinedConversionMethods(Type source, Type destination)
	{
		return null;
	}

	[Token(Token = "0x600057C")]
	[Address(RVA = "0x2D9F680", Offset = "0x2D9DC80", VA = "0x182D9F680")]
	private static ConversionType GetUserDefinedConversionType(Type source, Type destination)
	{
		return default(ConversionType);
	}

	[Token(Token = "0x600057D")]
	[Address(RVA = "0x2D9F9F0", Offset = "0x2D9DFF0", VA = "0x182D9F9F0")]
	private static bool HasEnumerableToArrayConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x600057E")]
	[Address(RVA = "0x2D9FB00", Offset = "0x2D9E100", VA = "0x182D9FB00")]
	private static bool HasEnumerableToListConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x600057F")]
	[Address(RVA = "0x2D9FF10", Offset = "0x2D9E510", VA = "0x182D9FF10")]
	private static bool HasUnityHierarchyConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000580")]
	[Address(RVA = "0x2DA0220", Offset = "0x2D9E820", VA = "0x182DA0220")]
	private static bool IsValidConversion(ConversionType conversionType, bool guaranteed)
	{
		return default(bool);
	}

	[Token(Token = "0x6000581")]
	[Address(RVA = "0x2D9DE60", Offset = "0x2D9C460", VA = "0x182D9DE60")]
	public static bool CanConvert(object value, Type type, bool guaranteed)
	{
		return default(bool);
	}

	[Token(Token = "0x6000582")]
	[Address(RVA = "0x2D9DDD0", Offset = "0x2D9C3D0", VA = "0x182D9DDD0")]
	public static bool CanConvert(Type source, Type destination, bool guaranteed)
	{
		return default(bool);
	}

	[Token(Token = "0x6000583")]
	[Address(RVA = "0x2D9DF90", Offset = "0x2D9C590", VA = "0x182D9DF90")]
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
	[Address(RVA = "0x2DA02E0", Offset = "0x2D9E8E0", VA = "0x182DA02E0")]
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
	[Address(RVA = "0x2DA0160", Offset = "0x2D9E760", VA = "0x182DA0160")]
	public static bool IsConvertibleTo(this Type source, Type destination, bool guaranteed)
	{
		return default(bool);
	}

	[Token(Token = "0x6000588")]
	[Address(RVA = "0x2DA00A0", Offset = "0x2D9E6A0", VA = "0x182DA00A0")]
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
	[Address(RVA = "0x2D9DEF0", Offset = "0x2D9C4F0", VA = "0x182D9DEF0")]
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
	[Address(RVA = "0x2D9F360", Offset = "0x2D9D960", VA = "0x182D9F360")]
	public static ConversionType GetRequiredConversion(Type source, Type destination)
	{
		return default(ConversionType);
	}

	[Token(Token = "0x600058D")]
	[Address(RVA = "0x2D9E520", Offset = "0x2D9CB20", VA = "0x182D9E520")]
	private static ConversionType DetermineConversionType(ConversionQuery query)
	{
		return default(ConversionType);
	}

	[Token(Token = "0x600058E")]
	[Address(RVA = "0x2D9F290", Offset = "0x2D9D890", VA = "0x182D9F290")]
	public static ConversionType GetRequiredConversion(object value, Type type)
	{
		return default(ConversionType);
	}

	[Token(Token = "0x600058F")]
	[Address(RVA = "0x2DA0240", Offset = "0x2D9E840", VA = "0x182DA0240")]
	private static object NumericConversion(object value, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000590")]
	[Address(RVA = "0x2DA0650", Offset = "0x2D9EC50", VA = "0x182DA0650")]
	private static object UserDefinedConversion(ConversionType conversion, object value, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000591")]
	[Address(RVA = "0x2D9EB90", Offset = "0x2D9D190", VA = "0x182D9EB90")]
	private static object EnumerableToArrayConversion(object value, Type arrayType)
	{
		return null;
	}

	[Token(Token = "0x6000592")]
	[Address(RVA = "0x2D9ED00", Offset = "0x2D9D300", VA = "0x182D9ED00")]
	private static object EnumerableToListConversion(object value, Type listType)
	{
		return null;
	}

	[Token(Token = "0x6000593")]
	[Address(RVA = "0x2DA03B0", Offset = "0x2D9E9B0", VA = "0x182DA03B0")]
	private static object UnityHierarchyConversion(object value, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000594")]
	[Address(RVA = "0x2D9E000", Offset = "0x2D9C600", VA = "0x182D9E000")]
	private static object Convert(object value, Type type, ConversionType conversionType)
	{
		return null;
	}
}
