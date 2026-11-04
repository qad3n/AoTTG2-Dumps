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
	[Token(Token = "0x4000781")]
	[FieldOffset(Offset = "0x0")]
	internal static IPlayerEditorConnectionNative connectionNative;

	[Token(Token = "0x4000782")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private PlayerEditorConnectionEvents m_PlayerEditorConnectionEvents;

	[Token(Token = "0x4000783")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private List<int> m_connectedPlayers;

	[Token(Token = "0x4000784")]
	[FieldOffset(Offset = "0x28")]
	private bool m_IsInitilized;

	[Token(Token = "0x4000785")]
	[FieldOffset(Offset = "0x8")]
	private static PlayerConnection s_Instance;

	[Token(Token = "0x170002DE")]
	public static PlayerConnection instance
	{
		[Token(Token = "0x60011F0")]
		[Address(RVA = "0x2F4FA40", Offset = "0x2F4E040", VA = "0x182F4FA40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002DF")]
	public bool isConnected
	{
		[Token(Token = "0x60011F1")]
		[Address(RVA = "0x2F4FB50", Offset = "0x2F4E150", VA = "0x182F4FB50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60011F2")]
	[Address(RVA = "0x2F4E7E0", Offset = "0x2F4CDE0", VA = "0x182F4E7E0")]
	private static PlayerConnection CreateInstance()
	{
		return null;
	}

	[Token(Token = "0x60011F3")]
	[Address(RVA = "0x2F4ECA0", Offset = "0x2F4D2A0", VA = "0x182F4ECA0")]
	public void OnEnable()
	{
	}

	[Token(Token = "0x60011F4")]
	[Address(RVA = "0x2F4E9C0", Offset = "0x2F4CFC0", VA = "0x182F4E9C0")]
	private IPlayerEditorConnectionNative GetConnectionNativeApi()
	{
		return null;
	}

	[Token(Token = "0x60011F5")]
	[Address(RVA = "0x2F4EED0", Offset = "0x2F4D4D0", VA = "0x182F4EED0", Slot = "4")]
	public void Register(Guid messageId, UnityAction<MessageEventArgs> callback)
	{
	}

	[Token(Token = "0x60011F6")]
	[Address(RVA = "0x2F4F5D0", Offset = "0x2F4DBD0", VA = "0x182F4F5D0", Slot = "5")]
	public void Unregister(Guid messageId, UnityAction<MessageEventArgs> callback)
	{
	}

	[Token(Token = "0x60011F7")]
	[Address(RVA = "0x2F4ED00", Offset = "0x2F4D300", VA = "0x182F4ED00", Slot = "6")]
	public void RegisterConnection(UnityAction<int> callback)
	{
	}

	[Token(Token = "0x60011F8")]
	[Address(RVA = "0x2F4EE70", Offset = "0x2F4D470", VA = "0x182F4EE70", Slot = "7")]
	public void RegisterDisconnection(UnityAction<int> callback)
	{
	}

	[Token(Token = "0x60011F9")]
	[Address(RVA = "0x2F4F510", Offset = "0x2F4DB10", VA = "0x182F4F510", Slot = "8")]
	public void UnregisterConnection(UnityAction<int> callback)
	{
	}

	[Token(Token = "0x60011FA")]
	[Address(RVA = "0x2F4F570", Offset = "0x2F4DB70", VA = "0x182F4F570", Slot = "9")]
	public void UnregisterDisconnection(UnityAction<int> callback)
	{
	}

	[Token(Token = "0x60011FB")]
	[Address(RVA = "0x2F4F150", Offset = "0x2F4D750", VA = "0x182F4F150", Slot = "10")]
	public void Send(Guid messageId, byte[] data)
	{
	}

	[Token(Token = "0x60011FC")]
	[Address(RVA = "0x2F4F330", Offset = "0x2F4D930", VA = "0x182F4F330", Slot = "11")]
	public bool TrySend(Guid messageId, byte[] data)
	{
		return default(bool);
	}

	[Token(Token = "0x60011FD")]
	[Address(RVA = "0x2F4E450", Offset = "0x2F4CA50", VA = "0x182F4E450")]
	public bool BlockUntilRecvMsg(Guid messageId, int timeout)
	{
		return default(bool);
	}

	[Token(Token = "0x60011FE")]
	[Address(RVA = "0x2F4E890", Offset = "0x2F4CE90", VA = "0x182F4E890", Slot = "12")]
	public void DisconnectAll()
	{
	}

	[Token(Token = "0x60011FF")]
	[Address(RVA = "0x2F4EA30", Offset = "0x2F4D030", VA = "0x182F4EA30")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void MessageCallbackInternal(IntPtr data, ulong size, ulong guid, string messageId)
	{
	}

	[Token(Token = "0x6001200")]
	[Address(RVA = "0x2F4E710", Offset = "0x2F4CD10", VA = "0x182F4E710")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void ConnectedCallbackInternal(int playerId)
	{
	}

	[Token(Token = "0x6001201")]
	[Address(RVA = "0x2F4E930", Offset = "0x2F4CF30", VA = "0x182F4E930")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void DisconnectedCallback(int playerId)
	{
	}

	[Token(Token = "0x6001202")]
	[Address(RVA = "0x2F4F890", Offset = "0x2F4DE90", VA = "0x182F4F890")]
	public PlayerConnection()
	{
	}
}
