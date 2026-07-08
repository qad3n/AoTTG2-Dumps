using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x200018C")]
public class WaitForSecondsRealtime : CustomYieldInstruction
{
	[Token(Token = "0x40005C3")]
	[FieldOffset(Offset = "0x14")]
	private float m_WaitUntilTime;

	[Token(Token = "0x170001DC")]
	public float waitTime
	{
		[Token(Token = "0x6000B55")]
		[Address(RVA = "0x4ADC2B0", Offset = "0x4ADC2B0", VA = "0x4ADC2B0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000B56")]
		[Address(RVA = "0x4ADC2C0", Offset = "0x4ADC2C0", VA = "0x4ADC2C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001DD")]
	public override bool keepWaiting
	{
		[Token(Token = "0x6000B57")]
		[Address(RVA = "0x4ADC2D0", Offset = "0x4ADC2D0", VA = "0x4ADC2D0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000B58")]
	[Address(RVA = "0x4ADC3C0", Offset = "0x4ADC3C0", VA = "0x4ADC3C0")]
	public WaitForSecondsRealtime(float time)
	{
	}

	[Token(Token = "0x6000B59")]
	[Address(RVA = "0x4ADC3F0", Offset = "0x4ADC3F0", VA = "0x4ADC3F0", Slot = "8")]
	public override void Reset()
	{
	}
}
