// ==================== AoTTG2 cross-reference ====================
// Type: Effects.EffectSpawner
// Update status: CHANGED in this game update
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

[Token(Token = "0x200034D")]
internal class EffectSpawner
{
	[Token(Token = "0x4001142")]
	private const float SmallCullDistance = 600f;

	[Token(Token = "0x4001143")]
	private const float MediumCullDistance = 1500f;

	[Token(Token = "0x4001144")]
	private const float DefaultCullDistance = 5000f;

	[Token(Token = "0x4001145")]
	private const float AudioCullDistance = 500f;

	[Token(Token = "0x4001146")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, bool> _effectHasAudio;

	[Token(Token = "0x6001518")]
	[Address(RVA = "0x1E658A0", Offset = "0x1E63EA0", VA = "0x181E658A0")]
	public static void Spawn(string name, Vector3 position, Quaternion rotation, [Optional][DefaultParameterValue(1f)] float scale, [Optional][DefaultParameterValue(true)] bool scaleSize, [Optional] object[] settings)
	{
	}

	[Token(Token = "0x6001519")]
	[Address(RVA = "0x1E650B0", Offset = "0x1E636B0", VA = "0x181E650B0")]
	public static void OnSpawnEffectRPC(string name, Vector3 position, Quaternion rotation, float scale, bool scaleSize, object[] settings, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600151A")]
	[Address(RVA = "0x1E64FB0", Offset = "0x1E635B0", VA = "0x181E64FB0")]
	private static bool IsOutOfCameraRange(Vector3 position, float range)
	{
		return default(bool);
	}

	[Token(Token = "0x600151B")]
	[Address(RVA = "0x1E64D10", Offset = "0x1E63310", VA = "0x181E64D10")]
	private static bool HasAudio(string name, GameObject go)
	{
		return default(bool);
	}

	[Token(Token = "0x600151C")]
	[Address(RVA = "0x1E64E60", Offset = "0x1E63460", VA = "0x181E64E60")]
	private static bool IsCulled(string name, Vector3 position)
	{
		return default(bool);
	}

	[Token(Token = "0x600151D")]
	[Address(RVA = "0x1E64C20", Offset = "0x1E63220", VA = "0x181E64C20")]
	private static float GetCullDistance(string name)
	{
		return default(float);
	}

	[Token(Token = "0x600151E")]
	[Address(RVA = "0x1E65790", Offset = "0x1E63D90", VA = "0x181E65790")]
	private static void ScaleEffect(Transform transform, float scale, bool scaleSize)
	{
	}

	[Token(Token = "0x600151F")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public EffectSpawner()
	{
	}
}
