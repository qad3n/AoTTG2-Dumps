// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.RaycastHit
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4E7DB00", Offset = "0x4E7DB00", VA = "0x4E7DB00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000013")]
	public Vector3 point
	{
		[Token(Token = "0x600007C")]
		[Address(RVA = "0x4E7DBA0", Offset = "0x4E7DBA0", VA = "0x4E7DBA0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000014")]
	public Vector3 normal
	{
		[Token(Token = "0x600007D")]
		[Address(RVA = "0x4E7DBB0", Offset = "0x4E7DBB0", VA = "0x4E7DBB0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000015")]
	public float distance
	{
		[Token(Token = "0x600007E")]
		[Address(RVA = "0x4E7DBC0", Offset = "0x4E7DBC0", VA = "0x4E7DBC0")]
		get
		{
			return default(float);
		}
	}
}
