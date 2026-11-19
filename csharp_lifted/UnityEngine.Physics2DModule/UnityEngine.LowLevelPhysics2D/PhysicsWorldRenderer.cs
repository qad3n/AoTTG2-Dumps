// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LowLevelPhysics2D.PhysicsWorldRenderer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Rendering;
using UnityEngine.Scripting;

namespace UnityEngine.LowLevelPhysics2D;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x200005D")]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
internal static class PhysicsWorldRenderer
{
	[Token(Token = "0x200005E")]
	private class DrawerGroup : IDisposable
	{
		[Token(Token = "0x200005F")]
		private abstract class BaseDrawer : IDisposable
		{
			[Token(Token = "0x4000206")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
			private bool m_Disposed;

			[Token(Token = "0x4000207")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
			protected Mesh m_Mesh;

			[Token(Token = "0x4000208")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
			protected GraphicsBuffer m_GraphicsBuffer;

			[Token(Token = "0x4000209")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
			protected GraphicsBuffer.IndirectDrawIndexedArgs[] m_CommandData;

			[Token(Token = "0x400020A")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
			protected ComputeBuffer m_ElementBuffer;

			[Token(Token = "0x400020B")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
			protected Material m_ShaderMaterial;

			[Token(Token = "0x400020C")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
			protected MaterialPropertyBlock m_ShaderMaterialPropertyBlock;

			[Token(Token = "0x400020D")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
			protected readonly Bounds m_CullingBounds;

			[Token(Token = "0x400020E")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
			protected readonly int m_ElementBufferShaderProperty;

			[Token(Token = "0x400020F")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
			protected readonly int m_TransformPlaneShaderProperty;

			[Token(Token = "0x4000210")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
			protected readonly int m_ThicknessShaderProperty;

			[Token(Token = "0x4000211")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
			protected readonly int m_FillAlphaShaderProperty;

			[Token(Token = "0x600019D")]
			[Address(RVA = "0x69D4870", Offset = "0x69D3870", VA = "0x69D4870")]
			protected Mesh GetMesh()
			{
				return null;
			}

			[Token(Token = "0x600019E")]
			[Address(RVA = "0x69D4700", Offset = "0x69D3700", VA = "0x69D4700", Slot = "4")]
			public void Dispose()
			{
			}

			[Token(Token = "0x600019F")]
			public abstract void Draw(CommandBuffer rendererCommandBuffer, ref PhysicsWorld.DrawResults drawResults, float thickness, float fillAlpha, PhysicsWorld.TransformPlane transformPlane, int drawCapacity);

			[Token(Token = "0x60001A0")]
			[Address(RVA = "0x69D4C10", Offset = "0x69D3C10", VA = "0x69D4C10")]
			protected BaseDrawer()
			{
			}
		}

		[Token(Token = "0x2000060")]
		private sealed class PolygonGeometryDrawer : BaseDrawer
		{
			[Token(Token = "0x60001A1")]
			[Address(RVA = "0x69D4390", Offset = "0x69D3390", VA = "0x69D4390")]
			public PolygonGeometryDrawer()
			{
			}

			[Token(Token = "0x60001A2")]
			[Address(RVA = "0x69D4E00", Offset = "0x69D3E00", VA = "0x69D4E00", Slot = "5")]
			public override void Draw(CommandBuffer rendererCommandBuffer, ref PhysicsWorld.DrawResults drawResults, float thickness, float fillAlpha, PhysicsWorld.TransformPlane transformPlane, int drawCapacity)
			{
			}
		}

		[Token(Token = "0x2000061")]
		private sealed class CircleGeometryDrawer : BaseDrawer
		{
			[Token(Token = "0x60001A3")]
			[Address(RVA = "0x69D4440", Offset = "0x69D3440", VA = "0x69D4440")]
			public CircleGeometryDrawer()
			{
			}

			[Token(Token = "0x60001A4")]
			[Address(RVA = "0x69D5060", Offset = "0x69D4060", VA = "0x69D5060", Slot = "5")]
			public override void Draw(CommandBuffer rendererCommandBuffer, ref PhysicsWorld.DrawResults drawResults, float thickness, float fillAlpha, PhysicsWorld.TransformPlane transformPlane, int drawCapacity)
			{
			}
		}

		[Token(Token = "0x2000062")]
		private sealed class CapsuleGeometryDrawer : BaseDrawer
		{
			[Token(Token = "0x60001A5")]
			[Address(RVA = "0x69D44F0", Offset = "0x69D34F0", VA = "0x69D44F0")]
			public CapsuleGeometryDrawer()
			{
			}

			[Token(Token = "0x60001A6")]
			[Address(RVA = "0x69D52D0", Offset = "0x69D42D0", VA = "0x69D52D0", Slot = "5")]
			public override void Draw(CommandBuffer rendererCommandBuffer, ref PhysicsWorld.DrawResults drawResults, float thickness, float fillAlpha, PhysicsWorld.TransformPlane transformPlane, int drawCapacity)
			{
			}
		}

		[Token(Token = "0x2000063")]
		private sealed class LineDrawer : BaseDrawer
		{
			[Token(Token = "0x60001A7")]
			[Address(RVA = "0x69D45A0", Offset = "0x69D35A0", VA = "0x69D45A0")]
			public LineDrawer()
			{
			}

			[Token(Token = "0x60001A8")]
			[Address(RVA = "0x69D5540", Offset = "0x69D4540", VA = "0x69D5540", Slot = "5")]
			public override void Draw(CommandBuffer rendererCommandBuffer, ref PhysicsWorld.DrawResults drawResults, float thickness, float fillAlpha, PhysicsWorld.TransformPlane transformPlane, int drawCapacity)
			{
			}
		}

		[Token(Token = "0x2000064")]
		private sealed class PointDrawer : BaseDrawer
		{
			[Token(Token = "0x60001A9")]
			[Address(RVA = "0x69D4650", Offset = "0x69D3650", VA = "0x69D4650")]
			public PointDrawer()
			{
			}

			[Token(Token = "0x60001AA")]
			[Address(RVA = "0x69D5780", Offset = "0x69D4780", VA = "0x69D5780", Slot = "5")]
			public override void Draw(CommandBuffer rendererCommandBuffer, ref PhysicsWorld.DrawResults drawResults, float thickness, float fillAlpha, PhysicsWorld.TransformPlane transformPlane, int drawCapacity)
			{
			}
		}

		[Token(Token = "0x4000205")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private BaseDrawer[] m_Drawers;

		[Token(Token = "0x17000073")]
		public bool isValid
		{
			[Token(Token = "0x6000199")]
			[Address(RVA = "0x69D4380", Offset = "0x69D3380", VA = "0x69D4380")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600019A")]
		[Address(RVA = "0x69D4060", Offset = "0x69D3060", VA = "0x69D4060")]
		public DrawerGroup()
		{
		}

		[Token(Token = "0x600019B")]
		[Address(RVA = "0x69D42E0", Offset = "0x69D32E0", VA = "0x69D42E0")]
		public void Draw(CommandBuffer rendererCommandBuffer, ref PhysicsWorld.DrawResults drawResults, float thickness, float fillAlpha, PhysicsWorld.TransformPlane transformPlane, int drawCapacity)
		{
		}

		[Token(Token = "0x600019C")]
		[Address(RVA = "0x69D3930", Offset = "0x69D2930", VA = "0x69D3930", Slot = "4")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x4000201")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static bool s_IsInitialized;

	[Token(Token = "0x4000202")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1")]
	private static bool s_UsingBIRP;

	[Token(Token = "0x4000203")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static CommandBuffer s_RendererCommandBuffer;

	[Token(Token = "0x4000204")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static DrawerGroup[] s_DrawerGroups;

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x69D34A0", Offset = "0x69D24A0", VA = "0x69D34A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InitializeRendering()
	{
	}

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x69D36B0", Offset = "0x69D26B0", VA = "0x69D36B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void ShutdownRendering()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000194")]
	[Address(RVA = "0x69D39A0", Offset = "0x69D29A0", VA = "0x69D39A0")]
	private static PhysicsAABB GetCameraViewAABB(Camera camera)
	{
		return default(PhysicsAABB);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000195")]
	[Address(RVA = "0x69D3A20", Offset = "0x69D2A20", VA = "0x69D3A20")]
	private static bool IsCameraTypeValid(Camera camera)
	{
		return default(bool);
	}

	[Token(Token = "0x6000196")]
	[Address(RVA = "0x69D3A40", Offset = "0x69D2A40", VA = "0x69D3A40")]
	private static void BIRP_RenderAllWorlds(Camera camera)
	{
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x69D3C70", Offset = "0x69D2C70", VA = "0x69D3C70")]
	private static void SRP_RenderAllWorlds(ScriptableRenderContext context, List<Camera> cameras)
	{
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x69D3E90", Offset = "0x69D2E90", VA = "0x69D3E90")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void SendDrawResultsToCommandBuffer(PhysicsWorld physicsWorld, PhysicsWorld.DrawResults drawResults, PhysicsWorld.TransformPlane transformPlane, float thickness, float fillAlpha, int drawCapacity)
	{
	}
}
