using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.AI;

[Token(Token = "0x2000008")]
[UnityEngine.Bindings.NativeHeader("Modules/AI/NavMesh/NavMesh.bindings.h")]
public sealed class NavMeshData : Object
{
	[Token(Token = "0x6000049")]
	[Address(RVA = "0x4A6A200", Offset = "0x4A6A200", VA = "0x4A6A200")]
	public NavMeshData()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004A")]
	[Address(RVA = "0x4A6A280", Offset = "0x4A6A280", VA = "0x4A6A280")]
	[UnityEngine.Bindings.StaticAccessor("NavMeshDataBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static extern void Internal_Create([UnityEngine.Writable] NavMeshData mono, int agentTypeID);
}
