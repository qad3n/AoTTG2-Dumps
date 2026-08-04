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
		[Address(RVA = "0x510DCE0", Offset = "0x510DCE0", VA = "0x510DCE0", Slot = "4")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000056")]
		[Address(RVA = "0x510DD10", Offset = "0x510DD10", VA = "0x510DD10")]
		[UnityEngine.Bindings.FreeFunction("UnityXRMeshTransformList_Dispose")]
		private static extern void Dispose(IntPtr self);
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x510DC80", Offset = "0x510DC80", VA = "0x510DC80")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void InvokeMeshReadyDelegate(MeshGenerationResult result, Action<MeshGenerationResult> onMeshGenerationComplete)
	{
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x510DCA0", Offset = "0x510DCA0", VA = "0x510DCA0")]
	public XRMeshSubsystem()
	{
	}
}
