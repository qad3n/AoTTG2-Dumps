// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Events;

namespace UnityEngine.Networking.PlayerConnection;

[Serializable]
[Token(Token = "0x20002F7")]
internal class PlayerEditorConnectionEvents
{
	[Serializable]
	[Token(Token = "0x20002F8")]
	public class MessageEvent : UnityEvent<MessageEventArgs>
	{
		[Token(Token = "0x600120F")]
		[Address(RVA = "0x2F4B390", Offset = "0x2F49990", VA = "0x182F4B390")]
		public MessageEvent()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x20002F9")]
	public class ConnectionChangeEvent : UnityEvent<int>
	{
		[Token(Token = "0x6001210")]
		[Address(RVA = "0x2F48AB0", Offset = "0x2F470B0", VA = "0x182F48AB0")]
		public ConnectionChangeEvent()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x20002FA")]
	public class MessageTypeSubscribers
	{
		[Token(Token = "0x400078D")]
		[FieldOffset(Offset = "0x10")]
		[SerializeField]
		private string m_messageTypeId;

		[Token(Token = "0x400078E")]
		[FieldOffset(Offset = "0x18")]
		public int subscriberCount;

		[Token(Token = "0x400078F")]
		[FieldOffset(Offset = "0x20")]
		public MessageEvent messageCallback;

		[Token(Token = "0x170002E1")]
		public Guid MessageTypeId
		{
			[Token(Token = "0x6001211")]
			[Address(RVA = "0x2F4B460", Offset = "0x2F49A60", VA = "0x182F4B460")]
			get
			{
				return default(Guid);
			}
			[Token(Token = "0x6001212")]
			[Address(RVA = "0x2F4B4A0", Offset = "0x2F49AA0", VA = "0x182F4B4A0")]
			set
			{
			}
		}

		[Token(Token = "0x6001213")]
		[Address(RVA = "0x2F4B3D0", Offset = "0x2F499D0", VA = "0x182F4B3D0")]
		public MessageTypeSubscribers()
		{
		}
	}

	[Token(Token = "0x4000789")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private List<MessageTypeSubscribers> m_MessageTypeSubscribers;

	[Token(Token = "0x400078A")]
	[FieldOffset(Offset = "0x18")]
	private Dictionary<Guid, MessageTypeSubscribers> m_SubscriberLookup;

	[Token(Token = "0x400078B")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	public ConnectionChangeEvent connectionEvent;

	[Token(Token = "0x400078C")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	public ConnectionChangeEvent disconnectionEvent;

	[Token(Token = "0x170002E0")]
	public IReadOnlyList<MessageTypeSubscribers> messageTypeSubscribers
	{
		[Token(Token = "0x6001209")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600120A")]
	[Address(RVA = "0x2F4FE70", Offset = "0x2F4E470", VA = "0x182F4FE70")]
	private void BuildLookup()
	{
	}

	[Token(Token = "0x600120B")]
	[Address(RVA = "0x2F50140", Offset = "0x2F4E740", VA = "0x182F50140")]
	public void InvokeMessageIdSubscribers(Guid messageId, byte[] data, int playerId)
	{
	}

	[Token(Token = "0x600120C")]
	[Address(RVA = "0x2F4FBF0", Offset = "0x2F4E1F0", VA = "0x182F4FBF0")]
	public UnityEvent<MessageEventArgs> AddAndCreate(Guid messageId)
	{
		return null;
	}

	[Token(Token = "0x600120D")]
	[Address(RVA = "0x2F502B0", Offset = "0x2F4E8B0", VA = "0x182F502B0")]
	public void UnregisterManagedCallback(Guid messageId, UnityAction<MessageEventArgs> callback)
	{
	}

	[Token(Token = "0x600120E")]
	[Address(RVA = "0x2F503E0", Offset = "0x2F4E9E0", VA = "0x182F503E0")]
	public PlayerEditorConnectionEvents()
	{
	}
}
