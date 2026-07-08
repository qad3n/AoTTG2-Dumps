using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.XR;

[Token(Token = "0x200001D")]
[UnityEngine.Bindings.NativeHeader("Modules/XR/Subsystems/Meshing/XRMeshingSubsystem.h")]
[UnityEngine.Bindings.NativeHeader("Modules/XR/XRPrefix.h")]
[UnityEngine.Bindings.NativeConditional("ENABLE_XR")]
[UnityEngine.Scripting.UsedByNativeCode]
public class XRMeshSubsystem : IntegratedSubsystem<XRMeshSubsystemDescriptor>
{
	[Token(Token = "0x200001E")]
	[UnityEngine.Bindings.NativeConditional("ENABLE_XR")]
	private readonly struct MeshTransformList : IDisposable
	{
		[Token(Token = "0x4000080")]
		[FieldOffset(Offset = "0x0")]
		private readonly IntPtr m_Self;

		[Token(Token = "0x6000055")]
		[Address(RVA = "0x4DE5C50", Offset = "0x4DE5C50", VA = "0x4DE5C50", Slot = "4")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000056")]
		[Address(RVA = "0x4DE5C80", Offset = "0x4DE5C80", VA = "0x4DE5C80")]
		[UnityEngine.Bindings.FreeFunction("UnityXRMeshTransformList_Dispose")]
		private static extern void Dispose(IntPtr self);
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x4DE5BF0", Offset = "0x4DE5BF0", VA = "0x4DE5BF0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void InvokeMeshReadyDelegate(MeshGenerationResult result, Action<MeshGenerationResult> onMeshGenerationComplete)
	{
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x4DE5C10", Offset = "0x4DE5C10", VA = "0x4DE5C10")]
	public XRMeshSubsystem()
	{
	}
}
