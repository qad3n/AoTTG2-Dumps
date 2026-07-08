using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Jobs;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000318")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/BatchRendererGroup.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/Matrix4x4.h")]
public class BatchRendererGroup
{
	[Token(Token = "0x2000319")]
	public delegate JobHandle OnPerformCulling(BatchRendererGroup rendererGroup, BatchCullingContext cullingContext, BatchCullingOutput cullingOutput, IntPtr userContext);

	[Token(Token = "0x40009DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr m_GroupHandle;

	[Token(Token = "0x40009DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private OnPerformCulling m_PerformCulling;

	[Token(Token = "0x600110A")]
	[Address(RVA = "0x4B0DAC0", Offset = "0x4B0DAC0", VA = "0x4B0DAC0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnPerformCulling(BatchRendererGroup group, ref BatchRendererCullingOutput context, ref LODParameters lodParameters, IntPtr userContext)
	{
	}
}
