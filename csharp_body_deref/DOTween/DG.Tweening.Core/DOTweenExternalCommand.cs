using System;
using System.Runtime.CompilerServices;
using DG.Tweening.Plugins.Options;
using Il2CppDummyDll;
using UnityEngine;

namespace DG.Tweening.Core;

[Token(Token = "0x20000B1")]
public static class DOTweenExternalCommand
{
	[Token(Token = "0x14000001")]
	public static event Action<PathOptions, Tween, Quaternion, Transform> SetOrientationOnPath
	{
		[Token(Token = "0x6000423")]
		[Address(RVA = "0x2320300", Offset = "0x2320300", VA = "0x2320300")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000424")]
		[Address(RVA = "0x23203D0", Offset = "0x23203D0", VA = "0x23203D0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000425")]
	[Address(RVA = "0x23204A0", Offset = "0x23204A0", VA = "0x23204A0")]
	internal static void Dispatch_SetOrientationOnPath(PathOptions options, Tween t, Quaternion newRot, Transform trans)
	{
	}
}
