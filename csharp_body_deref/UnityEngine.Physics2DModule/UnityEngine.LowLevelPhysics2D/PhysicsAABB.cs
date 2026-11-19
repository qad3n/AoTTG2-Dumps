// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LowLevelPhysics2D.PhysicsAABB
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.LowLevelPhysics2D;

[Serializable]
[Token(Token = "0x2000017")]
public struct PhysicsAABB
{
	[Token(Token = "0x40000C0")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private Vector2 m_LowerBound;

	[Token(Token = "0x40000C1")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	private Vector2 m_UpperBound;

	[Token(Token = "0x1700001F")]
	public readonly bool isValid
	{
		[Token(Token = "0x60000CE")]
		[Address(RVA = "0x69CC230", Offset = "0x69CB230", VA = "0x69CC230")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000020")]
	public Vector2 lowerBound
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60000CF")]
		[Address(RVA = "0x69CC280", Offset = "0x69CB280", VA = "0x69CC280")]
		readonly get
		{
			return default(Vector2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60000D0")]
		[Address(RVA = "0x69CC290", Offset = "0x69CB290", VA = "0x69CC290")]
		set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public Vector2 upperBound
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60000D1")]
		[Address(RVA = "0x69CC2A0", Offset = "0x69CB2A0", VA = "0x69CC2A0")]
		readonly get
		{
			return default(Vector2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60000D2")]
		[Address(RVA = "0x69CC2B0", Offset = "0x69CB2B0", VA = "0x69CC2B0")]
		set
		{
		}
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x69CC2C0", Offset = "0x69CB2C0", VA = "0x69CC2C0", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}
}
