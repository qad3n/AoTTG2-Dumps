using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000072")]
[UnityEngine.Scripting.RequiredByNativeCode]
public struct Keyframe
{
	[Token(Token = "0x40000F0")]
	[FieldOffset(Offset = "0x0")]
	private float m_Time;

	[Token(Token = "0x40000F1")]
	[FieldOffset(Offset = "0x4")]
	private float m_Value;

	[Token(Token = "0x40000F2")]
	[FieldOffset(Offset = "0x8")]
	private float m_InTangent;

	[Token(Token = "0x40000F3")]
	[FieldOffset(Offset = "0xC")]
	private float m_OutTangent;

	[Token(Token = "0x40000F4")]
	[FieldOffset(Offset = "0x10")]
	private int m_WeightedMode;

	[Token(Token = "0x40000F5")]
	[FieldOffset(Offset = "0x14")]
	private float m_InWeight;

	[Token(Token = "0x40000F6")]
	[FieldOffset(Offset = "0x18")]
	private float m_OutWeight;

	[Token(Token = "0x17000020")]
	public float time
	{
		[Token(Token = "0x60000FC")]
		[Address(RVA = "0x4A867A0", Offset = "0x4A867A0", VA = "0x4A867A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000FD")]
		[Address(RVA = "0x4A867B0", Offset = "0x4A867B0", VA = "0x4A867B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public float value
	{
		[Token(Token = "0x60000FE")]
		[Address(RVA = "0x4A867C0", Offset = "0x4A867C0", VA = "0x4A867C0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000FF")]
		[Address(RVA = "0x4A867D0", Offset = "0x4A867D0", VA = "0x4A867D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000022")]
	public float inTangent
	{
		[Token(Token = "0x6000100")]
		[Address(RVA = "0x4A867E0", Offset = "0x4A867E0", VA = "0x4A867E0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000101")]
		[Address(RVA = "0x4A867F0", Offset = "0x4A867F0", VA = "0x4A867F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000023")]
	public float outTangent
	{
		[Token(Token = "0x6000102")]
		[Address(RVA = "0x4A86800", Offset = "0x4A86800", VA = "0x4A86800")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000103")]
		[Address(RVA = "0x4A86810", Offset = "0x4A86810", VA = "0x4A86810")]
		set
		{
		}
	}

	[Token(Token = "0x17000024")]
	public float inWeight
	{
		[Token(Token = "0x6000104")]
		[Address(RVA = "0x4A86820", Offset = "0x4A86820", VA = "0x4A86820")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000105")]
		[Address(RVA = "0x4A86830", Offset = "0x4A86830", VA = "0x4A86830")]
		set
		{
		}
	}

	[Token(Token = "0x17000025")]
	public float outWeight
	{
		[Token(Token = "0x6000106")]
		[Address(RVA = "0x4A86840", Offset = "0x4A86840", VA = "0x4A86840")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000107")]
		[Address(RVA = "0x4A86850", Offset = "0x4A86850", VA = "0x4A86850")]
		set
		{
		}
	}

	[Token(Token = "0x17000026")]
	public WeightedMode weightedMode
	{
		[Token(Token = "0x6000108")]
		[Address(RVA = "0x4A86860", Offset = "0x4A86860", VA = "0x4A86860")]
		get
		{
			return default(WeightedMode);
		}
		[Token(Token = "0x6000109")]
		[Address(RVA = "0x4A86870", Offset = "0x4A86870", VA = "0x4A86870")]
		set
		{
		}
	}

	[Token(Token = "0x17000027")]
	[Obsolete("Use AnimationUtility.SetKeyLeftTangentMode, AnimationUtility.SetKeyRightTangentMode, AnimationUtility.GetKeyLeftTangentMode or AnimationUtility.GetKeyRightTangentMode instead.")]
	public int tangentMode
	{
		[Token(Token = "0x600010A")]
		[Address(RVA = "0x4A86880", Offset = "0x4A86880", VA = "0x4A86880")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600010B")]
		[Address(RVA = "0x4A868A0", Offset = "0x4A868A0", VA = "0x4A868A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000028")]
	internal int tangentModeInternal
	{
		[Token(Token = "0x600010C")]
		[Address(RVA = "0x4A86890", Offset = "0x4A86890", VA = "0x4A86890")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600010D")]
		[Address(RVA = "0x4A868B0", Offset = "0x4A868B0", VA = "0x4A868B0")]
		set
		{
		}
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x4A86750", Offset = "0x4A86750", VA = "0x4A86750")]
	public Keyframe(float time, float value)
	{
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x4A86770", Offset = "0x4A86770", VA = "0x4A86770")]
	public Keyframe(float time, float value, float inTangent, float outTangent)
	{
	}
}
