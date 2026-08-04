// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AnimatorStateInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000012")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/AnimatorInfo.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public struct AnimatorStateInfo
{
	[Token(Token = "0x4000036")]
	[FieldOffset(Offset = "0x0")]
	private int m_Name;

	[Token(Token = "0x4000037")]
	[FieldOffset(Offset = "0x4")]
	private int m_Path;

	[Token(Token = "0x4000038")]
	[FieldOffset(Offset = "0x8")]
	private int m_FullPath;

	[Token(Token = "0x4000039")]
	[FieldOffset(Offset = "0xC")]
	private float m_NormalizedTime;

	[Token(Token = "0x400003A")]
	[FieldOffset(Offset = "0x10")]
	private float m_Length;

	[Token(Token = "0x400003B")]
	[FieldOffset(Offset = "0x14")]
	private float m_Speed;

	[Token(Token = "0x400003C")]
	[FieldOffset(Offset = "0x18")]
	private float m_SpeedMultiplier;

	[Token(Token = "0x400003D")]
	[FieldOffset(Offset = "0x1C")]
	private int m_Tag;

	[Token(Token = "0x400003E")]
	[FieldOffset(Offset = "0x20")]
	private int m_Loop;

	[Token(Token = "0x1700000E")]
	public float normalizedTime
	{
		[Token(Token = "0x600004D")]
		[Address(RVA = "0x4DA3AD0", Offset = "0x4DA3AD0", VA = "0x4DA3AD0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x4DA3A50", Offset = "0x4DA3A50", VA = "0x4DA3A50")]
	public bool IsName(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x4DA3AE0", Offset = "0x4DA3AE0", VA = "0x4DA3AE0")]
	public bool IsTag(string tag)
	{
		return default(bool);
	}
}
