using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x2000028")]
internal readonly struct ConversionRegistry : IEqualityComparer<ConversionRegistry>
{
	[Token(Token = "0x2000029")]
	private class ConverterKeyComparer : IEqualityComparer<ConverterKey>
	{
		[Token(Token = "0x600007E")]
		[Address(RVA = "0x4B5F190", Offset = "0x4B5F190", VA = "0x4B5F190", Slot = "4")]
		public bool Equals(ConverterKey x, ConverterKey y)
		{
			return default(bool);
		}

		[Token(Token = "0x600007F")]
		[Address(RVA = "0x4B5F210", Offset = "0x4B5F210", VA = "0x4B5F210", Slot = "5")]
		public int GetHashCode(ConverterKey obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000080")]
		[Address(RVA = "0x4B5F180", Offset = "0x4B5F180", VA = "0x4B5F180")]
		public ConverterKeyComparer()
		{
		}
	}

	[Token(Token = "0x200002A")]
	private readonly struct ConverterKey
	{
		[Token(Token = "0x4000032")]
		[FieldOffset(Offset = "0x0")]
		public readonly Type SourceType;

		[Token(Token = "0x4000033")]
		[FieldOffset(Offset = "0x8")]
		public readonly Type DestinationType;

		[Token(Token = "0x6000081")]
		[Address(RVA = "0x4B5EEC0", Offset = "0x4B5EEC0", VA = "0x4B5EEC0")]
		public ConverterKey(Type source, Type destination)
		{
		}
	}

	[Token(Token = "0x4000030")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ConverterKeyComparer Comparer;

	[Token(Token = "0x4000031")]
	[FieldOffset(Offset = "0x0")]
	private readonly Dictionary<ConverterKey, Delegate> m_Converters;

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x4B5ED20", Offset = "0x4B5ED20", VA = "0x4B5ED20")]
	private ConversionRegistry(Dictionary<ConverterKey, Delegate> storage)
	{
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x4B5ED30", Offset = "0x4B5ED30", VA = "0x4B5ED30")]
	public static ConversionRegistry Create()
	{
		return default(ConversionRegistry);
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x4B5EDD0", Offset = "0x4B5EDD0", VA = "0x4B5EDD0")]
	public void Register(Type source, Type destination, Delegate converter)
	{
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x4B5EEF0", Offset = "0x4B5EEF0", VA = "0x4B5EEF0")]
	public Delegate GetConverter(Type source, Type destination)
	{
		return null;
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x4B5EFA0", Offset = "0x4B5EFA0", VA = "0x4B5EFA0")]
	public bool TryGetConverter(Type source, Type destination, out Delegate converter)
	{
		return default(bool);
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x4B5F0D0", Offset = "0x4B5F0D0", VA = "0x4B5F0D0", Slot = "4")]
	public bool Equals(ConversionRegistry x, ConversionRegistry y)
	{
		return default(bool);
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x4B5F0E0", Offset = "0x4B5F0E0", VA = "0x4B5F0E0", Slot = "5")]
	public int GetHashCode(ConversionRegistry obj)
	{
		return default(int);
	}
}
