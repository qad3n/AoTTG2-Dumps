// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AI.NavMeshData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.AI;

[Token(Token = "0x2000008")]
[UnityEngine.Bindings.NativeHeader("Modules/AI/NavMesh/NavMesh.bindings.h")]
public sealed class NavMeshData : Object
{
	[Token(Token = "0x6000049")]
	[Address(RVA = "0x4D91A20", Offset = "0x4D91A20", VA = "0x4D91A20")]
	public NavMeshData()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004A")]
	[Address(RVA = "0x4D91AA0", Offset = "0x4D91AA0", VA = "0x4D91AA0")]
	[UnityEngine.Bindings.StaticAccessor("NavMeshDataBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static extern void Internal_Create([UnityEngine.Writable] NavMeshData mono, int agentTypeID);
}
