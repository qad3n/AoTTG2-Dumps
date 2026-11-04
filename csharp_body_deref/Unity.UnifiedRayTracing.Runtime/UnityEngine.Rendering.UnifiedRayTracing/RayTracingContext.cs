// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.RayTracingContext
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.UnifiedRayTracing;

[Token(Token = "0x2000053")]
public sealed class RayTracingContext : IDisposable
{
	[Token(Token = "0x40001D5")]
	[FieldOffset(Offset = "0x20")]
	private readonly IRayTracingBackend m_Backend;

	[Token(Token = "0x40001D6")]
	[FieldOffset(Offset = "0x28")]
	private readonly ReferenceCounter m_AccelStructCounter;

	[Token(Token = "0x40001D7")]
	[FieldOffset(Offset = "0x30")]
	private readonly GraphicsBuffer m_DispatchBuffer;

	[Token(Token = "0x17000023")]
	public RayTracingResources Resources
	{
		[Token(Token = "0x6000177")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000178")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000024")]
	public RayTracingBackend BackendType
	{
		[Token(Token = "0x600017F")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		[CompilerGenerated]
		get
		{
			return default(RayTracingBackend);
		}
		[Token(Token = "0x6000180")]
		[Address(RVA = "0x111C9C0", Offset = "0x111AFC0", VA = "0x18111C9C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x2D977E0", Offset = "0x2D95DE0", VA = "0x182D977E0")]
	public RayTracingContext(RayTracingBackend backend, RayTracingResources resources)
	{
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x2D977A0", Offset = "0x2D95DA0", VA = "0x182D977A0")]
	public RayTracingContext(RayTracingResources resources)
	{
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x2D97570", Offset = "0x2D95B70", VA = "0x182D97570", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x2D97670", Offset = "0x2D95C70", VA = "0x182D97670")]
	public static bool IsBackendSupported(RayTracingBackend backend)
	{
		return default(bool);
	}

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x2D97480", Offset = "0x2D95A80", VA = "0x182D97480")]
	public IRayTracingShader CreateRayTracingShader(Object shader)
	{
		return null;
	}

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x2D97690", Offset = "0x2D95C90", VA = "0x182D97690")]
	public IRayTracingShader LoadRayTracingShaderFromAssetBundle(AssetBundle assetBundle, string name)
	{
		return null;
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x2D973B0", Offset = "0x2D959B0", VA = "0x182D973B0")]
	public IRayTracingAccelStruct CreateAccelerationStructure(AccelerationStructureOptions options)
	{
		return null;
	}

	[Token(Token = "0x600017D")]
	[Address(RVA = "0x2D97600", Offset = "0x2D95C00", VA = "0x182D97600")]
	public ulong GetRequiredTraceScratchBufferSizeInBytes(uint width, uint height, uint depth)
	{
		return default(ulong);
	}

	[Token(Token = "0x600017E")]
	[Address(RVA = "0x846F40", Offset = "0x845540", VA = "0x180846F40")]
	public static uint GetScratchBufferStrideInBytes()
	{
		return default(uint);
	}
}
