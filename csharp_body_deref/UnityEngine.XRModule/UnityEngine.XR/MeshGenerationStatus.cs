// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.XR.MeshGenerationStatus
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.XR;

[Token(Token = "0x2000019")]
[UnityEngine.Bindings.NativeHeader("Modules/XR/Subsystems/Meshing/XRMeshBindings.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public enum MeshGenerationStatus
{
	[Token(Token = "0x400006C")]
	Success,
	[Token(Token = "0x400006D")]
	InvalidMeshId,
	[Token(Token = "0x400006E")]
	GenerationAlreadyInProgress,
	[Token(Token = "0x400006F")]
	Canceled,
	[Token(Token = "0x4000070")]
	UnknownError
}
