// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.MakeSerializableAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20001CC")]
[AttributeUsage(AttributeTargets.Assembly, AllowMultiple = true)]
[UnityEngine.Scripting.RequiredByNativeCode]
public sealed class MakeSerializableAttribute : Attribute
{
	[Token(Token = "0x4000665")]
	[FieldOffset(Offset = "0x10")]
	private Type serializableType;

	[Token(Token = "0x6000EFF")]
	[Address(RVA = "0x6924060", Offset = "0x6923060", VA = "0x6924060")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private Type GetSerializableType()
	{
		return null;
	}
}
