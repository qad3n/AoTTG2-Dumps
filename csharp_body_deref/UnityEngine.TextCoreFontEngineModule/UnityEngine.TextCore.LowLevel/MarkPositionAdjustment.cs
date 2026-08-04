// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.LowLevel.MarkPositionAdjustment
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
[Token(Token = "0x2000014")]
[UnityEngine.Scripting.UsedByNativeCode]
internal struct MarkPositionAdjustment
{
	[Token(Token = "0x400007C")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("xCoordinate")]
	private float m_XPositionAdjustment;

	[Token(Token = "0x400007D")]
	[FieldOffset(Offset = "0x4")]
	[UnityEngine.Bindings.NativeName("yCoordinate")]
	[SerializeField]
	private float m_YPositionAdjustment;

	[Token(Token = "0x1700002F")]
	public float xPositionAdjustment
	{
		[Token(Token = "0x6000086")]
		[Address(RVA = "0x4EA6860", Offset = "0x4EA6860", VA = "0x4EA6860")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000030")]
	public float yPositionAdjustment
	{
		[Token(Token = "0x6000087")]
		[Address(RVA = "0x4EA6870", Offset = "0x4EA6870", VA = "0x4EA6870")]
		get
		{
			return default(float);
		}
	}
}
