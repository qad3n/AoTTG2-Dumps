// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ShadowSplitData
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003C7")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct ShadowSplitData : IEquatable<ShadowSplitData>
{
	[Token(Token = "0x4000C23")]
	private const int k_MaximumCullingPlaneCount = 10;

	[Token(Token = "0x4000C24")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int maximumCullingPlaneCount;

	[Token(Token = "0x4000C25")]
	[FieldOffset(Offset = "0x0")]
	private int m_CullingPlaneCount;

	[Token(Token = "0x4000C26")]
	[FieldOffset(Offset = "0x4")]
	internal unsafe fixed byte m_CullingPlanes[160];

	[Token(Token = "0x4000C27")]
	[FieldOffset(Offset = "0xA4")]
	private Vector4 m_CullingSphere;

	[Token(Token = "0x4000C28")]
	[FieldOffset(Offset = "0xB4")]
	private float m_ShadowCascadeBlendCullingFactor;

	[Token(Token = "0x4000C29")]
	[FieldOffset(Offset = "0xB8")]
	private float m_CullingNearPlane;

	[Token(Token = "0x4000C2A")]
	[FieldOffset(Offset = "0xBC")]
	private Matrix4x4 m_CullingMatrix;

	[Token(Token = "0x1700039A")]
	public int cullingPlaneCount
	{
		[Token(Token = "0x600170C")]
		[Address(RVA = "0xD18930", Offset = "0xD16F30", VA = "0x180D18930")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700039B")]
	public Vector4 cullingSphere
	{
		[Token(Token = "0x600170D")]
		[Address(RVA = "0x2F727C0", Offset = "0x2F70DC0", VA = "0x182F727C0")]
		get
		{
			return default(Vector4);
		}
	}

	[Token(Token = "0x1700039C")]
	public float shadowCascadeBlendCullingFactor
	{
		[Token(Token = "0x600170E")]
		[Address(RVA = "0x2F727D0", Offset = "0x2F70DD0", VA = "0x182F727D0")]
		set
		{
		}
	}

	[Token(Token = "0x600170F")]
	[Address(RVA = "0x2F725A0", Offset = "0x2F70BA0", VA = "0x182F725A0")]
	public Plane GetCullingPlane(int index)
	{
		return default(Plane);
	}

	[Token(Token = "0x6001710")]
	[Address(RVA = "0x2F723A0", Offset = "0x2F709A0", VA = "0x182F723A0", Slot = "4")]
	public bool Equals(ShadowSplitData other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001711")]
	[Address(RVA = "0x2F72210", Offset = "0x2F70810", VA = "0x182F72210", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001712")]
	[Address(RVA = "0x2F72700", Offset = "0x2F70D00", VA = "0x182F72700", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
