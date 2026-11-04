// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.LogicalCallContext
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Serializable]
[Token(Token = "0x20003C5")]
[ComVisible(true)]
public sealed class LogicalCallContext : ISerializable, ICloneable
{
	[Token(Token = "0x20003C6")]
	internal struct Reader
	{
		[Token(Token = "0x4000F45")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private LogicalCallContext m_ctx;

		[Token(Token = "0x1700039C")]
		public bool IsNull
		{
			[Token(Token = "0x6001E69")]
			[Address(RVA = "0x187E270", Offset = "0x187C870", VA = "0x18187E270")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700039D")]
		public bool HasInfo
		{
			[Token(Token = "0x6001E6A")]
			[Address(RVA = "0x1A04930", Offset = "0x1A02F30", VA = "0x181A04930")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001E68")]
		[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150")]
		public Reader(LogicalCallContext ctx)
		{
		}

		[Token(Token = "0x6001E6B")]
		[Address(RVA = "0x1A04810", Offset = "0x1A02E10", VA = "0x181A04810")]
		public LogicalCallContext Clone()
		{
			return null;
		}

		[Token(Token = "0x6001E6C")]
		[Address(RVA = "0x1A04880", Offset = "0x1A02E80", VA = "0x181A04880")]
		public object GetData(string name)
		{
			return null;
		}
	}

	[Token(Token = "0x4000F3F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Type s_callContextType;

	[Token(Token = "0x4000F40")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private Hashtable m_Datastore;

	[Token(Token = "0x4000F41")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private System.Runtime.Remoting.Messaging.CallContextRemotingData m_RemotingData;

	[Token(Token = "0x4000F42")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private System.Runtime.Remoting.Messaging.CallContextSecurityData m_SecurityData;

	[Token(Token = "0x4000F43")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private object m_HostContext;

	[Token(Token = "0x4000F44")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private bool m_IsCorrelationMgr;

	[Token(Token = "0x17000399")]
	public bool HasInfo
	{
		[Token(Token = "0x6001E62")]
		[Address(RVA = "0x19FEAB0", Offset = "0x19FD0B0", VA = "0x1819FEAB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700039A")]
	private bool HasUserData
	{
		[Token(Token = "0x6001E63")]
		[Address(RVA = "0x19FB530", Offset = "0x19F9B30", VA = "0x1819FB530")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700039B")]
	private Hashtable Datastore
	{
		[Token(Token = "0x6001E64")]
		[Address(RVA = "0x19FEA40", Offset = "0x19FD040", VA = "0x1819FEA40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001E5D")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	internal LogicalCallContext()
	{
	}

	[Token(Token = "0x6001E5E")]
	[Address(RVA = "0x19FE320", Offset = "0x19FC920", VA = "0x1819FE320")]
	internal LogicalCallContext(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001E5F")]
	[Address(RVA = "0x19FDB30", Offset = "0x19FC130", VA = "0x1819FDB30", Slot = "4")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001E60")]
	[Address(RVA = "0x19FD310", Offset = "0x19FB910", VA = "0x1819FD310", Slot = "5")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6001E61")]
	[Address(RVA = "0x19FDED0", Offset = "0x19FC4D0", VA = "0x1819FDED0")]
	internal void Merge(LogicalCallContext lc)
	{
	}

	[Token(Token = "0x6001E65")]
	[Address(RVA = "0x19FDA90", Offset = "0x19FC090", VA = "0x1819FDA90")]
	public object GetData(string name)
	{
		return null;
	}

	[Token(Token = "0x6001E66")]
	[Address(RVA = "0x19FE1C0", Offset = "0x19FC7C0", VA = "0x1819FE1C0")]
	public void SetData(string name, object data)
	{
	}
}
