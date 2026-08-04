// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.XR.MeshVertexAttributes
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.XR;

[Token(Token = "0x200001C")]
[Flags]
[UnityEngine.Bindings.NativeHeader("Modules/XR/Subsystems/Meshing/XRMeshBindings.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public enum MeshVertexAttributes
{
	[Token(Token = "0x400007B")]
	None = 0,
	[Token(Token = "0x400007C")]
	Normals = 1,
	[Token(Token = "0x400007D")]
	Tangents = 2,
	[Token(Token = "0x400007E")]
	UVs = 4,
	[Token(Token = "0x400007F")]
	Colors = 8
}
