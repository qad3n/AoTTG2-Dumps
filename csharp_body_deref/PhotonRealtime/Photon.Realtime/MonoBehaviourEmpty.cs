// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.MonoBehaviourEmpty
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/RegionHandler.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Realtime;

[Token(Token = "0x2000043")]
internal class MonoBehaviourEmpty : MonoBehaviour
{
	[Token(Token = "0x400020B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal Action<RegionHandler> onCompleteCall;

	[Token(Token = "0x400020C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private RegionHandler obj;

	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x56BE4A0", Offset = "0x56BD4A0", VA = "0x56BE4A0")]
	public static MonoBehaviourEmpty BuildInstance([Optional] string id)
	{
		return null;
	}

	[Token(Token = "0x60001AD")]
	[Address(RVA = "0x56BE440", Offset = "0x56BD440", VA = "0x56BE440")]
	public void SelfDestroy()
	{
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x56C03D0", Offset = "0x56BF3D0", VA = "0x56C03D0")]
	private void Update()
	{
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x56C0490", Offset = "0x56BF490", VA = "0x56C0490")]
	public void CompleteOnMainThread(RegionHandler obj)
	{
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x56C04A0", Offset = "0x56BF4A0", VA = "0x56C04A0")]
	public void StartCoroutineAndDestroy(IEnumerator coroutine)
	{
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x56C0610", Offset = "0x56BF610", VA = "0x56C0610")]
	public MonoBehaviourEmpty()
	{
	}
}
