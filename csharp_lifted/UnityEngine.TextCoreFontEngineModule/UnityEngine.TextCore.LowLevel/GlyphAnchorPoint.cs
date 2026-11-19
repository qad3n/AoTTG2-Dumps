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
[Token(Token = "0x2000015")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
[UnityEngine.Scripting.UsedByNativeCode]
internal struct GlyphAnchorPoint
{
	[Token(Token = "0x4000092")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.NativeName("xPositionAdjustment")]
	[SerializeField]
	private float m_XCoordinate;

	[Token(Token = "0x4000093")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("yPositionAdjustment")]
	private float m_YCoordinate;

	[Token(Token = "0x1700002D")]
	public float xCoordinate
	{
		[Token(Token = "0x60000AE")]
		[Address(RVA = "0x69FD450", Offset = "0x69FC450", VA = "0x69FD450")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000AF")]
		[Address(RVA = "0x69FD460", Offset = "0x69FC460", VA = "0x69FD460")]
		set
		{
		}
	}

	[Token(Token = "0x1700002E")]
	public float yCoordinate
	{
		[Token(Token = "0x60000B0")]
		[Address(RVA = "0x69FD470", Offset = "0x69FC470", VA = "0x69FD470")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000B1")]
		[Address(RVA = "0x69FD480", Offset = "0x69FC480", VA = "0x69FD480")]
		set
		{
		}
	}
}
