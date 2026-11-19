// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RayTracingMeshInstanceConfig
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000359")]
[MovedFrom("UnityEngine.Experimental.Rendering")]
public struct RayTracingMeshInstanceConfig
{
	[Token(Token = "0x40009A1")]
	[FieldOffset(Offset = "0x0")]
	public Mesh mesh;

	[Token(Token = "0x40009A2")]
	[FieldOffset(Offset = "0x8")]
	public uint subMeshIndex;

	[Token(Token = "0x40009A3")]
	[FieldOffset(Offset = "0xC")]
	public RayTracingSubMeshFlags subMeshFlags;

	[Token(Token = "0x40009A6")]
	[FieldOffset(Offset = "0x18")]
	public Material material;

	[Token(Token = "0x40009A7")]
	[FieldOffset(Offset = "0x20")]
	public MaterialPropertyBlock materialProperties;

	[Token(Token = "0x40009A8")]
	[FieldOffset(Offset = "0x28")]
	public bool enableTriangleCulling;

	[Token(Token = "0x40009A9")]
	[FieldOffset(Offset = "0x29")]
	public bool frontTriangleCounterClockwise;

	[Token(Token = "0x40009AA")]
	[FieldOffset(Offset = "0x2C")]
	public int layer;

	[Token(Token = "0x40009AB")]
	[FieldOffset(Offset = "0x30")]
	public uint renderingLayerMask;

	[Token(Token = "0x40009AC")]
	[FieldOffset(Offset = "0x34")]
	public uint mask;

	[Token(Token = "0x40009AD")]
	[FieldOffset(Offset = "0x38")]
	public MotionVectorGenerationMode motionVectorMode;

	[Token(Token = "0x40009AE")]
	[FieldOffset(Offset = "0x3C")]
	public LightProbeUsage lightProbeUsage;

	[Token(Token = "0x40009AF")]
	[FieldOffset(Offset = "0x40")]
	public LightProbeProxyVolume lightProbeProxyVolume;

	[Token(Token = "0x40009B2")]
	[FieldOffset(Offset = "0x50")]
	public int meshLod;

	[Token(Token = "0x17000315")]
	public RayTracingMode rayTracingMode
	{
		[Token(Token = "0x60012FB")]
		[Address(RVA = "0x693FD60", Offset = "0x693ED60", VA = "0x693FD60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000316")]
	[Obsolete("dynamicGeometry has been deprecated and will be removed in the future. Use rayTracingMode instead.", false)]
	public bool dynamicGeometry
	{
		[Token(Token = "0x60012FC")]
		[Address(RVA = "0x693FD70", Offset = "0x693ED70", VA = "0x693FD70")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000317")]
	public RayTracingAccelerationStructureBuildFlags accelerationStructureBuildFlags
	{
		[Token(Token = "0x60012FD")]
		[Address(RVA = "0x693FD80", Offset = "0x693ED80", VA = "0x693FD80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000318")]
	public bool accelerationStructureBuildFlagsOverride
	{
		[Token(Token = "0x60012FE")]
		[Address(RVA = "0x693FD90", Offset = "0x693ED90", VA = "0x693FD90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60012F9")]
	[Address(RVA = "0x693FAF0", Offset = "0x693EAF0", VA = "0x693FAF0")]
	public RayTracingMeshInstanceConfig()
	{
	}

	[Token(Token = "0x60012FA")]
	[Address(RVA = "0x693FC20", Offset = "0x693EC20", VA = "0x693FC20")]
	public RayTracingMeshInstanceConfig(Mesh mesh, uint subMeshIndex, Material material)
	{
	}
}
