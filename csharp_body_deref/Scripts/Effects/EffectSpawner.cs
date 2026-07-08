using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Photon.Pun;
using UnityEngine;

namespace Effects;

[Token(Token = "0x20001FF")]
internal class EffectSpawner
{
	[Token(Token = "0x6000C32")]
	[Address(RVA = "0x413DDD0", Offset = "0x413DDD0", VA = "0x413DDD0")]
	public static void Spawn(string name, Vector3 position, Quaternion rotation, [Optional][DefaultParameterValue(1f)] float scale, [Optional][DefaultParameterValue(true)] bool scaleSize, [Optional] object[] settings)
	{
	}

	[Token(Token = "0x6000C33")]
	[Address(RVA = "0x413C980", Offset = "0x413C980", VA = "0x413C980")]
	public static void OnSpawnEffectRPC(string name, Vector3 position, Quaternion rotation, float scale, bool scaleSize, object[] settings, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000C34")]
	[Address(RVA = "0x413E0A0", Offset = "0x413E0A0", VA = "0x413E0A0")]
	private static void ScaleEffect(Transform transform, float scale, bool scaleSize)
	{
	}

	[Token(Token = "0x6000C35")]
	[Address(RVA = "0x413E1B0", Offset = "0x413E1B0", VA = "0x413E1B0")]
	public EffectSpawner()
	{
	}
}
