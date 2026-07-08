using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200000F")]
[UnityEngine.Bindings.NativeHeader("Modules/Physics/RaycastHit.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("PhysicsScriptingClasses.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Interfaces/IRaycast.h")]
public struct RaycastHit
{
	[Token(Token = "0x400003C")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.NativeName("point")]
	internal Vector3 m_Point;

	[Token(Token = "0x400003D")]
	[FieldOffset(Offset = "0xC")]
	[UnityEngine.Bindings.NativeName("normal")]
	internal Vector3 m_Normal;

	[Token(Token = "0x400003E")]
	[FieldOffset(Offset = "0x18")]
	[UnityEngine.Bindings.NativeName("faceID")]
	internal uint m_FaceID;

	[Token(Token = "0x400003F")]
	[FieldOffset(Offset = "0x1C")]
	[UnityEngine.Bindings.NativeName("distance")]
	internal float m_Distance;

	[Token(Token = "0x4000040")]
	[FieldOffset(Offset = "0x20")]
	[UnityEngine.Bindings.NativeName("uv")]
	internal Vector2 m_UV;

	[Token(Token = "0x4000041")]
	[FieldOffset(Offset = "0x28")]
	[UnityEngine.Bindings.NativeName("collider")]
	internal int m_Collider;

	[Token(Token = "0x17000012")]
	public Collider collider
	{
		[Token(Token = "0x600007B")]
		[Address(RVA = "0x4B561D0", Offset = "0x4B561D0", VA = "0x4B561D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000013")]
	public Vector3 point
	{
		[Token(Token = "0x600007C")]
		[Address(RVA = "0x4B56270", Offset = "0x4B56270", VA = "0x4B56270")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000014")]
	public Vector3 normal
	{
		[Token(Token = "0x600007D")]
		[Address(RVA = "0x4B56280", Offset = "0x4B56280", VA = "0x4B56280")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000015")]
	public float distance
	{
		[Token(Token = "0x600007E")]
		[Address(RVA = "0x4B56290", Offset = "0x4B56290", VA = "0x4B56290")]
		get
		{
			return default(float);
		}
	}
}
