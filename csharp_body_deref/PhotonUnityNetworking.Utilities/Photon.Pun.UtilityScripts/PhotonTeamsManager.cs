// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.UtilityScripts.PhotonTeamsManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/UtilityScripts/PhotonPlayer/PhotonTeamsManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using ExitGames.Client.Photon;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x200000D")]
[DisallowMultipleComponent]
public class PhotonTeamsManager : MonoBehaviour, IMatchmakingCallbacks, IInRoomCallbacks
{
	[Token(Token = "0x400004B")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private List<PhotonTeam> teamsList;

	[Token(Token = "0x400004C")]
	[FieldOffset(Offset = "0x28")]
	private Dictionary<byte, PhotonTeam> teamsByCode;

	[Token(Token = "0x400004D")]
	[FieldOffset(Offset = "0x30")]
	private Dictionary<string, PhotonTeam> teamsByName;

	[Token(Token = "0x400004E")]
	[FieldOffset(Offset = "0x38")]
	private Dictionary<byte, HashSet<Player>> playersPerTeam;

	[Token(Token = "0x400004F")]
	public const string TeamPlayerProp = "_pt";

	[Token(Token = "0x4000050")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	private static Action<Player, PhotonTeam> m_PlayerJoinedTeam;

	[Token(Token = "0x4000051")]
	[FieldOffset(Offset = "0x8")]
	[CompilerGenerated]
	private static Action<Player, PhotonTeam> m_PlayerLeftTeam;

	[Token(Token = "0x4000052")]
	[FieldOffset(Offset = "0x10")]
	private static PhotonTeamsManager instance;

	[Token(Token = "0x17000006")]
	public static PhotonTeamsManager Instance
	{
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x56EE3E0", Offset = "0x56ED3E0", VA = "0x56EE3E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000001")]
	public static event Action<Player, PhotonTeam> PlayerJoinedTeam
	{
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x56EE0A0", Offset = "0x56ED0A0", VA = "0x56EE0A0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x56EE170", Offset = "0x56ED170", VA = "0x56EE170")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000002")]
	public static event Action<Player, PhotonTeam> PlayerLeftTeam
	{
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x56EE240", Offset = "0x56ED240", VA = "0x56EE240")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x56EE310", Offset = "0x56ED310", VA = "0x56EE310")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x56EE880", Offset = "0x56ED880", VA = "0x56EE880")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x56EE960", Offset = "0x56ED960", VA = "0x56EE960")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x56EE9D0", Offset = "0x56ED9D0", VA = "0x56EE9D0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x56EE570", Offset = "0x56ED570", VA = "0x56EE570")]
	private void Init()
	{
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x56EEBE0", Offset = "0x56EDBE0", VA = "0x56EEBE0", Slot = "7")]
	private void Photon_002ERealtime_002EIMatchmakingCallbacks_002EOnJoinedRoom()
	{
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x56EED10", Offset = "0x56EDD10", VA = "0x56EED10", Slot = "10")]
	private void Photon_002ERealtime_002EIMatchmakingCallbacks_002EOnLeftRoom()
	{
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x56EED20", Offset = "0x56EDD20", VA = "0x56EED20", Slot = "14")]
	private void Photon_002ERealtime_002EIInRoomCallbacks_002EOnPlayerPropertiesUpdate(Player targetPlayer, Hashtable changedProps)
	{
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x56EF4D0", Offset = "0x56EE4D0", VA = "0x56EF4D0", Slot = "12")]
	private void Photon_002ERealtime_002EIInRoomCallbacks_002EOnPlayerLeftRoom(Player otherPlayer)
	{
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x56EF7A0", Offset = "0x56EE7A0", VA = "0x56EF7A0", Slot = "11")]
	private void Photon_002ERealtime_002EIInRoomCallbacks_002EOnPlayerEnteredRoom(Player newPlayer)
	{
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x56EEBF0", Offset = "0x56EDBF0", VA = "0x56EEBF0")]
	private void UpdateTeams()
	{
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x56EEA20", Offset = "0x56EDA20", VA = "0x56EEA20")]
	private void ClearTeams()
	{
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x56EFB40", Offset = "0x56EEB40", VA = "0x56EFB40")]
	public bool TryGetTeamByCode(byte code, out PhotonTeam team)
	{
		return default(bool);
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x56EFB90", Offset = "0x56EEB90", VA = "0x56EFB90")]
	public bool TryGetTeamByName(string teamName, out PhotonTeam team)
	{
		return default(bool);
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x56EFBF0", Offset = "0x56EEBF0", VA = "0x56EFBF0")]
	public PhotonTeam[] GetAvailableTeams()
	{
		return null;
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x56EFC30", Offset = "0x56EEC30", VA = "0x56EFC30")]
	public bool TryGetTeamMembers(byte code, out Player[] members)
	{
		return default(bool);
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x56EFE80", Offset = "0x56EEE80", VA = "0x56EFE80")]
	public bool TryGetTeamMembers(string teamName, out Player[] members)
	{
		return default(bool);
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x56EFF20", Offset = "0x56EEF20", VA = "0x56EFF20")]
	public bool TryGetTeamMembers(PhotonTeam team, out Player[] members)
	{
		return default(bool);
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x56EFF70", Offset = "0x56EEF70", VA = "0x56EFF70")]
	public bool TryGetTeamMatesOfPlayer(Player player, out Player[] teamMates)
	{
		return default(bool);
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x56F0350", Offset = "0x56EF350", VA = "0x56F0350")]
	public int GetTeamMembersCount(byte code)
	{
		return default(int);
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x56F04C0", Offset = "0x56EF4C0", VA = "0x56F04C0")]
	public int GetTeamMembersCount(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x56F0430", Offset = "0x56EF430", VA = "0x56F0430")]
	public int GetTeamMembersCount(PhotonTeam team)
	{
		return default(int);
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x56F05A0", Offset = "0x56EF5A0", VA = "0x56F05A0", Slot = "4")]
	private void Photon_002ERealtime_002EIMatchmakingCallbacks_002EOnFriendListUpdate(List<FriendInfo> friendList)
	{
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x56F05B0", Offset = "0x56EF5B0", VA = "0x56F05B0", Slot = "5")]
	private void Photon_002ERealtime_002EIMatchmakingCallbacks_002EOnCreatedRoom()
	{
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x56F05C0", Offset = "0x56EF5C0", VA = "0x56F05C0", Slot = "6")]
	private void Photon_002ERealtime_002EIMatchmakingCallbacks_002EOnCreateRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x56F05D0", Offset = "0x56EF5D0", VA = "0x56F05D0", Slot = "8")]
	private void Photon_002ERealtime_002EIMatchmakingCallbacks_002EOnJoinRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x56F05E0", Offset = "0x56EF5E0", VA = "0x56F05E0", Slot = "9")]
	private void Photon_002ERealtime_002EIMatchmakingCallbacks_002EOnJoinRandomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x56F05F0", Offset = "0x56EF5F0", VA = "0x56F05F0", Slot = "13")]
	private void Photon_002ERealtime_002EIInRoomCallbacks_002EOnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
	{
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x56F0600", Offset = "0x56EF600", VA = "0x56F0600", Slot = "15")]
	private void Photon_002ERealtime_002EIInRoomCallbacks_002EOnMasterClientSwitched(Player newMasterClient)
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x56F0610", Offset = "0x56EF610", VA = "0x56F0610")]
	public PhotonTeamsManager()
	{
	}
}
