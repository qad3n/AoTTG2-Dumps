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

[Token(Token = "0x20002FE")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct ShadowSplitData : IEquatable<ShadowSplitData>
{
	[Token(Token = "0x400091A")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int maximumCullingPlaneCount;

	[Token(Token = "0x400091B")]
	[FieldOffset(Offset = "0x0")]
	private int m_CullingPlaneCount;

	[Token(Token = "0x400091C")]
	[FieldOffset(Offset = "0x4")]
	internal unsafe fixed byte m_CullingPlanes[160];

	[Token(Token = "0x400091D")]
	[FieldOffset(Offset = "0xA4")]
	private Vector4 m_CullingSphere;

	[Token(Token = "0x400091E")]
	[FieldOffset(Offset = "0xB4")]
	private float m_ShadowCascadeBlendCullingFactor;

	[Token(Token = "0x400091F")]
	[FieldOffset(Offset = "0xB8")]
	private float m_CullingNearPlane;

	[Token(Token = "0x4000920")]
	[FieldOffset(Offset = "0xBC")]
	private Matrix4x4 m_CullingMatrix;

	[Token(Token = "0x170002A1")]
	public int cullingPlaneCount
	{
		[Token(Token = "0x60010BF")]
		[Address(RVA = "0x4E33270", Offset = "0x4E33270", VA = "0x4E33270")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60010C0")]
	[Address(RVA = "0x4E33280", Offset = "0x4E33280", VA = "0x4E33280")]
	public Plane GetCullingPlane(int index)
	{
		return default(Plane);
	}

	[Token(Token = "0x60010C1")]
	[Address(RVA = "0x4E32EF0", Offset = "0x4E32EF0", VA = "0x4E32EF0", Slot = "4")]
	public bool Equals(ShadowSplitData other)
	{
		return default(bool);
	}

	[Token(Token = "0x60010C2")]
	[Address(RVA = "0x4E333C0", Offset = "0x4E333C0", VA = "0x4E333C0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60010C3")]
	[Address(RVA = "0x4E331F0", Offset = "0x4E331F0", VA = "0x4E331F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
