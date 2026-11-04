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
	[Address(RVA = "0x1D271B0", Offset = "0x1D257B0", VA = "0x181D271B0")]
	public static MonoBehaviourEmpty BuildInstance([Optional] string id)
	{
		return null;
	}

	[Token(Token = "0x60001AD")]
	[Address(RVA = "0x1D27270", Offset = "0x1D25870", VA = "0x181D27270")]
	public void SelfDestroy()
	{
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x1D273C0", Offset = "0x1D259C0", VA = "0x181D273C0")]
	private void Update()
	{
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
	public void CompleteOnMainThread(RegionHandler obj)
	{
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x1D272D0", Offset = "0x1D258D0", VA = "0x181D272D0")]
	public void StartCoroutineAndDestroy(IEnumerator coroutine)
	{
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public MonoBehaviourEmpty()
	{
	}
}
