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

[Token(Token = "0x20002EC")]
public struct LODParameters : IEquatable<LODParameters>
{
	[Token(Token = "0x40008B7")]
	[FieldOffset(Offset = "0x0")]
	private int m_IsOrthographic;

	[Token(Token = "0x40008B8")]
	[FieldOffset(Offset = "0x4")]
	private Vector3 m_CameraPosition;

	[Token(Token = "0x40008B9")]
	[FieldOffset(Offset = "0x10")]
	private float m_FieldOfView;

	[Token(Token = "0x40008BA")]
	[FieldOffset(Offset = "0x14")]
	private float m_OrthoSize;

	[Token(Token = "0x40008BB")]
	[FieldOffset(Offset = "0x18")]
	private int m_CameraPixelHeight;

	[Token(Token = "0x6001045")]
	[Address(RVA = "0x4E2E870", Offset = "0x4E2E870", VA = "0x4E2E870", Slot = "4")]
	public bool Equals(LODParameters other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001046")]
	[Address(RVA = "0x4E2E900", Offset = "0x4E2E900", VA = "0x4E2E900", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001047")]
	[Address(RVA = "0x4E2E9E0", Offset = "0x4E2E9E0", VA = "0x4E2E9E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
