// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.XR.XRMeshSubsystem
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.XR;

[Token(Token = "0x200001E")]
[UnityEngine.Bindings.NativeHeader("Modules/XR/XRPrefix.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeConditional("ENABLE_XR")]
[UnityEngine.Bindings.NativeHeader("Modules/XR/Subsystems/Meshing/XRMeshingSubsystem.h")]
public class XRMeshSubsystem : IntegratedSubsystem<XRMeshSubsystemDescriptor>
{
	[Token(Token = "0x200001F")]
	[UnityEngine.Bindings.NativeConditional("ENABLE_XR")]
	private readonly struct MeshTransformList : IDisposable
	{
		[Token(Token = "0x4000084")]
		[FieldOffset(Offset = "0x0")]
		private readonly IntPtr m_Self;

		[Token(Token = "0x6000071")]
		[Address(RVA = "0x3313D60", Offset = "0x3312360", VA = "0x183313D60", Slot = "4")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000072")]
		[Address(RVA = "0x3313DA0", Offset = "0x33123A0", VA = "0x183313DA0")]
		[UnityEngine.Bindings.FreeFunction("UnityXRMeshTransformList_Dispose")]
		private static extern void Dispose(IntPtr self);
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x3315570", Offset = "0x3313B70", VA = "0x183315570")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void InvokeMeshReadyDelegate(MeshGenerationResult result, Action<MeshGenerationResult> onMeshGenerationComplete)
	{
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x33155D0", Offset = "0x3313BD0", VA = "0x1833155D0")]
	public XRMeshSubsystem()
	{
	}
}
