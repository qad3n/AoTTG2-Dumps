// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CullingResults
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Bindings;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003A9")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ScriptableRenderLoop/ScriptableCulling.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Scripting/ScriptingCommonStructDefinitions.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/RenderPipeline/ScriptableRenderPipeline.bindings.h")]
public struct CullingResults : IEquatable<CullingResults>
{
	[Token(Token = "0x4000B8A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.VFXModule" })]
	internal IntPtr ptr;

	[Token(Token = "0x4000B8B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private unsafe CullingAllocationInfo* m_AllocationInfo;

	[Token(Token = "0x1700034E")]
	public NativeArray<VisibleLight> visibleLights
	{
		[Token(Token = "0x600160C")]
		[Address(RVA = "0x2F64970", Offset = "0x2F62F70", VA = "0x182F64970")]
		get
		{
			return default(NativeArray<VisibleLight>);
		}
	}

	[Token(Token = "0x1700034F")]
	public NativeArray<VisibleReflectionProbe> visibleReflectionProbes
	{
		[Token(Token = "0x600160D")]
		[Address(RVA = "0x2F649F0", Offset = "0x2F62FF0", VA = "0x182F649F0")]
		get
		{
			return default(NativeArray<VisibleReflectionProbe>);
		}
	}

	[Token(Token = "0x17000350")]
	public int lightAndReflectionProbeIndexCount
	{
		[Token(Token = "0x600160F")]
		[Address(RVA = "0x2F64900", Offset = "0x2F62F00", VA = "0x182F64900")]
		get
		{
			return default(int);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001602")]
	[Address(RVA = "0x2F645A0", Offset = "0x2F62BA0", VA = "0x182F645A0")]
	[UnityEngine.Bindings.FreeFunction("ScriptableRenderPipeline_Bindings::GetLightIndexCount")]
	private static extern int GetLightIndexCount(IntPtr cullingResultsPtr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001603")]
	[Address(RVA = "0x2F64720", Offset = "0x2F62D20", VA = "0x182F64720")]
	[UnityEngine.Bindings.FreeFunction("ScriptableRenderPipeline_Bindings::GetReflectionProbeIndexCount")]
	private static extern int GetReflectionProbeIndexCount(IntPtr cullingResultsPtr);

	[Token(Token = "0x6001604")]
	[Address(RVA = "0x2F644D0", Offset = "0x2F62AD0", VA = "0x182F644D0")]
	[UnityEngine.Bindings.FreeFunction("FillLightAndReflectionProbeIndices")]
	private static void FillLightAndReflectionProbeIndices(IntPtr cullingResultsPtr, ComputeBuffer computeBuffer)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001605")]
	[Address(RVA = "0x2F645E0", Offset = "0x2F62BE0", VA = "0x182F645E0")]
	[UnityEngine.Bindings.FreeFunction("GetLightIndexMapSize")]
	private static extern int GetLightIndexMapSize(IntPtr cullingResultsPtr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001606")]
	[Address(RVA = "0x2F64520", Offset = "0x2F62B20", VA = "0x182F64520")]
	[UnityEngine.Bindings.FreeFunction("FillLightIndexMapScriptable")]
	private static extern void FillLightIndexMap(IntPtr cullingResultsPtr, IntPtr indexMapPtr, int indexMapSize);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001607")]
	[Address(RVA = "0x2F648A0", Offset = "0x2F62EA0", VA = "0x182F648A0")]
	[UnityEngine.Bindings.FreeFunction("SetLightIndexMapScriptable")]
	private static extern void SetLightIndexMap(IntPtr cullingResultsPtr, IntPtr indexMapPtr, int indexMapSize);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001608")]
	[Address(RVA = "0x2F647B0", Offset = "0x2F62DB0", VA = "0x182F647B0")]
	[UnityEngine.Bindings.FreeFunction("ScriptableRenderPipeline_Bindings::GetShadowCasterBounds")]
	private static extern bool GetShadowCasterBounds(IntPtr cullingResultsPtr, int lightIndex, out Bounds bounds);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001609")]
	[Address(RVA = "0x2F64260", Offset = "0x2F62860", VA = "0x182F64260")]
	[UnityEngine.Bindings.FreeFunction("ScriptableRenderPipeline_Bindings::ComputeSpotShadowMatricesAndCullingPrimitives")]
	private static extern bool ComputeSpotShadowMatricesAndCullingPrimitives(IntPtr cullingResultsPtr, int activeLightIndex, out Matrix4x4 viewMatrix, out Matrix4x4 projMatrix, out ShadowSplitData shadowSplitData);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600160A")]
	[Address(RVA = "0x2F64200", Offset = "0x2F62800", VA = "0x182F64200")]
	[UnityEngine.Bindings.FreeFunction("ScriptableRenderPipeline_Bindings::ComputePointShadowMatricesAndCullingPrimitives")]
	private static extern bool ComputePointShadowMatricesAndCullingPrimitives(IntPtr cullingResultsPtr, int activeLightIndex, CubemapFace cubemapFace, float fovBias, out Matrix4x4 viewMatrix, out Matrix4x4 projMatrix, out ShadowSplitData shadowSplitData);

	[Token(Token = "0x600160B")]
	[Address(RVA = "0x2F64100", Offset = "0x2F62700", VA = "0x182F64100")]
	[UnityEngine.Bindings.FreeFunction("ScriptableRenderPipeline_Bindings::ComputeDirectionalShadowMatricesAndCullingPrimitives")]
	private static bool ComputeDirectionalShadowMatricesAndCullingPrimitives(IntPtr cullingResultsPtr, int activeLightIndex, int splitIndex, int splitCount, Vector3 splitRatio, int shadowResolution, float shadowNearPlaneOffset, out Matrix4x4 viewMatrix, out Matrix4x4 projMatrix, out ShadowSplitData shadowSplitData)
	{
		return default(bool);
	}

	[Token(Token = "0x600160E")]
	private unsafe NativeArray<T> GetNativeArray<T>(void* dataPointer, int length) where T : struct
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x6001610")]
	[Address(RVA = "0x2F64480", Offset = "0x2F62A80", VA = "0x182F64480")]
	public void FillLightAndReflectionProbeIndices(ComputeBuffer computeBuffer)
	{
	}

	[Token(Token = "0x6001611")]
	[Address(RVA = "0x2F64620", Offset = "0x2F62C20", VA = "0x182F64620")]
	public NativeArray<int> GetLightIndexMap(Allocator allocator)
	{
		return default(NativeArray<int>);
	}

	[Token(Token = "0x6001612")]
	[Address(RVA = "0x2F64800", Offset = "0x2F62E00", VA = "0x182F64800")]
	public void SetLightIndexMap(NativeArray<int> lightIndexMap)
	{
	}

	[Token(Token = "0x6001613")]
	[Address(RVA = "0x2F64760", Offset = "0x2F62D60", VA = "0x182F64760")]
	public bool GetShadowCasterBounds(int lightIndex, out Bounds outBounds)
	{
		return default(bool);
	}

	[Token(Token = "0x6001614")]
	[Address(RVA = "0x2F642B0", Offset = "0x2F628B0", VA = "0x182F642B0")]
	public bool ComputeSpotShadowMatricesAndCullingPrimitives(int activeLightIndex, out Matrix4x4 viewMatrix, out Matrix4x4 projMatrix, out ShadowSplitData shadowSplitData)
	{
		return default(bool);
	}

	[Token(Token = "0x6001615")]
	[Address(RVA = "0x2F641A0", Offset = "0x2F627A0", VA = "0x182F641A0")]
	public bool ComputePointShadowMatricesAndCullingPrimitives(int activeLightIndex, CubemapFace cubemapFace, float fovBias, out Matrix4x4 viewMatrix, out Matrix4x4 projMatrix, out ShadowSplitData shadowSplitData)
	{
		return default(bool);
	}

	[Token(Token = "0x6001616")]
	[Address(RVA = "0x2F64050", Offset = "0x2F62650", VA = "0x182F64050")]
	public bool ComputeDirectionalShadowMatricesAndCullingPrimitives(int activeLightIndex, int splitIndex, int splitCount, Vector3 splitRatio, int shadowResolution, float shadowNearPlaneOffset, out Matrix4x4 viewMatrix, out Matrix4x4 projMatrix, out ShadowSplitData shadowSplitData)
	{
		return default(bool);
	}

	[Token(Token = "0x6001617")]
	[Address(RVA = "0x2F643C0", Offset = "0x2F629C0", VA = "0x182F643C0", Slot = "4")]
	public bool Equals(CullingResults other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001618")]
	[Address(RVA = "0x2F64300", Offset = "0x2F62900", VA = "0x182F64300", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001619")]
	[Address(RVA = "0x2F64580", Offset = "0x2F62B80", VA = "0x182F64580", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600161A")]
	[Address(RVA = "0x2F643C0", Offset = "0x2F629C0", VA = "0x182F643C0")]
	public static bool operator ==(CullingResults left, CullingResults right)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600161B")]
	[Address(RVA = "0x2F64430", Offset = "0x2F62A30", VA = "0x182F64430")]
	private static extern void FillLightAndReflectionProbeIndices_Injected(IntPtr cullingResultsPtr, IntPtr computeBuffer);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600161C")]
	[Address(RVA = "0x2F64000", Offset = "0x2F62600", VA = "0x182F64000")]
	private static extern bool ComputeDirectionalShadowMatricesAndCullingPrimitives_Injected(IntPtr cullingResultsPtr, int activeLightIndex, int splitIndex, int splitCount, [In] ref Vector3 splitRatio, int shadowResolution, float shadowNearPlaneOffset, out Matrix4x4 viewMatrix, out Matrix4x4 projMatrix, out ShadowSplitData shadowSplitData);
}
