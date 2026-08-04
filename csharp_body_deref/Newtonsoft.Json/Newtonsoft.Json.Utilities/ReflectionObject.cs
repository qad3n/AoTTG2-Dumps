// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Utilities.ReflectionObject
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Newtonsoft.Json.Serialization;

namespace Newtonsoft.Json.Utilities;

[Token(Token = "0x20000E3")]
internal class ReflectionObject
{
	[Token(Token = "0x170000DB")]
	public ObjectConstructor<object>? Creator
	{
		[Token(Token = "0x60006A1")]
		[Address(RVA = "0x3DC0A60", Offset = "0x3DC0A60", VA = "0x3DC0A60")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DC")]
	public IDictionary<string, ReflectionMember> Members
	{
		[Token(Token = "0x60006A2")]
		[Address(RVA = "0x3DC0A70", Offset = "0x3DC0A70", VA = "0x3DC0A70")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60006A3")]
	[Address(RVA = "0x3DC0A80", Offset = "0x3DC0A80", VA = "0x3DC0A80")]
	private ReflectionObject(ObjectConstructor<object>? creator)
	{
	}

	[Token(Token = "0x60006A4")]
	[Address(RVA = "0x3DC0B10", Offset = "0x3DC0B10", VA = "0x3DC0B10")]
	public object GetValue(object target, string member)
	{
		return null;
	}

	[Token(Token = "0x60006A5")]
	[Address(RVA = "0x3DC0BE0", Offset = "0x3DC0BE0", VA = "0x3DC0BE0")]
	public void SetValue(object target, string member, object? value)
	{
	}

	[Token(Token = "0x60006A6")]
	[Address(RVA = "0x3DC0CC0", Offset = "0x3DC0CC0", VA = "0x3DC0CC0")]
	public Type GetType(string member)
	{
		return null;
	}

	[Token(Token = "0x60006A7")]
	[Address(RVA = "0x3DC0D80", Offset = "0x3DC0D80", VA = "0x3DC0D80")]
	public static ReflectionObject Create(Type t, params string[] memberNames)
	{
		return null;
	}

	[Token(Token = "0x60006A8")]
	[Address(RVA = "0x3DC0D90", Offset = "0x3DC0D90", VA = "0x3DC0D90")]
	public static ReflectionObject Create(Type t, MethodBase? creator, params string[] memberNames)
	{
		return null;
	}
}
