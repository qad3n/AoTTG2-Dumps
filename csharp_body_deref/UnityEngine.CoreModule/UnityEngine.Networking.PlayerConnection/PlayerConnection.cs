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
[Token(Token = "0x2000295")]
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

	[Token(Token = "0x1700025A")]
	public static PlayerConnection instance
	{
		[Token(Token = "0x6000DE7")]
		[Address(RVA = "0x4E15D60", Offset = "0x4E15D60", VA = "0x4E15D60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700025B")]
	public bool isConnected
	{
		[Token(Token = "0x6000DE8")]
		[Address(RVA = "0x4E15E80", Offset = "0x4E15E80", VA = "0x4E15E80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000DE9")]
	[Address(RVA = "0x4E15DF0", Offset = "0x4E15DF0", VA = "0x4E15DF0")]
	private static PlayerConnection CreateInstance()
	{
		return null;
	}

	[Token(Token = "0x6000DEA")]
	[Address(RVA = "0x4E15FF0", Offset = "0x4E15FF0", VA = "0x4E15FF0")]
	public void OnEnable()
	{
	}

	[Token(Token = "0x6000DEB")]
	[Address(RVA = "0x4E15F80", Offset = "0x4E15F80", VA = "0x4E15F80")]
	private IPlayerEditorConnectionNative GetConnectionNativeApi()
	{
		return null;
	}

	[Token(Token = "0x6000DEC")]
	[Address(RVA = "0x4E160F0", Offset = "0x4E160F0", VA = "0x4E160F0", Slot = "4")]
	public void Register(Guid messageId, UnityAction<MessageEventArgs> callback)
	{
	}

	[Token(Token = "0x6000DED")]
	[Address(RVA = "0x4E16620", Offset = "0x4E16620", VA = "0x4E16620", Slot = "5")]
	public void Unregister(Guid messageId, UnityAction<MessageEventArgs> callback)
	{
	}

	[Token(Token = "0x6000DEE")]
	[Address(RVA = "0x4E16950", Offset = "0x4E16950", VA = "0x4E16950", Slot = "6")]
	public void RegisterConnection(UnityAction<int> callback)
	{
	}

	[Token(Token = "0x6000DEF")]
	[Address(RVA = "0x4E16B20", Offset = "0x4E16B20", VA = "0x4E16B20", Slot = "7")]
	public void RegisterDisconnection(UnityAction<int> callback)
	{
	}

	[Token(Token = "0x6000DF0")]
	[Address(RVA = "0x4E16B80", Offset = "0x4E16B80", VA = "0x4E16B80", Slot = "8")]
	public void UnregisterConnection(UnityAction<int> callback)
	{
	}

	[Token(Token = "0x6000DF1")]
	[Address(RVA = "0x4E16BE0", Offset = "0x4E16BE0", VA = "0x4E16BE0", Slot = "9")]
	public void UnregisterDisconnection(UnityAction<int> callback)
	{
	}

	[Token(Token = "0x6000DF2")]
	[Address(RVA = "0x4E16C40", Offset = "0x4E16C40", VA = "0x4E16C40", Slot = "10")]
	public void Send(Guid messageId, byte[] data)
	{
	}

	[Token(Token = "0x6000DF3")]
	[Address(RVA = "0x4E16E00", Offset = "0x4E16E00", VA = "0x4E16E00", Slot = "11")]
	public bool TrySend(Guid messageId, byte[] data)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DF4")]
	[Address(RVA = "0x4E16FC0", Offset = "0x4E16FC0", VA = "0x4E16FC0")]
	public bool BlockUntilRecvMsg(Guid messageId, int timeout)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DF5")]
	[Address(RVA = "0x4E17290", Offset = "0x4E17290", VA = "0x4E17290", Slot = "12")]
	public void DisconnectAll()
	{
	}

	[Token(Token = "0x6000DF6")]
	[Address(RVA = "0x4E17390", Offset = "0x4E17390", VA = "0x4E17390")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void MessageCallbackInternal(IntPtr data, ulong size, ulong guid, string messageId)
	{
	}

	[Token(Token = "0x6000DF7")]
	[Address(RVA = "0x4E176A0", Offset = "0x4E176A0", VA = "0x4E176A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void ConnectedCallbackInternal(int playerId)
	{
	}

	[Token(Token = "0x6000DF8")]
	[Address(RVA = "0x4E17860", Offset = "0x4E17860", VA = "0x4E17860")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void DisconnectedCallback(int playerId)
	{
	}

	[Token(Token = "0x6000DF9")]
	[Address(RVA = "0x4E179F0", Offset = "0x4E179F0", VA = "0x4E179F0")]
	public PlayerConnection()
	{
	}
}
