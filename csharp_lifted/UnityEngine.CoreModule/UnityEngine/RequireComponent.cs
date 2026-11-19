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

[Token(Token = "0x2000173")]
[UnityEngine.Scripting.RequiredByNativeCode]
[AttributeUsage(AttributeTargets.Class, AllowMultiple = true)]
public sealed class RequireComponent : Attribute
{
	[Token(Token = "0x40005C6")]
	[FieldOffset(Offset = "0x10")]
	public Type m_Type0;

	[Token(Token = "0x40005C7")]
	[FieldOffset(Offset = "0x18")]
	public Type m_Type1;

	[Token(Token = "0x40005C8")]
	[FieldOffset(Offset = "0x20")]
	public Type m_Type2;

	[Token(Token = "0x6000CC7")]
	[Address(RVA = "0x6911230", Offset = "0x6910230", VA = "0x6911230")]
	public RequireComponent(Type requiredComponent)
	{
	}

	[Token(Token = "0x6000CC8")]
	[Address(RVA = "0x6911260", Offset = "0x6910260", VA = "0x6911260")]
	public RequireComponent(Type requiredComponent, Type requiredComponent2)
	{
	}
}
