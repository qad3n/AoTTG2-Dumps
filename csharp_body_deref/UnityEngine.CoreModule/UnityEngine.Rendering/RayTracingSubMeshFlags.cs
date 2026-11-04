// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RayTracingSubMeshFlags
// Update status: NEW in this game update
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
[Flags]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Graphics/RayTracingAccelerationStructure.bindings.h")]
[MovedFrom("UnityEngine.Experimental.Rendering")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/RayTracing/RayTracingAccelerationStructure.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public enum RayTracingSubMeshFlags
{
	[Token(Token = "0x400099F")]
	Disabled = 0,
	[Token(Token = "0x40009A0")]
	Enabled = 1,
	[Token(Token = "0x40009A1")]
	ClosestHitOnly = 2,
	[Token(Token = "0x40009A2")]
	UniqueAnyHitCalls = 4
}
