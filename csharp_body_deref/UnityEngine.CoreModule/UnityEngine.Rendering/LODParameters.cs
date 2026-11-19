// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.LODParameters
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000386")]
public struct LODParameters : IEquatable<LODParameters>
{
	[Token(Token = "0x4000A90")]
	[FieldOffset(Offset = "0x0")]
	private int m_IsOrthographic;

	[Token(Token = "0x4000A91")]
	[FieldOffset(Offset = "0x4")]
	private Vector3 m_CameraPosition;

	[Token(Token = "0x4000A92")]
	[FieldOffset(Offset = "0x10")]
	private float m_FieldOfView;

	[Token(Token = "0x4000A93")]
	[FieldOffset(Offset = "0x14")]
	private float m_OrthoSize;

	[Token(Token = "0x4000A94")]
	[FieldOffset(Offset = "0x18")]
	private int m_CameraPixelHeight;

	[Token(Token = "0x1700034D")]
	public bool isOrthographic
	{
		[Token(Token = "0x60015E1")]
		[Address(RVA = "0x695B2D0", Offset = "0x695A2D0", VA = "0x695B2D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700034E")]
	public Vector3 cameraPosition
	{
		[Token(Token = "0x60015E2")]
		[Address(RVA = "0x695B320", Offset = "0x695A320", VA = "0x695B320")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x1700034F")]
	public float fieldOfView
	{
		[Token(Token = "0x60015E3")]
		[Address(RVA = "0x695B330", Offset = "0x695A330", VA = "0x695B330")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000350")]
	public float orthoSize
	{
		[Token(Token = "0x60015E4")]
		[Address(RVA = "0x695B340", Offset = "0x695A340", VA = "0x695B340")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000351")]
	public int cameraPixelHeight
	{
		[Token(Token = "0x60015E5")]
		[Address(RVA = "0x695B350", Offset = "0x695A350", VA = "0x695B350")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60015E6")]
	[Address(RVA = "0x69593C0", Offset = "0x69583C0", VA = "0x69593C0", Slot = "4")]
	public bool Equals(LODParameters other)
	{
		return default(bool);
	}

	[Token(Token = "0x60015E7")]
	[Address(RVA = "0x695B360", Offset = "0x695A360", VA = "0x695B360", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60015E8")]
	[Address(RVA = "0x6959800", Offset = "0x6958800", VA = "0x6959800", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
