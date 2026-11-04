// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.LowLevel.MarkPositionAdjustment
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
[Token(Token = "0x2000016")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
[UnityEngine.Scripting.UsedByNativeCode]
internal struct MarkPositionAdjustment
{
	[Token(Token = "0x4000094")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("xCoordinate")]
	private float m_XPositionAdjustment;

	[Token(Token = "0x4000095")]
	[FieldOffset(Offset = "0x4")]
	[UnityEngine.Bindings.NativeName("yCoordinate")]
	[SerializeField]
	private float m_YPositionAdjustment;

	[Token(Token = "0x1700002F")]
	public float xPositionAdjustment
	{
		[Token(Token = "0x60000AE")]
		[Address(RVA = "0x2ECC6C0", Offset = "0x2ECACC0", VA = "0x182ECC6C0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000AF")]
		[Address(RVA = "0x2CDDC80", Offset = "0x2CDC280", VA = "0x182CDDC80")]
		set
		{
		}
	}

	[Token(Token = "0x17000030")]
	public float yPositionAdjustment
	{
		[Token(Token = "0x60000B0")]
		[Address(RVA = "0x2E97670", Offset = "0x2E95C70", VA = "0x182E97670")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000B1")]
		[Address(RVA = "0x2CDDC90", Offset = "0x2CDC290", VA = "0x182CDDC90")]
		set
		{
		}
	}
}
