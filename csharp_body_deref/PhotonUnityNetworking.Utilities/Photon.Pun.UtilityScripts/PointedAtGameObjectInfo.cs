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
	[Address(RVA = "0x3F005E0", Offset = "0x3F005E0", VA = "0x3F005E0")]
	private void Start()
	{
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x3F006F0", Offset = "0x3F006F0", VA = "0x3F006F0")]
	public void SetFocus(PhotonView pv)
	{
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x3F00A10", Offset = "0x3F00A10", VA = "0x3F00A10")]
	public void RemoveFocus(PhotonView pv)
	{
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x3F00AF0", Offset = "0x3F00AF0", VA = "0x3F00AF0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x3F00BB0", Offset = "0x3F00BB0", VA = "0x3F00BB0")]
	public PointedAtGameObjectInfo()
	{
	}
}
