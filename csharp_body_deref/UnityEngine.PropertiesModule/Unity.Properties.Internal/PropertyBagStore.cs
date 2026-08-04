// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.Internal.PropertyBagStore
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Concurrent;
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.Jobs;

namespace Unity.Properties.Internal;

[Token(Token = "0x200006D")]
internal static class PropertyBagStore
{
	[Token(Token = "0x200006E")]
	internal struct TypedStore<TContainer>
	{
		[Token(Token = "0x4000111")]
		[FieldOffset(Offset = "0x0")]
		public static IPropertyBag<TContainer> PropertyBag;
	}

	[Token(Token = "0x400010D")]
	[FieldOffset(Offset = "0x0")]
	private static ConcurrentQueue<JobHandle> s_Handles;

	[Token(Token = "0x400010E")]
	[FieldOffset(Offset = "0x8")]
	private static readonly ConcurrentDictionary<Type, IPropertyBag> s_PropertyBags;

	[Token(Token = "0x400010F")]
	[FieldOffset(Offset = "0x10")]
	private static readonly List<Type> s_RegisteredTypes;

	[Token(Token = "0x4000110")]
	[FieldOffset(Offset = "0x18")]
	private static ReflectedPropertyBagProvider s_PropertyBagProvider;

	[Token(Token = "0x17000051")]
	private static ReflectedPropertyBagProvider ReflectedPropertyBagProvider
	{
		[Token(Token = "0x60001E3")]
		[Address(RVA = "0x4E9C000", Offset = "0x4E9C000", VA = "0x4E9C000")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x4E99ED0", Offset = "0x4E99ED0", VA = "0x4E99ED0")]
	internal static void CreatePropertyBagProvider()
	{
	}

	[Token(Token = "0x60001E5")]
	internal static void AddPropertyBag<TContainer>(IPropertyBag<TContainer> propertyBag)
	{
	}

	[Token(Token = "0x60001E6")]
	internal static IPropertyBag<TContainer> GetPropertyBag<TContainer>()
	{
		return null;
	}

	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x4E992D0", Offset = "0x4E992D0", VA = "0x4E992D0")]
	internal static IPropertyBag GetPropertyBag(Type type)
	{
		return null;
	}
}
