// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.LowLevel.GlyphAnchorPoint
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.TextCore.LowLevel;

[Serializable]
[Token(Token = "0x2000013")]
[UnityEngine.Scripting.UsedByNativeCode]
internal struct GlyphAnchorPoint
{
	[Token(Token = "0x400007A")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("xPositionAdjustment")]
	private float m_XCoordinate;

	[Token(Token = "0x400007B")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("yPositionAdjustment")]
	private float m_YCoordinate;

	[Token(Token = "0x1700002D")]
	public float xCoordinate
	{
		[Token(Token = "0x6000084")]
		[Address(RVA = "0x4EA6840", Offset = "0x4EA6840", VA = "0x4EA6840")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700002E")]
	public float yCoordinate
	{
		[Token(Token = "0x6000085")]
		[Address(RVA = "0x4EA6850", Offset = "0x4EA6850", VA = "0x4EA6850")]
		get
		{
			return default(float);
		}
	}
}
