// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.InstanceCullerBurst
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using AOT;
using Il2CppDummyDll;
using Unity.Burst;

namespace UnityEngine.Rendering;

[Token(Token = "0x200004F")]
[BurstCompile]
internal static class InstanceCullerBurst
{
	[Token(Token = "0x2000050")]
	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	internal unsafe delegate void SetupCullingJobInput_0000014B_0024PostfixBurstDelegate(float lodBias, float meshLodThreshold, BatchCullingContext* context, ReceiverPlanes* receiverPlanes, ReceiverSphereCuller* receiverSphereCuller, FrustumPlaneCuller* frustumPlaneCuller, float* screenRelativeMetric, float* meshLodConstant);

	[Token(Token = "0x2000051")]
	internal static class SetupCullingJobInput_0000014B_0024BurstDirectCall
	{
		[Token(Token = "0x400016E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static IntPtr Pointer;

		[Token(Token = "0x6000169")]
		[Address(RVA = "0x2BEA2A0", Offset = "0x2BE88A0", VA = "0x182BEA2A0")]
		[BurstDiscard]
		private static void GetFunctionPointerDiscard(ref IntPtr P_0)
		{
		}

		[Token(Token = "0x600016A")]
		[Address(RVA = "0x2BEA420", Offset = "0x2BE8A20", VA = "0x182BEA420")]
		private static IntPtr GetFunctionPointer()
		{
			return default(IntPtr);
		}

		[Token(Token = "0x600016B")]
		[Address(RVA = "0x2BEA590", Offset = "0x2BE8B90", VA = "0x182BEA590")]
		public unsafe static void Invoke(float lodBias, float meshLodThreshold, BatchCullingContext* context, ReceiverPlanes* receiverPlanes, ReceiverSphereCuller* receiverSphereCuller, FrustumPlaneCuller* frustumPlaneCuller, float* screenRelativeMetric, float* meshLodConstant)
		{
		}
	}

	[Token(Token = "0x6000163")]
	[Address(RVA = "0x2BDDD80", Offset = "0x2BDC380", VA = "0x182BDDD80")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	[MonoPInvokeCallback(typeof(UnityEngine_002ERendering_002ESetupCullingJobInput_0000014B_0024PostfixBurstDelegate))]
	public unsafe static void SetupCullingJobInput(float lodBias, float meshLodThreshold, BatchCullingContext* context, ReceiverPlanes* receiverPlanes, ReceiverSphereCuller* receiverSphereCuller, FrustumPlaneCuller* frustumPlaneCuller, float* screenRelativeMetric, float* meshLodConstant)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000164")]
	[Address(RVA = "0x2BDDC00", Offset = "0x2BDC200", VA = "0x182BDDC00")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	internal unsafe static void SetupCullingJobInput_0024BurstManaged(float lodBias, float meshLodThreshold, BatchCullingContext* context, ReceiverPlanes* receiverPlanes, ReceiverSphereCuller* receiverSphereCuller, FrustumPlaneCuller* frustumPlaneCuller, float* screenRelativeMetric, float* meshLodConstant)
	{
	}
}
