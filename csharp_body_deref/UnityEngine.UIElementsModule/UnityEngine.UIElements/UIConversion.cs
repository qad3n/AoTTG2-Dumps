using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x200012F")]
internal static class UIConversion
{
	[Token(Token = "0x40004EB")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Unity.Properties.ConversionRegistry s_GlobalUIConverters;

	[Token(Token = "0x40004EC")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Unity.Properties.ConversionRegistry s_PrimitiveConverters;

	[Token(Token = "0x60007F5")]
	[Address(RVA = "0x4CE1080", Offset = "0x4CE1080", VA = "0x4CE1080")]
	static UIConversion()
	{
	}

	[Token(Token = "0x60007F6")]
	internal static void RegisterGlobal<TSource, TDestination>(TypeConverter<TSource, TDestination> converter)
	{
	}

	[Token(Token = "0x60007F7")]
	internal static bool TryConvert<TSource, TDestination>(ref TSource source, out TDestination destination)
	{
		return default(bool);
	}

	[Token(Token = "0x60007F8")]
	[Address(RVA = "0x4CE1120", Offset = "0x4CE1120", VA = "0x4CE1120")]
	private static void RegisterPrimitivesConverter()
	{
	}

	[Token(Token = "0x60007F9")]
	[Address(RVA = "0x4CE11A0", Offset = "0x4CE11A0", VA = "0x4CE11A0")]
	private static void RegisterInt8Converters()
	{
	}

	[Token(Token = "0x60007FA")]
	[Address(RVA = "0x4CE2070", Offset = "0x4CE2070", VA = "0x4CE2070")]
	private static void RegisterInt16Converters()
	{
	}

	[Token(Token = "0x60007FB")]
	[Address(RVA = "0x4CE2F90", Offset = "0x4CE2F90", VA = "0x4CE2F90")]
	private static void RegisterInt32Converters()
	{
	}

	[Token(Token = "0x60007FC")]
	[Address(RVA = "0x4CE3ED0", Offset = "0x4CE3ED0", VA = "0x4CE3ED0")]
	private static void RegisterInt64Converters()
	{
	}

	[Token(Token = "0x60007FD")]
	[Address(RVA = "0x4CE4E10", Offset = "0x4CE4E10", VA = "0x4CE4E10")]
	private static void RegisterUInt8Converters()
	{
	}

	[Token(Token = "0x60007FE")]
	[Address(RVA = "0x4CE5E80", Offset = "0x4CE5E80", VA = "0x4CE5E80")]
	private static void RegisterUInt16Converters()
	{
	}

	[Token(Token = "0x60007FF")]
	[Address(RVA = "0x4CE6DC0", Offset = "0x4CE6DC0", VA = "0x4CE6DC0")]
	private static void RegisterUInt32Converters()
	{
	}

	[Token(Token = "0x6000800")]
	[Address(RVA = "0x4CE7D00", Offset = "0x4CE7D00", VA = "0x4CE7D00")]
	private static void RegisterUInt64Converters()
	{
	}

	[Token(Token = "0x6000801")]
	[Address(RVA = "0x4CE8C40", Offset = "0x4CE8C40", VA = "0x4CE8C40")]
	private static void RegisterFloatConverters()
	{
	}

	[Token(Token = "0x6000802")]
	[Address(RVA = "0x4CE9CB0", Offset = "0x4CE9CB0", VA = "0x4CE9CB0")]
	private static void RegisterDoubleConverters()
	{
	}

	[Token(Token = "0x6000803")]
	[Address(RVA = "0x4CEAD50", Offset = "0x4CEAD50", VA = "0x4CEAD50")]
	private static void RegisterBooleanConverters()
	{
	}

	[Token(Token = "0x6000804")]
	[Address(RVA = "0x4CEBC90", Offset = "0x4CEBC90", VA = "0x4CEBC90")]
	private static void RegisterCharConverters()
	{
	}

	[Token(Token = "0x6000805")]
	[Address(RVA = "0x4CECBF0", Offset = "0x4CECBF0", VA = "0x4CECBF0")]
	private static void RegisterColorConverters()
	{
	}
}
