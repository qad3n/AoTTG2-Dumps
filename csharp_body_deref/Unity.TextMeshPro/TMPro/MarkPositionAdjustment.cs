// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.MarkPositionAdjustment
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x66DABF0", Offset = "0x66D9BF0", VA = "0x66DABF0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x66DAC00", Offset = "0x66D9C00", VA = "0x66DAC00")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public float yPositionAdjustment
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x66DAC10", Offset = "0x66D9C10", VA = "0x66DAC10")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x66DAC20", Offset = "0x66D9C20", VA = "0x66DAC20")]
		set
		{
		}
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x66DAC30", Offset = "0x66D9C30", VA = "0x66DAC30")]
	public MarkPositionAdjustment(float x, float y)
	{
	}
}
