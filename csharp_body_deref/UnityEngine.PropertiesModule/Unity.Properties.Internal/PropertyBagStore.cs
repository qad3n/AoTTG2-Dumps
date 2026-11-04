// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.Internal.PropertyBagStore
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Concurrent;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.Properties.Internal;

[Token(Token = "0x20000A0")]
internal static class PropertyBagStore
{
	[Token(Token = "0x20000A1")]
	internal struct TypedStore<TContainer>
	{
		[Token(Token = "0x400009B")]
		[FieldOffset(Offset = "0x0")]
		public static IPropertyBag<TContainer> PropertyBag;
	}

	[Token(Token = "0x4000098")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ConcurrentDictionary<Type, IPropertyBag> s_PropertyBags;

	[Token(Token = "0x4000099")]
	[FieldOffset(Offset = "0x8")]
	private static readonly List<Type> s_RegisteredTypes;

	[Token(Token = "0x400009A")]
	[FieldOffset(Offset = "0x10")]
	private static ReflectedPropertyBagProvider s_PropertyBagProvider;

	[Token(Token = "0x17000088")]
	private static ReflectedPropertyBagProvider ReflectedPropertyBagProvider
	{
		[Token(Token = "0x600026D")]
		[Address(RVA = "0x2FED570", Offset = "0x2FEBB70", VA = "0x182FED570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600026E")]
	[Address(RVA = "0x2FECDC0", Offset = "0x2FEB3C0", VA = "0x182FECDC0")]
	internal static void CreatePropertyBagProvider()
	{
	}

	[Token(Token = "0x600026F")]
	internal static void AddPropertyBag<TContainer>(IPropertyBag<TContainer> propertyBag)
	{
	}

	[Token(Token = "0x6000270")]
	internal static IPropertyBag<TContainer> GetPropertyBag<TContainer>()
	{
		return null;
	}

	[Token(Token = "0x6000271")]
	[Address(RVA = "0x2FECE50", Offset = "0x2FEB450", VA = "0x182FECE50")]
	internal static IPropertyBag GetPropertyBag(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000272")]
	internal static bool TryGetPropertyBagForValue<TValue>(ref TValue value, out IPropertyBag propertyBag)
	{
		return default(bool);
	}
}
