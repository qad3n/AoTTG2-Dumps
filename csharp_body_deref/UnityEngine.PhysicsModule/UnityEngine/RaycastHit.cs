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

[Token(Token = "0x200001E")]
[UnityEngine.Bindings.NativeHeader("Runtime/Interfaces/IPhysics.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/Physics/RaycastHit.h")]
[UnityEngine.Bindings.NativeHeader("PhysicsScriptingClasses.h")]
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
		[Address(RVA = "0x69E1D90", Offset = "0x69E0D90", VA = "0x69E1D90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003C")]
	public Vector3 point
	{
		[Token(Token = "0x600011C")]
		[Address(RVA = "0x69E1E30", Offset = "0x69E0E30", VA = "0x69E1E30")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x1700003D")]
	public Vector3 normal
	{
		[Token(Token = "0x600011D")]
		[Address(RVA = "0x69E1E40", Offset = "0x69E0E40", VA = "0x69E1E40")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x1700003E")]
	public float distance
	{
		[Token(Token = "0x600011E")]
		[Address(RVA = "0x69E1E50", Offset = "0x69E0E50", VA = "0x69E1E50")]
		get
		{
			return default(float);
		}
	}
}
