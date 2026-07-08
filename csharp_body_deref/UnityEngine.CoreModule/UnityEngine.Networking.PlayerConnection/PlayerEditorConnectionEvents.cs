using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Events;

namespace UnityEngine.Networking.PlayerConnection;

[Serializable]
[Token(Token = "0x2000296")]
internal class PlayerEditorConnectionEvents
{
	[Serializable]
	[Token(Token = "0x2000297")]
	public class MessageEvent : UnityEvent<MessageEventArgs>
	{
		[Token(Token = "0x6000E04")]
		[Address(RVA = "0x4AF0870", Offset = "0x4AF0870", VA = "0x4AF0870")]
		public MessageEvent()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000298")]
	public class ConnectionChangeEvent : UnityEvent<int>
	{
		[Token(Token = "0x6000E05")]
		[Address(RVA = "0x4AF08B0", Offset = "0x4AF08B0", VA = "0x4AF08B0")]
		public ConnectionChangeEvent()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000299")]
	public class MessageTypeSubscribers
	{
		[Token(Token = "0x40006E0")]
		[FieldOffset(Offset = "0x10")]
		[SerializeField]
		private string m_messageTypeId;

		[Token(Token = "0x40006E1")]
		[FieldOffset(Offset = "0x18")]
		public int subscriberCount;

		[Token(Token = "0x40006E2")]
		[FieldOffset(Offset = "0x20")]
		public MessageEvent messageCallback;

		[Token(Token = "0x1700025C")]
		public Guid MessageTypeId
		{
			[Token(Token = "0x6000E06")]
			[Address(RVA = "0x4AF02E0", Offset = "0x4AF02E0", VA = "0x4AF02E0")]
			get
			{
				return default(Guid);
			}
			[Token(Token = "0x6000E07")]
			[Address(RVA = "0x4AF0830", Offset = "0x4AF0830", VA = "0x4AF0830")]
			set
			{
			}
		}

		[Token(Token = "0x6000E08")]
		[Address(RVA = "0x4AF07A0", Offset = "0x4AF07A0", VA = "0x4AF07A0")]
		public MessageTypeSubscribers()
		{
		}
	}

	[Token(Token = "0x40006DC")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private List<MessageTypeSubscribers> m_MessageTypeSubscribers;

	[Token(Token = "0x40006DD")]
	[FieldOffset(Offset = "0x18")]
	private Dictionary<Guid, MessageTypeSubscribers> m_SubscriberLookup;

	[Token(Token = "0x40006DE")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	public ConnectionChangeEvent connectionEvent;

	[Token(Token = "0x40006DF")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	public ConnectionChangeEvent disconnectionEvent;

	[Token(Token = "0x1700025B")]
	public IReadOnlyList<MessageTypeSubscribers> messageTypeSubscribers
	{
		[Token(Token = "0x6000DFE")]
		[Address(RVA = "0x4AF0370", Offset = "0x4AF0370", VA = "0x4AF0370")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000DFF")]
	[Address(RVA = "0x4AF0380", Offset = "0x4AF0380", VA = "0x4AF0380")]
	private void BuildLookup()
	{
	}

	[Token(Token = "0x6000E00")]
	[Address(RVA = "0x4AEFC00", Offset = "0x4AEFC00", VA = "0x4AEFC00")]
	public void InvokeMessageIdSubscribers(Guid messageId, byte[] data, int playerId)
	{
	}

	[Token(Token = "0x6000E01")]
	[Address(RVA = "0x4AEEA80", Offset = "0x4AEEA80", VA = "0x4AEEA80")]
	public UnityEvent<MessageEventArgs> AddAndCreate(Guid messageId)
	{
		return null;
	}

	[Token(Token = "0x6000E02")]
	[Address(RVA = "0x4AEEF10", Offset = "0x4AEEF10", VA = "0x4AEEF10")]
	public void UnregisterManagedCallback(Guid messageId, UnityAction<MessageEventArgs> callback)
	{
	}

	[Token(Token = "0x6000E03")]
	[Address(RVA = "0x4AF0170", Offset = "0x4AF0170", VA = "0x4AF0170")]
	public PlayerEditorConnectionEvents()
	{
	}
}
