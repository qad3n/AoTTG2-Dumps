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

[Token(Token = "0x20008A3")]
internal class BaseComponentCache
{
	[Token(Token = "0x4002B0C")]
	[FieldOffset(Offset = "0x10")]
	public Transform Transform;

	[Token(Token = "0x4002B0D")]
	[FieldOffset(Offset = "0x18")]
	public Rigidbody Rigidbody;

	[Token(Token = "0x4002B0E")]
	[FieldOffset(Offset = "0x20")]
	public PhotonView PhotonView;

	[Token(Token = "0x4002B0F")]
	[FieldOffset(Offset = "0x28")]
	public List<Collider> Colliders;

	[Token(Token = "0x4002B10")]
	[FieldOffset(Offset = "0x30")]
	public Dictionary<string, AudioSource> AudioSources;

	[Token(Token = "0x600529B")]
	[Address(RVA = "0x232BDB0", Offset = "0x232A3B0", VA = "0x18232BDB0")]
	public BaseComponentCache(GameObject owner)
	{
	}

	[Token(Token = "0x600529C")]
	[Address(RVA = "0x232BBE0", Offset = "0x232A1E0", VA = "0x18232BBE0")]
	public void LoadAudio(string prefab, Transform parent)
	{
	}
}
