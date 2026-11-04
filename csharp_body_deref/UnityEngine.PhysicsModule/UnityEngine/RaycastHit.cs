// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.RaycastHit
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200001E")]
[UnityEngine.Bindings.NativeHeader("Runtime/Interfaces/IPhysics.h")]
[UnityEngine.Bindings.NativeHeader("PhysicsScriptingClasses.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Physics/RaycastHit.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct RaycastHit
{
	[Token(Token = "0x4000070")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.NativeName("point")]
	internal Vector3 m_Point;

	[Token(Token = "0x4000071")]
	[FieldOffset(Offset = "0xC")]
	[UnityEngine.Bindings.NativeName("normal")]
	internal Vector3 m_Normal;

	[Token(Token = "0x4000072")]
	[FieldOffset(Offset = "0x18")]
	[UnityEngine.Bindings.NativeName("faceID")]
	internal uint m_FaceID;

	[Token(Token = "0x4000073")]
	[FieldOffset(Offset = "0x1C")]
	[UnityEngine.Bindings.NativeName("distance")]
	internal float m_Distance;

	[Token(Token = "0x4000074")]
	[FieldOffset(Offset = "0x20")]
	[UnityEngine.Bindings.NativeName("uv")]
	internal Vector2 m_UV;

	[Token(Token = "0x4000075")]
	[FieldOffset(Offset = "0x28")]
	[UnityEngine.Bindings.NativeName("collider")]
	internal EntityId m_Collider;

	[Token(Token = "0x1700003B")]
	public Collider collider
	{
		[Token(Token = "0x600011B")]
		[Address(RVA = "0x2FE6A00", Offset = "0x2FE5000", VA = "0x182FE6A00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003C")]
	public Vector3 point
	{
		[Token(Token = "0x600011C")]
		[Address(RVA = "0x2FDEB80", Offset = "0x2FDD180", VA = "0x182FDEB80")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x1700003D")]
	public Vector3 normal
	{
		[Token(Token = "0x600011D")]
		[Address(RVA = "0x2FDEB60", Offset = "0x2FDD160", VA = "0x182FDEB60")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x1700003E")]
	public float distance
	{
		[Token(Token = "0x600011E")]
		[Address(RVA = "0x2E8CC00", Offset = "0x2E8B200", VA = "0x182E8CC00")]
		get
		{
			return default(float);
		}
	}
}
