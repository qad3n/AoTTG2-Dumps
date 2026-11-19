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
		[Address(RVA = "0x55B9A90", Offset = "0x55B8A90", VA = "0x55B9A90")]
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
		[Address(RVA = "0x55B9AA0", Offset = "0x55B8AA0", VA = "0x55B9AA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60006A3")]
	[Address(RVA = "0x55B9AB0", Offset = "0x55B8AB0", VA = "0x55B9AB0")]
	private ReflectionObject(ObjectConstructor<object>? creator)
	{
	}

	[Token(Token = "0x60006A4")]
	[Address(RVA = "0x55B9B40", Offset = "0x55B8B40", VA = "0x55B9B40")]
	public object GetValue(object target, string member)
	{
		return null;
	}

	[Token(Token = "0x60006A5")]
	[Address(RVA = "0x55B9C10", Offset = "0x55B8C10", VA = "0x55B9C10")]
	public void SetValue(object target, string member, object? value)
	{
	}

	[Token(Token = "0x60006A6")]
	[Address(RVA = "0x55B9CF0", Offset = "0x55B8CF0", VA = "0x55B9CF0")]
	public Type GetType(string member)
	{
		return null;
	}

	[Token(Token = "0x60006A7")]
	[Address(RVA = "0x55B9DB0", Offset = "0x55B8DB0", VA = "0x55B9DB0")]
	public static ReflectionObject Create(Type t, params string[] memberNames)
	{
		return null;
	}

	[Token(Token = "0x60006A8")]
	[Address(RVA = "0x55B9DC0", Offset = "0x55B8DC0", VA = "0x55B9DC0")]
	public static ReflectionObject Create(Type t, MethodBase? creator, params string[] memberNames)
	{
		return null;
	}
}
