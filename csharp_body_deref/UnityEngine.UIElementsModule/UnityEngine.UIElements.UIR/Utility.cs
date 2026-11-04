// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.Utility
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x31619F0", Offset = "0x315FFF0", VA = "0x1831619F0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60028B0")]
		[Address(RVA = "0x3161D00", Offset = "0x3160300", VA = "0x183161D00")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000030")]
	public static event Action EngineUpdate
	{
		[Token(Token = "0x60028B1")]
		[Address(RVA = "0x31617F0", Offset = "0x315FDF0", VA = "0x1831617F0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60028B2")]
		[Address(RVA = "0x3161B00", Offset = "0x3160100", VA = "0x183161B00")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000031")]
	public static event Action FlushPendingResources
	{
		[Token(Token = "0x60028B3")]
		[Address(RVA = "0x31618F0", Offset = "0x315FEF0", VA = "0x1831618F0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60028B4")]
		[Address(RVA = "0x3161C00", Offset = "0x3160200", VA = "0x183161C00")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60028AE")]
	[Address(RVA = "0x3161490", Offset = "0x315FA90", VA = "0x183161490")]
	public static void SetVectorArray(IntPtr shaderPropertySheet, int nameID, Vector4[] vector4s)
	{
	}

	[Token(Token = "0x60028B5")]
	[Address(RVA = "0x31611A0", Offset = "0x315F7A0", VA = "0x1831611A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RaiseGraphicsResourcesRecreate(bool recreate)
	{
	}

	[Token(Token = "0x60028B6")]
	[Address(RVA = "0x31610A0", Offset = "0x315F6A0", VA = "0x1831610A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RaiseEngineUpdate()
	{
	}

	[Token(Token = "0x60028B7")]
	[Address(RVA = "0x3161130", Offset = "0x315F730", VA = "0x183161130")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RaiseFlushPendingResources()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028B8")]
	[Address(RVA = "0x3160AA0", Offset = "0x315F0A0", VA = "0x183160AA0")]
	[UnityEngine.Bindings.ThreadSafe]
	private static extern IntPtr AllocateBuffer(int elementCount, int elementStride, bool vertexBuffer);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028B9")]
	[Address(RVA = "0x3160CD0", Offset = "0x315F2D0", VA = "0x183160CD0")]
	[UnityEngine.Bindings.ThreadSafe]
	private static extern void FreeBuffer(IntPtr buffer);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028BA")]
	[Address(RVA = "0x3161700", Offset = "0x315FD00", VA = "0x183161700")]
	[UnityEngine.Bindings.ThreadSafe]
	private static extern void UpdateBufferRanges(IntPtr buffer, IntPtr ranges, int rangeCount, int writeRangeStart, int writeRangeEnd);

	[Token(Token = "0x60028BB")]
	[Address(RVA = "0x31615D0", Offset = "0x315FBD0", VA = "0x1831615D0")]
	[UnityEngine.Bindings.ThreadSafe]
	private static void SetVectorArray(IntPtr shaderPropertySheet, int name, Vector4[] values, int count)
	{
	}

	[Token(Token = "0x60028BC")]
	[Address(RVA = "0x3160EC0", Offset = "0x315F4C0", VA = "0x183160EC0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static IntPtr GetVertexDeclaration(VertexAttributeDescriptor[] vertexAttributes)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028BD")]
	[Address(RVA = "0x3160C80", Offset = "0x315F280", VA = "0x183160C80")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern void DrawRanges(IntPtr ib, IntPtr* vertexStreams, int streamCount, IntPtr ranges, int rangeCount, IntPtr vertexDecl);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028BE")]
	[Address(RVA = "0x3160AF0", Offset = "0x315F0F0", VA = "0x183160AF0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr AllocateShaderPropertySheet();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028BF")]
	[Address(RVA = "0x3161250", Offset = "0x315F850", VA = "0x183161250")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void SetAllTextures(IntPtr shaderPropertySheet, IntPtr textureNames, IntPtr texturePtrs, int count);

	[Token(Token = "0x60028C0")]
	[Address(RVA = "0x31612E0", Offset = "0x315F8E0", VA = "0x1831612E0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static void SetPropertyBlock(MaterialPropertyBlock props)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028C1")]
	[Address(RVA = "0x3160B20", Offset = "0x315F120", VA = "0x183160B20")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void ApplyShaderPropertySheet(IntPtr shaderPropertySheet);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028C2")]
	[Address(RVA = "0x3161210", Offset = "0x315F810", VA = "0x183161210")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void ReleasePropertySheet(IntPtr shaderPropertySheet);

	[Token(Token = "0x60028C3")]
	[Address(RVA = "0x3161390", Offset = "0x315F990", VA = "0x183161390")]
	[UnityEngine.Bindings.ThreadSafe]
	public static void SetScissorRect(RectInt scissorRect)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028C4")]
	[Address(RVA = "0x3160C50", Offset = "0x315F250", VA = "0x183160C50")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void DisableScissor();

	[Token(Token = "0x60028C5")]
	[Address(RVA = "0x3160BE0", Offset = "0x315F1E0", VA = "0x183160BE0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static IntPtr CreateStencilState(StencilState stencilState)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028C6")]
	[Address(RVA = "0x3161400", Offset = "0x315FA00", VA = "0x183161400")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void SetStencilState(IntPtr stencilState, int stencilRef);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028C7")]
	[Address(RVA = "0x3160FA0", Offset = "0x315F5A0", VA = "0x183160FA0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern bool HasMappedBufferRange();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028C8")]
	[Address(RVA = "0x3160FD0", Offset = "0x315F5D0", VA = "0x183160FD0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern uint InsertCPUFence();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028C9")]
	[Address(RVA = "0x3160B60", Offset = "0x315F160", VA = "0x183160B60")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern bool CPUFencePassed(uint fence);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028CA")]
	[Address(RVA = "0x3161750", Offset = "0x315FD50", VA = "0x183161750")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void WaitForCPUFencePassed(uint fence);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028CB")]
	[Address(RVA = "0x31616D0", Offset = "0x315FCD0", VA = "0x1831616D0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void SyncRenderThread();

	[Token(Token = "0x60028CC")]
	[Address(RVA = "0x3160D50", Offset = "0x315F350", VA = "0x183160D50")]
	[UnityEngine.Bindings.ThreadSafe]
	public static RectInt GetActiveViewport()
	{
		return default(RectInt);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028CD")]
	[Address(RVA = "0x3161040", Offset = "0x315F640", VA = "0x183161040")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void ProfileDrawChainBegin();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028CE")]
	[Address(RVA = "0x3161070", Offset = "0x315F670", VA = "0x183161070")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void ProfileDrawChainEnd();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028CF")]
	[Address(RVA = "0x3161000", Offset = "0x315F600", VA = "0x183161000")]
	public static extern void NotifyOfUIREvents(bool subscribe);

	[Token(Token = "0x60028D0")]
	[Address(RVA = "0x3160E00", Offset = "0x315F400", VA = "0x183160E00")]
	[UnityEngine.Bindings.ThreadSafe]
	public static Matrix4x4 GetUnityProjectionMatrix()
	{
		return default(Matrix4x4);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028D2")]
	[Address(RVA = "0x3161440", Offset = "0x315FA40", VA = "0x183161440")]
	private static extern void SetVectorArray_Injected(IntPtr shaderPropertySheet, int name, ref UnityEngine.Bindings.ManagedSpanWrapper values, int count);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028D3")]
	[Address(RVA = "0x3160E80", Offset = "0x315F480", VA = "0x183160E80")]
	private static extern IntPtr GetVertexDeclaration_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper vertexAttributes);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028D4")]
	[Address(RVA = "0x31612A0", Offset = "0x315F8A0", VA = "0x1831612A0")]
	private static extern void SetPropertyBlock_Injected(IntPtr props);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028D5")]
	[Address(RVA = "0x3161350", Offset = "0x315F950", VA = "0x183161350")]
	private static extern void SetScissorRect_Injected([In] ref RectInt scissorRect);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028D6")]
	[Address(RVA = "0x3160BA0", Offset = "0x315F1A0", VA = "0x183160BA0")]
	private static extern IntPtr CreateStencilState_Injected([In] ref StencilState stencilState);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028D7")]
	[Address(RVA = "0x3160D10", Offset = "0x315F310", VA = "0x183160D10")]
	private static extern void GetActiveViewport_Injected(out RectInt ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028D8")]
	[Address(RVA = "0x3160DC0", Offset = "0x315F3C0", VA = "0x183160DC0")]
	private static extern void GetUnityProjectionMatrix_Injected(out Matrix4x4 ret);
}
