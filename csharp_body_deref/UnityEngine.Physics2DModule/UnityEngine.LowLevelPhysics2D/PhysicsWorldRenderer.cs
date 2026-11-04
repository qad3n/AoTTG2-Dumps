// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LowLevelPhysics2D.PhysicsWorldRenderer
// Update status: NEW in this game update
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
			[Address(RVA = "0x2FCC710", Offset = "0x2FCAD10", VA = "0x182FCC710")]
			protected Mesh GetMesh()
			{
				return null;
			}

			[Token(Token = "0x600019E")]
			[Address(RVA = "0x2FCC5B0", Offset = "0x2FCABB0", VA = "0x182FCC5B0", Slot = "4")]
			public void Dispose()
			{
			}

			[Token(Token = "0x600019F")]
			public abstract void Draw(CommandBuffer rendererCommandBuffer, ref PhysicsWorld.DrawResults drawResults, float thickness, float fillAlpha, PhysicsWorld.TransformPlane transformPlane, int drawCapacity);

			[Token(Token = "0x60001A0")]
			[Address(RVA = "0x2FCCB50", Offset = "0x2FCB150", VA = "0x182FCCB50")]
			protected BaseDrawer()
			{
			}
		}

		[Token(Token = "0x2000060")]
		private sealed class PolygonGeometryDrawer : BaseDrawer
		{
			[Token(Token = "0x60001A1")]
			[Address(RVA = "0x2FD9FE0", Offset = "0x2FD85E0", VA = "0x182FD9FE0")]
			public PolygonGeometryDrawer()
			{
			}

			[Token(Token = "0x60001A2")]
			[Address(RVA = "0x2FD9D30", Offset = "0x2FD8330", VA = "0x182FD9D30", Slot = "5")]
			public override void Draw(CommandBuffer rendererCommandBuffer, ref PhysicsWorld.DrawResults drawResults, float thickness, float fillAlpha, PhysicsWorld.TransformPlane transformPlane, int drawCapacity)
			{
			}
		}

		[Token(Token = "0x2000061")]
		private sealed class CircleGeometryDrawer : BaseDrawer
		{
			[Token(Token = "0x60001A3")]
			[Address(RVA = "0x2FCD580", Offset = "0x2FCBB80", VA = "0x182FCD580")]
			public CircleGeometryDrawer()
			{
			}

			[Token(Token = "0x60001A4")]
			[Address(RVA = "0x2FCD2D0", Offset = "0x2FCB8D0", VA = "0x182FCD2D0", Slot = "5")]
			public override void Draw(CommandBuffer rendererCommandBuffer, ref PhysicsWorld.DrawResults drawResults, float thickness, float fillAlpha, PhysicsWorld.TransformPlane transformPlane, int drawCapacity)
			{
			}
		}

		[Token(Token = "0x2000062")]
		private sealed class CapsuleGeometryDrawer : BaseDrawer
		{
			[Token(Token = "0x60001A5")]
			[Address(RVA = "0x2FCD210", Offset = "0x2FCB810", VA = "0x182FCD210")]
			public CapsuleGeometryDrawer()
			{
			}

			[Token(Token = "0x60001A6")]
			[Address(RVA = "0x2FCCF60", Offset = "0x2FCB560", VA = "0x182FCCF60", Slot = "5")]
			public override void Draw(CommandBuffer rendererCommandBuffer, ref PhysicsWorld.DrawResults drawResults, float thickness, float fillAlpha, PhysicsWorld.TransformPlane transformPlane, int drawCapacity)
			{
			}
		}

		[Token(Token = "0x2000063")]
		private sealed class LineDrawer : BaseDrawer
		{
			[Token(Token = "0x60001A7")]
			[Address(RVA = "0x2FCF7F0", Offset = "0x2FCDDF0", VA = "0x182FCF7F0")]
			public LineDrawer()
			{
			}

			[Token(Token = "0x60001A8")]
			[Address(RVA = "0x2FCF560", Offset = "0x2FCDB60", VA = "0x182FCF560", Slot = "5")]
			public override void Draw(CommandBuffer rendererCommandBuffer, ref PhysicsWorld.DrawResults drawResults, float thickness, float fillAlpha, PhysicsWorld.TransformPlane transformPlane, int drawCapacity)
			{
			}
		}

		[Token(Token = "0x2000064")]
		private sealed class PointDrawer : BaseDrawer
		{
			[Token(Token = "0x60001A9")]
			[Address(RVA = "0x2FD9C70", Offset = "0x2FD8270", VA = "0x182FD9C70")]
			public PointDrawer()
			{
			}

			[Token(Token = "0x60001AA")]
			[Address(RVA = "0x2FD9A10", Offset = "0x2FD8010", VA = "0x182FD9A10", Slot = "5")]
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
			[Address(RVA = "0x19DA120", Offset = "0x19D8720", VA = "0x1819DA120")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600019A")]
		[Address(RVA = "0x2FCE8D0", Offset = "0x2FCCED0", VA = "0x182FCE8D0")]
		public DrawerGroup()
		{
		}

		[Token(Token = "0x600019B")]
		[Address(RVA = "0x2FCE810", Offset = "0x2FCCE10", VA = "0x182FCE810")]
		public void Draw(CommandBuffer rendererCommandBuffer, ref PhysicsWorld.DrawResults drawResults, float thickness, float fillAlpha, PhysicsWorld.TransformPlane transformPlane, int drawCapacity)
		{
		}

		[Token(Token = "0x600019C")]
		[Address(RVA = "0x2FCE620", Offset = "0x2FCCC20", VA = "0x182FCE620", Slot = "4")]
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
	[Address(RVA = "0x2FD8180", Offset = "0x2FD6780", VA = "0x182FD8180")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InitializeRendering()
	{
	}

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x2FD8820", Offset = "0x2FD6E20", VA = "0x182FD8820")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void ShutdownRendering()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000194")]
	[Address(RVA = "0x2FCC4B0", Offset = "0x2FCAAB0", VA = "0x182FCC4B0")]
	private static PhysicsAABB GetCameraViewAABB(Camera camera)
	{
		return default(PhysicsAABB);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000195")]
	[Address(RVA = "0x2FD83F0", Offset = "0x2FD69F0", VA = "0x182FD83F0")]
	private static bool IsCameraTypeValid(Camera camera)
	{
		return default(bool);
	}

	[Token(Token = "0x6000196")]
	[Address(RVA = "0x2FD7FB0", Offset = "0x2FD65B0", VA = "0x182FD7FB0")]
	private static void BIRP_RenderAllWorlds(Camera camera)
	{
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x2FD8410", Offset = "0x2FD6A10", VA = "0x182FD8410")]
	private static void SRP_RenderAllWorlds(ScriptableRenderContext context, List<Camera> cameras)
	{
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x2FD85F0", Offset = "0x2FD6BF0", VA = "0x182FD85F0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void SendDrawResultsToCommandBuffer(PhysicsWorld physicsWorld, PhysicsWorld.DrawResults drawResults, PhysicsWorld.TransformPlane transformPlane, float thickness, float fillAlpha, int drawCapacity)
	{
	}
}
