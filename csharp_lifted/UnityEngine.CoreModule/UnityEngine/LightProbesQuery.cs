// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LightProbesQuery
// Update status: unchanged since the previous dump
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

		[Token(Token = "0x6000449")]
		[Address(RVA = "0x68CF1B0", Offset = "0x68CE1B0", VA = "0x68CF1B0")]
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

		[Token(Token = "0x600044A")]
		[Address(RVA = "0x68CF220", Offset = "0x68CE220", VA = "0x68CF220", Slot = "4")]
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

	[Token(Token = "0x6000442")]
	[Address(RVA = "0x68CEC80", Offset = "0x68CDC80", VA = "0x68CEC80")]
	public LightProbesQuery(Allocator allocator)
	{
	}

	[Token(Token = "0x6000443")]
	[Address(RVA = "0x68CED20", Offset = "0x68CDD20", VA = "0x68CED20", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000444")]
	[Address(RVA = "0x68CEE60", Offset = "0x68CDE60", VA = "0x68CEE60")]
	public JobHandle Dispose(JobHandle inputDeps)
	{
		return default(JobHandle);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000445")]
	[Address(RVA = "0x68CECF0", Offset = "0x68CDCF0", VA = "0x68CECF0")]
	private static extern IntPtr Create();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000446")]
	[Address(RVA = "0x68CEE30", Offset = "0x68CDE30", VA = "0x68CEE30")]
	[UnityEngine.Bindings.ThreadSafe]
	private static extern void Destroy(IntPtr lightProbeContextWrapper);

	[Token(Token = "0x6000447")]
	[Address(RVA = "0x68CEF40", Offset = "0x68CDF40", VA = "0x68CEF40")]
	public void CalculateInterpolatedLightAndOcclusionProbes(NativeArray<Vector3> positions, NativeArray<int> tetrahedronIndices, NativeArray<SphericalHarmonicsL2> lightProbes, NativeArray<Vector4> occlusionProbes)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000448")]
	[Address(RVA = "0x68CF150", Offset = "0x68CE150", VA = "0x68CF150")]
	[UnityEngine.Bindings.ThreadSafe]
	private static extern void CalculateInterpolatedLightAndOcclusionProbes(IntPtr lightProbeContextWrapper, IntPtr positions, IntPtr tetrahedronIndices, IntPtr lightProbes, IntPtr occlusionProbes, int count);
}
