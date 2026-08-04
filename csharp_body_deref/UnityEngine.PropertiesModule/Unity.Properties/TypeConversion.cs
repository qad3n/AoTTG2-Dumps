// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.TypeConversion
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x200002C")]
public static class TypeConversion
{
	[Token(Token = "0x200002D")]
	private static class PrimitiveConverters
	{
		[Token(Token = "0x600008A")]
		[Address(RVA = "0x4E86C70", Offset = "0x4E86C70", VA = "0x4E86C70")]
		public static void Register()
		{
		}

		[Token(Token = "0x600008B")]
		[Address(RVA = "0x4E86EB0", Offset = "0x4E86EB0", VA = "0x4E86EB0")]
		private static void RegisterInt8Converters()
		{
		}

		[Token(Token = "0x600008C")]
		[Address(RVA = "0x4E87EA0", Offset = "0x4E87EA0", VA = "0x4E87EA0")]
		private static void RegisterInt16Converters()
		{
		}

		[Token(Token = "0x600008D")]
		[Address(RVA = "0x4E88EF0", Offset = "0x4E88EF0", VA = "0x4E88EF0")]
		private static void RegisterInt32Converters()
		{
		}

		[Token(Token = "0x600008E")]
		[Address(RVA = "0x4E89F50", Offset = "0x4E89F50", VA = "0x4E89F50")]
		private static void RegisterInt64Converters()
		{
		}

		[Token(Token = "0x600008F")]
		[Address(RVA = "0x4E8AFB0", Offset = "0x4E8AFB0", VA = "0x4E8AFB0")]
		private static void RegisterUInt8Converters()
		{
		}

		[Token(Token = "0x6000090")]
		[Address(RVA = "0x4E8C010", Offset = "0x4E8C010", VA = "0x4E8C010")]
		private static void RegisterUInt16Converters()
		{
		}

		[Token(Token = "0x6000091")]
		[Address(RVA = "0x4E8D070", Offset = "0x4E8D070", VA = "0x4E8D070")]
		private static void RegisterUInt32Converters()
		{
		}

		[Token(Token = "0x6000092")]
		[Address(RVA = "0x4E8E0D0", Offset = "0x4E8E0D0", VA = "0x4E8E0D0")]
		private static void RegisterUInt64Converters()
		{
		}

		[Token(Token = "0x6000093")]
		[Address(RVA = "0x4E8F130", Offset = "0x4E8F130", VA = "0x4E8F130")]
		private static void RegisterFloat32Converters()
		{
		}

		[Token(Token = "0x6000094")]
		[Address(RVA = "0x4E90190", Offset = "0x4E90190", VA = "0x4E90190")]
		private static void RegisterFloat64Converters()
		{
		}

		[Token(Token = "0x6000095")]
		[Address(RVA = "0x4E91210", Offset = "0x4E91210", VA = "0x4E91210")]
		private static void RegisterBooleanConverters()
		{
		}

		[Token(Token = "0x6000096")]
		[Address(RVA = "0x4E92270", Offset = "0x4E92270", VA = "0x4E92270")]
		private static void RegisterCharConverters()
		{
		}

		[Token(Token = "0x6000097")]
		[Address(RVA = "0x4E935B0", Offset = "0x4E935B0", VA = "0x4E935B0")]
		private static void RegisterStringConverters()
		{
		}

		[Token(Token = "0x6000098")]
		[Address(RVA = "0x4E95660", Offset = "0x4E95660", VA = "0x4E95660")]
		private static void RegisterObjectConverters()
		{
		}
	}

	[Token(Token = "0x4000034")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ConversionRegistry s_GlobalConverters;

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x4E86C00", Offset = "0x4E86C00", VA = "0x4E86C00")]
	static TypeConversion()
	{
	}

	[Token(Token = "0x6000085")]
	public static void Register<TSource, TDestination>(TypeConverter<TSource, TDestination> converter)
	{
	}

	[Token(Token = "0x6000086")]
	public static TDestination Convert<TSource, TDestination>(ref TSource value)
	{
		return (TDestination)null;
	}

	[Token(Token = "0x6000087")]
	public static bool TryConvert<TSource, TDestination>(ref TSource source, out TDestination destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000088")]
	private static bool TryConvertToUnityEngineObject<TSource, TDestination>(TSource source, out TDestination destination)
	{
		return default(bool);
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x4E86E70", Offset = "0x4E86E70", VA = "0x4E86E70")]
	private static bool IsNumericType(Type t)
	{
		return default(bool);
	}
}
