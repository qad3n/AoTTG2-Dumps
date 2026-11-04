// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.ConversionRegistry
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace Unity.Properties;

[Token(Token = "0x200005B")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
internal readonly struct ConversionRegistry : IEqualityComparer<ConversionRegistry>
{
	[Token(Token = "0x4000083")]
	[FieldOffset(Offset = "0x0")]
	private readonly Dictionary<ConverterKey, Delegate> m_Converters;

	[Token(Token = "0x4000084")]
	[FieldOffset(Offset = "0x8")]
	private readonly Dictionary<ConverterKey, Func<Delegate>> m_LazyConverters;

	[Token(Token = "0x6000154")]
	[Address(RVA = "0x2FEA480", Offset = "0x2FE8A80", VA = "0x182FEA480")]
	private ConversionRegistry(Dictionary<ConverterKey, Delegate> storage)
	{
	}

	[Token(Token = "0x6000155")]
	[Address(RVA = "0x2FE9F40", Offset = "0x2FE8540", VA = "0x182FE9F40")]
	public static ConversionRegistry Create()
	{
		return default(ConversionRegistry);
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x2FEA360", Offset = "0x2FE8960", VA = "0x182FEA360")]
	public void Register(Type source, Type destination, Delegate converter)
	{
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x2FEA270", Offset = "0x2FE8870", VA = "0x182FEA270")]
	public void LazyRegister(Type source, Type destination, Func<Delegate> converter)
	{
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x2FE9D10", Offset = "0x2FE8310", VA = "0x182FE9D10")]
	public void Apply(ConversionRegistry registry)
	{
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x2FEA020", Offset = "0x2FE8620", VA = "0x182FEA020")]
	public Delegate GetConverter(Type source, Type destination)
	{
		return null;
	}

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x2FEA450", Offset = "0x2FE8A50", VA = "0x182FEA450")]
	public bool TryGetConverter(Type source, Type destination, out Delegate converter)
	{
		return default(bool);
	}

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x2FEA010", Offset = "0x2FE8610", VA = "0x182FEA010", Slot = "4")]
	public bool Equals(ConversionRegistry x, ConversionRegistry y)
	{
		return default(bool);
	}

	[Token(Token = "0x600015C")]
	[Address(RVA = "0x2FEA240", Offset = "0x2FE8840", VA = "0x182FEA240", Slot = "5")]
	public int GetHashCode(ConversionRegistry obj)
	{
		return default(int);
	}
}
