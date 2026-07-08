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
		[Token(Token = "0x400016A")]
		Impossible,
		[Token(Token = "0x400016B")]
		Identity,
		[Token(Token = "0x400016C")]
		Upcast,
		[Token(Token = "0x400016D")]
		Downcast,
		[Token(Token = "0x400016E")]
		NumericImplicit,
		[Token(Token = "0x400016F")]
		NumericExplicit,
		[Token(Token = "0x4000170")]
		UserDefinedImplicit,
		[Token(Token = "0x4000171")]
		UserDefinedExplicit,
		[Token(Token = "0x4000172")]
		UserDefinedThenNumericImplicit,
		[Token(Token = "0x4000173")]
		UserDefinedThenNumericExplicit,
		[Token(Token = "0x4000174")]
		UnityHierarchy,
		[Token(Token = "0x4000175")]
		EnumerableToArray,
		[Token(Token = "0x4000176")]
		EnumerableToList,
		[Token(Token = "0x4000177")]
		ToString
	}

	[Token(Token = "0x20000E5")]
	private struct ConversionQuery : IEquatable<ConversionQuery>
	{
		[Token(Token = "0x4000178")]
		[FieldOffset(Offset = "0x0")]
		public readonly Type source;

		[Token(Token = "0x4000179")]
		[FieldOffset(Offset = "0x8")]
		public readonly Type destination;

		[Token(Token = "0x600058C")]
		[Address(RVA = "0x4999120", Offset = "0x4999120", VA = "0x4999120")]
		public ConversionQuery(Type source, Type destination)
		{
		}

		[Token(Token = "0x600058D")]
		[Address(RVA = "0x499CBD0", Offset = "0x499CBD0", VA = "0x499CBD0", Slot = "4")]
		public bool Equals(ConversionQuery other)
		{
			return default(bool);
		}

		[Token(Token = "0x600058E")]
		[Address(RVA = "0x499CC50", Offset = "0x499CC50", VA = "0x499CC50", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x600058F")]
		[Address(RVA = "0x499CD10", Offset = "0x499CD10", VA = "0x499CD10", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}
	}

	[Token(Token = "0x20000E6")]
	private struct ConversionQueryComparer : IEqualityComparer<ConversionQuery>
	{
		[Token(Token = "0x6000590")]
		[Address(RVA = "0x499CD50", Offset = "0x499CD50", VA = "0x499CD50", Slot = "4")]
		public bool Equals(ConversionQuery x, ConversionQuery y)
		{
			return default(bool);
		}

		[Token(Token = "0x6000591")]
		[Address(RVA = "0x499CDD0", Offset = "0x499CDD0", VA = "0x499CDD0", Slot = "5")]
		public int GetHashCode(ConversionQuery obj)
		{
			return default(int);
		}
	}

	[Token(Token = "0x4000164")]
	private const BindingFlags UserDefinedBindingFlags = BindingFlags.Static | BindingFlags.Public;

	[Token(Token = "0x4000165")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<ConversionQuery, ConversionType> conversionTypesCache;

	[Token(Token = "0x4000166")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<ConversionQuery, MethodInfo[]> userConversionMethodsCache;

	[Token(Token = "0x4000167")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Dictionary<Type, HashSet<Type>> implicitNumericConversions;

	[Token(Token = "0x4000168")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Dictionary<Type, HashSet<Type>> explicitNumericConversions;

	[Token(Token = "0x6000569")]
	[Address(RVA = "0x49988E0", Offset = "0x49988E0", VA = "0x49988E0")]
	private static bool RespectsIdentity(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x4998920", Offset = "0x4998920", VA = "0x4998920")]
	private static bool IsUpcast(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x4998950", Offset = "0x4998950", VA = "0x4998950")]
	private static bool IsDowncast(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x4998970", Offset = "0x4998970", VA = "0x4998970")]
	private static bool ExpectsString(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x600056D")]
	[Address(RVA = "0x49989C0", Offset = "0x49989C0", VA = "0x49989C0")]
	public static bool HasImplicitNumericConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x600056E")]
	[Address(RVA = "0x4998AE0", Offset = "0x4998AE0", VA = "0x4998AE0")]
	public static bool HasExplicitNumericConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x600056F")]
	[Address(RVA = "0x4998C00", Offset = "0x4998C00", VA = "0x4998C00")]
	public static bool HasNumericConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000570")]
	[Address(RVA = "0x4998C80", Offset = "0x4998C80", VA = "0x4998C80")]
	private static IEnumerable<MethodInfo> FindUserDefinedConversionMethods(ConversionQuery query)
	{
		return null;
	}

	[Token(Token = "0x6000571")]
	[Address(RVA = "0x4998F80", Offset = "0x4998F80", VA = "0x4998F80")]
	private static MethodInfo[] GetUserDefinedConversionMethods(Type source, Type destination)
	{
		return null;
	}

	[Token(Token = "0x6000572")]
	[Address(RVA = "0x4999150", Offset = "0x4999150", VA = "0x4999150")]
	private static ConversionType GetUserDefinedConversionType(Type source, Type destination)
	{
		return default(ConversionType);
	}

	[Token(Token = "0x6000573")]
	[Address(RVA = "0x49994F0", Offset = "0x49994F0", VA = "0x49994F0")]
	private static bool HasEnumerableToArrayConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x49995F0", Offset = "0x49995F0", VA = "0x49995F0")]
	private static bool HasEnumerableToListConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000575")]
	[Address(RVA = "0x4999750", Offset = "0x4999750", VA = "0x4999750")]
	private static bool HasUnityHierarchyConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0x49998F0", Offset = "0x49998F0", VA = "0x49998F0")]
	private static bool IsValidConversion(ConversionType conversionType, bool guaranteed)
	{
		return default(bool);
	}

	[Token(Token = "0x6000577")]
	[Address(RVA = "0x4999910", Offset = "0x4999910", VA = "0x4999910")]
	public static bool CanConvert(object value, Type type, bool guaranteed)
	{
		return default(bool);
	}

	[Token(Token = "0x6000578")]
	[Address(RVA = "0x4999B30", Offset = "0x4999B30", VA = "0x4999B30")]
	public static bool CanConvert(Type source, Type destination, bool guaranteed)
	{
		return default(bool);
	}

	[Token(Token = "0x6000579")]
	[Address(RVA = "0x4999CE0", Offset = "0x4999CE0", VA = "0x4999CE0")]
	public static object Convert(object value, Type type)
	{
		return null;
	}

	[Token(Token = "0x600057A")]
	public static T Convert<T>(object value)
	{
		return (T)null;
	}

	[Token(Token = "0x600057B")]
	[Address(RVA = "0x499A2B0", Offset = "0x499A2B0", VA = "0x499A2B0")]
	public static bool TryConvert(object value, Type type, out object result, bool guaranteed)
	{
		return default(bool);
	}

	[Token(Token = "0x600057C")]
	public static bool TryConvert<T>(object value, out T result, bool guaranteed)
	{
		return default(bool);
	}

	[Token(Token = "0x600057D")]
	[Address(RVA = "0x499A370", Offset = "0x499A370", VA = "0x499A370")]
	public static bool IsConvertibleTo(this Type source, Type destination, bool guaranteed)
	{
		return default(bool);
	}

	[Token(Token = "0x600057E")]
	[Address(RVA = "0x499A450", Offset = "0x499A450", VA = "0x499A450")]
	public static bool IsConvertibleTo(this object source, Type type, bool guaranteed)
	{
		return default(bool);
	}

	[Token(Token = "0x600057F")]
	public static bool IsConvertibleTo<T>(this object source, bool guaranteed)
	{
		return default(bool);
	}

	[Token(Token = "0x6000580")]
	[Address(RVA = "0x499A530", Offset = "0x499A530", VA = "0x499A530")]
	public static object ConvertTo(this object source, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000581")]
	public static T ConvertTo<T>(this object source)
	{
		return (T)null;
	}

	[Token(Token = "0x6000582")]
	[Address(RVA = "0x4999BA0", Offset = "0x4999BA0", VA = "0x4999BA0")]
	public static ConversionType GetRequiredConversion(Type source, Type destination)
	{
		return default(ConversionType);
	}

	[Token(Token = "0x6000583")]
	[Address(RVA = "0x499A5F0", Offset = "0x499A5F0", VA = "0x499A5F0")]
	private static ConversionType DetermineConversionType(ConversionQuery query)
	{
		return default(ConversionType);
	}

	[Token(Token = "0x6000584")]
	[Address(RVA = "0x4999980", Offset = "0x4999980", VA = "0x4999980")]
	public static ConversionType GetRequiredConversion(object value, Type type)
	{
		return default(ConversionType);
	}

	[Token(Token = "0x6000585")]
	[Address(RVA = "0x499A960", Offset = "0x499A960", VA = "0x499A960")]
	private static object NumericConversion(object value, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000586")]
	[Address(RVA = "0x499A9C0", Offset = "0x499A9C0", VA = "0x499A9C0")]
	private static object UserDefinedConversion(ConversionType conversion, object value, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000587")]
	[Address(RVA = "0x499ACB0", Offset = "0x499ACB0", VA = "0x499ACB0")]
	private static object EnumerableToArrayConversion(object value, Type arrayType)
	{
		return null;
	}

	[Token(Token = "0x6000588")]
	[Address(RVA = "0x499AE00", Offset = "0x499AE00", VA = "0x499AE00")]
	private static object EnumerableToListConversion(object value, Type listType)
	{
		return null;
	}

	[Token(Token = "0x6000589")]
	[Address(RVA = "0x499B070", Offset = "0x499B070", VA = "0x499B070")]
	private static object UnityHierarchyConversion(object value, Type type)
	{
		return null;
	}

	[Token(Token = "0x600058A")]
	[Address(RVA = "0x4999D40", Offset = "0x4999D40", VA = "0x4999D40")]
	private static object Convert(object value, Type type, ConversionType conversionType)
	{
		return null;
	}
}
