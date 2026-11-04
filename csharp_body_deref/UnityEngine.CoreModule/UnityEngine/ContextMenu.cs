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

[Token(Token = "0x2000175")]
[UnityEngine.Scripting.RequiredByNativeCode]
[AttributeUsage(AttributeTargets.Method, AllowMultiple = true)]
public sealed class ContextMenu : Attribute
{
	[Token(Token = "0x40005C8")]
	[FieldOffset(Offset = "0x10")]
	public readonly string menuItem;

	[Token(Token = "0x40005C9")]
	[FieldOffset(Offset = "0x18")]
	public readonly bool validate;

	[Token(Token = "0x40005CA")]
	[FieldOffset(Offset = "0x1C")]
	public readonly int priority;

	[Token(Token = "0x6000CBC")]
	[Address(RVA = "0x2F16870", Offset = "0x2F14E70", VA = "0x182F16870")]
	public ContextMenu(string itemName)
	{
	}

	[Token(Token = "0x6000CBD")]
	[Address(RVA = "0x2F16820", Offset = "0x2F14E20", VA = "0x182F16820")]
	public ContextMenu(string itemName, bool isValidateFunction)
	{
	}

	[Token(Token = "0x6000CBE")]
	[Address(RVA = "0x2F167E0", Offset = "0x2F14DE0", VA = "0x182F167E0")]
	public ContextMenu(string itemName, bool isValidateFunction, int priority)
	{
	}
}
