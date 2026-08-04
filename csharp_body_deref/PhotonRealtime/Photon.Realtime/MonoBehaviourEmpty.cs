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

[Token(Token = "0x2000045")]
internal class MonoBehaviourEmpty : MonoBehaviour
{
	[Token(Token = "0x4000210")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal Action<RegionHandler> onCompleteCall;

	[Token(Token = "0x4000211")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private RegionHandler obj;

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x3ED2010", Offset = "0x3ED2010", VA = "0x3ED2010")]
	public static MonoBehaviourEmpty BuildInstance([Optional] string id)
	{
		return null;
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x3ED1FB0", Offset = "0x3ED1FB0", VA = "0x3ED1FB0")]
	public void SelfDestroy()
	{
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x3ED40C0", Offset = "0x3ED40C0", VA = "0x3ED40C0")]
	private void Update()
	{
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x3ED4180", Offset = "0x3ED4180", VA = "0x3ED4180")]
	public void CompleteOnMainThread(RegionHandler obj)
	{
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x3ED4190", Offset = "0x3ED4190", VA = "0x3ED4190")]
	public void StartCoroutineAndDestroy(IEnumerator coroutine)
	{
	}

	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x3ED4300", Offset = "0x3ED4300", VA = "0x3ED4300")]
	public MonoBehaviourEmpty()
	{
	}
}
