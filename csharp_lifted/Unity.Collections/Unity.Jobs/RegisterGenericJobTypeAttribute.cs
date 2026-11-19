// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Jobs.RegisterGenericJobTypeAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace Unity.Jobs;

[Token(Token = "0x2000015")]
[MovedFrom(true, "Unity.Entities", "Unity.Entities", null)]
[AttributeUsage(AttributeTargets.Assembly, AllowMultiple = true)]
public class RegisterGenericJobTypeAttribute : Attribute
{
	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x10")]
	public Type ConcreteType;

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x6359DA0", Offset = "0x6358DA0", VA = "0x6359DA0")]
	public RegisterGenericJobTypeAttribute(Type type)
	{
	}
}
