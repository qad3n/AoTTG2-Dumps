// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LightProbesQuery
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;
using Unity.Jobs;
using UnityEngine.Bindings;
using UnityEngine.Rendering;

namespace UnityEngine;

[Token(Token = "0x20000C8")]
[NativeContainer]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/RenderLoops/LightProbeContext.h")]
[UnityEngine.Bindings.StaticAccessor("LightProbeContextWrapper", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
public struct LightProbesQuery : IDisposable
{
	[Token(Token = "0x20000C9")]
	[NativeContainer]
	internal struct LightProbesQueryDispose
	{
		[Token(Token = "0x4000211")]
		[FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		internal IntPtr m_LightProbeContextWrapper;

		[Token(Token = "0x6000445")]
		[Address(RVA = "0x2ECC6D0", Offset = "0x2ECACD0", VA = "0x182ECC6D0")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x20000CA")]
	internal struct LightProbesQueryDisposeJob : IJob
	{
		[Token(Token = "0x4000212")]
		[FieldOffset(Offset = "0x0")]
		internal LightProbesQueryDispose Data;

		[Token(Token = "0x6000446")]
		[Address(RVA = "0x2ECC6D0", Offset = "0x2ECACD0", VA = "0x182ECC6D0", Slot = "4")]
		public void Execute()
		{
		}
	}

	[Token(Token = "0x400020F")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	internal IntPtr m_LightProbeContextWrapper;

	[Token(Token = "0x4000210")]
	[FieldOffset(Offset = "0x8")]
	internal Allocator m_AllocatorLabel;

	[Token(Token = "0x600043E")]
	[Address(RVA = "0x2ECCCF0", Offset = "0x2ECB2F0", VA = "0x182ECCCF0")]
	public LightProbesQuery(Allocator allocator)
	{
	}

	[Token(Token = "0x600043F")]
	[Address(RVA = "0x2ECCA90", Offset = "0x2ECB090", VA = "0x182ECCA90", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000440")]
	[Address(RVA = "0x2ECCBC0", Offset = "0x2ECB1C0", VA = "0x182ECCBC0")]
	public JobHandle Dispose(JobHandle inputDeps)
	{
		return default(JobHandle);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000441")]
	[Address(RVA = "0x2ECCA20", Offset = "0x2ECB020", VA = "0x182ECCA20")]
	private static extern IntPtr Create();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000442")]
	[Address(RVA = "0x2ECCA50", Offset = "0x2ECB050", VA = "0x182ECCA50")]
	[UnityEngine.Bindings.ThreadSafe]
	private static extern void Destroy(IntPtr lightProbeContextWrapper);

	[Token(Token = "0x6000443")]
	[Address(RVA = "0x2ECC790", Offset = "0x2ECAD90", VA = "0x182ECC790")]
	public void CalculateInterpolatedLightAndOcclusionProbes(NativeArray<Vector3> positions, NativeArray<int> tetrahedronIndices, NativeArray<SphericalHarmonicsL2> lightProbes, NativeArray<Vector4> occlusionProbes)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000444")]
	[Address(RVA = "0x2ECC740", Offset = "0x2ECAD40", VA = "0x182ECC740")]
	[UnityEngine.Bindings.ThreadSafe]
	private static extern void CalculateInterpolatedLightAndOcclusionProbes(IntPtr lightProbeContextWrapper, IntPtr positions, IntPtr tetrahedronIndices, IntPtr lightProbes, IntPtr occlusionProbes, int count);
}
