// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.RigidTransform
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x2000050")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct RigidTransform
{
	[Token(Token = "0x4000133")]
	[FieldOffset(Offset = "0x0")]
	public quaternion rot;

	[Token(Token = "0x4000134")]
	[FieldOffset(Offset = "0x10")]
	public float3 pos;

	[Token(Token = "0x4000135")]
	[FieldOffset(Offset = "0x0")]
	public static readonly RigidTransform identity;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EC6")]
	[Address(RVA = "0x2AAE1C0", Offset = "0x2AAC7C0", VA = "0x182AAE1C0")]
	public RigidTransform(quaternion rotation, float3 translation)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EC7")]
	[Address(RVA = "0x2AAE1E0", Offset = "0x2AAC7E0", VA = "0x182AAE1E0")]
	public RigidTransform(float3x3 rotation, float3 translation)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EC8")]
	[Address(RVA = "0x2AAE250", Offset = "0x2AAC850", VA = "0x182AAE250")]
	public RigidTransform(float4x4 transform)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EC9")]
	[Address(RVA = "0x2AAC9F0", Offset = "0x2AAAFF0", VA = "0x182AAC9F0")]
	public static RigidTransform AxisAngle(float3 axis, float angle)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ECA")]
	[Address(RVA = "0x2AACC70", Offset = "0x2AAB270", VA = "0x182AACC70")]
	public static RigidTransform EulerXYZ(float3 xyz)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ECB")]
	[Address(RVA = "0x2AACE90", Offset = "0x2AAB490", VA = "0x182AACE90")]
	public static RigidTransform EulerXZY(float3 xyz)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ECC")]
	[Address(RVA = "0x2AACF10", Offset = "0x2AAB510", VA = "0x182AACF10")]
	public static RigidTransform EulerYXZ(float3 xyz)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ECD")]
	[Address(RVA = "0x2AAD130", Offset = "0x2AAB730", VA = "0x182AAD130")]
	public static RigidTransform EulerYZX(float3 xyz)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ECE")]
	[Address(RVA = "0x2AAD1B0", Offset = "0x2AAB7B0", VA = "0x182AAD1B0")]
	public static RigidTransform EulerZXY(float3 xyz)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ECF")]
	[Address(RVA = "0x2AAD3D0", Offset = "0x2AAB9D0", VA = "0x182AAD3D0")]
	public static RigidTransform EulerZYX(float3 xyz)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ED0")]
	[Address(RVA = "0x2AACCF0", Offset = "0x2AAB2F0", VA = "0x182AACCF0")]
	public static RigidTransform EulerXYZ(float x, float y, float z)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ED1")]
	[Address(RVA = "0x2AACDC0", Offset = "0x2AAB3C0", VA = "0x182AACDC0")]
	public static RigidTransform EulerXZY(float x, float y, float z)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ED2")]
	[Address(RVA = "0x2AACF90", Offset = "0x2AAB590", VA = "0x182AACF90")]
	public static RigidTransform EulerYXZ(float x, float y, float z)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ED3")]
	[Address(RVA = "0x2AAD060", Offset = "0x2AAB660", VA = "0x182AAD060")]
	public static RigidTransform EulerYZX(float x, float y, float z)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ED4")]
	[Address(RVA = "0x2AAD230", Offset = "0x2AAB830", VA = "0x182AAD230")]
	public static RigidTransform EulerZXY(float x, float y, float z)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ED5")]
	[Address(RVA = "0x2AAD300", Offset = "0x2AAB900", VA = "0x182AAD300")]
	public static RigidTransform EulerZYX(float x, float y, float z)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ED6")]
	[Address(RVA = "0x2AAD450", Offset = "0x2AABA50", VA = "0x182AAD450")]
	public static RigidTransform Euler(float3 xyz, math.RotationOrder order = math.RotationOrder.ZXY)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ED7")]
	[Address(RVA = "0x2AAD6A0", Offset = "0x2AABCA0", VA = "0x182AAD6A0")]
	public static RigidTransform Euler(float x, float y, float z, math.RotationOrder order = math.RotationOrder.ZXY)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ED8")]
	[Address(RVA = "0x2AAD780", Offset = "0x2AABD80", VA = "0x182AAD780")]
	public static RigidTransform RotateX(float angle)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ED9")]
	[Address(RVA = "0x2AAD890", Offset = "0x2AABE90", VA = "0x182AAD890")]
	public static RigidTransform RotateY(float angle)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EDA")]
	[Address(RVA = "0x2AAD9A0", Offset = "0x2AABFA0", VA = "0x182AAD9A0")]
	public static RigidTransform RotateZ(float angle)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EDB")]
	[Address(RVA = "0x2AAE100", Offset = "0x2AAC700", VA = "0x182AAE100")]
	public static RigidTransform Translate(float3 vector)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EDC")]
	[Address(RVA = "0x2AACC10", Offset = "0x2AAB210", VA = "0x182AACC10")]
	public bool Equals(RigidTransform x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EDD")]
	[Address(RVA = "0x2AACB20", Offset = "0x2AAB120", VA = "0x182AACB20", Slot = "0")]
	public override bool Equals(object x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EDE")]
	[Address(RVA = "0x2AAD6F0", Offset = "0x2AABCF0", VA = "0x182AAD6F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EDF")]
	[Address(RVA = "0x2AADDC0", Offset = "0x2AAC3C0", VA = "0x182AADDC0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EE0")]
	[Address(RVA = "0x2AADAB0", Offset = "0x2AAC0B0", VA = "0x182AADAB0")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
