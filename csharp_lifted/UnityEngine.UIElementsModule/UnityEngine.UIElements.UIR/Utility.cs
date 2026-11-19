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

[Token(Token = "0x200056A")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "Unity.UIElements" })]
[UnityEngine.Bindings.NativeHeader("Modules/UIElements/Core/Native/Renderer/UIRendererUtility.h")]
internal class Utility
{
	[Token(Token = "0x200056B")]
	internal enum GPUBufferType
	{
		[Token(Token = "0x4001264")]
		Vertex,
		[Token(Token = "0x4001265")]
		Index
	}

	[Token(Token = "0x200056C")]
	public class GPUBuffer<T> : IDisposable where T : struct
	{
		[Token(Token = "0x4001266")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IntPtr buffer;

		[Token(Token = "0x4001267")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int elemCount;

		[Token(Token = "0x4001268")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int elemStride;

		[Token(Token = "0x17000A48")]
		public int ElementStride
		{
			[Token(Token = "0x60028DC")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000A49")]
		internal IntPtr BufferPointer
		{
			[Token(Token = "0x60028DD")]
			get
			{
				return default(IntPtr);
			}
		}

		[Token(Token = "0x60028D9")]
		public GPUBuffer(int elementCount, GPUBufferType type)
		{
		}

		[Token(Token = "0x60028DA")]
		public void Dispose()
		{
		}

		[Token(Token = "0x60028DB")]
		public void UpdateRanges(NativeSlice<GfxUpdateBufferRange> ranges, int rangesMin, int rangesMax)
		{
		}
	}

	[Token(Token = "0x400125F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<bool> m_GraphicsResourcesRecreate;

	[Token(Token = "0x4001260")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action m_EngineUpdate;

	[Token(Token = "0x4001261")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action m_FlushPendingResources;

	[Token(Token = "0x4001262")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static ProfilerMarker s_MarkerRaiseEngineUpdate;

	[Token(Token = "0x1400002F")]
	public static event Action<bool> GraphicsResourcesRecreate
	{
		[Token(Token = "0x60028AF")]
		[Address(RVA = "0x6B772D0", Offset = "0x6B762D0", VA = "0x6B772D0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60028B0")]
		[Address(RVA = "0x6B773C0", Offset = "0x6B763C0", VA = "0x6B773C0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000030")]
	public static event Action EngineUpdate
	{
		[Token(Token = "0x60028B1")]
		[Address(RVA = "0x6B774B0", Offset = "0x6B764B0", VA = "0x6B774B0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60028B2")]
		[Address(RVA = "0x6B77590", Offset = "0x6B76590", VA = "0x6B77590")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000031")]
	public static event Action FlushPendingResources
	{
		[Token(Token = "0x60028B3")]
		[Address(RVA = "0x6B77670", Offset = "0x6B76670", VA = "0x6B77670")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60028B4")]
		[Address(RVA = "0x6B77750", Offset = "0x6B76750", VA = "0x6B77750")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60028AE")]
	[Address(RVA = "0x6B77160", Offset = "0x6B76160", VA = "0x6B77160")]
	public static void SetVectorArray(IntPtr shaderPropertySheet, int nameID, Vector4[] vector4s)
	{
	}

	[Token(Token = "0x60028B5")]
	[Address(RVA = "0x6B77830", Offset = "0x6B76830", VA = "0x6B77830")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RaiseGraphicsResourcesRecreate(bool recreate)
	{
	}

	[Token(Token = "0x60028B6")]
	[Address(RVA = "0x6B778C0", Offset = "0x6B768C0", VA = "0x6B778C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RaiseEngineUpdate()
	{
	}

	[Token(Token = "0x60028B7")]
	[Address(RVA = "0x6B779A0", Offset = "0x6B769A0", VA = "0x6B779A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RaiseFlushPendingResources()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028B8")]
	[Address(RVA = "0x6B77A20", Offset = "0x6B76A20", VA = "0x6B77A20")]
	[UnityEngine.Bindings.ThreadSafe]
	private static extern IntPtr AllocateBuffer(int elementCount, int elementStride, bool vertexBuffer);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028B9")]
	[Address(RVA = "0x6B77A60", Offset = "0x6B76A60", VA = "0x6B77A60")]
	[UnityEngine.Bindings.ThreadSafe]
	private static extern void FreeBuffer(IntPtr buffer);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028BA")]
	[Address(RVA = "0x6B77A90", Offset = "0x6B76A90", VA = "0x6B77A90")]
	[UnityEngine.Bindings.ThreadSafe]
	private static extern void UpdateBufferRanges(IntPtr buffer, IntPtr ranges, int rangeCount, int writeRangeStart, int writeRangeEnd);

	[Token(Token = "0x60028BB")]
	[Address(RVA = "0x6B771C0", Offset = "0x6B761C0", VA = "0x6B771C0")]
	[UnityEngine.Bindings.ThreadSafe]
	private static void SetVectorArray(IntPtr shaderPropertySheet, int name, Vector4[] values, int count)
	{
	}

	[Token(Token = "0x60028BC")]
	[Address(RVA = "0x6B77B30", Offset = "0x6B76B30", VA = "0x6B77B30")]
	[UnityEngine.Bindings.ThreadSafe]
	public static IntPtr GetVertexDeclaration(VertexAttributeDescriptor[] vertexAttributes)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028BD")]
	[Address(RVA = "0x6B77C50", Offset = "0x6B76C50", VA = "0x6B77C50")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern void DrawRanges(IntPtr ib, IntPtr* vertexStreams, int streamCount, IntPtr ranges, int rangeCount, IntPtr vertexDecl);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028BE")]
	[Address(RVA = "0x6B77CB0", Offset = "0x6B76CB0", VA = "0x6B77CB0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr AllocateShaderPropertySheet();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028BF")]
	[Address(RVA = "0x6B77CE0", Offset = "0x6B76CE0", VA = "0x6B77CE0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void SetAllTextures(IntPtr shaderPropertySheet, IntPtr textureNames, IntPtr texturePtrs, int count);

	[Token(Token = "0x60028C0")]
	[Address(RVA = "0x6B77D30", Offset = "0x6B76D30", VA = "0x6B77D30")]
	[UnityEngine.Bindings.ThreadSafe]
	public static void SetPropertyBlock(MaterialPropertyBlock props)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028C1")]
	[Address(RVA = "0x6B77DF0", Offset = "0x6B76DF0", VA = "0x6B77DF0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void ApplyShaderPropertySheet(IntPtr shaderPropertySheet);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028C2")]
	[Address(RVA = "0x6B77E20", Offset = "0x6B76E20", VA = "0x6B77E20")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void ReleasePropertySheet(IntPtr shaderPropertySheet);

	[Token(Token = "0x60028C3")]
	[Address(RVA = "0x6B77E50", Offset = "0x6B76E50", VA = "0x6B77E50")]
	[UnityEngine.Bindings.ThreadSafe]
	public static void SetScissorRect(RectInt scissorRect)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028C4")]
	[Address(RVA = "0x6B77F20", Offset = "0x6B76F20", VA = "0x6B77F20")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void DisableScissor();

	[Token(Token = "0x60028C5")]
	[Address(RVA = "0x6B77F50", Offset = "0x6B76F50", VA = "0x6B77F50")]
	[UnityEngine.Bindings.ThreadSafe]
	public static IntPtr CreateStencilState(StencilState stencilState)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028C6")]
	[Address(RVA = "0x6B78020", Offset = "0x6B77020", VA = "0x6B78020")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void SetStencilState(IntPtr stencilState, int stencilRef);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028C7")]
	[Address(RVA = "0x6B78060", Offset = "0x6B77060", VA = "0x6B78060")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern bool HasMappedBufferRange();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028C8")]
	[Address(RVA = "0x6B78090", Offset = "0x6B77090", VA = "0x6B78090")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern uint InsertCPUFence();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028C9")]
	[Address(RVA = "0x6B780C0", Offset = "0x6B770C0", VA = "0x6B780C0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern bool CPUFencePassed(uint fence);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028CA")]
	[Address(RVA = "0x6B780F0", Offset = "0x6B770F0", VA = "0x6B780F0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void WaitForCPUFencePassed(uint fence);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028CB")]
	[Address(RVA = "0x6B78120", Offset = "0x6B77120", VA = "0x6B78120")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void SyncRenderThread();

	[Token(Token = "0x60028CC")]
	[Address(RVA = "0x6B78150", Offset = "0x6B77150", VA = "0x6B78150")]
	[UnityEngine.Bindings.ThreadSafe]
	public static RectInt GetActiveViewport()
	{
		return default(RectInt);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028CD")]
	[Address(RVA = "0x6B78200", Offset = "0x6B77200", VA = "0x6B78200")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void ProfileDrawChainBegin();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028CE")]
	[Address(RVA = "0x6B78230", Offset = "0x6B77230", VA = "0x6B78230")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void ProfileDrawChainEnd();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028CF")]
	[Address(RVA = "0x6B78260", Offset = "0x6B77260", VA = "0x6B78260")]
	public static extern void NotifyOfUIREvents(bool subscribe);

	[Token(Token = "0x60028D0")]
	[Address(RVA = "0x6B78290", Offset = "0x6B77290", VA = "0x6B78290")]
	[UnityEngine.Bindings.ThreadSafe]
	public static Matrix4x4 GetUnityProjectionMatrix()
	{
		return default(Matrix4x4);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028D2")]
	[Address(RVA = "0x6B77AE0", Offset = "0x6B76AE0", VA = "0x6B77AE0")]
	private static extern void SetVectorArray_Injected(IntPtr shaderPropertySheet, int name, ref UnityEngine.Bindings.ManagedSpanWrapper values, int count);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028D3")]
	[Address(RVA = "0x6B77C20", Offset = "0x6B76C20", VA = "0x6B77C20")]
	private static extern IntPtr GetVertexDeclaration_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper vertexAttributes);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028D4")]
	[Address(RVA = "0x6B77DC0", Offset = "0x6B76DC0", VA = "0x6B77DC0")]
	private static extern void SetPropertyBlock_Injected(IntPtr props);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028D5")]
	[Address(RVA = "0x6B77EF0", Offset = "0x6B76EF0", VA = "0x6B77EF0")]
	private static extern void SetScissorRect_Injected([In] ref RectInt scissorRect);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028D6")]
	[Address(RVA = "0x6B77FF0", Offset = "0x6B76FF0", VA = "0x6B77FF0")]
	private static extern IntPtr CreateStencilState_Injected([In] ref StencilState stencilState);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028D7")]
	[Address(RVA = "0x6B781D0", Offset = "0x6B771D0", VA = "0x6B781D0")]
	private static extern void GetActiveViewport_Injected(out RectInt ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028D8")]
	[Address(RVA = "0x6B78340", Offset = "0x6B77340", VA = "0x6B78340")]
	private static extern void GetUnityProjectionMatrix_Injected(out Matrix4x4 ret);
}
