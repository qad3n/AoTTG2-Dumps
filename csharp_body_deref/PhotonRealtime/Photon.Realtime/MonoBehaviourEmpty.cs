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
	[Address(RVA = "0x3BDC6C0", Offset = "0x3BDC6C0", VA = "0x3BDC6C0")]
	public static MonoBehaviourEmpty BuildInstance([Optional] string id)
	{
		return null;
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x3BDC660", Offset = "0x3BDC660", VA = "0x3BDC660")]
	public void SelfDestroy()
	{
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x3BDE770", Offset = "0x3BDE770", VA = "0x3BDE770")]
	private void Update()
	{
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x3BDE830", Offset = "0x3BDE830", VA = "0x3BDE830")]
	public void CompleteOnMainThread(RegionHandler obj)
	{
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x3BDE840", Offset = "0x3BDE840", VA = "0x3BDE840")]
	public void StartCoroutineAndDestroy(IEnumerator coroutine)
	{
	}

	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x3BDE9B0", Offset = "0x3BDE9B0", VA = "0x3BDE9B0")]
	public MonoBehaviourEmpty()
	{
	}
}
