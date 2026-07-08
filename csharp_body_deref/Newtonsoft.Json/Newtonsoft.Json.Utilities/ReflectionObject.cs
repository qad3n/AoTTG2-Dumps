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
		[Address(RVA = "0x3ACB110", Offset = "0x3ACB110", VA = "0x3ACB110")]
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
		[Address(RVA = "0x3ACB120", Offset = "0x3ACB120", VA = "0x3ACB120")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60006A3")]
	[Address(RVA = "0x3ACB130", Offset = "0x3ACB130", VA = "0x3ACB130")]
	private ReflectionObject(ObjectConstructor<object>? creator)
	{
	}

	[Token(Token = "0x60006A4")]
	[Address(RVA = "0x3ACB1C0", Offset = "0x3ACB1C0", VA = "0x3ACB1C0")]
	public object GetValue(object target, string member)
	{
		return null;
	}

	[Token(Token = "0x60006A5")]
	[Address(RVA = "0x3ACB290", Offset = "0x3ACB290", VA = "0x3ACB290")]
	public void SetValue(object target, string member, object? value)
	{
	}

	[Token(Token = "0x60006A6")]
	[Address(RVA = "0x3ACB370", Offset = "0x3ACB370", VA = "0x3ACB370")]
	public Type GetType(string member)
	{
		return null;
	}

	[Token(Token = "0x60006A7")]
	[Address(RVA = "0x3ACB430", Offset = "0x3ACB430", VA = "0x3ACB430")]
	public static ReflectionObject Create(Type t, params string[] memberNames)
	{
		return null;
	}

	[Token(Token = "0x60006A8")]
	[Address(RVA = "0x3ACB440", Offset = "0x3ACB440", VA = "0x3ACB440")]
	public static ReflectionObject Create(Type t, MethodBase? creator, params string[] memberNames)
	{
		return null;
	}
}
