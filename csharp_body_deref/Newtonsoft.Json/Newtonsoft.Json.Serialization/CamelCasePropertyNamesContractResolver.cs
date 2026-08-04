// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Serialization.CamelCasePropertyNamesContractResolver
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3DC84F0", Offset = "0x3DC84F0", VA = "0x3DC84F0")]
	public CamelCasePropertyNamesContractResolver()
	{
	}

	[Token(Token = "0x600073A")]
	[Address(RVA = "0x3DC8690", Offset = "0x3DC8690", VA = "0x3DC8690", Slot = "5")]
	public override JsonContract ResolveContract(Type type)
	{
		return null;
	}

	[Token(Token = "0x600073B")]
	[Address(RVA = "0x3DC8A00", Offset = "0x3DC8A00", VA = "0x3DC8A00", Slot = "20")]
	internal override DefaultJsonNameTable GetNameTable()
	{
		return null;
	}
}
