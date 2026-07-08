using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x2000052")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct RigidTransform
{
	[Token(Token = "0x400012C")]
	[FieldOffset(Offset = "0x0")]
	public quaternion rot;

	[Token(Token = "0x400012D")]
	[FieldOffset(Offset = "0x10")]
	public float3 pos;

	[Token(Token = "0x400012E")]
	[FieldOffset(Offset = "0x0")]
	public static readonly RigidTransform identity;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E7B")]
	[Address(RVA = "0x4800280", Offset = "0x4800280", VA = "0x4800280")]
	public RigidTransform(quaternion rotation, float3 translation)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E7C")]
	[Address(RVA = "0x4800290", Offset = "0x4800290", VA = "0x4800290")]
	public RigidTransform(float3x3 rotation, float3 translation)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E7D")]
	[Address(RVA = "0x4800300", Offset = "0x4800300", VA = "0x4800300")]
	public RigidTransform(float4x4 transform)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E7E")]
	[Address(RVA = "0x4800370", Offset = "0x4800370", VA = "0x4800370")]
	public static RigidTransform AxisAngle(float3 axis, float angle)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E7F")]
	[Address(RVA = "0x48004B0", Offset = "0x48004B0", VA = "0x48004B0")]
	public static RigidTransform EulerXYZ(float3 xyz)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E80")]
	[Address(RVA = "0x48005E0", Offset = "0x48005E0", VA = "0x48005E0")]
	public static RigidTransform EulerXZY(float3 xyz)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E81")]
	[Address(RVA = "0x4800700", Offset = "0x4800700", VA = "0x4800700")]
	public static RigidTransform EulerYXZ(float3 xyz)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E82")]
	[Address(RVA = "0x4800830", Offset = "0x4800830", VA = "0x4800830")]
	public static RigidTransform EulerYZX(float3 xyz)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E83")]
	[Address(RVA = "0x4800950", Offset = "0x4800950", VA = "0x4800950")]
	public static RigidTransform EulerZXY(float3 xyz)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E84")]
	[Address(RVA = "0x4800A80", Offset = "0x4800A80", VA = "0x4800A80")]
	public static RigidTransform EulerZYX(float3 xyz)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E85")]
	[Address(RVA = "0x4800BB0", Offset = "0x4800BB0", VA = "0x4800BB0")]
	public static RigidTransform EulerXYZ(float x, float y, float z)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E86")]
	[Address(RVA = "0x4800CF0", Offset = "0x4800CF0", VA = "0x4800CF0")]
	public static RigidTransform EulerXZY(float x, float y, float z)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E87")]
	[Address(RVA = "0x4800E20", Offset = "0x4800E20", VA = "0x4800E20")]
	public static RigidTransform EulerYXZ(float x, float y, float z)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E88")]
	[Address(RVA = "0x4800F60", Offset = "0x4800F60", VA = "0x4800F60")]
	public static RigidTransform EulerYZX(float x, float y, float z)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E89")]
	[Address(RVA = "0x4801090", Offset = "0x4801090", VA = "0x4801090")]
	public static RigidTransform EulerZXY(float x, float y, float z)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E8A")]
	[Address(RVA = "0x48011D0", Offset = "0x48011D0", VA = "0x48011D0")]
	public static RigidTransform EulerZYX(float x, float y, float z)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E8B")]
	[Address(RVA = "0x4801310", Offset = "0x4801310", VA = "0x4801310")]
	public static RigidTransform Euler(float3 xyz, math.RotationOrder order = math.RotationOrder.ZXY)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E8C")]
	[Address(RVA = "0x4801980", Offset = "0x4801980", VA = "0x4801980")]
	public static RigidTransform Euler(float x, float y, float z, math.RotationOrder order = math.RotationOrder.ZXY)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E8D")]
	[Address(RVA = "0x48019C0", Offset = "0x48019C0", VA = "0x48019C0")]
	public static RigidTransform RotateX(float angle)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E8E")]
	[Address(RVA = "0x4801AF0", Offset = "0x4801AF0", VA = "0x4801AF0")]
	public static RigidTransform RotateY(float angle)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E8F")]
	[Address(RVA = "0x4801C20", Offset = "0x4801C20", VA = "0x4801C20")]
	public static RigidTransform RotateZ(float angle)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E90")]
	[Address(RVA = "0x4801D50", Offset = "0x4801D50", VA = "0x4801D50")]
	public static RigidTransform Translate(float3 vector)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E91")]
	[Address(RVA = "0x4801DC0", Offset = "0x4801DC0", VA = "0x4801DC0")]
	public bool Equals(RigidTransform x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E92")]
	[Address(RVA = "0x4801E40", Offset = "0x4801E40", VA = "0x4801E40", Slot = "0")]
	public override bool Equals(object x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E93")]
	[Address(RVA = "0x4801F10", Offset = "0x4801F10", VA = "0x4801F10", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E94")]
	[Address(RVA = "0x4801FB0", Offset = "0x4801FB0", VA = "0x4801FB0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E95")]
	[Address(RVA = "0x4802280", Offset = "0x4802280", VA = "0x4802280")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
