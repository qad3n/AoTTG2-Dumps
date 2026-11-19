// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ShadowSplitData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x200039B")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct ShadowSplitData : IEquatable<ShadowSplitData>
{
	[Token(Token = "0x4000B03")]
	private const int k_MaximumCullingPlaneCount = 10;

	[Token(Token = "0x4000B04")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int maximumCullingPlaneCount;

	[Token(Token = "0x4000B05")]
	[FieldOffset(Offset = "0x0")]
	private int m_CullingPlaneCount;

	[Token(Token = "0x4000B06")]
	[FieldOffset(Offset = "0x4")]
	internal unsafe fixed byte m_CullingPlanes[160];

	[Token(Token = "0x4000B07")]
	[FieldOffset(Offset = "0xA4")]
	private Vector4 m_CullingSphere;

	[Token(Token = "0x4000B08")]
	[FieldOffset(Offset = "0xB4")]
	private float m_ShadowCascadeBlendCullingFactor;

	[Token(Token = "0x4000B09")]
	[FieldOffset(Offset = "0xB8")]
	private float m_CullingNearPlane;

	[Token(Token = "0x4000B0A")]
	[FieldOffset(Offset = "0xBC")]
	private Matrix4x4 m_CullingMatrix;

	[Token(Token = "0x17000388")]
	public int cullingPlaneCount
	{
		[Token(Token = "0x60016B1")]
		[Address(RVA = "0x6962460", Offset = "0x6961460", VA = "0x6962460")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000389")]
	public Vector4 cullingSphere
	{
		[Token(Token = "0x60016B2")]
		[Address(RVA = "0x6962470", Offset = "0x6961470", VA = "0x6962470")]
		get
		{
			return default(Vector4);
		}
	}

	[Token(Token = "0x1700038A")]
	public float shadowCascadeBlendCullingFactor
	{
		[Token(Token = "0x60016B3")]
		[Address(RVA = "0x6961D20", Offset = "0x6960D20", VA = "0x6961D20")]
		set
		{
		}
	}

	[Token(Token = "0x60016B4")]
	[Address(RVA = "0x6962490", Offset = "0x6961490", VA = "0x6962490")]
	public Plane GetCullingPlane(int index)
	{
		return default(Plane);
	}

	[Token(Token = "0x60016B5")]
	[Address(RVA = "0x69620F0", Offset = "0x69610F0", VA = "0x69620F0", Slot = "4")]
	public bool Equals(ShadowSplitData other)
	{
		return default(bool);
	}

	[Token(Token = "0x60016B6")]
	[Address(RVA = "0x69625D0", Offset = "0x69615D0", VA = "0x69625D0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60016B7")]
	[Address(RVA = "0x69623E0", Offset = "0x69613E0", VA = "0x69623E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
