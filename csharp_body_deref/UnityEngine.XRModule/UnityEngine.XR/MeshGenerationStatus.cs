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
