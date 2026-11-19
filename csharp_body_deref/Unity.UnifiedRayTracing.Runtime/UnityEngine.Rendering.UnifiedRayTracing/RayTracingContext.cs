// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.RayTracingContext
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x678C3C0", Offset = "0x678B3C0", VA = "0x678C3C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000178")]
		[Address(RVA = "0x678C3D0", Offset = "0x678B3D0", VA = "0x678C3D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000024")]
	public RayTracingBackend BackendType
	{
		[Token(Token = "0x600017F")]
		[Address(RVA = "0x678C690", Offset = "0x678B690", VA = "0x678C690")]
		[CompilerGenerated]
		get
		{
			return default(RayTracingBackend);
		}
		[Token(Token = "0x6000180")]
		[Address(RVA = "0x678C6A0", Offset = "0x678B6A0", VA = "0x678C6A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x678C090", Offset = "0x678B090", VA = "0x678C090")]
	public RayTracingContext(RayTracingBackend backend, RayTracingResources resources)
	{
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x678C310", Offset = "0x678B310", VA = "0x678C310")]
	public RayTracingContext(RayTracingResources resources)
	{
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x678C340", Offset = "0x678B340", VA = "0x678C340", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x678C2A0", Offset = "0x678B2A0", VA = "0x678C2A0")]
	public static bool IsBackendSupported(RayTracingBackend backend)
	{
		return default(bool);
	}

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x678C3E0", Offset = "0x678B3E0", VA = "0x678C3E0")]
	public IRayTracingShader CreateRayTracingShader(Object shader)
	{
		return null;
	}

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x678C4C0", Offset = "0x678B4C0", VA = "0x678C4C0")]
	public IRayTracingShader LoadRayTracingShaderFromAssetBundle(AssetBundle assetBundle, string name)
	{
		return null;
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x678C510", Offset = "0x678B510", VA = "0x678C510")]
	public IRayTracingAccelStruct CreateAccelerationStructure(AccelerationStructureOptions options)
	{
		return null;
	}

	[Token(Token = "0x600017D")]
	[Address(RVA = "0x678C5D0", Offset = "0x678B5D0", VA = "0x678C5D0")]
	public ulong GetRequiredTraceScratchBufferSizeInBytes(uint width, uint height, uint depth)
	{
		return default(ulong);
	}

	[Token(Token = "0x600017E")]
	[Address(RVA = "0x678B030", Offset = "0x678A030", VA = "0x678B030")]
	public static uint GetScratchBufferStrideInBytes()
	{
		return default(uint);
	}
}
