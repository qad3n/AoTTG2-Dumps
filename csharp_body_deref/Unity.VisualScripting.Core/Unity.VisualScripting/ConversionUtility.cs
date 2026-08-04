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
		[Address(RVA = "0x4CBDCF0", Offset = "0x4CBDCF0", VA = "0x4CBDCF0")]
		public ConversionQuery(Type source, Type destination)
		{
		}

		[Token(Token = "0x600058D")]
		[Address(RVA = "0x4CC17A0", Offset = "0x4CC17A0", VA = "0x4CC17A0", Slot = "4")]
		public bool Equals(ConversionQuery other)
		{
			return default(bool);
		}

		[Token(Token = "0x600058E")]
		[Address(RVA = "0x4CC1820", Offset = "0x4CC1820", VA = "0x4CC1820", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x600058F")]
		[Address(RVA = "0x4CC18E0", Offset = "0x4CC18E0", VA = "0x4CC18E0", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}
	}

	[Token(Token = "0x20000E6")]
	private struct ConversionQueryComparer : IEqualityComparer<ConversionQuery>
	{
		[Token(Token = "0x6000590")]
		[Address(RVA = "0x4CC1920", Offset = "0x4CC1920", VA = "0x4CC1920", Slot = "4")]
		public bool Equals(ConversionQuery x, ConversionQuery y)
		{
			return default(bool);
		}

		[Token(Token = "0x6000591")]
		[Address(RVA = "0x4CC19A0", Offset = "0x4CC19A0", VA = "0x4CC19A0", Slot = "5")]
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
	[Address(RVA = "0x4CBD4B0", Offset = "0x4CBD4B0", VA = "0x4CBD4B0")]
	private static bool RespectsIdentity(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x4CBD4F0", Offset = "0x4CBD4F0", VA = "0x4CBD4F0")]
	private static bool IsUpcast(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x4CBD520", Offset = "0x4CBD520", VA = "0x4CBD520")]
	private static bool IsDowncast(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x4CBD540", Offset = "0x4CBD540", VA = "0x4CBD540")]
	private static bool ExpectsString(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x600056D")]
	[Address(RVA = "0x4CBD590", Offset = "0x4CBD590", VA = "0x4CBD590")]
	public static bool HasImplicitNumericConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x600056E")]
	[Address(RVA = "0x4CBD6B0", Offset = "0x4CBD6B0", VA = "0x4CBD6B0")]
	public static bool HasExplicitNumericConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x600056F")]
	[Address(RVA = "0x4CBD7D0", Offset = "0x4CBD7D0", VA = "0x4CBD7D0")]
	public static bool HasNumericConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000570")]
	[Address(RVA = "0x4CBD850", Offset = "0x4CBD850", VA = "0x4CBD850")]
	private static IEnumerable<MethodInfo> FindUserDefinedConversionMethods(ConversionQuery query)
	{
		return null;
	}

	[Token(Token = "0x6000571")]
	[Address(RVA = "0x4CBDB50", Offset = "0x4CBDB50", VA = "0x4CBDB50")]
	private static MethodInfo[] GetUserDefinedConversionMethods(Type source, Type destination)
	{
		return null;
	}

	[Token(Token = "0x6000572")]
	[Address(RVA = "0x4CBDD20", Offset = "0x4CBDD20", VA = "0x4CBDD20")]
	private static ConversionType GetUserDefinedConversionType(Type source, Type destination)
	{
		return default(ConversionType);
	}

	[Token(Token = "0x6000573")]
	[Address(RVA = "0x4CBE0C0", Offset = "0x4CBE0C0", VA = "0x4CBE0C0")]
	private static bool HasEnumerableToArrayConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x4CBE1C0", Offset = "0x4CBE1C0", VA = "0x4CBE1C0")]
	private static bool HasEnumerableToListConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000575")]
	[Address(RVA = "0x4CBE320", Offset = "0x4CBE320", VA = "0x4CBE320")]
	private static bool HasUnityHierarchyConversion(Type source, Type destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0x4CBE4C0", Offset = "0x4CBE4C0", VA = "0x4CBE4C0")]
	private static bool IsValidConversion(ConversionType conversionType, bool guaranteed)
	{
		return default(bool);
	}

	[Token(Token = "0x6000577")]
	[Address(RVA = "0x4CBE4E0", Offset = "0x4CBE4E0", VA = "0x4CBE4E0")]
	public static bool CanConvert(object value, Type type, bool guaranteed)
	{
		return default(bool);
	}

	[Token(Token = "0x6000578")]
	[Address(RVA = "0x4CBE700", Offset = "0x4CBE700", VA = "0x4CBE700")]
	public static bool CanConvert(Type source, Type destination, bool guaranteed)
	{
		return default(bool);
	}

	[Token(Token = "0x6000579")]
	[Address(RVA = "0x4CBE8B0", Offset = "0x4CBE8B0", VA = "0x4CBE8B0")]
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
	[Address(RVA = "0x4CBEE80", Offset = "0x4CBEE80", VA = "0x4CBEE80")]
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
	[Address(RVA = "0x4CBEF40", Offset = "0x4CBEF40", VA = "0x4CBEF40")]
	public static bool IsConvertibleTo(this Type source, Type destination, bool guaranteed)
	{
		return default(bool);
	}

	[Token(Token = "0x600057E")]
	[Address(RVA = "0x4CBF020", Offset = "0x4CBF020", VA = "0x4CBF020")]
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
	[Address(RVA = "0x4CBF100", Offset = "0x4CBF100", VA = "0x4CBF100")]
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
	[Address(RVA = "0x4CBE770", Offset = "0x4CBE770", VA = "0x4CBE770")]
	public static ConversionType GetRequiredConversion(Type source, Type destination)
	{
		return default(ConversionType);
	}

	[Token(Token = "0x6000583")]
	[Address(RVA = "0x4CBF1C0", Offset = "0x4CBF1C0", VA = "0x4CBF1C0")]
	private static ConversionType DetermineConversionType(ConversionQuery query)
	{
		return default(ConversionType);
	}

	[Token(Token = "0x6000584")]
	[Address(RVA = "0x4CBE550", Offset = "0x4CBE550", VA = "0x4CBE550")]
	public static ConversionType GetRequiredConversion(object value, Type type)
	{
		return default(ConversionType);
	}

	[Token(Token = "0x6000585")]
	[Address(RVA = "0x4CBF530", Offset = "0x4CBF530", VA = "0x4CBF530")]
	private static object NumericConversion(object value, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000586")]
	[Address(RVA = "0x4CBF590", Offset = "0x4CBF590", VA = "0x4CBF590")]
	private static object UserDefinedConversion(ConversionType conversion, object value, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000587")]
	[Address(RVA = "0x4CBF880", Offset = "0x4CBF880", VA = "0x4CBF880")]
	private static object EnumerableToArrayConversion(object value, Type arrayType)
	{
		return null;
	}

	[Token(Token = "0x6000588")]
	[Address(RVA = "0x4CBF9D0", Offset = "0x4CBF9D0", VA = "0x4CBF9D0")]
	private static object EnumerableToListConversion(object value, Type listType)
	{
		return null;
	}

	[Token(Token = "0x6000589")]
	[Address(RVA = "0x4CBFC40", Offset = "0x4CBFC40", VA = "0x4CBFC40")]
	private static object UnityHierarchyConversion(object value, Type type)
	{
		return null;
	}

	[Token(Token = "0x600058A")]
	[Address(RVA = "0x4CBE910", Offset = "0x4CBE910", VA = "0x4CBE910")]
	private static object Convert(object value, Type type, ConversionType conversionType)
	{
		return null;
	}
}
