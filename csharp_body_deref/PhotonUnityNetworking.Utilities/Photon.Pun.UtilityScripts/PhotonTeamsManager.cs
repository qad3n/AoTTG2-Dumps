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
		[Address(RVA = "0x3F030A0", Offset = "0x3F030A0", VA = "0x3F030A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000001")]
	public static event Action<Player, PhotonTeam> PlayerJoinedTeam
	{
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x3F02D40", Offset = "0x3F02D40", VA = "0x3F02D40")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x3F02E10", Offset = "0x3F02E10", VA = "0x3F02E10")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000002")]
	public static event Action<Player, PhotonTeam> PlayerLeftTeam
	{
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x3F02EE0", Offset = "0x3F02EE0", VA = "0x3F02EE0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000041")]
		[Address(RVA = "0x3F02FC0", Offset = "0x3F02FC0", VA = "0x3F02FC0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x3F03540", Offset = "0x3F03540", VA = "0x3F03540")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x3F03620", Offset = "0x3F03620", VA = "0x3F03620")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x3F03690", Offset = "0x3F03690", VA = "0x3F03690")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x3F03230", Offset = "0x3F03230", VA = "0x3F03230")]
	private void Init()
	{
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x3F038C0", Offset = "0x3F038C0", VA = "0x3F038C0", Slot = "7")]
	private void Photon_002ERealtime_002EIMatchmakingCallbacks_002EOnJoinedRoom()
	{
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x3F03A00", Offset = "0x3F03A00", VA = "0x3F03A00", Slot = "10")]
	private void Photon_002ERealtime_002EIMatchmakingCallbacks_002EOnLeftRoom()
	{
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x3F03A10", Offset = "0x3F03A10", VA = "0x3F03A10", Slot = "14")]
	private void Photon_002ERealtime_002EIInRoomCallbacks_002EOnPlayerPropertiesUpdate(Player targetPlayer, Hashtable changedProps)
	{
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x3F04280", Offset = "0x3F04280", VA = "0x3F04280", Slot = "12")]
	private void Photon_002ERealtime_002EIInRoomCallbacks_002EOnPlayerLeftRoom(Player otherPlayer)
	{
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x3F04550", Offset = "0x3F04550", VA = "0x3F04550", Slot = "11")]
	private void Photon_002ERealtime_002EIInRoomCallbacks_002EOnPlayerEnteredRoom(Player newPlayer)
	{
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x3F038D0", Offset = "0x3F038D0", VA = "0x3F038D0")]
	private void UpdateTeams()
	{
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x3F036E0", Offset = "0x3F036E0", VA = "0x3F036E0")]
	private void ClearTeams()
	{
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x3F04910", Offset = "0x3F04910", VA = "0x3F04910")]
	public bool TryGetTeamByCode(byte code, out PhotonTeam team)
	{
		return default(bool);
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x3F04960", Offset = "0x3F04960", VA = "0x3F04960")]
	public bool TryGetTeamByName(string teamName, out PhotonTeam team)
	{
		return default(bool);
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x3F049C0", Offset = "0x3F049C0", VA = "0x3F049C0")]
	public PhotonTeam[] GetAvailableTeams()
	{
		return null;
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x3F04A00", Offset = "0x3F04A00", VA = "0x3F04A00")]
	public bool TryGetTeamMembers(byte code, out Player[] members)
	{
		return default(bool);
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x3F04C80", Offset = "0x3F04C80", VA = "0x3F04C80")]
	public bool TryGetTeamMembers(string teamName, out Player[] members)
	{
		return default(bool);
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x3F04D20", Offset = "0x3F04D20", VA = "0x3F04D20")]
	public bool TryGetTeamMembers(PhotonTeam team, out Player[] members)
	{
		return default(bool);
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x3F04D70", Offset = "0x3F04D70", VA = "0x3F04D70")]
	public bool TryGetTeamMatesOfPlayer(Player player, out Player[] teamMates)
	{
		return default(bool);
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x3F05190", Offset = "0x3F05190", VA = "0x3F05190")]
	public int GetTeamMembersCount(byte code)
	{
		return default(int);
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x3F05300", Offset = "0x3F05300", VA = "0x3F05300")]
	public int GetTeamMembersCount(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x3F05270", Offset = "0x3F05270", VA = "0x3F05270")]
	public int GetTeamMembersCount(PhotonTeam team)
	{
		return default(int);
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x3F053E0", Offset = "0x3F053E0", VA = "0x3F053E0", Slot = "4")]
	private void Photon_002ERealtime_002EIMatchmakingCallbacks_002EOnFriendListUpdate(List<FriendInfo> friendList)
	{
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x3F053F0", Offset = "0x3F053F0", VA = "0x3F053F0", Slot = "5")]
	private void Photon_002ERealtime_002EIMatchmakingCallbacks_002EOnCreatedRoom()
	{
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x3F05400", Offset = "0x3F05400", VA = "0x3F05400", Slot = "6")]
	private void Photon_002ERealtime_002EIMatchmakingCallbacks_002EOnCreateRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x3F05410", Offset = "0x3F05410", VA = "0x3F05410", Slot = "8")]
	private void Photon_002ERealtime_002EIMatchmakingCallbacks_002EOnJoinRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x3F05420", Offset = "0x3F05420", VA = "0x3F05420", Slot = "9")]
	private void Photon_002ERealtime_002EIMatchmakingCallbacks_002EOnJoinRandomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x3F05430", Offset = "0x3F05430", VA = "0x3F05430", Slot = "13")]
	private void Photon_002ERealtime_002EIInRoomCallbacks_002EOnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
	{
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x3F05440", Offset = "0x3F05440", VA = "0x3F05440", Slot = "15")]
	private void Photon_002ERealtime_002EIInRoomCallbacks_002EOnMasterClientSwitched(Player newMasterClient)
	{
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x3F05450", Offset = "0x3F05450", VA = "0x3F05450")]
	public PhotonTeamsManager()
	{
	}
}
