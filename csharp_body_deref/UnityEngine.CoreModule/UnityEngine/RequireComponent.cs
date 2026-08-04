// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.RequireComponent
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000141")]
[AttributeUsage(AttributeTargets.Class, AllowMultiple = true)]
[UnityEngine.Scripting.RequiredByNativeCode]
public sealed class RequireComponent : Attribute
{
	[Token(Token = "0x4000539")]
	[FieldOffset(Offset = "0x10")]
	public Type m_Type0;

	[Token(Token = "0x400053A")]
	[FieldOffset(Offset = "0x18")]
	public Type m_Type1;

	[Token(Token = "0x400053B")]
	[FieldOffset(Offset = "0x20")]
	public Type m_Type2;

	[Token(Token = "0x600097C")]
	[Address(RVA = "0x4DF3C40", Offset = "0x4DF3C40", VA = "0x4DF3C40")]
	public RequireComponent(Type requiredComponent)
	{
	}

	[Token(Token = "0x600097D")]
	[Address(RVA = "0x4DF3C70", Offset = "0x4DF3C70", VA = "0x4DF3C70")]
	public RequireComponent(Type requiredComponent, Type requiredComponent2)
	{
	}
}
