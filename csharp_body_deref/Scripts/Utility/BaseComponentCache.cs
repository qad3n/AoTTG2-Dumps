using System.Collections.Generic;
using Il2CppDummyDll;
using Photon.Pun;
using UnityEngine;

namespace Utility;

[Token(Token = "0x20006D0")]
internal class BaseComponentCache
{
	[Token(Token = "0x40020F0")]
	[FieldOffset(Offset = "0x10")]
	public Transform Transform;

	[Token(Token = "0x40020F1")]
	[FieldOffset(Offset = "0x18")]
	public Rigidbody Rigidbody;

	[Token(Token = "0x40020F2")]
	[FieldOffset(Offset = "0x20")]
	public PhotonView PhotonView;

	[Token(Token = "0x40020F3")]
	[FieldOffset(Offset = "0x28")]
	public List<Collider> Colliders;

	[Token(Token = "0x40020F4")]
	[FieldOffset(Offset = "0x30")]
	public Dictionary<string, AudioSource> AudioSources;

	[Token(Token = "0x60043D7")]
	[Address(RVA = "0x4042930", Offset = "0x4042930", VA = "0x4042930")]
	public BaseComponentCache(GameObject owner)
	{
	}

	[Token(Token = "0x60043D8")]
	[Address(RVA = "0x40514E0", Offset = "0x40514E0", VA = "0x40514E0")]
	public void LoadAudio(string prefab, Transform parent)
	{
	}
}
