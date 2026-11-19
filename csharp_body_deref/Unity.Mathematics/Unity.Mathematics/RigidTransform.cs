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
	[Address(RVA = "0x6496C60", Offset = "0x6495C60", VA = "0x6496C60")]
	public RigidTransform(quaternion rotation, float3 translation)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EC7")]
	[Address(RVA = "0x6496C70", Offset = "0x6495C70", VA = "0x6496C70")]
	public RigidTransform(float3x3 rotation, float3 translation)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EC8")]
	[Address(RVA = "0x6496F60", Offset = "0x6495F60", VA = "0x6496F60")]
	public RigidTransform(float4x4 transform)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EC9")]
	[Address(RVA = "0x6497260", Offset = "0x6496260", VA = "0x6497260")]
	public static RigidTransform AxisAngle(float3 axis, float angle)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ECA")]
	[Address(RVA = "0x64973D0", Offset = "0x64963D0", VA = "0x64973D0")]
	public static RigidTransform EulerXYZ(float3 xyz)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ECB")]
	[Address(RVA = "0x6497500", Offset = "0x6496500", VA = "0x6497500")]
	public static RigidTransform EulerXZY(float3 xyz)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ECC")]
	[Address(RVA = "0x6497620", Offset = "0x6496620", VA = "0x6497620")]
	public static RigidTransform EulerYXZ(float3 xyz)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ECD")]
	[Address(RVA = "0x6497750", Offset = "0x6496750", VA = "0x6497750")]
	public static RigidTransform EulerYZX(float3 xyz)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ECE")]
	[Address(RVA = "0x6497890", Offset = "0x6496890", VA = "0x6497890")]
	public static RigidTransform EulerZXY(float3 xyz)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ECF")]
	[Address(RVA = "0x64979D0", Offset = "0x64969D0", VA = "0x64979D0")]
	public static RigidTransform EulerZYX(float3 xyz)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ED0")]
	[Address(RVA = "0x6497B00", Offset = "0x6496B00", VA = "0x6497B00")]
	public static RigidTransform EulerXYZ(float x, float y, float z)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ED1")]
	[Address(RVA = "0x6497C40", Offset = "0x6496C40", VA = "0x6497C40")]
	public static RigidTransform EulerXZY(float x, float y, float z)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ED2")]
	[Address(RVA = "0x6497D70", Offset = "0x6496D70", VA = "0x6497D70")]
	public static RigidTransform EulerYXZ(float x, float y, float z)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ED3")]
	[Address(RVA = "0x6497EB0", Offset = "0x6496EB0", VA = "0x6497EB0")]
	public static RigidTransform EulerYZX(float x, float y, float z)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ED4")]
	[Address(RVA = "0x6498000", Offset = "0x6497000", VA = "0x6498000")]
	public static RigidTransform EulerZXY(float x, float y, float z)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ED5")]
	[Address(RVA = "0x6498150", Offset = "0x6497150", VA = "0x6498150")]
	public static RigidTransform EulerZYX(float x, float y, float z)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ED6")]
	[Address(RVA = "0x6498290", Offset = "0x6497290", VA = "0x6498290")]
	public static RigidTransform Euler(float3 xyz, math.RotationOrder order = math.RotationOrder.ZXY)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ED7")]
	[Address(RVA = "0x6498950", Offset = "0x6497950", VA = "0x6498950")]
	public static RigidTransform Euler(float x, float y, float z, math.RotationOrder order = math.RotationOrder.ZXY)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ED8")]
	[Address(RVA = "0x6498990", Offset = "0x6497990", VA = "0x6498990")]
	public static RigidTransform RotateX(float angle)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ED9")]
	[Address(RVA = "0x6498AF0", Offset = "0x6497AF0", VA = "0x6498AF0")]
	public static RigidTransform RotateY(float angle)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EDA")]
	[Address(RVA = "0x6498C40", Offset = "0x6497C40", VA = "0x6498C40")]
	public static RigidTransform RotateZ(float angle)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EDB")]
	[Address(RVA = "0x6498D60", Offset = "0x6497D60", VA = "0x6498D60")]
	public static RigidTransform Translate(float3 vector)
	{
		return default(RigidTransform);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EDC")]
	[Address(RVA = "0x6498DD0", Offset = "0x6497DD0", VA = "0x6498DD0")]
	public bool Equals(RigidTransform x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EDD")]
	[Address(RVA = "0x6498E50", Offset = "0x6497E50", VA = "0x6498E50", Slot = "0")]
	public override bool Equals(object x)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EDE")]
	[Address(RVA = "0x6498F20", Offset = "0x6497F20", VA = "0x6498F20", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EDF")]
	[Address(RVA = "0x6498FA0", Offset = "0x6497FA0", VA = "0x6498FA0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EE0")]
	[Address(RVA = "0x6499290", Offset = "0x6498290", VA = "0x6499290")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
