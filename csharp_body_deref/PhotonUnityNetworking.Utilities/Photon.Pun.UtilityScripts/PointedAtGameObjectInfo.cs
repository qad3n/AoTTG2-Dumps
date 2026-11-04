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
	[Address(RVA = "0x1D5B490", Offset = "0x1D59A90", VA = "0x181D5B490")]
	private void Start()
	{
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x1D5B160", Offset = "0x1D59760", VA = "0x181D5B160")]
	public void SetFocus(PhotonView pv)
	{
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x1D5B080", Offset = "0x1D59680", VA = "0x181D5B080")]
	public void RemoveFocus(PhotonView pv)
	{
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x1D5AF90", Offset = "0x1D59590", VA = "0x181D5AF90")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public PointedAtGameObjectInfo()
	{
	}
}
