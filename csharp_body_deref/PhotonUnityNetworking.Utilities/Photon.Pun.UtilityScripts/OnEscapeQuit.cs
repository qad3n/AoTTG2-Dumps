using System.Diagnostics;
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x2000023")]
public class OnEscapeQuit : MonoBehaviour
{
	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x3BF1900", Offset = "0x3BF1900", VA = "0x3BF1900")]
	[Conditional("UNITY_ANDROID")]
	[Conditional("UNITY_IOS")]
	public void Update()
	{
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x3BF1960", Offset = "0x3BF1960", VA = "0x3BF1960")]
	public OnEscapeQuit()
	{
	}
}
