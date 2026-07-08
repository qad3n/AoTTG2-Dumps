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
		[Address(RVA = "0x4B5F340", Offset = "0x4B5F340", VA = "0x4B5F340")]
		public static void Register()
		{
		}

		[Token(Token = "0x600008B")]
		[Address(RVA = "0x4B5F580", Offset = "0x4B5F580", VA = "0x4B5F580")]
		private static void RegisterInt8Converters()
		{
		}

		[Token(Token = "0x600008C")]
		[Address(RVA = "0x4B60570", Offset = "0x4B60570", VA = "0x4B60570")]
		private static void RegisterInt16Converters()
		{
		}

		[Token(Token = "0x600008D")]
		[Address(RVA = "0x4B615C0", Offset = "0x4B615C0", VA = "0x4B615C0")]
		private static void RegisterInt32Converters()
		{
		}

		[Token(Token = "0x600008E")]
		[Address(RVA = "0x4B62620", Offset = "0x4B62620", VA = "0x4B62620")]
		private static void RegisterInt64Converters()
		{
		}

		[Token(Token = "0x600008F")]
		[Address(RVA = "0x4B63680", Offset = "0x4B63680", VA = "0x4B63680")]
		private static void RegisterUInt8Converters()
		{
		}

		[Token(Token = "0x6000090")]
		[Address(RVA = "0x4B646E0", Offset = "0x4B646E0", VA = "0x4B646E0")]
		private static void RegisterUInt16Converters()
		{
		}

		[Token(Token = "0x6000091")]
		[Address(RVA = "0x4B65740", Offset = "0x4B65740", VA = "0x4B65740")]
		private static void RegisterUInt32Converters()
		{
		}

		[Token(Token = "0x6000092")]
		[Address(RVA = "0x4B667A0", Offset = "0x4B667A0", VA = "0x4B667A0")]
		private static void RegisterUInt64Converters()
		{
		}

		[Token(Token = "0x6000093")]
		[Address(RVA = "0x4B67800", Offset = "0x4B67800", VA = "0x4B67800")]
		private static void RegisterFloat32Converters()
		{
		}

		[Token(Token = "0x6000094")]
		[Address(RVA = "0x4B68860", Offset = "0x4B68860", VA = "0x4B68860")]
		private static void RegisterFloat64Converters()
		{
		}

		[Token(Token = "0x6000095")]
		[Address(RVA = "0x4B698E0", Offset = "0x4B698E0", VA = "0x4B698E0")]
		private static void RegisterBooleanConverters()
		{
		}

		[Token(Token = "0x6000096")]
		[Address(RVA = "0x4B6A940", Offset = "0x4B6A940", VA = "0x4B6A940")]
		private static void RegisterCharConverters()
		{
		}

		[Token(Token = "0x6000097")]
		[Address(RVA = "0x4B6BC80", Offset = "0x4B6BC80", VA = "0x4B6BC80")]
		private static void RegisterStringConverters()
		{
		}

		[Token(Token = "0x6000098")]
		[Address(RVA = "0x4B6DD30", Offset = "0x4B6DD30", VA = "0x4B6DD30")]
		private static void RegisterObjectConverters()
		{
		}
	}

	[Token(Token = "0x4000034")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ConversionRegistry s_GlobalConverters;

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x4B5F2D0", Offset = "0x4B5F2D0", VA = "0x4B5F2D0")]
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
	[Address(RVA = "0x4B5F540", Offset = "0x4B5F540", VA = "0x4B5F540")]
	private static bool IsNumericType(Type t)
	{
		return default(bool);
	}
}
