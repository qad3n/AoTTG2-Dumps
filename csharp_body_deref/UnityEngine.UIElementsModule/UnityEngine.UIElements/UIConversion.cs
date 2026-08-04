// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIConversion
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x50089B0", Offset = "0x50089B0", VA = "0x50089B0")]
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
	[Address(RVA = "0x5008A50", Offset = "0x5008A50", VA = "0x5008A50")]
	private static void RegisterPrimitivesConverter()
	{
	}

	[Token(Token = "0x60007F9")]
	[Address(RVA = "0x5008AD0", Offset = "0x5008AD0", VA = "0x5008AD0")]
	private static void RegisterInt8Converters()
	{
	}

	[Token(Token = "0x60007FA")]
	[Address(RVA = "0x50099A0", Offset = "0x50099A0", VA = "0x50099A0")]
	private static void RegisterInt16Converters()
	{
	}

	[Token(Token = "0x60007FB")]
	[Address(RVA = "0x500A8C0", Offset = "0x500A8C0", VA = "0x500A8C0")]
	private static void RegisterInt32Converters()
	{
	}

	[Token(Token = "0x60007FC")]
	[Address(RVA = "0x500B800", Offset = "0x500B800", VA = "0x500B800")]
	private static void RegisterInt64Converters()
	{
	}

	[Token(Token = "0x60007FD")]
	[Address(RVA = "0x500C740", Offset = "0x500C740", VA = "0x500C740")]
	private static void RegisterUInt8Converters()
	{
	}

	[Token(Token = "0x60007FE")]
	[Address(RVA = "0x500D7B0", Offset = "0x500D7B0", VA = "0x500D7B0")]
	private static void RegisterUInt16Converters()
	{
	}

	[Token(Token = "0x60007FF")]
	[Address(RVA = "0x500E6F0", Offset = "0x500E6F0", VA = "0x500E6F0")]
	private static void RegisterUInt32Converters()
	{
	}

	[Token(Token = "0x6000800")]
	[Address(RVA = "0x500F630", Offset = "0x500F630", VA = "0x500F630")]
	private static void RegisterUInt64Converters()
	{
	}

	[Token(Token = "0x6000801")]
	[Address(RVA = "0x5010570", Offset = "0x5010570", VA = "0x5010570")]
	private static void RegisterFloatConverters()
	{
	}

	[Token(Token = "0x6000802")]
	[Address(RVA = "0x50115E0", Offset = "0x50115E0", VA = "0x50115E0")]
	private static void RegisterDoubleConverters()
	{
	}

	[Token(Token = "0x6000803")]
	[Address(RVA = "0x5012680", Offset = "0x5012680", VA = "0x5012680")]
	private static void RegisterBooleanConverters()
	{
	}

	[Token(Token = "0x6000804")]
	[Address(RVA = "0x50135C0", Offset = "0x50135C0", VA = "0x50135C0")]
	private static void RegisterCharConverters()
	{
	}

	[Token(Token = "0x6000805")]
	[Address(RVA = "0x5014520", Offset = "0x5014520", VA = "0x5014520")]
	private static void RegisterColorConverters()
	{
	}
}
