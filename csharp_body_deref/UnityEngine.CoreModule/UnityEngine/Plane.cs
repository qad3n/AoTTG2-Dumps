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
		[Address(RVA = "0x4A953A0", Offset = "0x4A953A0", VA = "0x4A953A0")]
		get
		{
			return default(Vector3);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000283")]
	[Address(RVA = "0x4A953B0", Offset = "0x4A953B0", VA = "0x4A953B0")]
	public Plane(Vector3 inNormal, Vector3 inPoint)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000284")]
	[Address(RVA = "0x4A95510", Offset = "0x4A95510", VA = "0x4A95510")]
	public bool Raycast(Ray ray, out float enter)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000285")]
	[Address(RVA = "0x4A95620", Offset = "0x4A95620", VA = "0x4A95620", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000286")]
	[Address(RVA = "0x4A95630", Offset = "0x4A95630", VA = "0x4A95630", Slot = "4")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
