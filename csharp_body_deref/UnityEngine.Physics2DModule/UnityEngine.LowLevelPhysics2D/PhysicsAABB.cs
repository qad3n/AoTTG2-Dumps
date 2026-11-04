// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LowLevelPhysics2D.PhysicsAABB
// Update status: NEW in this game update
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
		[Address(RVA = "0x2FD0D60", Offset = "0x2FCF360", VA = "0x182FD0D60")]
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
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		readonly get
		{
			return default(Vector2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60000D0")]
		[Address(RVA = "0xB546E0", Offset = "0xB52CE0", VA = "0x180B546E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public Vector2 upperBound
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60000D1")]
		[Address(RVA = "0x2A88DA0", Offset = "0x2A873A0", VA = "0x182A88DA0")]
		readonly get
		{
			return default(Vector2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60000D2")]
		[Address(RVA = "0x1B943D0", Offset = "0x1B929D0", VA = "0x181B943D0")]
		set
		{
		}
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x2FD0C80", Offset = "0x2FCF280", VA = "0x182FD0C80", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}
}
