// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Plane
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200009B")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct Plane : IFormattable
{
	[Token(Token = "0x400019F")]
	internal const int size = 16;

	[Token(Token = "0x40001A0")]
	[FieldOffset(Offset = "0x0")]
	private Vector3 m_Normal;

	[Token(Token = "0x40001A1")]
	[FieldOffset(Offset = "0xC")]
	private float m_Distance;

	[Token(Token = "0x17000071")]
	public Vector3 normal
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000282")]
		[Address(RVA = "0x4DBCBC0", Offset = "0x4DBCBC0", VA = "0x4DBCBC0")]
		get
		{
			return default(Vector3);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000283")]
	[Address(RVA = "0x4DBCBD0", Offset = "0x4DBCBD0", VA = "0x4DBCBD0")]
	public Plane(Vector3 inNormal, Vector3 inPoint)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000284")]
	[Address(RVA = "0x4DBCD30", Offset = "0x4DBCD30", VA = "0x4DBCD30")]
	public bool Raycast(Ray ray, out float enter)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000285")]
	[Address(RVA = "0x4DBCE40", Offset = "0x4DBCE40", VA = "0x4DBCE40", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000286")]
	[Address(RVA = "0x4DBCE50", Offset = "0x4DBCE50", VA = "0x4DBCE50", Slot = "4")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
