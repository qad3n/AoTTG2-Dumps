// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.RayTracingAccelerationStructureHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x2000285")]
[DebuggerDisplay("RayTracingAccelerationStructure ({handle.index})")]
[MovedFrom(true, "UnityEngine.Experimental.Rendering.RenderGraphModule", "UnityEngine.Rendering.RenderGraphModule", null)]
public readonly struct RayTracingAccelerationStructureHandle
{
	[Token(Token = "0x4000B64")]
	[FieldOffset(Offset = "0x0")]
	private static RayTracingAccelerationStructureHandle s_NullHandle;

	[Token(Token = "0x4000B65")]
	[FieldOffset(Offset = "0x0")]
	internal readonly ResourceHandle handle;

	[Token(Token = "0x17000254")]
	public static RayTracingAccelerationStructureHandle nullHandle
	{
		[Token(Token = "0x600121B")]
		[Address(RVA = "0x657D520", Offset = "0x657C520", VA = "0x657D520")]
		get
		{
			return default(RayTracingAccelerationStructureHandle);
		}
	}

	[Token(Token = "0x600121C")]
	[Address(RVA = "0x657D570", Offset = "0x657C570", VA = "0x657D570")]
	internal RayTracingAccelerationStructureHandle(int handle)
	{
	}

	[Token(Token = "0x600121D")]
	[Address(RVA = "0x657D670", Offset = "0x657C670", VA = "0x657D670")]
	public static implicit operator RayTracingAccelerationStructure(RayTracingAccelerationStructureHandle handle)
	{
		return null;
	}

	[Token(Token = "0x600121E")]
	[Address(RVA = "0x657D800", Offset = "0x657C800", VA = "0x657D800")]
	public bool IsValid()
	{
		return default(bool);
	}
}
