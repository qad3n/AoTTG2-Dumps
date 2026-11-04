// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.LowLevel.GlyphAnchorPoint
// Update status: CHANGED in this game update
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
		[Token(Token = "0x60000AA")]
		[Address(RVA = "0x2ECC6C0", Offset = "0x2ECACC0", VA = "0x182ECC6C0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000AB")]
		[Address(RVA = "0x2CDDC80", Offset = "0x2CDC280", VA = "0x182CDDC80")]
		set
		{
		}
	}

	[Token(Token = "0x1700002E")]
	public float yCoordinate
	{
		[Token(Token = "0x60000AC")]
		[Address(RVA = "0x2E97670", Offset = "0x2E95C70", VA = "0x182E97670")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000AD")]
		[Address(RVA = "0x2CDDC90", Offset = "0x2CDC290", VA = "0x182CDDC90")]
		set
		{
		}
	}
}
