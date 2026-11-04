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
		[Token(Token = "0x60001DD")]
		[Address(RVA = "0x2ECC6C0", Offset = "0x2ECACC0", VA = "0x182ECC6C0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001DE")]
		[Address(RVA = "0x2CDDC80", Offset = "0x2CDC280", VA = "0x182CDDC80")]
		set
		{
		}
	}

	[Token(Token = "0x17000038")]
	public float value
	{
		[Token(Token = "0x60001DF")]
		[Address(RVA = "0x2E97670", Offset = "0x2E95C70", VA = "0x182E97670")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001E0")]
		[Address(RVA = "0x2CDDC90", Offset = "0x2CDC290", VA = "0x182CDDC90")]
		set
		{
		}
	}

	[Token(Token = "0x17000039")]
	public float inTangent
	{
		[Token(Token = "0x60001E1")]
		[Address(RVA = "0x2E97660", Offset = "0x2E95C60", VA = "0x182E97660")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001E2")]
		[Address(RVA = "0x2CDDA10", Offset = "0x2CDC010", VA = "0x182CDDA10")]
		set
		{
		}
	}

	[Token(Token = "0x1700003A")]
	public float outTangent
	{
		[Token(Token = "0x60001E3")]
		[Address(RVA = "0x2EAE460", Offset = "0x2EACA60", VA = "0x182EAE460")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001E4")]
		[Address(RVA = "0x2A3A8E0", Offset = "0x2A38EE0", VA = "0x182A3A8E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700003B")]
	public float inWeight
	{
		[Token(Token = "0x60001E5")]
		[Address(RVA = "0x15477A0", Offset = "0x1545DA0", VA = "0x1815477A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001E6")]
		[Address(RVA = "0x2B5B5E0", Offset = "0x2B59BE0", VA = "0x182B5B5E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700003C")]
	public float outWeight
	{
		[Token(Token = "0x60001E7")]
		[Address(RVA = "0x2E82BD0", Offset = "0x2E811D0", VA = "0x182E82BD0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001E8")]
		[Address(RVA = "0x585060", Offset = "0x583660", VA = "0x180585060")]
		set
		{
		}
	}

	[Token(Token = "0x1700003D")]
	public WeightedMode weightedMode
	{
		[Token(Token = "0x60001E9")]
		[Address(RVA = "0x1CBB700", Offset = "0x1CB9D00", VA = "0x181CBB700")]
		get
		{
			return default(WeightedMode);
		}
		[Token(Token = "0x60001EA")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
		set
		{
		}
	}

	[Token(Token = "0x1700003E")]
	[Obsolete("Use AnimationUtility.SetKeyLeftTangentMode, AnimationUtility.SetKeyRightTangentMode, AnimationUtility.GetKeyLeftTangentMode or AnimationUtility.GetKeyRightTangentMode instead.")]
	public int tangentMode
	{
		[Token(Token = "0x60001EB")]
		[Address(RVA = "0xB62B40", Offset = "0xB61140", VA = "0x180B62B40")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001EC")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
		set
		{
		}
	}

	[Token(Token = "0x1700003F")]
	internal int tangentModeInternal
	{
		[Token(Token = "0x60001ED")]
		[Address(RVA = "0xB62B40", Offset = "0xB61140", VA = "0x180B62B40")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001EE")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
		set
		{
		}
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x2ECC6A0", Offset = "0x2ECACA0", VA = "0x182ECC6A0")]
	public Keyframe(float time, float value)
	{
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x2ECC670", Offset = "0x2ECAC70", VA = "0x182ECC670")]
	public Keyframe(float time, float value, float inTangent, float outTangent)
	{
	}
}
