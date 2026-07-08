using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Events;
using UnityEngine.Scripting;

namespace UnityEngine.Networking.PlayerConnection;

[Serializable]
[Token(Token = "0x2000292")]
public class PlayerConnection : ScriptableObject
{
	[Token(Token = "0x40006D4")]
	[FieldOffset(Offset = "0x0")]
	internal static IPlayerEditorConnectionNative connectionNative;

	[Token(Token = "0x40006D5")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private PlayerEditorConnectionEvents m_PlayerEditorConnectionEvents;

	[Token(Token = "0x40006D6")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private List<int> m_connectedPlayers;

	[Token(Token = "0x40006D7")]
	[FieldOffset(Offset = "0x28")]
	private bool m_IsInitilized;

	[Token(Token = "0x40006D8")]
	[FieldOffset(Offset = "0x8")]
	private static PlayerConnection s_Instance;

	[Token(Token = "0x17000259")]
	public static PlayerConnection instance
	{
		[Token(Token = "0x6000DE5")]
		[Address(RVA = "0x4AEE430", Offset = "0x4AEE430", VA = "0x4AEE430")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700025A")]
	public bool isConnected
	{
		[Token(Token = "0x6000DE6")]
		[Address(RVA = "0x4AEE550", Offset = "0x4AEE550", VA = "0x4AEE550")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000DE7")]
	[Address(RVA = "0x4AEE4C0", Offset = "0x4AEE4C0", VA = "0x4AEE4C0")]
	private static PlayerConnection CreateInstance()
	{
		return null;
	}

	[Token(Token = "0x6000DE8")]
	[Address(RVA = "0x4AEE6C0", Offset = "0x4AEE6C0", VA = "0x4AEE6C0")]
	public void OnEnable()
	{
	}

	[Token(Token = "0x6000DE9")]
	[Address(RVA = "0x4AEE650", Offset = "0x4AEE650", VA = "0x4AEE650")]
	private IPlayerEditorConnectionNative GetConnectionNativeApi()
	{
		return null;
	}

	[Token(Token = "0x6000DEA")]
	[Address(RVA = "0x4AEE7C0", Offset = "0x4AEE7C0", VA = "0x4AEE7C0", Slot = "4")]
	public void Register(Guid messageId, UnityAction<MessageEventArgs> callback)
	{
	}

	[Token(Token = "0x6000DEB")]
	[Address(RVA = "0x4AEECF0", Offset = "0x4AEECF0", VA = "0x4AEECF0", Slot = "5")]
	public void Unregister(Guid messageId, UnityAction<MessageEventArgs> callback)
	{
	}

	[Token(Token = "0x6000DEC")]
	[Address(RVA = "0x4AEF020", Offset = "0x4AEF020", VA = "0x4AEF020", Slot = "6")]
	public void RegisterConnection(UnityAction<int> callback)
	{
	}

	[Token(Token = "0x6000DED")]
	[Address(RVA = "0x4AEF1F0", Offset = "0x4AEF1F0", VA = "0x4AEF1F0", Slot = "7")]
	public void RegisterDisconnection(UnityAction<int> callback)
	{
	}

	[Token(Token = "0x6000DEE")]
	[Address(RVA = "0x4AEF250", Offset = "0x4AEF250", VA = "0x4AEF250", Slot = "8")]
	public void UnregisterConnection(UnityAction<int> callback)
	{
	}

	[Token(Token = "0x6000DEF")]
	[Address(RVA = "0x4AEF2B0", Offset = "0x4AEF2B0", VA = "0x4AEF2B0", Slot = "9")]
	public void UnregisterDisconnection(UnityAction<int> callback)
	{
	}

	[Token(Token = "0x6000DF0")]
	[Address(RVA = "0x4AEF310", Offset = "0x4AEF310", VA = "0x4AEF310", Slot = "10")]
	public void Send(Guid messageId, byte[] data)
	{
	}

	[Token(Token = "0x6000DF1")]
	[Address(RVA = "0x4AEF4D0", Offset = "0x4AEF4D0", VA = "0x4AEF4D0", Slot = "11")]
	public bool TrySend(Guid messageId, byte[] data)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DF2")]
	[Address(RVA = "0x4AEF690", Offset = "0x4AEF690", VA = "0x4AEF690")]
	public bool BlockUntilRecvMsg(Guid messageId, int timeout)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DF3")]
	[Address(RVA = "0x4AEF960", Offset = "0x4AEF960", VA = "0x4AEF960", Slot = "12")]
	public void DisconnectAll()
	{
	}

	[Token(Token = "0x6000DF4")]
	[Address(RVA = "0x4AEFA60", Offset = "0x4AEFA60", VA = "0x4AEFA60")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void MessageCallbackInternal(IntPtr data, ulong size, ulong guid, string messageId)
	{
	}

	[Token(Token = "0x6000DF5")]
	[Address(RVA = "0x4AEFD70", Offset = "0x4AEFD70", VA = "0x4AEFD70")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void ConnectedCallbackInternal(int playerId)
	{
	}

	[Token(Token = "0x6000DF6")]
	[Address(RVA = "0x4AEFF30", Offset = "0x4AEFF30", VA = "0x4AEFF30")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void DisconnectedCallback(int playerId)
	{
	}

	[Token(Token = "0x6000DF7")]
	[Address(RVA = "0x4AF00C0", Offset = "0x4AF00C0", VA = "0x4AF00C0")]
	public PlayerConnection()
	{
	}
}
