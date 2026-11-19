// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.VolumeRequiresRendererFeatures
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20001FC")]
[AttributeUsage(AttributeTargets.Class, AllowMultiple = false)]
public sealed class VolumeRequiresRendererFeatures : Attribute
{
	[Token(Token = "0x4000BFE")]
	[FieldOffset(Offset = "0x10")]
	internal HashSet<Type> TargetFeatureTypes;

	[Token(Token = "0x6000AD3")]
	[Address(RVA = "0x66B26C0", Offset = "0x66B16C0", VA = "0x66B26C0")]
	public VolumeRequiresRendererFeatures(params Type[] featureTypes)
	{
	}
}
