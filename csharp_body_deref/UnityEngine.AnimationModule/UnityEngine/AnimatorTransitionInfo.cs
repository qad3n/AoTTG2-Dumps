// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AnimatorTransitionInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000013")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/AnimatorInfo.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public struct AnimatorTransitionInfo
{
	[Token(Token = "0x400003F")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.NativeName("fullPathHash")]
	private int m_FullPath;

	[Token(Token = "0x4000040")]
	[FieldOffset(Offset = "0x4")]
	[UnityEngine.Bindings.NativeName("userNameHash")]
	private int m_UserName;

	[Token(Token = "0x4000041")]
	[FieldOffset(Offset = "0x8")]
	[UnityEngine.Bindings.NativeName("nameHash")]
	private int m_Name;

	[Token(Token = "0x4000042")]
	[FieldOffset(Offset = "0xC")]
	[UnityEngine.Bindings.NativeName("hasFixedDuration")]
	private bool m_HasFixedDuration;

	[Token(Token = "0x4000043")]
	[FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.NativeName("duration")]
	private float m_Duration;

	[Token(Token = "0x4000044")]
	[FieldOffset(Offset = "0x14")]
	[UnityEngine.Bindings.NativeName("normalizedTime")]
	private float m_NormalizedTime;

	[Token(Token = "0x4000045")]
	[FieldOffset(Offset = "0x18")]
	[UnityEngine.Bindings.NativeName("anyState")]
	private bool m_AnyState;

	[Token(Token = "0x4000046")]
	[FieldOffset(Offset = "0x1C")]
	[UnityEngine.Bindings.NativeName("transitionType")]
	private int m_TransitionType;

	[Token(Token = "0x1700000F")]
	public float duration
	{
		[Token(Token = "0x600004F")]
		[Address(RVA = "0x4DA3B20", Offset = "0x4DA3B20", VA = "0x4DA3B20")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000010")]
	public float normalizedTime
	{
		[Token(Token = "0x6000050")]
		[Address(RVA = "0x4DA3B30", Offset = "0x4DA3B30", VA = "0x4DA3B30")]
		get
		{
			return default(float);
		}
	}
}
