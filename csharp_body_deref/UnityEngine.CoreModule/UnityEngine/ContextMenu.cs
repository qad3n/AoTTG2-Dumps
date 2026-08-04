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

[Token(Token = "0x2000144")]
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

	[Token(Token = "0x6000983")]
	[Address(RVA = "0x4DF3D40", Offset = "0x4DF3D40", VA = "0x4DF3D40")]
	public ContextMenu(string itemName)
	{
	}

	[Token(Token = "0x6000984")]
	[Address(RVA = "0x4DF3D80", Offset = "0x4DF3D80", VA = "0x4DF3D80")]
	public ContextMenu(string itemName, bool isValidateFunction)
	{
	}

	[Token(Token = "0x6000985")]
	[Address(RVA = "0x4DF3DC0", Offset = "0x4DF3DC0", VA = "0x4DF3DC0")]
	public ContextMenu(string itemName, bool isValidateFunction, int priority)
	{
	}
}
