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

[Token(Token = "0x2000172")]
[AttributeUsage(AttributeTargets.Class, AllowMultiple = true)]
[UnityEngine.Scripting.RequiredByNativeCode]
public sealed class RequireComponent : Attribute
{
	[Token(Token = "0x40005C1")]
	[FieldOffset(Offset = "0x10")]
	public Type m_Type0;

	[Token(Token = "0x40005C2")]
	[FieldOffset(Offset = "0x18")]
	public Type m_Type1;

	[Token(Token = "0x40005C3")]
	[FieldOffset(Offset = "0x20")]
	public Type m_Type2;

	[Token(Token = "0x6000CB5")]
	[Address(RVA = "0x12B8CD0", Offset = "0x12B72D0", VA = "0x1812B8CD0")]
	public RequireComponent(Type requiredComponent)
	{
	}

	[Token(Token = "0x6000CB6")]
	[Address(RVA = "0x1A291F0", Offset = "0x1A277F0", VA = "0x181A291F0")]
	public RequireComponent(Type requiredComponent, Type requiredComponent2)
	{
	}
}
