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
		[Address(RVA = "0x4DADFC0", Offset = "0x4DADFC0", VA = "0x4DADFC0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000FD")]
		[Address(RVA = "0x4DADFD0", Offset = "0x4DADFD0", VA = "0x4DADFD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public float value
	{
		[Token(Token = "0x60000FE")]
		[Address(RVA = "0x4DADFE0", Offset = "0x4DADFE0", VA = "0x4DADFE0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000FF")]
		[Address(RVA = "0x4DADFF0", Offset = "0x4DADFF0", VA = "0x4DADFF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000022")]
	public float inTangent
	{
		[Token(Token = "0x6000100")]
		[Address(RVA = "0x4DAE000", Offset = "0x4DAE000", VA = "0x4DAE000")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000101")]
		[Address(RVA = "0x4DAE010", Offset = "0x4DAE010", VA = "0x4DAE010")]
		set
		{
		}
	}

	[Token(Token = "0x17000023")]
	public float outTangent
	{
		[Token(Token = "0x6000102")]
		[Address(RVA = "0x4DAE020", Offset = "0x4DAE020", VA = "0x4DAE020")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000103")]
		[Address(RVA = "0x4DAE030", Offset = "0x4DAE030", VA = "0x4DAE030")]
		set
		{
		}
	}

	[Token(Token = "0x17000024")]
	public float inWeight
	{
		[Token(Token = "0x6000104")]
		[Address(RVA = "0x4DAE040", Offset = "0x4DAE040", VA = "0x4DAE040")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000105")]
		[Address(RVA = "0x4DAE050", Offset = "0x4DAE050", VA = "0x4DAE050")]
		set
		{
		}
	}

	[Token(Token = "0x17000025")]
	public float outWeight
	{
		[Token(Token = "0x6000106")]
		[Address(RVA = "0x4DAE060", Offset = "0x4DAE060", VA = "0x4DAE060")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000107")]
		[Address(RVA = "0x4DAE070", Offset = "0x4DAE070", VA = "0x4DAE070")]
		set
		{
		}
	}

	[Token(Token = "0x17000026")]
	public WeightedMode weightedMode
	{
		[Token(Token = "0x6000108")]
		[Address(RVA = "0x4DAE080", Offset = "0x4DAE080", VA = "0x4DAE080")]
		get
		{
			return default(WeightedMode);
		}
		[Token(Token = "0x6000109")]
		[Address(RVA = "0x4DAE090", Offset = "0x4DAE090", VA = "0x4DAE090")]
		set
		{
		}
	}

	[Token(Token = "0x17000027")]
	[Obsolete("Use AnimationUtility.SetKeyLeftTangentMode, AnimationUtility.SetKeyRightTangentMode, AnimationUtility.GetKeyLeftTangentMode or AnimationUtility.GetKeyRightTangentMode instead.")]
	public int tangentMode
	{
		[Token(Token = "0x600010A")]
		[Address(RVA = "0x4DAE0A0", Offset = "0x4DAE0A0", VA = "0x4DAE0A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600010B")]
		[Address(RVA = "0x4DAE0C0", Offset = "0x4DAE0C0", VA = "0x4DAE0C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000028")]
	internal int tangentModeInternal
	{
		[Token(Token = "0x600010C")]
		[Address(RVA = "0x4DAE0B0", Offset = "0x4DAE0B0", VA = "0x4DAE0B0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600010D")]
		[Address(RVA = "0x4DAE0D0", Offset = "0x4DAE0D0", VA = "0x4DAE0D0")]
		set
		{
		}
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x4DADF70", Offset = "0x4DADF70", VA = "0x4DADF70")]
	public Keyframe(float time, float value)
	{
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x4DADF90", Offset = "0x4DADF90", VA = "0x4DADF90")]
	public Keyframe(float time, float value, float inTangent, float outTangent)
	{
	}
}
