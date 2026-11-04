// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.GlyphAnchorPoint
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
[Token(Token = "0x2000007")]
public struct GlyphAnchorPoint
{
	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private float m_XCoordinate;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	private float m_YCoordinate;

	[Token(Token = "0x17000001")]
	public float xCoordinate
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x562BA0", Offset = "0x5611A0", VA = "0x180562BA0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x2CDDC80", Offset = "0x2CDC280", VA = "0x182CDDC80")]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public float yCoordinate
	{
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x562BB0", Offset = "0x5611B0", VA = "0x180562BB0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x2CDDC90", Offset = "0x2CDC290", VA = "0x182CDDC90")]
		set
		{
		}
	}
}
