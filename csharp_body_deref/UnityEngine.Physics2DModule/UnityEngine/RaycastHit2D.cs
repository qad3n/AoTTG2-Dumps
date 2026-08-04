// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.RaycastHit2D
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000008")]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = true, GenerateProxy = true)]
[UnityEngine.Bindings.NativeHeader("Runtime/Interfaces/IPhysics2D.h")]
[UnityEngine.NativeClass("RaycastHit2D", "struct RaycastHit2D;")]
public struct RaycastHit2D
{
	[Token(Token = "0x4000025")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.NativeName("centroid")]
	private Vector2 m_Centroid;

	[Token(Token = "0x4000026")]
	[FieldOffset(Offset = "0x8")]
	[UnityEngine.Bindings.NativeName("point")]
	private Vector2 m_Point;

	[Token(Token = "0x4000027")]
	[FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.NativeName("normal")]
	private Vector2 m_Normal;

	[Token(Token = "0x4000028")]
	[FieldOffset(Offset = "0x18")]
	[UnityEngine.Bindings.NativeName("distance")]
	private float m_Distance;

	[Token(Token = "0x4000029")]
	[FieldOffset(Offset = "0x1C")]
	[UnityEngine.Bindings.NativeName("fraction")]
	private float m_Fraction;

	[Token(Token = "0x400002A")]
	[FieldOffset(Offset = "0x20")]
	[UnityEngine.Bindings.NativeName("collider")]
	private int m_Collider;

	[Token(Token = "0x17000003")]
	public Vector2 point
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x4E75360", Offset = "0x4E75360", VA = "0x4E75360")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x17000004")]
	public Vector2 normal
	{
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x4E75370", Offset = "0x4E75370", VA = "0x4E75370")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x17000005")]
	public float distance
	{
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x4E75380", Offset = "0x4E75380", VA = "0x4E75380")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000006")]
	public Collider2D collider
	{
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x4E75390", Offset = "0x4E75390", VA = "0x4E75390")]
		get
		{
			return null;
		}
	}
}
