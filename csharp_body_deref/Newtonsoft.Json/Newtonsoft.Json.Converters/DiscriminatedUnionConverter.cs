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
		[Address(RVA = "0x3B4C6A0", Offset = "0x3B4C6A0", VA = "0x3B4C6A0")]
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
		[Address(RVA = "0x3B4C6E0", Offset = "0x3B4C6E0", VA = "0x3B4C6E0")]
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
	[Address(RVA = "0x3B4B9A0", Offset = "0x3B4B9A0", VA = "0x3B4B9A0")]
	private static Type CreateUnionTypeLookup(Type t)
	{
		return null;
	}

	[Token(Token = "0x6000EB3")]
	[Address(RVA = "0x3B4BC30", Offset = "0x3B4BC30", VA = "0x3B4BC30")]
	private static Union CreateUnion(Type t)
	{
		return null;
	}

	[Token(Token = "0x6000EB4")]
	[Address(RVA = "0x3B4C760", Offset = "0x3B4C760", VA = "0x3B4C760", Slot = "4")]
	public override void WriteJson(JsonWriter writer, object? value, JsonSerializer serializer)
	{
	}

	[Token(Token = "0x6000EB5")]
	[Address(RVA = "0x3B4CC70", Offset = "0x3B4CC70", VA = "0x3B4CC70", Slot = "5")]
	public override object ReadJson(JsonReader reader, Type objectType, object? existingValue, JsonSerializer serializer)
	{
		return null;
	}

	[Token(Token = "0x6000EB6")]
	[Address(RVA = "0x3B4D3E0", Offset = "0x3B4D3E0", VA = "0x3B4D3E0", Slot = "6")]
	public override bool CanConvert(Type objectType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EB7")]
	[Address(RVA = "0x3B4D690", Offset = "0x3B4D690", VA = "0x3B4D690")]
	public DiscriminatedUnionConverter()
	{
	}
}
