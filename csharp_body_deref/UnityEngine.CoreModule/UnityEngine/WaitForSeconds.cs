using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x200018B")]
[UnityEngine.Scripting.RequiredByNativeCode]
public sealed class WaitForSeconds : YieldInstruction
{
	[Token(Token = "0x40005C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal float m_Seconds;

	[Token(Token = "0x6000B54")]
	[Address(RVA = "0x4ADC280", Offset = "0x4ADC280", VA = "0x4ADC280")]
	public WaitForSeconds(float seconds)
	{
	}
}
