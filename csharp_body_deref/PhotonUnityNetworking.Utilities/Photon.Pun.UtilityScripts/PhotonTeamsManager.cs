using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using ExitGames.Client.Photon;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x200000F")]
[DisallowMultipleComponent]
public class PhotonTeamsManager : MonoBehaviour, IMatchmakingCallbacks, IInRoomCallbacks
{
	[Token(Token = "0x4000050")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private List<PhotonTeam> teamsList;

	[Token(Token = "0x4000051")]
	[FieldOffset(Offset = "0x28")]
	private Dictionary<byte, PhotonTeam> teamsByCode;

	[Token(Token = "0x4000052")]
	[FieldOffset(Offset = "0x30")]
	private Dictionary<string, PhotonTeam> teamsByName;

	[Token(Token = "0x4000053")]
	[FieldOffset(Offset = "0x38")]
	private Dictionary<byte, HashSet<Player>> playersPerTeam;

	[Token(Token = "0x4000054")]
	public const string TeamPlayerProp = "_pt";

	[Token(Token = "0x4000057")]
	[FieldOffset(Offset = "0x10")]
	private static PhotonTeamsManager instance;

	[Token(Token = "0x17000006")]
	public static PhotonTeamsManager Instance
	{
		[Token(Token = "0x6000042")]
		[Address(RVA = "0x3BEABD0", Offset = "0x3BEABD0", VA = "0x3BEABD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000001")]
	public static event Action<Player, PhotonTeam> PlayerJoinedTeam
	{
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x3BEA870", Offset = "0x3BEA870", VA = "0x3BEA870")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x3BEA940", Offset = "0x3BEA940", VA = "0x3BEA940")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000002")]
	public static event Action<Player, PhotonTeam> PlayerLeftTeam
	{
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x3BEAA10", Offset = "0x3BEAA10", VA = "0x3BEAA10")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000041")]
		[Address(RVA = "0x3BEAAF0", Offset = "0x3BEAAF0", VA = "0x3BEAAF0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x3BEB070", Offset = "0x3BEB070", VA = "0x3BEB070")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x3BEB150", Offset = "0x3BEB150", VA = "0x3BEB150")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x3BEB1C0", Offset = "0x3BEB1C0", VA = "0x3BEB1C0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x3BEAD60", Offset = "0x3BEAD60", VA = "0x3BEAD60")]
	private void Init()
	{
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x3BEB3F0", Offset = "0x3BEB3F0", VA = "0x3BEB3F0", Slot = "7")]
	private void Photon_002ERealtime_002EIMatchmakingCallbacks_002EOnJoinedRoom()
	{
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x3BEB530", Offset = "0x3BEB530", VA = "0x3BEB530", Slot = "10")]
	private void Photon_002ERealtime_002EIMatchmakingCallbacks_002EOnLeftRoom()
	{
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x3BEB540", Offset = "0x3BEB540", VA = "0x3BEB540", Slot = "14")]
	private void Photon_002ERealtime_002EIInRoomCallbacks_002EOnPlayerPropertiesUpdate(Player targetPlayer, Hashtable changedProps)
	{
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x3BEBDB0", Offset = "0x3BEBDB0", VA = "0x3BEBDB0", Slot = "12")]
	private void Photon_002ERealtime_002EIInRoomCallbacks_002EOnPlayerLeftRoom(Player otherPlayer)
	{
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x3BEC080", Offset = "0x3BEC080", VA = "0x3BEC080", Slot = "11")]
	private void Photon_002ERealtime_002EIInRoomCallbacks_002EOnPlayerEnteredRoom(Player newPlayer)
	{
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x3BEB400", Offset = "0x3BEB400", VA = "0x3BEB400")]
	private void UpdateTeams()
	{
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x3BEB210", Offset = "0x3BEB210", VA = "0x3BEB210")]
	private void ClearTeams()
	{
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x3BEC440", Offset = "0x3BEC440", VA = "0x3BEC440")]
	public bool TryGetTeamByCode(byte code, out PhotonTeam team)
	{
		return default(bool);
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x3BEC490", Offset = "0x3BEC490", VA = "0x3BEC490")]
	public bool TryGetTeamByName(string teamName, out PhotonTeam team)
	{
		return default(bool);
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x3BEC4F0", Offset = "0x3BEC4F0", VA = "0x3BEC4F0")]
	public PhotonTeam[] GetAvailableTeams()
	{
		return null;
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x3BEC530", Offset = "0x3BEC530", VA = "0x3BEC530")]
	public bool TryGetTeamMembers(byte code, out Player[] members)
	{
		return default(bool);
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x3BEC7B0", Offset = "0x3BEC7B0", VA = "0x3BEC7B0")]
	public bool TryGetTeamMembers(string teamName, out Player[] members)
	{
		return default(bool);
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x3BEC850", Offset = "0x3BEC850", VA = "0x3BEC850")]
	public bool TryGetTeamMembers(PhotonTeam team, out Player[] members)
	{
		return default(bool);
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x3BEC8A0", Offset = "0x3BEC8A0", VA = "0x3BEC8A0")]
	public bool TryGetTeamMatesOfPlayer(Player player, out Player[] teamMates)
	{
		return default(bool);
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x3BECCC0", Offset = "0x3BECCC0", VA = "0x3BECCC0")]
	public int GetTeamMembersCount(byte code)
	{
		return default(int);
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x3BECE30", Offset = "0x3BECE30", VA = "0x3BECE30")]
	public int GetTeamMembersCount(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x3BECDA0", Offset = "0x3BECDA0", VA = "0x3BECDA0")]
	public int GetTeamMembersCount(PhotonTeam team)
	{
		return default(int);
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x3BECF10", Offset = "0x3BECF10", VA = "0x3BECF10", Slot = "4")]
	private void Photon_002ERealtime_002EIMatchmakingCallbacks_002EOnFriendListUpdate(List<FriendInfo> friendList)
	{
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x3BECF20", Offset = "0x3BECF20", VA = "0x3BECF20", Slot = "5")]
	private void Photon_002ERealtime_002EIMatchmakingCallbacks_002EOnCreatedRoom()
	{
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x3BECF30", Offset = "0x3BECF30", VA = "0x3BECF30", Slot = "6")]
	private void Photon_002ERealtime_002EIMatchmakingCallbacks_002EOnCreateRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x3BECF40", Offset = "0x3BECF40", VA = "0x3BECF40", Slot = "8")]
	private void Photon_002ERealtime_002EIMatchmakingCallbacks_002EOnJoinRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x3BECF50", Offset = "0x3BECF50", VA = "0x3BECF50", Slot = "9")]
	private void Photon_002ERealtime_002EIMatchmakingCallbacks_002EOnJoinRandomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x3BECF60", Offset = "0x3BECF60", VA = "0x3BECF60", Slot = "13")]
	private void Photon_002ERealtime_002EIInRoomCallbacks_002EOnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
	{
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x3BECF70", Offset = "0x3BECF70", VA = "0x3BECF70", Slot = "15")]
	private void Photon_002ERealtime_002EIInRoomCallbacks_002EOnMasterClientSwitched(Player newMasterClient)
	{
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x3BECF80", Offset = "0x3BECF80", VA = "0x3BECF80")]
	public PhotonTeamsManager()
	{
	}
}
