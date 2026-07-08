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
		[Address(RVA = "0x4B7EF30", Offset = "0x4B7EF30", VA = "0x4B7EF30")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000030")]
	public float yPositionAdjustment
	{
		[Token(Token = "0x6000087")]
		[Address(RVA = "0x4B7EF40", Offset = "0x4B7EF40", VA = "0x4B7EF40")]
		get
		{
			return default(float);
		}
	}
}
