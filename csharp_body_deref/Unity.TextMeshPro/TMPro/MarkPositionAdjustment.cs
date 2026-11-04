// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.MarkPositionAdjustment
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Serializable]
[Token(Token = "0x2000008")]
public struct MarkPositionAdjustment
{
	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private float m_XPositionAdjustment;

	[Token(Token = "0x4000011")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	private float m_YPositionAdjustment;

	[Token(Token = "0x17000003")]
	public float xPositionAdjustment
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x562BA0", Offset = "0x5611A0", VA = "0x180562BA0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x2CDDC80", Offset = "0x2CDC280", VA = "0x182CDDC80")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public float yPositionAdjustment
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x562BB0", Offset = "0x5611B0", VA = "0x180562BB0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x2CDDC90", Offset = "0x2CDC290", VA = "0x182CDDC90")]
		set
		{
		}
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x1028C00", Offset = "0x1027200", VA = "0x181028C00")]
	public MarkPositionAdjustment(float x, float y)
	{
	}
}
