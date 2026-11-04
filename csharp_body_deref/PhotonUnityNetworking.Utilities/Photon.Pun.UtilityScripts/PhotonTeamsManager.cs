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
		[Address(RVA = "0x1D59CA0", Offset = "0x1D582A0", VA = "0x181D59CA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000001")]
	public static event Action<Player, PhotonTeam> PlayerJoinedTeam
	{
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x1D59B00", Offset = "0x1D58100", VA = "0x181D59B00")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x1D59E60", Offset = "0x1D58460", VA = "0x181D59E60")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000002")]
	public static event Action<Player, PhotonTeam> PlayerLeftTeam
	{
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x1D59BD0", Offset = "0x1D581D0", VA = "0x181D59BD0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x1D59F30", Offset = "0x1D58530", VA = "0x181D59F30")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x1D57A00", Offset = "0x1D56000", VA = "0x181D57A00")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x1D582B0", Offset = "0x1D568B0", VA = "0x181D582B0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x1D58250", Offset = "0x1D56850", VA = "0x181D58250")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x1D57F40", Offset = "0x1D56540", VA = "0x181D57F40")]
	private void Init()
	{
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x1D58FF0", Offset = "0x1D575F0", VA = "0x181D58FF0", Slot = "7")]
	private void Photon_002ERealtime_002EIMatchmakingCallbacks_002EOnJoinedRoom()
	{
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x1D59000", Offset = "0x1D57600", VA = "0x181D59000", Slot = "10")]
	private void Photon_002ERealtime_002EIMatchmakingCallbacks_002EOnLeftRoom()
	{
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x1D58850", Offset = "0x1D56E50", VA = "0x181D58850", Slot = "14")]
	private void Photon_002ERealtime_002EIInRoomCallbacks_002EOnPlayerPropertiesUpdate(Player targetPlayer, Hashtable changedProps)
	{
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x1D58690", Offset = "0x1D56C90", VA = "0x181D58690", Slot = "12")]
	private void Photon_002ERealtime_002EIInRoomCallbacks_002EOnPlayerLeftRoom(Player otherPlayer)
	{
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x1D58300", Offset = "0x1D56900", VA = "0x181D58300", Slot = "11")]
	private void Photon_002ERealtime_002EIInRoomCallbacks_002EOnPlayerEnteredRoom(Player newPlayer)
	{
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x1D597E0", Offset = "0x1D57DE0", VA = "0x181D597E0")]
	private void UpdateTeams()
	{
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x1D57AF0", Offset = "0x1D560F0", VA = "0x181D57AF0")]
	private void ClearTeams()
	{
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x1D59010", Offset = "0x1D57610", VA = "0x181D59010")]
	public bool TryGetTeamByCode(byte code, out PhotonTeam team)
	{
		return default(bool);
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x1D59080", Offset = "0x1D57680", VA = "0x181D59080")]
	public bool TryGetTeamByName(string teamName, out PhotonTeam team)
	{
		return default(bool);
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x1D57C70", Offset = "0x1D56270", VA = "0x181D57C70")]
	public PhotonTeam[] GetAvailableTeams()
	{
		return null;
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x1D594A0", Offset = "0x1D57AA0", VA = "0x181D594A0")]
	public bool TryGetTeamMembers(byte code, out Player[] members)
	{
		return default(bool);
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x1D59730", Offset = "0x1D57D30", VA = "0x181D59730")]
	public bool TryGetTeamMembers(string teamName, out Player[] members)
	{
		return default(bool);
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x1D596C0", Offset = "0x1D57CC0", VA = "0x181D596C0")]
	public bool TryGetTeamMembers(PhotonTeam team, out Player[] members)
	{
		return default(bool);
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x1D590F0", Offset = "0x1D576F0", VA = "0x181D590F0")]
	public bool TryGetTeamMatesOfPlayer(Player player, out Player[] teamMates)
	{
		return default(bool);
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x1D57E50", Offset = "0x1D56450", VA = "0x181D57E50")]
	public int GetTeamMembersCount(byte code)
	{
		return default(int);
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x1D57D60", Offset = "0x1D56360", VA = "0x181D57D60")]
	public int GetTeamMembersCount(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x1D57CC0", Offset = "0x1D562C0", VA = "0x181D57CC0")]
	public int GetTeamMembersCount(PhotonTeam team)
	{
		return default(int);
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
	private void Photon_002ERealtime_002EIMatchmakingCallbacks_002EOnFriendListUpdate(List<FriendInfo> friendList)
	{
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	private void Photon_002ERealtime_002EIMatchmakingCallbacks_002EOnCreatedRoom()
	{
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "6")]
	private void Photon_002ERealtime_002EIMatchmakingCallbacks_002EOnCreateRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "8")]
	private void Photon_002ERealtime_002EIMatchmakingCallbacks_002EOnJoinRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
	private void Photon_002ERealtime_002EIMatchmakingCallbacks_002EOnJoinRandomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "13")]
	private void Photon_002ERealtime_002EIInRoomCallbacks_002EOnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
	{
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "15")]
	private void Photon_002ERealtime_002EIInRoomCallbacks_002EOnMasterClientSwitched(Player newMasterClient)
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x1D59900", Offset = "0x1D57F00", VA = "0x181D59900")]
	public PhotonTeamsManager()
	{
	}
}
