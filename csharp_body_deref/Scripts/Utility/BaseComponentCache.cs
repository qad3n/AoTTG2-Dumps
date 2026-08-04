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

[Token(Token = "0x200071E")]
internal class BaseComponentCache
{
	[Token(Token = "0x400224D")]
	[FieldOffset(Offset = "0x10")]
	public Transform Transform;

	[Token(Token = "0x400224E")]
	[FieldOffset(Offset = "0x18")]
	public Rigidbody Rigidbody;

	[Token(Token = "0x400224F")]
	[FieldOffset(Offset = "0x20")]
	public PhotonView PhotonView;

	[Token(Token = "0x4002250")]
	[FieldOffset(Offset = "0x28")]
	public List<Collider> Colliders;

	[Token(Token = "0x4002251")]
	[FieldOffset(Offset = "0x30")]
	public Dictionary<string, AudioSource> AudioSources;

	[Token(Token = "0x600463F")]
	[Address(RVA = "0x4375940", Offset = "0x4375940", VA = "0x4375940")]
	public BaseComponentCache(GameObject owner)
	{
	}

	[Token(Token = "0x6004640")]
	[Address(RVA = "0x43844F0", Offset = "0x43844F0", VA = "0x43844F0")]
	public void LoadAudio(string prefab, Transform parent)
	{
	}
}
