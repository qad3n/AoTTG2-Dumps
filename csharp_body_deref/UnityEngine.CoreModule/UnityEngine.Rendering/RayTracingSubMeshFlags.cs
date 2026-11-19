// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RayTracingSubMeshFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000358")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Graphics/RayTracingAccelerationStructure.bindings.h")]
[Flags]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/RayTracing/RayTracingAccelerationStructure.h")]
[MovedFrom("UnityEngine.Experimental.Rendering")]
public enum RayTracingSubMeshFlags
{
	[Token(Token = "0x400099D")]
	Disabled = 0,
	[Token(Token = "0x400099E")]
	Enabled = 1,
	[Token(Token = "0x400099F")]
	ClosestHitOnly = 2,
	[Token(Token = "0x40009A0")]
	UniqueAnyHitCalls = 4
}
