// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Core.DOTweenExternalCommand
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using DG.Tweening.Plugins.Options;
using Il2CppDummyDll;
using UnityEngine;

namespace DG.Tweening.Core;

[Token(Token = "0x20000B1")]
public static class DOTweenExternalCommand
{
	[Token(Token = "0x4000215")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	private static Action<PathOptions, Tween, Quaternion, Transform> m_SetOrientationOnPath;

	[Token(Token = "0x14000001")]
	public static event Action<PathOptions, Tween, Quaternion, Transform> SetOrientationOnPath
	{
		[Token(Token = "0x6000423")]
		[Address(RVA = "0x31971E0", Offset = "0x31961E0", VA = "0x31971E0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000424")]
		[Address(RVA = "0x31972B0", Offset = "0x31962B0", VA = "0x31972B0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000425")]
	[Address(RVA = "0x3197380", Offset = "0x3196380", VA = "0x3197380")]
	internal static void Dispatch_SetOrientationOnPath(PathOptions options, Tween t, Quaternion newRot, Transform trans)
	{
	}
}
