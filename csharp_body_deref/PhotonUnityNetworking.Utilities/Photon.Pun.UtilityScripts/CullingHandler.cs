using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x2000009")]
[RequireComponent(typeof(PhotonView))]
public class CullingHandler : MonoBehaviour, IPunObservable
{
	[Token(Token = "0x4000024")]
	[FieldOffset(Offset = "0x20")]
	private int orderIndex;

	[Token(Token = "0x4000025")]
	[FieldOffset(Offset = "0x28")]
	private CullArea cullArea;

	[Token(Token = "0x4000026")]
	[FieldOffset(Offset = "0x30")]
	private List<byte> previousActiveCells;

	[Token(Token = "0x4000027")]
	[FieldOffset(Offset = "0x38")]
	private List<byte> activeCells;

	[Token(Token = "0x4000028")]
	[FieldOffset(Offset = "0x40")]
	private PhotonView pView;

	[Token(Token = "0x4000029")]
	[FieldOffset(Offset = "0x48")]
	private Vector3 lastPosition;

	[Token(Token = "0x400002A")]
	[FieldOffset(Offset = "0x54")]
	private Vector3 currentPosition;

	[Token(Token = "0x400002B")]
	[FieldOffset(Offset = "0x60")]
	private float timeSinceUpdate;

	[Token(Token = "0x400002C")]
	[FieldOffset(Offset = "0x64")]
	private float timeBetweenUpdatesMin;

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x3BE4BE0", Offset = "0x3BE4BE0", VA = "0x3BE4BE0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x3BE4DA0", Offset = "0x3BE4DA0", VA = "0x3BE4DA0")]
	private void Start()
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x3BE4EF0", Offset = "0x3BE4EF0", VA = "0x3BE4EF0")]
	private void Update()
	{
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x3BE5510", Offset = "0x3BE5510", VA = "0x3BE5510")]
	private void OnGUI()
	{
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x3BE4FE0", Offset = "0x3BE4FE0", VA = "0x3BE4FE0")]
	private bool HaveActiveCellsChanged()
	{
		return default(bool);
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x3BE51D0", Offset = "0x3BE51D0", VA = "0x3BE51D0")]
	private void UpdateInterestGroups()
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x3BE58B0", Offset = "0x3BE58B0", VA = "0x3BE58B0", Slot = "4")]
	public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x3BE5A20", Offset = "0x3BE5A20", VA = "0x3BE5A20")]
	public CullingHandler()
	{
	}
}
