// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.float4x4
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;
using UnityEngine;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x2000037")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct float4x4 : IEquatable<float4x4>, IFormattable
{
	[Token(Token = "0x40000D7")]
	[FieldOffset(Offset = "0x0")]
	public float4 c0;

	[Token(Token = "0x40000D8")]
	[FieldOffset(Offset = "0x10")]
	public float4 c1;

	[Token(Token = "0x40000D9")]
	[FieldOffset(Offset = "0x20")]
	public float4 c2;

	[Token(Token = "0x40000DA")]
	[FieldOffset(Offset = "0x30")]
	public float4 c3;

	[Token(Token = "0x40000DB")]
	[FieldOffset(Offset = "0x0")]
	public static readonly float4x4 identity;

	[Token(Token = "0x40000DC")]
	[FieldOffset(Offset = "0x40")]
	public static readonly float4x4 zero;

	[Token(Token = "0x170005C7")]
	public unsafe ref float4 this[int index]
	{
		[Token(Token = "0x60015E5")]
		[Address(RVA = "0x6464640", Offset = "0x6463640", VA = "0x6464640")]
		get
		{
			return ref *(float4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015AC")]
	[Address(RVA = "0x6461470", Offset = "0x6460470", VA = "0x6461470")]
	public float4x4(float4 c0, float4 c1, float4 c2, float4 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015AD")]
	[Address(RVA = "0x6461490", Offset = "0x6460490", VA = "0x6461490")]
	public float4x4(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20, float m21, float m22, float m23, float m30, float m31, float m32, float m33)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015AE")]
	[Address(RVA = "0x6461520", Offset = "0x6460520", VA = "0x6461520")]
	public float4x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015AF")]
	[Address(RVA = "0x6461540", Offset = "0x6460540", VA = "0x6461540")]
	public float4x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015B0")]
	[Address(RVA = "0x6461570", Offset = "0x6460570", VA = "0x6461570")]
	public float4x4(bool4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015B1")]
	[Address(RVA = "0x6461650", Offset = "0x6460650", VA = "0x6461650")]
	public float4x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015B2")]
	[Address(RVA = "0x6461670", Offset = "0x6460670", VA = "0x6461670")]
	public float4x4(int4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015B3")]
	[Address(RVA = "0x6461750", Offset = "0x6460750", VA = "0x6461750")]
	public float4x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015B4")]
	[Address(RVA = "0x6461770", Offset = "0x6460770", VA = "0x6461770")]
	public float4x4(uint4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015B5")]
	[Address(RVA = "0x6461870", Offset = "0x6460870", VA = "0x6461870")]
	public float4x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015B6")]
	[Address(RVA = "0x6461890", Offset = "0x6460890", VA = "0x6461890")]
	public float4x4(double4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015B7")]
	[Address(RVA = "0x64618F0", Offset = "0x64608F0", VA = "0x64618F0")]
	public static implicit operator float4x4(float v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015B8")]
	[Address(RVA = "0x6461910", Offset = "0x6460910", VA = "0x6461910")]
	public static explicit operator float4x4(bool v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015B9")]
	[Address(RVA = "0x6461940", Offset = "0x6460940", VA = "0x6461940")]
	public static explicit operator float4x4(bool4x4 v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015BA")]
	[Address(RVA = "0x6461A20", Offset = "0x6460A20", VA = "0x6461A20")]
	public static implicit operator float4x4(int v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015BB")]
	[Address(RVA = "0x6461A40", Offset = "0x6460A40", VA = "0x6461A40")]
	public static implicit operator float4x4(int4x4 v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015BC")]
	[Address(RVA = "0x6461B30", Offset = "0x6460B30", VA = "0x6461B30")]
	public static implicit operator float4x4(uint v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015BD")]
	[Address(RVA = "0x6461B50", Offset = "0x6460B50", VA = "0x6461B50")]
	public static implicit operator float4x4(uint4x4 v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015BE")]
	[Address(RVA = "0x6461C60", Offset = "0x6460C60", VA = "0x6461C60")]
	public static explicit operator float4x4(double v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015BF")]
	[Address(RVA = "0x6461C80", Offset = "0x6460C80", VA = "0x6461C80")]
	public static explicit operator float4x4(double4x4 v)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015C0")]
	[Address(RVA = "0x6461CE0", Offset = "0x6460CE0", VA = "0x6461CE0")]
	public static float4x4 operator *(float4x4 lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015C1")]
	[Address(RVA = "0x6461D80", Offset = "0x6460D80", VA = "0x6461D80")]
	public static float4x4 operator *(float4x4 lhs, float rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015C2")]
	[Address(RVA = "0x6461DF0", Offset = "0x6460DF0", VA = "0x6461DF0")]
	public static float4x4 operator *(float lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015C3")]
	[Address(RVA = "0x6461E60", Offset = "0x6460E60", VA = "0x6461E60")]
	public static float4x4 operator +(float4x4 lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015C4")]
	[Address(RVA = "0x6461F00", Offset = "0x6460F00", VA = "0x6461F00")]
	public static float4x4 operator +(float4x4 lhs, float rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015C5")]
	[Address(RVA = "0x6461F70", Offset = "0x6460F70", VA = "0x6461F70")]
	public static float4x4 operator +(float lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015C6")]
	[Address(RVA = "0x6461FE0", Offset = "0x6460FE0", VA = "0x6461FE0")]
	public static float4x4 operator -(float4x4 lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015C7")]
	[Address(RVA = "0x6462080", Offset = "0x6461080", VA = "0x6462080")]
	public static float4x4 operator -(float4x4 lhs, float rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015C8")]
	[Address(RVA = "0x64620F0", Offset = "0x64610F0", VA = "0x64620F0")]
	public static float4x4 operator -(float lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015C9")]
	[Address(RVA = "0x6462170", Offset = "0x6461170", VA = "0x6462170")]
	public static float4x4 operator /(float4x4 lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015CA")]
	[Address(RVA = "0x6462210", Offset = "0x6461210", VA = "0x6462210")]
	public static float4x4 operator /(float4x4 lhs, float rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015CB")]
	[Address(RVA = "0x6462280", Offset = "0x6461280", VA = "0x6462280")]
	public static float4x4 operator /(float lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015CC")]
	[Address(RVA = "0x6462300", Offset = "0x6461300", VA = "0x6462300")]
	public static float4x4 operator %(float4x4 lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015CD")]
	[Address(RVA = "0x6462620", Offset = "0x6461620", VA = "0x6462620")]
	public static float4x4 operator %(float4x4 lhs, float rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015CE")]
	[Address(RVA = "0x64628A0", Offset = "0x64618A0", VA = "0x64628A0")]
	public static float4x4 operator %(float lhs, float4x4 rhs)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015CF")]
	[Address(RVA = "0x6462B20", Offset = "0x6461B20", VA = "0x6462B20")]
	public static float4x4 operator ++(float4x4 val)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015D0")]
	[Address(RVA = "0x6462B90", Offset = "0x6461B90", VA = "0x6462B90")]
	public static float4x4 operator --(float4x4 val)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015D1")]
	[Address(RVA = "0x6462C00", Offset = "0x6461C00", VA = "0x6462C00")]
	public static bool4x4 operator <(float4x4 lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015D2")]
	[Address(RVA = "0x6462D80", Offset = "0x6461D80", VA = "0x6462D80")]
	public static bool4x4 operator <(float4x4 lhs, float rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015D3")]
	[Address(RVA = "0x6462ED0", Offset = "0x6461ED0", VA = "0x6462ED0")]
	public static bool4x4 operator <(float lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015D4")]
	[Address(RVA = "0x6463010", Offset = "0x6462010", VA = "0x6463010")]
	public static bool4x4 operator <=(float4x4 lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015D5")]
	[Address(RVA = "0x6463190", Offset = "0x6462190", VA = "0x6463190")]
	public static bool4x4 operator <=(float4x4 lhs, float rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015D6")]
	[Address(RVA = "0x64632E0", Offset = "0x64622E0", VA = "0x64632E0")]
	public static bool4x4 operator <=(float lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015D7")]
	[Address(RVA = "0x6463420", Offset = "0x6462420", VA = "0x6463420")]
	public static bool4x4 operator >(float4x4 lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015D8")]
	[Address(RVA = "0x64635A0", Offset = "0x64625A0", VA = "0x64635A0")]
	public static bool4x4 operator >(float4x4 lhs, float rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015D9")]
	[Address(RVA = "0x64636F0", Offset = "0x64626F0", VA = "0x64636F0")]
	public static bool4x4 operator >(float lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015DA")]
	[Address(RVA = "0x6463830", Offset = "0x6462830", VA = "0x6463830")]
	public static bool4x4 operator >=(float4x4 lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015DB")]
	[Address(RVA = "0x64639B0", Offset = "0x64629B0", VA = "0x64639B0")]
	public static bool4x4 operator >=(float4x4 lhs, float rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015DC")]
	[Address(RVA = "0x6463B00", Offset = "0x6462B00", VA = "0x6463B00")]
	public static bool4x4 operator >=(float lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015DD")]
	[Address(RVA = "0x6463C40", Offset = "0x6462C40", VA = "0x6463C40")]
	public static float4x4 operator -(float4x4 val)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015DE")]
	[Address(RVA = "0x6463CB0", Offset = "0x6462CB0", VA = "0x6463CB0")]
	public static float4x4 operator +(float4x4 val)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015DF")]
	[Address(RVA = "0x6463CE0", Offset = "0x6462CE0", VA = "0x6463CE0")]
	public static bool4x4 operator ==(float4x4 lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015E0")]
	[Address(RVA = "0x6463E90", Offset = "0x6462E90", VA = "0x6463E90")]
	public static bool4x4 operator ==(float4x4 lhs, float rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015E1")]
	[Address(RVA = "0x6464010", Offset = "0x6463010", VA = "0x6464010")]
	public static bool4x4 operator ==(float lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015E2")]
	[Address(RVA = "0x6464190", Offset = "0x6463190", VA = "0x6464190")]
	public static bool4x4 operator !=(float4x4 lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015E3")]
	[Address(RVA = "0x6464340", Offset = "0x6463340", VA = "0x6464340")]
	public static bool4x4 operator !=(float4x4 lhs, float rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015E4")]
	[Address(RVA = "0x64644C0", Offset = "0x64634C0", VA = "0x64644C0")]
	public static bool4x4 operator !=(float lhs, float4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015E6")]
	[Address(RVA = "0x6464650", Offset = "0x6463650", VA = "0x6464650", Slot = "4")]
	public bool Equals(float4x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60015E7")]
	[Address(RVA = "0x64647B0", Offset = "0x64637B0", VA = "0x64647B0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015E8")]
	[Address(RVA = "0x6464970", Offset = "0x6463970", VA = "0x6464970", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015E9")]
	[Address(RVA = "0x6464A80", Offset = "0x6463A80", VA = "0x6464A80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015EA")]
	[Address(RVA = "0x6465090", Offset = "0x6464090", VA = "0x6465090", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x60015EB")]
	[Address(RVA = "0x6465600", Offset = "0x6464600", VA = "0x6465600")]
	public static implicit operator float4x4(Matrix4x4 m)
	{
		return default(float4x4);
	}

	[Token(Token = "0x60015EC")]
	[Address(RVA = "0x6465630", Offset = "0x6464630", VA = "0x6465630")]
	public static implicit operator Matrix4x4(float4x4 m)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60015ED")]
	[Address(RVA = "0x6465690", Offset = "0x6464690", VA = "0x6465690")]
	public float4x4(float3x3 rotation, float3 translation)
	{
	}

	[Token(Token = "0x60015EE")]
	[Address(RVA = "0x64656E0", Offset = "0x64646E0", VA = "0x64656E0")]
	public float4x4(quaternion rotation, float3 translation)
	{
	}

	[Token(Token = "0x60015EF")]
	[Address(RVA = "0x6465770", Offset = "0x6464770", VA = "0x6465770")]
	public float4x4(RigidTransform transform)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015F0")]
	[Address(RVA = "0x6465800", Offset = "0x6464800", VA = "0x6465800")]
	public static float4x4 AxisAngle(float3 axis, float angle)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015F1")]
	[Address(RVA = "0x6465A20", Offset = "0x6464A20", VA = "0x6465A20")]
	public static float4x4 EulerXYZ(float3 xyz)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015F2")]
	[Address(RVA = "0x6465B30", Offset = "0x6464B30", VA = "0x6465B30")]
	public static float4x4 EulerXZY(float3 xyz)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015F3")]
	[Address(RVA = "0x6465C40", Offset = "0x6464C40", VA = "0x6465C40")]
	public static float4x4 EulerYXZ(float3 xyz)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015F4")]
	[Address(RVA = "0x6465D60", Offset = "0x6464D60", VA = "0x6465D60")]
	public static float4x4 EulerYZX(float3 xyz)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015F5")]
	[Address(RVA = "0x6465E70", Offset = "0x6464E70", VA = "0x6465E70")]
	public static float4x4 EulerZXY(float3 xyz)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015F6")]
	[Address(RVA = "0x6465FA0", Offset = "0x6464FA0", VA = "0x6465FA0")]
	public static float4x4 EulerZYX(float3 xyz)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015F7")]
	[Address(RVA = "0x64660C0", Offset = "0x64650C0", VA = "0x64660C0")]
	public static float4x4 EulerXYZ(float x, float y, float z)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015F8")]
	[Address(RVA = "0x64661E0", Offset = "0x64651E0", VA = "0x64661E0")]
	public static float4x4 EulerXZY(float x, float y, float z)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015F9")]
	[Address(RVA = "0x6466300", Offset = "0x6465300", VA = "0x6466300")]
	public static float4x4 EulerYXZ(float x, float y, float z)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015FA")]
	[Address(RVA = "0x6466430", Offset = "0x6465430", VA = "0x6466430")]
	public static float4x4 EulerYZX(float x, float y, float z)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015FB")]
	[Address(RVA = "0x6466550", Offset = "0x6465550", VA = "0x6466550")]
	public static float4x4 EulerZXY(float x, float y, float z)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015FC")]
	[Address(RVA = "0x6466680", Offset = "0x6465680", VA = "0x6466680")]
	public static float4x4 EulerZYX(float x, float y, float z)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015FD")]
	[Address(RVA = "0x64667B0", Offset = "0x64657B0", VA = "0x64667B0")]
	public static float4x4 Euler(float3 xyz, math.RotationOrder order = math.RotationOrder.ZXY)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015FE")]
	[Address(RVA = "0x6466E60", Offset = "0x6465E60", VA = "0x6466E60")]
	public static float4x4 Euler(float x, float y, float z, math.RotationOrder order = math.RotationOrder.ZXY)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015FF")]
	[Address(RVA = "0x6466EB0", Offset = "0x6465EB0", VA = "0x6466EB0")]
	public static float4x4 RotateX(float angle)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001600")]
	[Address(RVA = "0x6467000", Offset = "0x6466000", VA = "0x6467000")]
	public static float4x4 RotateY(float angle)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001601")]
	[Address(RVA = "0x6467160", Offset = "0x6466160", VA = "0x6467160")]
	public static float4x4 RotateZ(float angle)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001602")]
	[Address(RVA = "0x64672B0", Offset = "0x64662B0", VA = "0x64672B0")]
	public static float4x4 Scale(float s)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001603")]
	[Address(RVA = "0x64672E0", Offset = "0x64662E0", VA = "0x64672E0")]
	public static float4x4 Scale(float x, float y, float z)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001604")]
	[Address(RVA = "0x6467310", Offset = "0x6466310", VA = "0x6467310")]
	public static float4x4 Scale(float3 scales)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001605")]
	[Address(RVA = "0x6467340", Offset = "0x6466340", VA = "0x6467340")]
	public static float4x4 Translate(float3 vector)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001606")]
	[Address(RVA = "0x6467380", Offset = "0x6466380", VA = "0x6467380")]
	public static float4x4 LookAt(float3 eye, float3 target, float3 up)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001607")]
	[Address(RVA = "0x6467600", Offset = "0x6466600", VA = "0x6467600")]
	public static float4x4 Ortho(float width, float height, float near, float far)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001608")]
	[Address(RVA = "0x6467680", Offset = "0x6466680", VA = "0x6467680")]
	public static float4x4 OrthoOffCenter(float left, float right, float bottom, float top, float near, float far)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001609")]
	[Address(RVA = "0x6467720", Offset = "0x6466720", VA = "0x6467720")]
	public static float4x4 PerspectiveFov(float verticalFov, float aspect, float near, float far)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600160A")]
	[Address(RVA = "0x6467850", Offset = "0x6466850", VA = "0x6467850")]
	public static float4x4 PerspectiveOffCenter(float left, float right, float bottom, float top, float near, float far)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600160B")]
	[Address(RVA = "0x64678F0", Offset = "0x64668F0", VA = "0x64678F0")]
	public static float4x4 TRS(float3 translation, quaternion rotation, float3 scale)
	{
		return default(float4x4);
	}
}
