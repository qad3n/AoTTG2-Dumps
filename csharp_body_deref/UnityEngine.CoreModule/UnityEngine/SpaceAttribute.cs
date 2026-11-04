// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.SpaceAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x200015A")]
[AttributeUsage(AttributeTargets.Field, Inherited = true, AllowMultiple = true)]
public class SpaceAttribute : PropertyAttribute
{
	[Token(Token = "0x40005A4")]
	[FieldOffset(Offset = "0x18")]
	public readonly float height;

	[Token(Token = "0x6000C39")]
	[Address(RVA = "0x2F26D90", Offset = "0x2F25390", VA = "0x182F26D90")]
	public SpaceAttribute()
	{
	}

	[Token(Token = "0x6000C3A")]
	[Address(RVA = "0x2F26D60", Offset = "0x2F25360", VA = "0x182F26D60")]
	public SpaceAttribute(float height)
	{
	}
}
