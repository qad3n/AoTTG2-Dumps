// ==================== AoTTG2 cross-reference ====================
// Type: Effects.EffectSpawner
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Effects/EffectSpawner.c
// Prior real C# source (older reference): Assets/Scripts/Effects/EffectSpawner.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Photon.Pun;
using UnityEngine;

namespace Effects;

[Token(Token = "0x2000235")]
internal class EffectSpawner
{
	[Token(Token = "0x6000DCB")]
	[Address(RVA = "0x4472760", Offset = "0x4472760", VA = "0x4472760")]
	public static void Spawn(string name, Vector3 position, Quaternion rotation, [Optional][DefaultParameterValue(1f)] float scale, [Optional][DefaultParameterValue(true)] bool scaleSize, [Optional] object[] settings)
	{
	}

	[Token(Token = "0x6000DCC")]
	[Address(RVA = "0x4471120", Offset = "0x4471120", VA = "0x4471120")]
	public static void OnSpawnEffectRPC(string name, Vector3 position, Quaternion rotation, float scale, bool scaleSize, object[] settings, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000DCD")]
	[Address(RVA = "0x4472A30", Offset = "0x4472A30", VA = "0x4472A30")]
	private static void ScaleEffect(Transform transform, float scale, bool scaleSize)
	{
	}

	[Token(Token = "0x6000DCE")]
	[Address(RVA = "0x4472B40", Offset = "0x4472B40", VA = "0x4472B40")]
	public EffectSpawner()
	{
	}
}
