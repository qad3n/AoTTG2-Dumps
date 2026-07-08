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
		[Address(RVA = "0x4A7C2B0", Offset = "0x4A7C2B0", VA = "0x4A7C2B0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x4A7C230", Offset = "0x4A7C230", VA = "0x4A7C230")]
	public bool IsName(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x4A7C2C0", Offset = "0x4A7C2C0", VA = "0x4A7C2C0")]
	public bool IsTag(string tag)
	{
		return default(bool);
	}
}
