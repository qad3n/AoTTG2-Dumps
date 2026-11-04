// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.UtilityScripts.CullingHandler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/UtilityScripts/Culling/CullingHandler.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x2000007")]
[RequireComponent(typeof(PhotonView))]
public class CullingHandler : MonoBehaviour, IPunObservable
{
	[Token(Token = "0x400001F")]
	[FieldOffset(Offset = "0x20")]
	private int orderIndex;

	[Token(Token = "0x4000020")]
	[FieldOffset(Offset = "0x28")]
	private CullArea cullArea;

	[Token(Token = "0x4000021")]
	[FieldOffset(Offset = "0x30")]
	private List<byte> previousActiveCells;

	[Token(Token = "0x4000022")]
	[FieldOffset(Offset = "0x38")]
	private List<byte> activeCells;

	[Token(Token = "0x4000023")]
	[FieldOffset(Offset = "0x40")]
	private PhotonView pView;

	[Token(Token = "0x4000024")]
	[FieldOffset(Offset = "0x48")]
	private Vector3 lastPosition;

	[Token(Token = "0x4000025")]
	[FieldOffset(Offset = "0x54")]
	private Vector3 currentPosition;

	[Token(Token = "0x4000026")]
	[FieldOffset(Offset = "0x60")]
	private float timeSinceUpdate;

	[Token(Token = "0x4000027")]
	[FieldOffset(Offset = "0x64")]
	private float timeBetweenUpdatesMin;

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x1D52370", Offset = "0x1D50970", VA = "0x181D52370")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x1D52AE0", Offset = "0x1D510E0", VA = "0x181D52AE0")]
	private void Start()
	{
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x1D52E80", Offset = "0x1D51480", VA = "0x181D52E80")]
	private void Update()
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x1D52530", Offset = "0x1D50B30", VA = "0x181D52530")]
	private void OnGUI()
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x1D52050", Offset = "0x1D50650", VA = "0x181D52050")]
	private bool HaveActiveCellsChanged()
	{
		return default(bool);
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x1D52C40", Offset = "0x1D51240", VA = "0x181D52C40")]
	private void UpdateInterestGroups()
	{
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x1D52900", Offset = "0x1D50F00", VA = "0x181D52900", Slot = "4")]
	public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x1D52F80", Offset = "0x1D51580", VA = "0x181D52F80")]
	public CullingHandler()
	{
	}
}
