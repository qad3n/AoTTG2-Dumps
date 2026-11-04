// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RayTracingMeshInstanceConfig
// Update status: NEW in this game update
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
	[Token(Token = "0x40009A3")]
	[FieldOffset(Offset = "0x0")]
	public Mesh mesh;

	[Token(Token = "0x40009A4")]
	[FieldOffset(Offset = "0x8")]
	public uint subMeshIndex;

	[Token(Token = "0x40009A5")]
	[FieldOffset(Offset = "0xC")]
	public RayTracingSubMeshFlags subMeshFlags;

	[Token(Token = "0x40009A8")]
	[FieldOffset(Offset = "0x18")]
	public Material material;

	[Token(Token = "0x40009A9")]
	[FieldOffset(Offset = "0x20")]
	public MaterialPropertyBlock materialProperties;

	[Token(Token = "0x40009AA")]
	[FieldOffset(Offset = "0x28")]
	public bool enableTriangleCulling;

	[Token(Token = "0x40009AB")]
	[FieldOffset(Offset = "0x29")]
	public bool frontTriangleCounterClockwise;

	[Token(Token = "0x40009AC")]
	[FieldOffset(Offset = "0x2C")]
	public int layer;

	[Token(Token = "0x40009AD")]
	[FieldOffset(Offset = "0x30")]
	public uint renderingLayerMask;

	[Token(Token = "0x40009AE")]
	[FieldOffset(Offset = "0x34")]
	public uint mask;

	[Token(Token = "0x40009AF")]
	[FieldOffset(Offset = "0x38")]
	public MotionVectorGenerationMode motionVectorMode;

	[Token(Token = "0x40009B0")]
	[FieldOffset(Offset = "0x3C")]
	public LightProbeUsage lightProbeUsage;

	[Token(Token = "0x40009B1")]
	[FieldOffset(Offset = "0x40")]
	public LightProbeProxyVolume lightProbeProxyVolume;

	[Token(Token = "0x40009B4")]
	[FieldOffset(Offset = "0x50")]
	public int meshLod;

	[Token(Token = "0x17000310")]
	public RayTracingMode rayTracingMode
	{
		[Token(Token = "0x60012E7")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000311")]
	[Obsolete("dynamicGeometry has been deprecated and will be removed in the future. Use rayTracingMode instead.", false)]
	public bool dynamicGeometry
	{
		[Token(Token = "0x60012E8")]
		[Address(RVA = "0x1A78710", Offset = "0x1A76D10", VA = "0x181A78710")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000312")]
	public RayTracingAccelerationStructureBuildFlags accelerationStructureBuildFlags
	{
		[Token(Token = "0x60012E9")]
		[Address(RVA = "0xB3E0D0", Offset = "0xB3C6D0", VA = "0x180B3E0D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000313")]
	public bool accelerationStructureBuildFlagsOverride
	{
		[Token(Token = "0x60012EA")]
		[Address(RVA = "0x1CFDDC0", Offset = "0x1CFC3C0", VA = "0x181CFDDC0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60012E5")]
	[Address(RVA = "0x2F51C30", Offset = "0x2F50230", VA = "0x182F51C30")]
	public RayTracingMeshInstanceConfig()
	{
	}

	[Token(Token = "0x60012E6")]
	[Address(RVA = "0x2F51B20", Offset = "0x2F50120", VA = "0x182F51B20")]
	public RayTracingMeshInstanceConfig(Mesh mesh, uint subMeshIndex, Material material)
	{
	}
}
