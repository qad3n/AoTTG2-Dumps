// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.ConversionRegistry
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4E86AC0", Offset = "0x4E86AC0", VA = "0x4E86AC0", Slot = "4")]
		public bool Equals(ConverterKey x, ConverterKey y)
		{
			return default(bool);
		}

		[Token(Token = "0x600007F")]
		[Address(RVA = "0x4E86B40", Offset = "0x4E86B40", VA = "0x4E86B40", Slot = "5")]
		public int GetHashCode(ConverterKey obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000080")]
		[Address(RVA = "0x4E86AB0", Offset = "0x4E86AB0", VA = "0x4E86AB0")]
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
		[Address(RVA = "0x4E867F0", Offset = "0x4E867F0", VA = "0x4E867F0")]
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
	[Address(RVA = "0x4E86650", Offset = "0x4E86650", VA = "0x4E86650")]
	private ConversionRegistry(Dictionary<ConverterKey, Delegate> storage)
	{
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x4E86660", Offset = "0x4E86660", VA = "0x4E86660")]
	public static ConversionRegistry Create()
	{
		return default(ConversionRegistry);
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x4E86700", Offset = "0x4E86700", VA = "0x4E86700")]
	public void Register(Type source, Type destination, Delegate converter)
	{
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x4E86820", Offset = "0x4E86820", VA = "0x4E86820")]
	public Delegate GetConverter(Type source, Type destination)
	{
		return null;
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x4E868D0", Offset = "0x4E868D0", VA = "0x4E868D0")]
	public bool TryGetConverter(Type source, Type destination, out Delegate converter)
	{
		return default(bool);
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x4E86A00", Offset = "0x4E86A00", VA = "0x4E86A00", Slot = "4")]
	public bool Equals(ConversionRegistry x, ConversionRegistry y)
	{
		return default(bool);
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x4E86A10", Offset = "0x4E86A10", VA = "0x4E86A10", Slot = "5")]
	public int GetHashCode(ConversionRegistry obj)
	{
		return default(int);
	}
}
