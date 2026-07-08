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
		[Address(RVA = "0x4C56B80", Offset = "0x4C56B80", VA = "0x4C56B80")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6001C2D")]
		[Address(RVA = "0x4C56C70", Offset = "0x4C56C70", VA = "0x4C56C70")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000025")]
	public static event Action EngineUpdate
	{
		[Token(Token = "0x6001C2E")]
		[Address(RVA = "0x4C56D60", Offset = "0x4C56D60", VA = "0x4C56D60")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6001C2F")]
		[Address(RVA = "0x4C56E40", Offset = "0x4C56E40", VA = "0x4C56E40")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000026")]
	public static event Action FlushPendingResources
	{
		[Token(Token = "0x6001C30")]
		[Address(RVA = "0x4C56F20", Offset = "0x4C56F20", VA = "0x4C56F20")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6001C31")]
		[Address(RVA = "0x4C57000", Offset = "0x4C57000", VA = "0x4C57000")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000027")]
	public static event Action<Camera> RegisterIntermediateRenderers
	{
		[Token(Token = "0x6001C32")]
		[Address(RVA = "0x4C570E0", Offset = "0x4C570E0", VA = "0x4C570E0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6001C33")]
		[Address(RVA = "0x4C571E0", Offset = "0x4C571E0", VA = "0x4C571E0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000028")]
	public static event Action<IntPtr> RenderNodeExecute
	{
		[Token(Token = "0x6001C34")]
		[Address(RVA = "0x4C572E0", Offset = "0x4C572E0", VA = "0x4C572E0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6001C35")]
		[Address(RVA = "0x4C573E0", Offset = "0x4C573E0", VA = "0x4C573E0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6001C36")]
	[Address(RVA = "0x4C574E0", Offset = "0x4C574E0", VA = "0x4C574E0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RaiseGraphicsResourcesRecreate(bool recreate)
	{
	}

	[Token(Token = "0x6001C37")]
	[Address(RVA = "0x4C57570", Offset = "0x4C57570", VA = "0x4C57570")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RaiseEngineUpdate()
	{
	}

	[Token(Token = "0x6001C38")]
	[Address(RVA = "0x4C57650", Offset = "0x4C57650", VA = "0x4C57650")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RaiseFlushPendingResources()
	{
	}

	[Token(Token = "0x6001C39")]
	[Address(RVA = "0x4C576D0", Offset = "0x4C576D0", VA = "0x4C576D0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RaiseRegisterIntermediateRenderers(Camera camera)
	{
	}

	[Token(Token = "0x6001C3A")]
	[Address(RVA = "0x4C57770", Offset = "0x4C57770", VA = "0x4C57770")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RaiseRenderNodeAdd(IntPtr userData)
	{
	}

	[Token(Token = "0x6001C3B")]
	[Address(RVA = "0x4C57810", Offset = "0x4C57810", VA = "0x4C57810")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RaiseRenderNodeExecute(IntPtr userData)
	{
	}

	[Token(Token = "0x6001C3C")]
	[Address(RVA = "0x4C578B0", Offset = "0x4C578B0", VA = "0x4C578B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RaiseRenderNodeCleanup(IntPtr userData)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C3D")]
	[Address(RVA = "0x4C57950", Offset = "0x4C57950", VA = "0x4C57950")]
	[UnityEngine.Bindings.ThreadSafe]
	private static extern IntPtr AllocateBuffer(int elementCount, int elementStride, bool vertexBuffer);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C3E")]
	[Address(RVA = "0x4C57990", Offset = "0x4C57990", VA = "0x4C57990")]
	[UnityEngine.Bindings.ThreadSafe]
	private static extern void FreeBuffer(IntPtr buffer);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C3F")]
	[Address(RVA = "0x4C579C0", Offset = "0x4C579C0", VA = "0x4C579C0")]
	[UnityEngine.Bindings.ThreadSafe]
	private static extern void UpdateBufferRanges(IntPtr buffer, IntPtr ranges, int rangeCount, int writeRangeStart, int writeRangeEnd);

	[Token(Token = "0x6001C40")]
	[Address(RVA = "0x4C57A10", Offset = "0x4C57A10", VA = "0x4C57A10")]
	[UnityEngine.Bindings.ThreadSafe]
	public static IntPtr GetVertexDeclaration(VertexAttributeDescriptor[] vertexAttributes)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6001C41")]
	[Address(RVA = "0x4C57B30", Offset = "0x4C57B30", VA = "0x4C57B30")]
	public static void RegisterIntermediateRenderer(Camera camera, Material material, Matrix4x4 transform, Bounds aabb, int renderLayer, int shadowCasting, bool receiveShadows, int sameDistanceSortPriority, ulong sceneCullingMask, int rendererCallbackFlags, IntPtr userData, int userDataSize)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C42")]
	[Address(RVA = "0x4C57D70", Offset = "0x4C57D70", VA = "0x4C57D70")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern void DrawRanges(IntPtr ib, IntPtr* vertexStreams, int streamCount, IntPtr ranges, int rangeCount, IntPtr vertexDecl);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C43")]
	[Address(RVA = "0x4C57DD0", Offset = "0x4C57DD0", VA = "0x4C57DD0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void SetPropertyBlock(MaterialPropertyBlock props);

	[Token(Token = "0x6001C44")]
	[Address(RVA = "0x4C57E00", Offset = "0x4C57E00", VA = "0x4C57E00")]
	[UnityEngine.Bindings.ThreadSafe]
	public static void SetScissorRect(RectInt scissorRect)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C45")]
	[Address(RVA = "0x4C57ED0", Offset = "0x4C57ED0", VA = "0x4C57ED0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void DisableScissor();

	[Token(Token = "0x6001C46")]
	[Address(RVA = "0x4C57F00", Offset = "0x4C57F00", VA = "0x4C57F00")]
	[UnityEngine.Bindings.ThreadSafe]
	public static IntPtr CreateStencilState(StencilState stencilState)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C47")]
	[Address(RVA = "0x4C57FD0", Offset = "0x4C57FD0", VA = "0x4C57FD0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void SetStencilState(IntPtr stencilState, int stencilRef);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C48")]
	[Address(RVA = "0x4C58010", Offset = "0x4C58010", VA = "0x4C58010")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern bool HasMappedBufferRange();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C49")]
	[Address(RVA = "0x4C58040", Offset = "0x4C58040", VA = "0x4C58040")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern uint InsertCPUFence();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C4A")]
	[Address(RVA = "0x4C58070", Offset = "0x4C58070", VA = "0x4C58070")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern bool CPUFencePassed(uint fence);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C4B")]
	[Address(RVA = "0x4C580A0", Offset = "0x4C580A0", VA = "0x4C580A0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void WaitForCPUFencePassed(uint fence);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C4C")]
	[Address(RVA = "0x4C580D0", Offset = "0x4C580D0", VA = "0x4C580D0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void SyncRenderThread();

	[Token(Token = "0x6001C4D")]
	[Address(RVA = "0x4C58100", Offset = "0x4C58100", VA = "0x4C58100")]
	[UnityEngine.Bindings.ThreadSafe]
	public static RectInt GetActiveViewport()
	{
		return default(RectInt);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C4E")]
	[Address(RVA = "0x4C581B0", Offset = "0x4C581B0", VA = "0x4C581B0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void ProfileDrawChainBegin();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C4F")]
	[Address(RVA = "0x4C581E0", Offset = "0x4C581E0", VA = "0x4C581E0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void ProfileDrawChainEnd();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C50")]
	[Address(RVA = "0x4C58210", Offset = "0x4C58210", VA = "0x4C58210")]
	public static extern void NotifyOfUIREvents(bool subscribe);

	[Token(Token = "0x6001C51")]
	[Address(RVA = "0x4C58240", Offset = "0x4C58240", VA = "0x4C58240")]
	[UnityEngine.Bindings.ThreadSafe]
	public static Matrix4x4 GetUnityProjectionMatrix()
	{
		return default(Matrix4x4);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C53")]
	[Address(RVA = "0x4C57B00", Offset = "0x4C57B00", VA = "0x4C57B00")]
	private static extern IntPtr GetVertexDeclaration_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper vertexAttributes);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C54")]
	[Address(RVA = "0x4C57D10", Offset = "0x4C57D10", VA = "0x4C57D10")]
	private static extern void RegisterIntermediateRenderer_Injected(IntPtr camera, IntPtr material, [In] ref Matrix4x4 transform, [In] ref Bounds aabb, int renderLayer, int shadowCasting, bool receiveShadows, int sameDistanceSortPriority, ulong sceneCullingMask, int rendererCallbackFlags, IntPtr userData, int userDataSize);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C55")]
	[Address(RVA = "0x4C57EA0", Offset = "0x4C57EA0", VA = "0x4C57EA0")]
	private static extern void SetScissorRect_Injected([In] ref RectInt scissorRect);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C56")]
	[Address(RVA = "0x4C57FA0", Offset = "0x4C57FA0", VA = "0x4C57FA0")]
	private static extern IntPtr CreateStencilState_Injected([In] ref StencilState stencilState);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C57")]
	[Address(RVA = "0x4C58180", Offset = "0x4C58180", VA = "0x4C58180")]
	private static extern void GetActiveViewport_Injected(out RectInt ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C58")]
	[Address(RVA = "0x4C582F0", Offset = "0x4C582F0", VA = "0x4C582F0")]
	private static extern void GetUnityProjectionMatrix_Injected(out Matrix4x4 ret);
}
