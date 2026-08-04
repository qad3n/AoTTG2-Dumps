// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Ray
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x200009C")]
public struct Ray : IFormattable
{
	[Token(Token = "0x40001A2")]
	[FieldOffset(Offset = "0x0")]
	private Vector3 m_Origin;

	[Token(Token = "0x40001A3")]
	[FieldOffset(Offset = "0xC")]
	private Vector3 m_Direction;

	[Token(Token = "0x17000072")]
	public Vector3 origin
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000288")]
		[Address(RVA = "0x4DBD120", Offset = "0x4DBD120", VA = "0x4DBD120")]
		get
		{
			return default(Vector3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000289")]
		[Address(RVA = "0x4DBD130", Offset = "0x4DBD130", VA = "0x4DBD130")]
		set
		{
		}
	}

	[Token(Token = "0x17000073")]
	public Vector3 direction
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600028A")]
		[Address(RVA = "0x4DBD140", Offset = "0x4DBD140", VA = "0x4DBD140")]
		get
		{
			return default(Vector3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600028B")]
		[Address(RVA = "0x4DBD150", Offset = "0x4DBD150", VA = "0x4DBD150")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000287")]
	[Address(RVA = "0x4DBCFF0", Offset = "0x4DBCFF0", VA = "0x4DBCFF0")]
	public Ray(Vector3 origin, Vector3 direction)
	{
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x4DBD270", Offset = "0x4DBD270", VA = "0x4DBD270")]
	public Vector3 GetPoint(float distance)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600028D")]
	[Address(RVA = "0x4DBD2A0", Offset = "0x4DBD2A0", VA = "0x4DBD2A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600028E")]
	[Address(RVA = "0x4DBD2B0", Offset = "0x4DBD2B0", VA = "0x4DBD2B0", Slot = "4")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
