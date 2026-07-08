using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace DG.Tweening;

[Token(Token = "0x2000013")]
public class EaseFactory
{
	[Token(Token = "0x6000097")]
	[Address(RVA = "0x22F4B20", Offset = "0x22F4B20", VA = "0x22F4B20")]
	public static EaseFunction StopMotion(int motionFps, [Optional] Ease? ease)
	{
		return null;
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x22F4CE0", Offset = "0x22F4CE0", VA = "0x22F4CE0")]
	public static EaseFunction StopMotion(int motionFps, AnimationCurve animCurve)
	{
		return null;
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x22F4BC0", Offset = "0x22F4BC0", VA = "0x22F4BC0")]
	public static EaseFunction StopMotion(int motionFps, EaseFunction customEase)
	{
		return null;
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x22F4E00", Offset = "0x22F4E00", VA = "0x22F4E00")]
	public EaseFactory()
	{
	}
}
