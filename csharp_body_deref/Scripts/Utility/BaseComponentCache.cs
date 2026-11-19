// ==================== AoTTG2 cross-reference ====================
// Type: Utility.BaseComponentCache
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/BaseComponentCache.c
// Prior real C# source (older reference): Assets/Scripts/Utility/BaseComponentCache.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Photon.Pun;
using UnityEngine;

namespace Utility;

[Token(Token = "0x200090E")]
internal class BaseComponentCache
{
	[Token(Token = "0x4002DC3")]
	[FieldOffset(Offset = "0x10")]
	public Transform Transform;

	[Token(Token = "0x4002DC4")]
	[FieldOffset(Offset = "0x18")]
	public Rigidbody Rigidbody;

	[Token(Token = "0x4002DC5")]
	[FieldOffset(Offset = "0x20")]
	public PhotonView PhotonView;

	[Token(Token = "0x4002DC6")]
	[FieldOffset(Offset = "0x28")]
	public List<Collider> Colliders;

	[Token(Token = "0x4002DC7")]
	[FieldOffset(Offset = "0x30")]
	public Dictionary<string, AudioSource> AudioSources;

	[Token(Token = "0x60055F2")]
	[Address(RVA = "0x5CCB650", Offset = "0x5CCA650", VA = "0x5CCB650")]
	public BaseComponentCache(GameObject owner)
	{
	}

	[Token(Token = "0x60055F3")]
	[Address(RVA = "0x5CE0DC0", Offset = "0x5CDFDC0", VA = "0x5CE0DC0")]
	public void LoadAudio(string prefab, Transform parent)
	{
	}
}
