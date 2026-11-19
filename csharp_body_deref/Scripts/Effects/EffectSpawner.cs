// ==================== AoTTG2 cross-reference ====================
// Type: Effects.EffectSpawner
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Effects/EffectSpawner.c
// Prior real C# source (older reference): Assets/Scripts/Effects/EffectSpawner.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Photon.Pun;
using UnityEngine;

namespace Effects;

[Token(Token = "0x20003AF")]
internal class EffectSpawner
{
	[Token(Token = "0x40012F2")]
	private const float SmallCullDistance = 600f;

	[Token(Token = "0x40012F3")]
	private const float MediumCullDistance = 1500f;

	[Token(Token = "0x40012F4")]
	private const float DefaultCullDistance = 5000f;

	[Token(Token = "0x40012F5")]
	private const float AudioCullDistance = 500f;

	[Token(Token = "0x40012F6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, bool> _effectHasAudio;

	[Token(Token = "0x6001798")]
	[Address(RVA = "0x585BAE0", Offset = "0x585AAE0", VA = "0x585BAE0")]
	public static void Spawn(string name, Vector3 position, Quaternion rotation, [Optional][DefaultParameterValue(1f)] float scale, [Optional][DefaultParameterValue(true)] bool scaleSize, [Optional] object[] settings)
	{
	}

	[Token(Token = "0x6001799")]
	[Address(RVA = "0x585A020", Offset = "0x5859020", VA = "0x585A020")]
	public static void OnSpawnEffectRPC(string name, Vector3 position, Quaternion rotation, float scale, bool scaleSize, object[] settings, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600179A")]
	[Address(RVA = "0x585C070", Offset = "0x585B070", VA = "0x585C070")]
	private static bool IsOutOfCameraRange(Vector3 position, float range)
	{
		return default(bool);
	}

	[Token(Token = "0x600179B")]
	[Address(RVA = "0x585BF20", Offset = "0x585AF20", VA = "0x585BF20")]
	private static bool HasAudio(string name, GameObject go)
	{
		return default(bool);
	}

	[Token(Token = "0x600179C")]
	[Address(RVA = "0x585BDB0", Offset = "0x585ADB0", VA = "0x585BDB0")]
	private static bool IsCulled(string name, Vector3 position)
	{
		return default(bool);
	}

	[Token(Token = "0x600179D")]
	[Address(RVA = "0x585C160", Offset = "0x585B160", VA = "0x585C160")]
	private static float GetCullDistance(string name)
	{
		return default(float);
	}

	[Token(Token = "0x600179E")]
	[Address(RVA = "0x585BE20", Offset = "0x585AE20", VA = "0x585BE20")]
	private static void ScaleEffect(Transform transform, float scale, bool scaleSize)
	{
	}

	[Token(Token = "0x600179F")]
	[Address(RVA = "0x585C270", Offset = "0x585B270", VA = "0x585C270")]
	public EffectSpawner()
	{
	}
}
