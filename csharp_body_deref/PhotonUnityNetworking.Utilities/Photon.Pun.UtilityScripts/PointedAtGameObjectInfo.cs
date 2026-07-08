using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x200000C")]
public class PointedAtGameObjectInfo : MonoBehaviour
{
	[Token(Token = "0x4000038")]
	[FieldOffset(Offset = "0x0")]
	public static PointedAtGameObjectInfo Instance;

	[Token(Token = "0x4000039")]
	[FieldOffset(Offset = "0x20")]
	public Text text;

	[Token(Token = "0x400003A")]
	[FieldOffset(Offset = "0x28")]
	private Transform focus;

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x3BE8110", Offset = "0x3BE8110", VA = "0x3BE8110")]
	private void Start()
	{
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x3BE8220", Offset = "0x3BE8220", VA = "0x3BE8220")]
	public void SetFocus(PhotonView pv)
	{
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x3BE8540", Offset = "0x3BE8540", VA = "0x3BE8540")]
	public void RemoveFocus(PhotonView pv)
	{
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x3BE8620", Offset = "0x3BE8620", VA = "0x3BE8620")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x3BE86E0", Offset = "0x3BE86E0", VA = "0x3BE86E0")]
	public PointedAtGameObjectInfo()
	{
	}
}
