using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000141")]
[UnityEngine.Scripting.RequiredByNativeCode]
[AttributeUsage(AttributeTargets.Method, AllowMultiple = true)]
public sealed class ContextMenu : Attribute
{
	[Token(Token = "0x4000540")]
	[FieldOffset(Offset = "0x10")]
	public readonly string menuItem;

	[Token(Token = "0x4000541")]
	[FieldOffset(Offset = "0x18")]
	public readonly bool validate;

	[Token(Token = "0x4000542")]
	[FieldOffset(Offset = "0x1C")]
	public readonly int priority;

	[Token(Token = "0x6000981")]
	[Address(RVA = "0x4ACC410", Offset = "0x4ACC410", VA = "0x4ACC410")]
	public ContextMenu(string itemName)
	{
	}

	[Token(Token = "0x6000982")]
	[Address(RVA = "0x4ACC450", Offset = "0x4ACC450", VA = "0x4ACC450")]
	public ContextMenu(string itemName, bool isValidateFunction)
	{
	}

	[Token(Token = "0x6000983")]
	[Address(RVA = "0x4ACC490", Offset = "0x4ACC490", VA = "0x4ACC490")]
	public ContextMenu(string itemName, bool isValidateFunction, int priority)
	{
	}
}
