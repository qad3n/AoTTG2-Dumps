// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Networking.PlayerConnection.PlayerConnection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Events;
using UnityEngine.Scripting;

namespace UnityEngine.Networking.PlayerConnection;

[Serializable]
[Token(Token = "0x20002F3")]
public class PlayerConnection : ScriptableObject
{
	[Token(Token = "0x400077F")]
	[FieldOffset(Offset = "0x0")]
	internal static IPlayerEditorConnectionNative connectionNative;

	[Token(Token = "0x4000780")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private PlayerEditorConnectionEvents m_PlayerEditorConnectionEvents;

	[Token(Token = "0x4000781")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private List<int> m_connectedPlayers;

	[Token(Token = "0x4000782")]
	[FieldOffset(Offset = "0x28")]
	private bool m_IsInitilized;

	[Token(Token = "0x4000783")]
	[FieldOffset(Offset = "0x8")]
	private static PlayerConnection s_Instance;

	[Token(Token = "0x170002E3")]
	public static PlayerConnection instance
	{
		[Token(Token = "0x6001204")]
		[Address(RVA = "0x69384B0", Offset = "0x69374B0", VA = "0x69384B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002E4")]
	public bool isConnected
	{
		[Token(Token = "0x6001205")]
		[Address(RVA = "0x69385D0", Offset = "0x69375D0", VA = "0x69385D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001206")]
	[Address(RVA = "0x6938540", Offset = "0x6937540", VA = "0x6938540")]
	private static PlayerConnection CreateInstance()
	{
		return null;
	}

	[Token(Token = "0x6001207")]
	[Address(RVA = "0x6938740", Offset = "0x6937740", VA = "0x6938740")]
	public void OnEnable()
	{
	}

	[Token(Token = "0x6001208")]
	[Address(RVA = "0x69386D0", Offset = "0x69376D0", VA = "0x69386D0")]
	private IPlayerEditorConnectionNative GetConnectionNativeApi()
	{
		return null;
	}

	[Token(Token = "0x6001209")]
	[Address(RVA = "0x6938840", Offset = "0x6937840", VA = "0x6938840", Slot = "4")]
	public void Register(Guid messageId, UnityAction<MessageEventArgs> callback)
	{
	}

	[Token(Token = "0x600120A")]
	[Address(RVA = "0x6938D60", Offset = "0x6937D60", VA = "0x6938D60", Slot = "5")]
	public void Unregister(Guid messageId, UnityAction<MessageEventArgs> callback)
	{
	}

	[Token(Token = "0x600120B")]
	[Address(RVA = "0x6939090", Offset = "0x6938090", VA = "0x6939090", Slot = "6")]
	public void RegisterConnection(UnityAction<int> callback)
	{
	}

	[Token(Token = "0x600120C")]
	[Address(RVA = "0x6939230", Offset = "0x6938230", VA = "0x6939230", Slot = "7")]
	public void RegisterDisconnection(UnityAction<int> callback)
	{
	}

	[Token(Token = "0x600120D")]
	[Address(RVA = "0x6939290", Offset = "0x6938290", VA = "0x6939290", Slot = "8")]
	public void UnregisterConnection(UnityAction<int> callback)
	{
	}

	[Token(Token = "0x600120E")]
	[Address(RVA = "0x69392F0", Offset = "0x69382F0", VA = "0x69392F0", Slot = "9")]
	public void UnregisterDisconnection(UnityAction<int> callback)
	{
	}

	[Token(Token = "0x600120F")]
	[Address(RVA = "0x6939350", Offset = "0x6938350", VA = "0x6939350", Slot = "10")]
	public void Send(Guid messageId, byte[] data)
	{
	}

	[Token(Token = "0x6001210")]
	[Address(RVA = "0x6939510", Offset = "0x6938510", VA = "0x6939510", Slot = "11")]
	public bool TrySend(Guid messageId, byte[] data)
	{
		return default(bool);
	}

	[Token(Token = "0x6001211")]
	[Address(RVA = "0x69396D0", Offset = "0x69386D0", VA = "0x69396D0")]
	public bool BlockUntilRecvMsg(Guid messageId, int timeout)
	{
		return default(bool);
	}

	[Token(Token = "0x6001212")]
	[Address(RVA = "0x6939990", Offset = "0x6938990", VA = "0x6939990", Slot = "12")]
	public void DisconnectAll()
	{
	}

	[Token(Token = "0x6001213")]
	[Address(RVA = "0x6939A90", Offset = "0x6938A90", VA = "0x6939A90")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void MessageCallbackInternal(IntPtr data, ulong size, ulong guid, string messageId)
	{
	}

	[Token(Token = "0x6001214")]
	[Address(RVA = "0x6939D90", Offset = "0x6938D90", VA = "0x6939D90")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void ConnectedCallbackInternal(int playerId)
	{
	}

	[Token(Token = "0x6001215")]
	[Address(RVA = "0x6939F50", Offset = "0x6938F50", VA = "0x6939F50")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void DisconnectedCallback(int playerId)
	{
	}

	[Token(Token = "0x6001216")]
	[Address(RVA = "0x693A0D0", Offset = "0x69390D0", VA = "0x693A0D0")]
	public PlayerConnection()
	{
	}
}
