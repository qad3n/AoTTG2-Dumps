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
	[Address(RVA = "0x69EA260", Offset = "0x69E9260", VA = "0x69EA260")]
	private ConversionRegistry(Dictionary<ConverterKey, Delegate> storage)
	{
	}

	[Token(Token = "0x6000155")]
	[Address(RVA = "0x69EA320", Offset = "0x69E9320", VA = "0x69EA320")]
	public static ConversionRegistry Create()
	{
		return default(ConversionRegistry);
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x69EA3D0", Offset = "0x69E93D0", VA = "0x69EA3D0")]
	public void Register(Type source, Type destination, Delegate converter)
	{
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x69EA4C0", Offset = "0x69E94C0", VA = "0x69EA4C0")]
	public void LazyRegister(Type source, Type destination, Func<Delegate> converter)
	{
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x69EA5B0", Offset = "0x69E95B0", VA = "0x69EA5B0")]
	public void Apply(ConversionRegistry registry)
	{
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x69EA710", Offset = "0x69E9710", VA = "0x69EA710")]
	public Delegate GetConverter(Type source, Type destination)
	{
		return null;
	}

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x69EA870", Offset = "0x69E9870", VA = "0x69EA870")]
	public bool TryGetConverter(Type source, Type destination, out Delegate converter)
	{
		return default(bool);
	}

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x69EA890", Offset = "0x69E9890", VA = "0x69EA890", Slot = "4")]
	public bool Equals(ConversionRegistry x, ConversionRegistry y)
	{
		return default(bool);
	}

	[Token(Token = "0x600015C")]
	[Address(RVA = "0x69EA8A0", Offset = "0x69E98A0", VA = "0x69EA8A0", Slot = "5")]
	public int GetHashCode(ConversionRegistry obj)
	{
		return default(int);
	}
}
