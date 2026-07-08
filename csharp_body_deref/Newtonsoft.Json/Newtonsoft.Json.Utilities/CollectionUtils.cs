using System;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Utilities;

[Token(Token = "0x200009A")]
internal static class CollectionUtils
{
	[Token(Token = "0x200009B")]
	private static class EmptyArrayContainer<T>
	{
		[Token(Token = "0x400039D")]
		[FieldOffset(Offset = "0x0")]
		public static readonly T[] Empty;
	}

	[Token(Token = "0x6000505")]
	public static bool IsNullOrEmpty<T>(ICollection<T> collection) where T : notnull
	{
		return default(bool);
	}

	[Token(Token = "0x6000506")]
	public static void AddRange<T>(this IList<T> initial, IEnumerable<T> collection) where T : notnull
	{
	}

	[Token(Token = "0x6000507")]
	[Address(RVA = "0x3AB62F0", Offset = "0x3AB62F0", VA = "0x3AB62F0")]
	public static bool IsDictionaryType(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000508")]
	[Address(RVA = "0x3AB65C0", Offset = "0x3AB65C0", VA = "0x3AB65C0")]
	public static ConstructorInfo ResolveEnumerableCollectionConstructor(Type collectionType, Type collectionItemType)
	{
		return null;
	}

	[Token(Token = "0x6000509")]
	[Address(RVA = "0x3AB66D0", Offset = "0x3AB66D0", VA = "0x3AB66D0")]
	public static ConstructorInfo ResolveEnumerableCollectionConstructor(Type collectionType, Type collectionItemType, Type constructorArgumentType)
	{
		return null;
	}

	[Token(Token = "0x600050A")]
	public static bool AddDistinct<T>(this IList<T> list, T value) where T : notnull
	{
		return default(bool);
	}

	[Token(Token = "0x600050B")]
	public static bool AddDistinct<T>(this IList<T> list, T value, IEqualityComparer<T> comparer) where T : notnull
	{
		return default(bool);
	}

	[Token(Token = "0x600050C")]
	public static bool ContainsValue<TSource>(this IEnumerable<TSource> source, TSource value, IEqualityComparer<TSource> comparer) where TSource : notnull
	{
		return default(bool);
	}

	[Token(Token = "0x600050D")]
	public static bool AddRangeDistinct<T>(this IList<T> list, IEnumerable<T> values, IEqualityComparer<T> comparer) where T : notnull
	{
		return default(bool);
	}

	[Token(Token = "0x600050E")]
	public static int IndexOf<T>(this IEnumerable<T> collection, Func<T, bool> predicate) where T : notnull
	{
		return default(int);
	}

	[Token(Token = "0x600050F")]
	public static bool Contains<T>(this List<T> list, T value, IEqualityComparer comparer) where T : notnull
	{
		return default(bool);
	}

	[Token(Token = "0x6000510")]
	public static int IndexOfReference<T>(this List<T> list, T item) where T : notnull
	{
		return default(int);
	}

	[Token(Token = "0x6000511")]
	public static void FastReverse<T>(this List<T> list) where T : notnull
	{
	}

	[Token(Token = "0x6000512")]
	[Address(RVA = "0x3AB6A20", Offset = "0x3AB6A20", VA = "0x3AB6A20")]
	private static IList<int> GetDimensions(IList values, int dimensionsCount)
	{
		return null;
	}

	[Token(Token = "0x6000513")]
	[Address(RVA = "0x3AB6D60", Offset = "0x3AB6D60", VA = "0x3AB6D60")]
	private static void CopyFromJaggedToMultidimensionalArray(IList values, Array multidimensionalArray, int[] indices)
	{
	}

	[Token(Token = "0x6000514")]
	[Address(RVA = "0x3AB7010", Offset = "0x3AB7010", VA = "0x3AB7010")]
	private static object JaggedArrayGetValue(IList values, int[] indices)
	{
		return null;
	}

	[Token(Token = "0x6000515")]
	[Address(RVA = "0x3AB7170", Offset = "0x3AB7170", VA = "0x3AB7170")]
	public static Array ToMultidimensionalArray(IList values, Type type, int rank)
	{
		return null;
	}

	[Token(Token = "0x6000516")]
	public static T[] ArrayEmpty<T>() where T : notnull
	{
		return null;
	}
}
