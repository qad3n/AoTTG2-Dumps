// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ContactPoint
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200001A")]
[UnityEngine.Bindings.NativeHeader("Modules/Physics/MessageParameters.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct ContactPoint
{
	[Token(Token = "0x4000042")]
	[FieldOffset(Offset = "0x0")]
	internal Vector3 m_Point;

	[Token(Token = "0x4000043")]
	[FieldOffset(Offset = "0xC")]
	internal Vector3 m_Normal;

	[Token(Token = "0x4000044")]
	[FieldOffset(Offset = "0x18")]
	internal Vector3 m_Impulse;

	[Token(Token = "0x4000045")]
	[FieldOffset(Offset = "0x24")]
	internal int m_ThisColliderInstanceID;

	[Token(Token = "0x4000046")]
	[FieldOffset(Offset = "0x28")]
	internal int m_OtherColliderInstanceID;

	[Token(Token = "0x4000047")]
	[FieldOffset(Offset = "0x2C")]
	internal float m_Separation;

	[Token(Token = "0x17000039")]
	public Vector3 point
	{
		[Token(Token = "0x6000120")]
		[Address(RVA = "0x4E829F0", Offset = "0x4E829F0", VA = "0x4E829F0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x1700003A")]
	public Vector3 normal
	{
		[Token(Token = "0x6000121")]
		[Address(RVA = "0x4E82A00", Offset = "0x4E82A00", VA = "0x4E82A00")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x1700003B")]
	public Vector3 impulse
	{
		[Token(Token = "0x6000122")]
		[Address(RVA = "0x4E82A10", Offset = "0x4E82A10", VA = "0x4E82A10")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x1700003C")]
	public float separation
	{
		[Token(Token = "0x6000123")]
		[Address(RVA = "0x4E82A20", Offset = "0x4E82A20", VA = "0x4E82A20")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x4E76770", Offset = "0x4E76770", VA = "0x4E76770")]
	internal ContactPoint(Vector3 point, Vector3 normal, Vector3 impulse, float separation, int thisInstanceID, int otherInstenceID)
	{
	}
}
