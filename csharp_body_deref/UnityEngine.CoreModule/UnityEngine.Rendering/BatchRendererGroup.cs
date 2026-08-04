// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BatchRendererGroup
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Jobs;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x200031B")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/BatchRendererGroup.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/Matrix4x4.h")]
public class BatchRendererGroup
{
	[Token(Token = "0x200031C")]
	public delegate JobHandle OnPerformCulling(BatchRendererGroup rendererGroup, BatchCullingContext cullingContext, BatchCullingOutput cullingOutput, IntPtr userContext);

	[Token(Token = "0x40009DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr m_GroupHandle;

	[Token(Token = "0x40009DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private OnPerformCulling m_PerformCulling;

	[Token(Token = "0x600110C")]
	[Address(RVA = "0x4E353F0", Offset = "0x4E353F0", VA = "0x4E353F0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnPerformCulling(BatchRendererGroup group, ref BatchRendererCullingOutput context, ref LODParameters lodParameters, IntPtr userContext)
	{
	}
}
