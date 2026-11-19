// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CullingResults
// Update status: unchanged since the previous dump
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

[Token(Token = "0x200037D")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ScriptableRenderLoop/ScriptableCulling.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Scripting/ScriptingCommonStructDefinitions.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/RenderPipeline/ScriptableRenderPipeline.bindings.h")]
public struct CullingResults : IEquatable<CullingResults>
{
	[Token(Token = "0x4000A6A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.VFXModule" })]
	internal IntPtr ptr;

	[Token(Token = "0x4000A6B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private unsafe CullingAllocationInfo* m_AllocationInfo;

	[Token(Token = "0x1700033C")]
	public NativeArray<VisibleLight> visibleLights
	{
		[Token(Token = "0x60015B1")]
		[Address(RVA = "0x6959C80", Offset = "0x6958C80", VA = "0x6959C80")]
		get
		{
			return default(NativeArray<VisibleLight>);
		}
	}

	[Token(Token = "0x1700033D")]
	public NativeArray<VisibleReflectionProbe> visibleReflectionProbes
	{
		[Token(Token = "0x60015B2")]
		[Address(RVA = "0x6959CD0", Offset = "0x6958CD0", VA = "0x6959CD0")]
		get
		{
			return default(NativeArray<VisibleReflectionProbe>);
		}
	}

	[Token(Token = "0x1700033E")]
	public int lightAndReflectionProbeIndexCount
	{
		[Token(Token = "0x60015B4")]
		[Address(RVA = "0x6959D20", Offset = "0x6958D20", VA = "0x6959D20")]
		get
		{
			return default(int);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60015A7")]
	[Address(RVA = "0x69598C0", Offset = "0x69588C0", VA = "0x69598C0")]
	[UnityEngine.Bindings.FreeFunction("ScriptableRenderPipeline_Bindings::GetLightIndexCount")]
	private static extern int GetLightIndexCount(IntPtr cullingResultsPtr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60015A8")]
	[Address(RVA = "0x69598F0", Offset = "0x69588F0", VA = "0x69598F0")]
	[UnityEngine.Bindings.FreeFunction("ScriptableRenderPipeline_Bindings::GetReflectionProbeIndexCount")]
	private static extern int GetReflectionProbeIndexCount(IntPtr cullingResultsPtr);

	[Token(Token = "0x60015A9")]
	[Address(RVA = "0x6959920", Offset = "0x6958920", VA = "0x6959920")]
	[UnityEngine.Bindings.FreeFunction("FillLightAndReflectionProbeIndices")]
	private static void FillLightAndReflectionProbeIndices(IntPtr cullingResultsPtr, ComputeBuffer computeBuffer)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60015AA")]
	[Address(RVA = "0x69599B0", Offset = "0x69589B0", VA = "0x69599B0")]
	[UnityEngine.Bindings.FreeFunction("GetLightIndexMapSize")]
	private static extern int GetLightIndexMapSize(IntPtr cullingResultsPtr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60015AB")]
	[Address(RVA = "0x69599E0", Offset = "0x69589E0", VA = "0x69599E0")]
	[UnityEngine.Bindings.FreeFunction("FillLightIndexMapScriptable")]
	private static extern void FillLightIndexMap(IntPtr cullingResultsPtr, IntPtr indexMapPtr, int indexMapSize);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60015AC")]
	[Address(RVA = "0x6959A20", Offset = "0x6958A20", VA = "0x6959A20")]
	[UnityEngine.Bindings.FreeFunction("SetLightIndexMapScriptable")]
	private static extern void SetLightIndexMap(IntPtr cullingResultsPtr, IntPtr indexMapPtr, int indexMapSize);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60015AD")]
	[Address(RVA = "0x6959A60", Offset = "0x6958A60", VA = "0x6959A60")]
	[UnityEngine.Bindings.FreeFunction("ScriptableRenderPipeline_Bindings::GetShadowCasterBounds")]
	private static extern bool GetShadowCasterBounds(IntPtr cullingResultsPtr, int lightIndex, out Bounds bounds);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60015AE")]
	[Address(RVA = "0x6959AA0", Offset = "0x6958AA0", VA = "0x6959AA0")]
	[UnityEngine.Bindings.FreeFunction("ScriptableRenderPipeline_Bindings::ComputeSpotShadowMatricesAndCullingPrimitives")]
	private static extern bool ComputeSpotShadowMatricesAndCullingPrimitives(IntPtr cullingResultsPtr, int activeLightIndex, out Matrix4x4 viewMatrix, out Matrix4x4 projMatrix, out ShadowSplitData shadowSplitData);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60015AF")]
	[Address(RVA = "0x6959AF0", Offset = "0x6958AF0", VA = "0x6959AF0")]
	[UnityEngine.Bindings.FreeFunction("ScriptableRenderPipeline_Bindings::ComputePointShadowMatricesAndCullingPrimitives")]
	private static extern bool ComputePointShadowMatricesAndCullingPrimitives(IntPtr cullingResultsPtr, int activeLightIndex, CubemapFace cubemapFace, float fovBias, out Matrix4x4 viewMatrix, out Matrix4x4 projMatrix, out ShadowSplitData shadowSplitData);

	[Token(Token = "0x60015B0")]
	[Address(RVA = "0x6959B60", Offset = "0x6958B60", VA = "0x6959B60")]
	[UnityEngine.Bindings.FreeFunction("ScriptableRenderPipeline_Bindings::ComputeDirectionalShadowMatricesAndCullingPrimitives")]
	private static bool ComputeDirectionalShadowMatricesAndCullingPrimitives(IntPtr cullingResultsPtr, int activeLightIndex, int splitIndex, int splitCount, Vector3 splitRatio, int shadowResolution, float shadowNearPlaneOffset, out Matrix4x4 viewMatrix, out Matrix4x4 projMatrix, out ShadowSplitData shadowSplitData)
	{
		return default(bool);
	}

	[Token(Token = "0x60015B3")]
	private unsafe NativeArray<T> GetNativeArray<T>(void* dataPointer, int length) where T : struct
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x60015B5")]
	[Address(RVA = "0x6959D90", Offset = "0x6958D90", VA = "0x6959D90")]
	public void FillLightAndReflectionProbeIndices(ComputeBuffer computeBuffer)
	{
	}

	[Token(Token = "0x60015B6")]
	[Address(RVA = "0x6959DF0", Offset = "0x6958DF0", VA = "0x6959DF0")]
	public NativeArray<int> GetLightIndexMap(Allocator allocator)
	{
		return default(NativeArray<int>);
	}

	[Token(Token = "0x60015B7")]
	[Address(RVA = "0x6959EE0", Offset = "0x6958EE0", VA = "0x6959EE0")]
	public void SetLightIndexMap(NativeArray<int> lightIndexMap)
	{
	}

	[Token(Token = "0x60015B8")]
	[Address(RVA = "0x6959F70", Offset = "0x6958F70", VA = "0x6959F70")]
	public bool GetShadowCasterBounds(int lightIndex, out Bounds outBounds)
	{
		return default(bool);
	}

	[Token(Token = "0x60015B9")]
	[Address(RVA = "0x6959FB0", Offset = "0x6958FB0", VA = "0x6959FB0")]
	public bool ComputeSpotShadowMatricesAndCullingPrimitives(int activeLightIndex, out Matrix4x4 viewMatrix, out Matrix4x4 projMatrix, out ShadowSplitData shadowSplitData)
	{
		return default(bool);
	}

	[Token(Token = "0x60015BA")]
	[Address(RVA = "0x695A000", Offset = "0x6959000", VA = "0x695A000")]
	public bool ComputePointShadowMatricesAndCullingPrimitives(int activeLightIndex, CubemapFace cubemapFace, float fovBias, out Matrix4x4 viewMatrix, out Matrix4x4 projMatrix, out ShadowSplitData shadowSplitData)
	{
		return default(bool);
	}

	[Token(Token = "0x60015BB")]
	[Address(RVA = "0x695A070", Offset = "0x6959070", VA = "0x695A070")]
	public bool ComputeDirectionalShadowMatricesAndCullingPrimitives(int activeLightIndex, int splitIndex, int splitCount, Vector3 splitRatio, int shadowResolution, float shadowNearPlaneOffset, out Matrix4x4 viewMatrix, out Matrix4x4 projMatrix, out ShadowSplitData shadowSplitData)
	{
		return default(bool);
	}

	[Token(Token = "0x60015BC")]
	[Address(RVA = "0x695A120", Offset = "0x6959120", VA = "0x695A120", Slot = "4")]
	public bool Equals(CullingResults other)
	{
		return default(bool);
	}

	[Token(Token = "0x60015BD")]
	[Address(RVA = "0x695A170", Offset = "0x6959170", VA = "0x695A170", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60015BE")]
	[Address(RVA = "0x695A210", Offset = "0x6959210", VA = "0x695A210", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60015BF")]
	[Address(RVA = "0x695A230", Offset = "0x6959230", VA = "0x695A230")]
	public static bool operator ==(CullingResults left, CullingResults right)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60015C0")]
	[Address(RVA = "0x6959970", Offset = "0x6958970", VA = "0x6959970")]
	private static extern void FillLightAndReflectionProbeIndices_Injected(IntPtr cullingResultsPtr, IntPtr computeBuffer);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60015C1")]
	[Address(RVA = "0x6959C10", Offset = "0x6958C10", VA = "0x6959C10")]
	private static extern bool ComputeDirectionalShadowMatricesAndCullingPrimitives_Injected(IntPtr cullingResultsPtr, int activeLightIndex, int splitIndex, int splitCount, [In] ref Vector3 splitRatio, int shadowResolution, float shadowNearPlaneOffset, out Matrix4x4 viewMatrix, out Matrix4x4 projMatrix, out ShadowSplitData shadowSplitData);
}
