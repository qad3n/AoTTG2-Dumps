// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ContactPairPoint
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000017")]
[UnityEngine.Scripting.UsedByNativeCode]
public readonly struct ContactPairPoint
{
	[Token(Token = "0x4000046")]
	[FieldOffset(Offset = "0x0")]
	internal readonly Vector3 m_Position;

	[Token(Token = "0x4000047")]
	[FieldOffset(Offset = "0xC")]
	internal readonly float m_Separation;

	[Token(Token = "0x4000048")]
	[FieldOffset(Offset = "0x10")]
	internal readonly Vector3 m_Normal;

	[Token(Token = "0x4000049")]
	[FieldOffset(Offset = "0x1C")]
	internal readonly uint m_InternalFaceIndex0;

	[Token(Token = "0x400004A")]
	[FieldOffset(Offset = "0x20")]
	internal readonly Vector3 m_Impulse;

	[Token(Token = "0x400004B")]
	[FieldOffset(Offset = "0x2C")]
	internal readonly uint m_InternalFaceIndex1;

	[Token(Token = "0x17000032")]
	public Vector3 position
	{
		[Token(Token = "0x60000DB")]
		[Address(RVA = "0x180F7A0", Offset = "0x180DDA0", VA = "0x18180F7A0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000033")]
	public float separation
	{
		[Token(Token = "0x60000DC")]
		[Address(RVA = "0x562B80", Offset = "0x561180", VA = "0x180562B80")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000034")]
	public Vector3 normal
	{
		[Token(Token = "0x60000DD")]
		[Address(RVA = "0x561130", Offset = "0x55F730", VA = "0x180561130")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000035")]
	public Vector3 impulse
	{
		[Token(Token = "0x60000DE")]
		[Address(RVA = "0x2D961A0", Offset = "0x2D947A0", VA = "0x182D961A0")]
		get
		{
			return default(Vector3);
		}
	}
}
