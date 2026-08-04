// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.Utility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Collections;
using Unity.Profiling;
using UnityEngine.Bindings;
using UnityEngine.Rendering;
using UnityEngine.Scripting;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x200048C")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "Unity.UIElements" })]
[UnityEngine.Bindings.NativeHeader("ModuleOverrides/com.unity.ui/Core/Native/Renderer/UIRendererUtility.h")]
internal class Utility
{
	[Token(Token = "0x200048D")]
	internal enum GPUBufferType
	{
		[Token(Token = "0x4000DBD")]
		Vertex,
		[Token(Token = "0x4000DBE")]
		Index
	}

	[Token(Token = "0x200048E")]
	public class GPUBuffer<T> : IDisposable where T : struct
	{
		[Token(Token = "0x4000DBF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IntPtr buffer;

		[Token(Token = "0x4000DC0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int elemCount;

		[Token(Token = "0x4000DC1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int elemStride;

		[Token(Token = "0x1700075E")]
		public int ElementStride
		{
			[Token(Token = "0x6001C5C")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700075F")]
		internal IntPtr BufferPointer
		{
			[Token(Token = "0x6001C5D")]
			get
			{
				return default(IntPtr);
			}
		}

		[Token(Token = "0x6001C59")]
		public GPUBuffer(int elementCount, GPUBufferType type)
		{
		}

		[Token(Token = "0x6001C5A")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6001C5B")]
		public void UpdateRanges(NativeSlice<GfxUpdateBufferRange> ranges, int rangesMin, int rangesMax)
		{
		}
	}

	[Token(Token = "0x4000DB8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<IntPtr> RenderNodeAdd;

	[Token(Token = "0x4000DBA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<IntPtr> RenderNodeCleanup;

	[Token(Token = "0x4000DBB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static ProfilerMarker s_MarkerRaiseEngineUpdate;

	[Token(Token = "0x14000024")]
	public static event Action<bool> GraphicsResourcesRecreate
	{
		[Token(Token = "0x6001C2C")]
		[Address(RVA = "0x4F7E4B0", Offset = "0x4F7E4B0", VA = "0x4F7E4B0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6001C2D")]
		[Address(RVA = "0x4F7E5A0", Offset = "0x4F7E5A0", VA = "0x4F7E5A0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000025")]
	public static event Action EngineUpdate
	{
		[Token(Token = "0x6001C2E")]
		[Address(RVA = "0x4F7E690", Offset = "0x4F7E690", VA = "0x4F7E690")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6001C2F")]
		[Address(RVA = "0x4F7E770", Offset = "0x4F7E770", VA = "0x4F7E770")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000026")]
	public static event Action FlushPendingResources
	{
		[Token(Token = "0x6001C30")]
		[Address(RVA = "0x4F7E850", Offset = "0x4F7E850", VA = "0x4F7E850")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6001C31")]
		[Address(RVA = "0x4F7E930", Offset = "0x4F7E930", VA = "0x4F7E930")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000027")]
	public static event Action<Camera> RegisterIntermediateRenderers
	{
		[Token(Token = "0x6001C32")]
		[Address(RVA = "0x4F7EA10", Offset = "0x4F7EA10", VA = "0x4F7EA10")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6001C33")]
		[Address(RVA = "0x4F7EB10", Offset = "0x4F7EB10", VA = "0x4F7EB10")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000028")]
	public static event Action<IntPtr> RenderNodeExecute
	{
		[Token(Token = "0x6001C34")]
		[Address(RVA = "0x4F7EC10", Offset = "0x4F7EC10", VA = "0x4F7EC10")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6001C35")]
		[Address(RVA = "0x4F7ED10", Offset = "0x4F7ED10", VA = "0x4F7ED10")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6001C36")]
	[Address(RVA = "0x4F7EE10", Offset = "0x4F7EE10", VA = "0x4F7EE10")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RaiseGraphicsResourcesRecreate(bool recreate)
	{
	}

	[Token(Token = "0x6001C37")]
	[Address(RVA = "0x4F7EEA0", Offset = "0x4F7EEA0", VA = "0x4F7EEA0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RaiseEngineUpdate()
	{
	}

	[Token(Token = "0x6001C38")]
	[Address(RVA = "0x4F7EF80", Offset = "0x4F7EF80", VA = "0x4F7EF80")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RaiseFlushPendingResources()
	{
	}

	[Token(Token = "0x6001C39")]
	[Address(RVA = "0x4F7F000", Offset = "0x4F7F000", VA = "0x4F7F000")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RaiseRegisterIntermediateRenderers(Camera camera)
	{
	}

	[Token(Token = "0x6001C3A")]
	[Address(RVA = "0x4F7F0A0", Offset = "0x4F7F0A0", VA = "0x4F7F0A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RaiseRenderNodeAdd(IntPtr userData)
	{
	}

	[Token(Token = "0x6001C3B")]
	[Address(RVA = "0x4F7F140", Offset = "0x4F7F140", VA = "0x4F7F140")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RaiseRenderNodeExecute(IntPtr userData)
	{
	}

	[Token(Token = "0x6001C3C")]
	[Address(RVA = "0x4F7F1E0", Offset = "0x4F7F1E0", VA = "0x4F7F1E0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RaiseRenderNodeCleanup(IntPtr userData)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C3D")]
	[Address(RVA = "0x4F7F280", Offset = "0x4F7F280", VA = "0x4F7F280")]
	[UnityEngine.Bindings.ThreadSafe]
	private static extern IntPtr AllocateBuffer(int elementCount, int elementStride, bool vertexBuffer);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C3E")]
	[Address(RVA = "0x4F7F2C0", Offset = "0x4F7F2C0", VA = "0x4F7F2C0")]
	[UnityEngine.Bindings.ThreadSafe]
	private static extern void FreeBuffer(IntPtr buffer);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C3F")]
	[Address(RVA = "0x4F7F2F0", Offset = "0x4F7F2F0", VA = "0x4F7F2F0")]
	[UnityEngine.Bindings.ThreadSafe]
	private static extern void UpdateBufferRanges(IntPtr buffer, IntPtr ranges, int rangeCount, int writeRangeStart, int writeRangeEnd);

	[Token(Token = "0x6001C40")]
	[Address(RVA = "0x4F7F340", Offset = "0x4F7F340", VA = "0x4F7F340")]
	[UnityEngine.Bindings.ThreadSafe]
	public static IntPtr GetVertexDeclaration(VertexAttributeDescriptor[] vertexAttributes)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6001C41")]
	[Address(RVA = "0x4F7F460", Offset = "0x4F7F460", VA = "0x4F7F460")]
	public static void RegisterIntermediateRenderer(Camera camera, Material material, Matrix4x4 transform, Bounds aabb, int renderLayer, int shadowCasting, bool receiveShadows, int sameDistanceSortPriority, ulong sceneCullingMask, int rendererCallbackFlags, IntPtr userData, int userDataSize)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C42")]
	[Address(RVA = "0x4F7F6A0", Offset = "0x4F7F6A0", VA = "0x4F7F6A0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern void DrawRanges(IntPtr ib, IntPtr* vertexStreams, int streamCount, IntPtr ranges, int rangeCount, IntPtr vertexDecl);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C43")]
	[Address(RVA = "0x4F7F700", Offset = "0x4F7F700", VA = "0x4F7F700")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void SetPropertyBlock(MaterialPropertyBlock props);

	[Token(Token = "0x6001C44")]
	[Address(RVA = "0x4F7F730", Offset = "0x4F7F730", VA = "0x4F7F730")]
	[UnityEngine.Bindings.ThreadSafe]
	public static void SetScissorRect(RectInt scissorRect)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C45")]
	[Address(RVA = "0x4F7F800", Offset = "0x4F7F800", VA = "0x4F7F800")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void DisableScissor();

	[Token(Token = "0x6001C46")]
	[Address(RVA = "0x4F7F830", Offset = "0x4F7F830", VA = "0x4F7F830")]
	[UnityEngine.Bindings.ThreadSafe]
	public static IntPtr CreateStencilState(StencilState stencilState)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C47")]
	[Address(RVA = "0x4F7F900", Offset = "0x4F7F900", VA = "0x4F7F900")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void SetStencilState(IntPtr stencilState, int stencilRef);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C48")]
	[Address(RVA = "0x4F7F940", Offset = "0x4F7F940", VA = "0x4F7F940")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern bool HasMappedBufferRange();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C49")]
	[Address(RVA = "0x4F7F970", Offset = "0x4F7F970", VA = "0x4F7F970")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern uint InsertCPUFence();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C4A")]
	[Address(RVA = "0x4F7F9A0", Offset = "0x4F7F9A0", VA = "0x4F7F9A0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern bool CPUFencePassed(uint fence);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C4B")]
	[Address(RVA = "0x4F7F9D0", Offset = "0x4F7F9D0", VA = "0x4F7F9D0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void WaitForCPUFencePassed(uint fence);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C4C")]
	[Address(RVA = "0x4F7FA00", Offset = "0x4F7FA00", VA = "0x4F7FA00")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void SyncRenderThread();

	[Token(Token = "0x6001C4D")]
	[Address(RVA = "0x4F7FA30", Offset = "0x4F7FA30", VA = "0x4F7FA30")]
	[UnityEngine.Bindings.ThreadSafe]
	public static RectInt GetActiveViewport()
	{
		return default(RectInt);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C4E")]
	[Address(RVA = "0x4F7FAE0", Offset = "0x4F7FAE0", VA = "0x4F7FAE0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void ProfileDrawChainBegin();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C4F")]
	[Address(RVA = "0x4F7FB10", Offset = "0x4F7FB10", VA = "0x4F7FB10")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void ProfileDrawChainEnd();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C50")]
	[Address(RVA = "0x4F7FB40", Offset = "0x4F7FB40", VA = "0x4F7FB40")]
	public static extern void NotifyOfUIREvents(bool subscribe);

	[Token(Token = "0x6001C51")]
	[Address(RVA = "0x4F7FB70", Offset = "0x4F7FB70", VA = "0x4F7FB70")]
	[UnityEngine.Bindings.ThreadSafe]
	public static Matrix4x4 GetUnityProjectionMatrix()
	{
		return default(Matrix4x4);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C53")]
	[Address(RVA = "0x4F7F430", Offset = "0x4F7F430", VA = "0x4F7F430")]
	private static extern IntPtr GetVertexDeclaration_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper vertexAttributes);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C54")]
	[Address(RVA = "0x4F7F640", Offset = "0x4F7F640", VA = "0x4F7F640")]
	private static extern void RegisterIntermediateRenderer_Injected(IntPtr camera, IntPtr material, [In] ref Matrix4x4 transform, [In] ref Bounds aabb, int renderLayer, int shadowCasting, bool receiveShadows, int sameDistanceSortPriority, ulong sceneCullingMask, int rendererCallbackFlags, IntPtr userData, int userDataSize);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C55")]
	[Address(RVA = "0x4F7F7D0", Offset = "0x4F7F7D0", VA = "0x4F7F7D0")]
	private static extern void SetScissorRect_Injected([In] ref RectInt scissorRect);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C56")]
	[Address(RVA = "0x4F7F8D0", Offset = "0x4F7F8D0", VA = "0x4F7F8D0")]
	private static extern IntPtr CreateStencilState_Injected([In] ref StencilState stencilState);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C57")]
	[Address(RVA = "0x4F7FAB0", Offset = "0x4F7FAB0", VA = "0x4F7FAB0")]
	private static extern void GetActiveViewport_Injected(out RectInt ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C58")]
	[Address(RVA = "0x4F7FC20", Offset = "0x4F7FC20", VA = "0x4F7FC20")]
	private static extern void GetUnityProjectionMatrix_Injected(out Matrix4x4 ret);
}
