// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.LODParameters
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003B2")]
public struct LODParameters : IEquatable<LODParameters>
{
	[Token(Token = "0x4000BB0")]
	[FieldOffset(Offset = "0x0")]
	private int m_IsOrthographic;

	[Token(Token = "0x4000BB1")]
	[FieldOffset(Offset = "0x4")]
	private Vector3 m_CameraPosition;

	[Token(Token = "0x4000BB2")]
	[FieldOffset(Offset = "0x10")]
	private float m_FieldOfView;

	[Token(Token = "0x4000BB3")]
	[FieldOffset(Offset = "0x14")]
	private float m_OrthoSize;

	[Token(Token = "0x4000BB4")]
	[FieldOffset(Offset = "0x18")]
	private int m_CameraPixelHeight;

	[Token(Token = "0x1700035F")]
	public bool isOrthographic
	{
		[Token(Token = "0x600163C")]
		[Address(RVA = "0x2F674A0", Offset = "0x2F65AA0", VA = "0x182F674A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000360")]
	public Vector3 cameraPosition
	{
		[Token(Token = "0x600163D")]
		[Address(RVA = "0x2F67480", Offset = "0x2F65A80", VA = "0x182F67480")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000361")]
	public float fieldOfView
	{
		[Token(Token = "0x600163E")]
		[Address(RVA = "0x2EAE470", Offset = "0x2EACA70", VA = "0x182EAE470")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000362")]
	public float orthoSize
	{
		[Token(Token = "0x600163F")]
		[Address(RVA = "0x15477A0", Offset = "0x1545DA0", VA = "0x1815477A0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000363")]
	public int cameraPixelHeight
	{
		[Token(Token = "0x6001640")]
		[Address(RVA = "0xB3E0C0", Offset = "0xB3C6C0", VA = "0x180B3E0C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001641")]
	[Address(RVA = "0x2F67240", Offset = "0x2F65840", VA = "0x182F67240", Slot = "4")]
	public bool Equals(LODParameters other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001642")]
	[Address(RVA = "0x2F672D0", Offset = "0x2F658D0", VA = "0x182F672D0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001643")]
	[Address(RVA = "0x2F673F0", Offset = "0x2F659F0", VA = "0x182F673F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
