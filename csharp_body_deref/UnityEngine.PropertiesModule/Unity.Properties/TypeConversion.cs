// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.TypeConversion
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace Unity.Properties;

[Token(Token = "0x200005D")]
public static class TypeConversion
{
	[Token(Token = "0x200005E")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal struct Unsafe
	{
		[Token(Token = "0x6000166")]
		[Address(RVA = "0x2FF5790", Offset = "0x2FF3D90", VA = "0x182FF5790")]
		public static void LazyRegister(Type source, Type destination, Func<Delegate> getConverterDelegate)
		{
		}
	}

	[Token(Token = "0x200005F")]
	private static class PrimitiveConverters
	{
		[Token(Token = "0x6000167")]
		[Address(RVA = "0x2FEB7C0", Offset = "0x2FE9DC0", VA = "0x182FEB7C0")]
		public static void Register()
		{
		}
	}

	[Token(Token = "0x2000061")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static class PrimitivesConverters
	{
		[Token(Token = "0x600016B")]
		public static bool TryConvertPrimitiveOrString<TSource, TDestination>(ref TSource source, out TDestination destination)
		{
			return default(bool);
		}

		[Token(Token = "0x600016C")]
		private static TDestination DoConvert<TDestination>(ref bool source)
		{
			return (TDestination)null;
		}

		[Token(Token = "0x600016D")]
		private static TDestination DoConvert<TDestination>(ref byte source)
		{
			return (TDestination)null;
		}

		[Token(Token = "0x600016E")]
		private static TDestination DoConvert<TDestination>(ref char source)
		{
			return (TDestination)null;
		}

		[Token(Token = "0x600016F")]
		private static TDestination DoConvert<TDestination>(ref double source)
		{
			return (TDestination)null;
		}

		[Token(Token = "0x6000170")]
		private static TDestination DoConvert<TDestination>(ref short source)
		{
			return (TDestination)null;
		}

		[Token(Token = "0x6000171")]
		private static TDestination DoConvert<TDestination>(ref int source)
		{
			return (TDestination)null;
		}

		[Token(Token = "0x6000172")]
		private static TDestination DoConvert<TDestination>(ref long source)
		{
			return (TDestination)null;
		}

		[Token(Token = "0x6000173")]
		private static TDestination DoConvert<TDestination>(ref sbyte source)
		{
			return (TDestination)null;
		}

		[Token(Token = "0x6000174")]
		private static TDestination DoConvert<TDestination>(ref float source)
		{
			return (TDestination)null;
		}

		[Token(Token = "0x6000175")]
		private static TDestination DoConvert<TDestination>(ref string source)
		{
			return (TDestination)null;
		}

		[Token(Token = "0x6000176")]
		private static TDestination DoConvert<TDestination>(ref ushort source)
		{
			return (TDestination)null;
		}

		[Token(Token = "0x6000177")]
		private static TDestination DoConvert<TDestination>(ref uint source)
		{
			return (TDestination)null;
		}

		[Token(Token = "0x6000178")]
		private static TDestination DoConvert<TDestination>(ref ulong source)
		{
			return (TDestination)null;
		}
	}

	[Token(Token = "0x4000085")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ConversionRegistry s_GlobalConverters;

	[Token(Token = "0x600015F")]
	[Address(RVA = "0x2FF2FD0", Offset = "0x2FF15D0", VA = "0x182FF2FD0")]
	static TypeConversion()
	{
	}

	[Token(Token = "0x6000160")]
	public static bool TryConvert<TSource, TDestination>(ref TSource source, out TDestination destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000161")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static bool TryConvert<TSource, TDestination>(in ConversionRegistry registry, ref TSource source, out TDestination destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000162")]
	private static bool TryConvertNullable<TSource, TDestination>(ref TSource source, out TDestination destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000163")]
	private static bool TryConvertEnum<TSource, TDestination>(ref TSource source, out TDestination destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000164")]
	private static bool TryConvertToUnityEngineObject<TSource, TDestination>(TSource source, out TDestination destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x2FF2F90", Offset = "0x2FF1590", VA = "0x182FF2F90")]
	private static bool IsNumericType(Type t)
	{
		return default(bool);
	}
}
