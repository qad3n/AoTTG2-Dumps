using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Pun;

[Token(Token = "0x200001E")]
public class MonoBehaviourPun : MonoBehaviour
{
	[Token(Token = "0x40000BC")]
	[FieldOffset(Offset = "0x20")]
	private PhotonView pvCache;

	[Token(Token = "0x1700003E")]
	public PhotonView photonView
	{
		[Token(Token = "0x6000136")]
		[Address(RVA = "0x3C17630", Offset = "0x3C17630", VA = "0x3C17630")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x3C17700", Offset = "0x3C17700", VA = "0x3C17700")]
	public MonoBehaviourPun()
	{
	}
}
