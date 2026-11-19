// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.UtilityScripts.PointedAtGameObjectInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/UtilityScripts/Debugging/PointedAtGameObjectInfo.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x200000A")]
public class PointedAtGameObjectInfo : MonoBehaviour
{
	[Token(Token = "0x4000033")]
	[FieldOffset(Offset = "0x0")]
	public static PointedAtGameObjectInfo Instance;

	[Token(Token = "0x4000034")]
	[FieldOffset(Offset = "0x20")]
	public Text text;

	[Token(Token = "0x4000035")]
	[FieldOffset(Offset = "0x28")]
	private Transform focus;

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x56EBCE0", Offset = "0x56EACE0", VA = "0x56EBCE0")]
	private void Start()
	{
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x56EBDF0", Offset = "0x56EADF0", VA = "0x56EBDF0")]
	public void SetFocus(PhotonView pv)
	{
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x56EC120", Offset = "0x56EB120", VA = "0x56EC120")]
	public void RemoveFocus(PhotonView pv)
	{
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x56EC200", Offset = "0x56EB200", VA = "0x56EC200")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x56EC2C0", Offset = "0x56EB2C0", VA = "0x56EC2C0")]
	public PointedAtGameObjectInfo()
	{
	}
}
