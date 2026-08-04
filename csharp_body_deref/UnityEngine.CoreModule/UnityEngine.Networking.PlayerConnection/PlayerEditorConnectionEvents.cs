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
[Token(Token = "0x2000299")]
internal class PlayerEditorConnectionEvents
{
	[Serializable]
	[Token(Token = "0x200029A")]
	public class MessageEvent : UnityEvent<MessageEventArgs>
	{
		[Token(Token = "0x6000E06")]
		[Address(RVA = "0x4E181A0", Offset = "0x4E181A0", VA = "0x4E181A0")]
		public MessageEvent()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x200029B")]
	public class ConnectionChangeEvent : UnityEvent<int>
	{
		[Token(Token = "0x6000E07")]
		[Address(RVA = "0x4E181E0", Offset = "0x4E181E0", VA = "0x4E181E0")]
		public ConnectionChangeEvent()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x200029C")]
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

		[Token(Token = "0x1700025D")]
		public Guid MessageTypeId
		{
			[Token(Token = "0x6000E08")]
			[Address(RVA = "0x4E17C10", Offset = "0x4E17C10", VA = "0x4E17C10")]
			get
			{
				return default(Guid);
			}
			[Token(Token = "0x6000E09")]
			[Address(RVA = "0x4E18160", Offset = "0x4E18160", VA = "0x4E18160")]
			set
			{
			}
		}

		[Token(Token = "0x6000E0A")]
		[Address(RVA = "0x4E180D0", Offset = "0x4E180D0", VA = "0x4E180D0")]
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

	[Token(Token = "0x1700025C")]
	public IReadOnlyList<MessageTypeSubscribers> messageTypeSubscribers
	{
		[Token(Token = "0x6000E00")]
		[Address(RVA = "0x4E17CA0", Offset = "0x4E17CA0", VA = "0x4E17CA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E01")]
	[Address(RVA = "0x4E17CB0", Offset = "0x4E17CB0", VA = "0x4E17CB0")]
	private void BuildLookup()
	{
	}

	[Token(Token = "0x6000E02")]
	[Address(RVA = "0x4E17530", Offset = "0x4E17530", VA = "0x4E17530")]
	public void InvokeMessageIdSubscribers(Guid messageId, byte[] data, int playerId)
	{
	}

	[Token(Token = "0x6000E03")]
	[Address(RVA = "0x4E163B0", Offset = "0x4E163B0", VA = "0x4E163B0")]
	public UnityEvent<MessageEventArgs> AddAndCreate(Guid messageId)
	{
		return null;
	}

	[Token(Token = "0x6000E04")]
	[Address(RVA = "0x4E16840", Offset = "0x4E16840", VA = "0x4E16840")]
	public void UnregisterManagedCallback(Guid messageId, UnityAction<MessageEventArgs> callback)
	{
	}

	[Token(Token = "0x6000E05")]
	[Address(RVA = "0x4E17AA0", Offset = "0x4E17AA0", VA = "0x4E17AA0")]
	public PlayerEditorConnectionEvents()
	{
	}
}
