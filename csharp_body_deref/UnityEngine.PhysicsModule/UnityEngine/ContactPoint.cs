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
		[Address(RVA = "0x4B5B0C0", Offset = "0x4B5B0C0", VA = "0x4B5B0C0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x1700003A")]
	public Vector3 normal
	{
		[Token(Token = "0x6000121")]
		[Address(RVA = "0x4B5B0D0", Offset = "0x4B5B0D0", VA = "0x4B5B0D0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x1700003B")]
	public Vector3 impulse
	{
		[Token(Token = "0x6000122")]
		[Address(RVA = "0x4B5B0E0", Offset = "0x4B5B0E0", VA = "0x4B5B0E0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x1700003C")]
	public float separation
	{
		[Token(Token = "0x6000123")]
		[Address(RVA = "0x4B5B0F0", Offset = "0x4B5B0F0", VA = "0x4B5B0F0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x4B4EE40", Offset = "0x4B4EE40", VA = "0x4B4EE40")]
	internal ContactPoint(Vector3 point, Vector3 normal, Vector3 impulse, float separation, int thisInstanceID, int otherInstenceID)
	{
	}
}
