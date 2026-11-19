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
		[Token(Token = "0x6001223")]
		[Address(RVA = "0x693A800", Offset = "0x6939800", VA = "0x693A800")]
		public MessageEvent()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x20002F9")]
	public class ConnectionChangeEvent : UnityEvent<int>
	{
		[Token(Token = "0x6001224")]
		[Address(RVA = "0x693A840", Offset = "0x6939840", VA = "0x693A840")]
		public ConnectionChangeEvent()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x20002FA")]
	public class MessageTypeSubscribers
	{
		[Token(Token = "0x400078B")]
		[FieldOffset(Offset = "0x10")]
		[SerializeField]
		private string m_messageTypeId;

		[Token(Token = "0x400078C")]
		[FieldOffset(Offset = "0x18")]
		public int subscriberCount;

		[Token(Token = "0x400078D")]
		[FieldOffset(Offset = "0x20")]
		public MessageEvent messageCallback;

		[Token(Token = "0x170002E6")]
		public Guid MessageTypeId
		{
			[Token(Token = "0x6001225")]
			[Address(RVA = "0x693A2F0", Offset = "0x69392F0", VA = "0x693A2F0")]
			get
			{
				return default(Guid);
			}
			[Token(Token = "0x6001226")]
			[Address(RVA = "0x693A7C0", Offset = "0x69397C0", VA = "0x693A7C0")]
			set
			{
			}
		}

		[Token(Token = "0x6001227")]
		[Address(RVA = "0x693A730", Offset = "0x6939730", VA = "0x693A730")]
		public MessageTypeSubscribers()
		{
		}
	}

	[Token(Token = "0x4000787")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private List<MessageTypeSubscribers> m_MessageTypeSubscribers;

	[Token(Token = "0x4000788")]
	[FieldOffset(Offset = "0x18")]
	private Dictionary<Guid, MessageTypeSubscribers> m_SubscriberLookup;

	[Token(Token = "0x4000789")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	public ConnectionChangeEvent connectionEvent;

	[Token(Token = "0x400078A")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	public ConnectionChangeEvent disconnectionEvent;

	[Token(Token = "0x170002E5")]
	public IReadOnlyList<MessageTypeSubscribers> messageTypeSubscribers
	{
		[Token(Token = "0x600121D")]
		[Address(RVA = "0x693A380", Offset = "0x6939380", VA = "0x693A380")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600121E")]
	[Address(RVA = "0x693A390", Offset = "0x6939390", VA = "0x693A390")]
	private void BuildLookup()
	{
	}

	[Token(Token = "0x600121F")]
	[Address(RVA = "0x6939C20", Offset = "0x6938C20", VA = "0x6939C20")]
	public void InvokeMessageIdSubscribers(Guid messageId, byte[] data, int playerId)
	{
	}

	[Token(Token = "0x6001220")]
	[Address(RVA = "0x6938B00", Offset = "0x6937B00", VA = "0x6938B00")]
	public UnityEvent<MessageEventArgs> AddAndCreate(Guid messageId)
	{
		return null;
	}

	[Token(Token = "0x6001221")]
	[Address(RVA = "0x6938F80", Offset = "0x6937F80", VA = "0x6938F80")]
	public void UnregisterManagedCallback(Guid messageId, UnityAction<MessageEventArgs> callback)
	{
	}

	[Token(Token = "0x6001222")]
	[Address(RVA = "0x693A180", Offset = "0x6939180", VA = "0x693A180")]
	public PlayerEditorConnectionEvents()
	{
	}
}
