// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Keyframe
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200008D")]
[UnityEngine.Scripting.RequiredByNativeCode]
public struct Keyframe
{
	[Token(Token = "0x4000136")]
	[FieldOffset(Offset = "0x0")]
	private float m_Time;

	[Token(Token = "0x4000137")]
	[FieldOffset(Offset = "0x4")]
	private float m_Value;

	[Token(Token = "0x4000138")]
	[FieldOffset(Offset = "0x8")]
	private float m_InTangent;

	[Token(Token = "0x4000139")]
	[FieldOffset(Offset = "0xC")]
	private float m_OutTangent;

	[Token(Token = "0x400013A")]
	[FieldOffset(Offset = "0x10")]
	private int m_WeightedMode;

	[Token(Token = "0x400013B")]
	[FieldOffset(Offset = "0x14")]
	private float m_InWeight;

	[Token(Token = "0x400013C")]
	[FieldOffset(Offset = "0x18")]
	private float m_OutWeight;

	[Token(Token = "0x17000037")]
	public float time
	{
		[Token(Token = "0x60001DF")]
		[Address(RVA = "0x68BA8D0", Offset = "0x68B98D0", VA = "0x68BA8D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001E0")]
		[Address(RVA = "0x68BA8E0", Offset = "0x68B98E0", VA = "0x68BA8E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000038")]
	public float value
	{
		[Token(Token = "0x60001E1")]
		[Address(RVA = "0x68BA8F0", Offset = "0x68B98F0", VA = "0x68BA8F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001E2")]
		[Address(RVA = "0x68BA900", Offset = "0x68B9900", VA = "0x68BA900")]
		set
		{
		}
	}

	[Token(Token = "0x17000039")]
	public float inTangent
	{
		[Token(Token = "0x60001E3")]
		[Address(RVA = "0x68BA910", Offset = "0x68B9910", VA = "0x68BA910")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001E4")]
		[Address(RVA = "0x68BA920", Offset = "0x68B9920", VA = "0x68BA920")]
		set
		{
		}
	}

	[Token(Token = "0x1700003A")]
	public float outTangent
	{
		[Token(Token = "0x60001E5")]
		[Address(RVA = "0x68BA930", Offset = "0x68B9930", VA = "0x68BA930")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001E6")]
		[Address(RVA = "0x68BA940", Offset = "0x68B9940", VA = "0x68BA940")]
		set
		{
		}
	}

	[Token(Token = "0x1700003B")]
	public float inWeight
	{
		[Token(Token = "0x60001E7")]
		[Address(RVA = "0x68BA950", Offset = "0x68B9950", VA = "0x68BA950")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001E8")]
		[Address(RVA = "0x68BA960", Offset = "0x68B9960", VA = "0x68BA960")]
		set
		{
		}
	}

	[Token(Token = "0x1700003C")]
	public float outWeight
	{
		[Token(Token = "0x60001E9")]
		[Address(RVA = "0x68BA970", Offset = "0x68B9970", VA = "0x68BA970")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001EA")]
		[Address(RVA = "0x68BA980", Offset = "0x68B9980", VA = "0x68BA980")]
		set
		{
		}
	}

	[Token(Token = "0x1700003D")]
	public WeightedMode weightedMode
	{
		[Token(Token = "0x60001EB")]
		[Address(RVA = "0x68BA990", Offset = "0x68B9990", VA = "0x68BA990")]
		get
		{
			return default(WeightedMode);
		}
		[Token(Token = "0x60001EC")]
		[Address(RVA = "0x68BA9A0", Offset = "0x68B99A0", VA = "0x68BA9A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700003E")]
	[Obsolete("Use AnimationUtility.SetKeyLeftTangentMode, AnimationUtility.SetKeyRightTangentMode, AnimationUtility.GetKeyLeftTangentMode or AnimationUtility.GetKeyRightTangentMode instead.")]
	public int tangentMode
	{
		[Token(Token = "0x60001ED")]
		[Address(RVA = "0x68BA9B0", Offset = "0x68B99B0", VA = "0x68BA9B0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001EE")]
		[Address(RVA = "0x68BA9D0", Offset = "0x68B99D0", VA = "0x68BA9D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700003F")]
	internal int tangentModeInternal
	{
		[Token(Token = "0x60001EF")]
		[Address(RVA = "0x68BA9C0", Offset = "0x68B99C0", VA = "0x68BA9C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001F0")]
		[Address(RVA = "0x68BA9E0", Offset = "0x68B99E0", VA = "0x68BA9E0")]
		set
		{
		}
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x68BA880", Offset = "0x68B9880", VA = "0x68BA880")]
	public Keyframe(float time, float value)
	{
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x68BA8A0", Offset = "0x68B98A0", VA = "0x68BA8A0")]
	public Keyframe(float time, float value, float inTangent, float outTangent)
	{
	}
}
