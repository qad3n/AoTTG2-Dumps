using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Newtonsoft.Json.Utilities;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x20000F9")]
public class CamelCasePropertyNamesContractResolver : DefaultContractResolver
{
	[Token(Token = "0x40004DB")]
	[FieldOffset(Offset = "0x0")]
	private static readonly object TypeContractCacheLock;

	[Token(Token = "0x40004DC")]
	[FieldOffset(Offset = "0x8")]
	private static readonly DefaultJsonNameTable NameTable;

	[Token(Token = "0x40004DD")]
	[FieldOffset(Offset = "0x10")]
	private static Dictionary<StructMultiKey<Type, Type>, JsonContract>? _contractCache;

	[Token(Token = "0x6000739")]
	[Address(RVA = "0x3AD2BA0", Offset = "0x3AD2BA0", VA = "0x3AD2BA0")]
	public CamelCasePropertyNamesContractResolver()
	{
	}

	[Token(Token = "0x600073A")]
	[Address(RVA = "0x3AD2D40", Offset = "0x3AD2D40", VA = "0x3AD2D40", Slot = "5")]
	public override JsonContract ResolveContract(Type type)
	{
		return null;
	}

	[Token(Token = "0x600073B")]
	[Address(RVA = "0x3AD30B0", Offset = "0x3AD30B0", VA = "0x3AD30B0", Slot = "20")]
	internal override DefaultJsonNameTable GetNameTable()
	{
		return null;
	}
}
