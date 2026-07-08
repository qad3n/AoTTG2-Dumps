using DG.Tweening.Core;
using DG.Tweening.Plugins.Options;
using Il2CppDummyDll;
using UnityEngine;

namespace DG.Tweening.Plugins.Core;

[Token(Token = "0x2000094")]
internal static class SpecialPluginsUtils
{
	[Token(Token = "0x600037B")]
	[Address(RVA = "0x2311460", Offset = "0x2311460", VA = "0x2311460")]
	internal static bool SetLookAt(TweenerCore<Quaternion, Vector3, QuaternionOptions> t)
	{
		return default(bool);
	}

	[Token(Token = "0x600037C")]
	[Address(RVA = "0x2319070", Offset = "0x2319070", VA = "0x2319070")]
	internal static bool SetPunch(TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> t)
	{
		return default(bool);
	}

	[Token(Token = "0x600037D")]
	[Address(RVA = "0x23191F0", Offset = "0x23191F0", VA = "0x23191F0")]
	internal static bool SetShake(TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> t)
	{
		return default(bool);
	}

	[Token(Token = "0x600037E")]
	[Address(RVA = "0x2319220", Offset = "0x2319220", VA = "0x2319220")]
	internal static bool SetCameraShakePosition(TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> t)
	{
		return default(bool);
	}
}
