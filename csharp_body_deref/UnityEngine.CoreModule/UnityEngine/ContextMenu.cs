// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ContextMenu
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000176")]
[AttributeUsage(AttributeTargets.Method, AllowMultiple = true)]
[UnityEngine.Scripting.RequiredByNativeCode]
public sealed class ContextMenu : Attribute
{
	[Token(Token = "0x40005CD")]
	[FieldOffset(Offset = "0x10")]
	public readonly string menuItem;

	[Token(Token = "0x40005CE")]
	[FieldOffset(Offset = "0x18")]
	public readonly bool validate;

	[Token(Token = "0x40005CF")]
	[FieldOffset(Offset = "0x1C")]
	public readonly int priority;

	[Token(Token = "0x6000CCE")]
	[Address(RVA = "0x6911330", Offset = "0x6910330", VA = "0x6911330")]
	public ContextMenu(string itemName)
	{
	}

	[Token(Token = "0x6000CCF")]
	[Address(RVA = "0x6911370", Offset = "0x6910370", VA = "0x6911370")]
	public ContextMenu(string itemName, bool isValidateFunction)
	{
	}

	[Token(Token = "0x6000CD0")]
	[Address(RVA = "0x69113B0", Offset = "0x69103B0", VA = "0x69113B0")]
	public ContextMenu(string itemName, bool isValidateFunction, int priority)
	{
	}
}
