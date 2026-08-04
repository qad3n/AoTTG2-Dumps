// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Converters.DiscriminatedUnionConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;
using Newtonsoft.Json.Utilities;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001B1")]
public class DiscriminatedUnionConverter : JsonConverter
{
	[Token(Token = "0x20001B2")]
	internal class Union
	{
		[Token(Token = "0x40007F6")]
		[FieldOffset(Offset = "0x10")]
		public readonly FSharpFunction TagReader;

		[Token(Token = "0x40007F7")]
		[FieldOffset(Offset = "0x18")]
		public readonly List<UnionCase> Cases;

		[Token(Token = "0x6000EB9")]
		[Address(RVA = "0x3E41FF0", Offset = "0x3E41FF0", VA = "0x3E41FF0")]
		public Union(FSharpFunction tagReader, List<UnionCase> cases)
		{
		}
	}

	[Token(Token = "0x20001B3")]
	internal class UnionCase
	{
		[Token(Token = "0x40007F8")]
		[FieldOffset(Offset = "0x10")]
		public readonly int Tag;

		[Token(Token = "0x40007F9")]
		[FieldOffset(Offset = "0x18")]
		public readonly string Name;

		[Token(Token = "0x40007FA")]
		[FieldOffset(Offset = "0x20")]
		public readonly PropertyInfo[] Fields;

		[Token(Token = "0x40007FB")]
		[FieldOffset(Offset = "0x28")]
		public readonly FSharpFunction FieldReader;

		[Token(Token = "0x40007FC")]
		[FieldOffset(Offset = "0x30")]
		public readonly FSharpFunction Constructor;

		[Token(Token = "0x6000EBA")]
		[Address(RVA = "0x3E42030", Offset = "0x3E42030", VA = "0x3E42030")]
		public UnionCase(int tag, string name, PropertyInfo[] fields, FSharpFunction fieldReader, FSharpFunction constructor)
		{
		}
	}

	[Token(Token = "0x40007F2")]
	private const string CasePropertyName = "Case";

	[Token(Token = "0x40007F3")]
	private const string FieldsPropertyName = "Fields";

	[Token(Token = "0x40007F4")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ThreadSafeStore<Type, Union> UnionCache;

	[Token(Token = "0x40007F5")]
	[FieldOffset(Offset = "0x8")]
	private static readonly ThreadSafeStore<Type, Type> UnionTypeLookupCache;

	[Token(Token = "0x6000EB2")]
	[Address(RVA = "0x3E412F0", Offset = "0x3E412F0", VA = "0x3E412F0")]
	private static Type CreateUnionTypeLookup(Type t)
	{
		return null;
	}

	[Token(Token = "0x6000EB3")]
	[Address(RVA = "0x3E41580", Offset = "0x3E41580", VA = "0x3E41580")]
	private static Union CreateUnion(Type t)
	{
		return null;
	}

	[Token(Token = "0x6000EB4")]
	[Address(RVA = "0x3E420B0", Offset = "0x3E420B0", VA = "0x3E420B0", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000EB5")]
	[Address(RVA = "0x3E425C0", Offset = "0x3E425C0", VA = "0x3E425C0", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000EB6")]
	[Address(RVA = "0x3E42D30", Offset = "0x3E42D30", VA = "0x3E42D30", Slot = "6")]
	public override bool CanConvert(Type objectType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EB7")]
	[Address(RVA = "0x3E42FE0", Offset = "0x3E42FE0", VA = "0x3E42FE0")]
	public DiscriminatedUnionConverter()
	{
	}
}
