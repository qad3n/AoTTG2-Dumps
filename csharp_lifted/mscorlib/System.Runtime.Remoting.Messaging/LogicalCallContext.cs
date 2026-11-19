// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.LogicalCallContext
// Update status: unchanged since the previous dump
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
[Token(Token = "0x200039E")]
[ComVisible(true)]
public sealed class LogicalCallContext : ISerializable, ICloneable
{
	[Token(Token = "0x200039F")]
	internal struct Reader
	{
		[Token(Token = "0x4000EA5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private LogicalCallContext m_ctx;

		[Token(Token = "0x1700039B")]
		public bool IsNull
		{
			[Token(Token = "0x6001E3F")]
			[Address(RVA = "0x538E390", Offset = "0x538D390", VA = "0x538E390")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700039C")]
		public bool HasInfo
		{
			[Token(Token = "0x6001E40")]
			[Address(RVA = "0x538E3A0", Offset = "0x538D3A0", VA = "0x538E3A0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001E3E")]
		[Address(RVA = "0x538E380", Offset = "0x538D380", VA = "0x538E380")]
		public Reader(LogicalCallContext ctx)
		{
		}

		[Token(Token = "0x6001E41")]
		[Address(RVA = "0x538E400", Offset = "0x538D400", VA = "0x538E400")]
		public LogicalCallContext Clone()
		{
			return null;
		}

		[Token(Token = "0x6001E42")]
		[Address(RVA = "0x538C890", Offset = "0x538B890", VA = "0x538C890")]
		public object GetData(string name)
		{
			return null;
		}
	}

	[Token(Token = "0x4000E9F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Type s_callContextType;

	[Token(Token = "0x4000EA0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private Hashtable m_Datastore;

	[Token(Token = "0x4000EA1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private System.Runtime.Remoting.Messaging.CallContextRemotingData m_RemotingData;

	[Token(Token = "0x4000EA2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private System.Runtime.Remoting.Messaging.CallContextSecurityData m_SecurityData;

	[Token(Token = "0x4000EA3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private object m_HostContext;

	[Token(Token = "0x4000EA4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private bool m_IsCorrelationMgr;

	[Token(Token = "0x17000398")]
	public bool HasInfo
	{
		[Token(Token = "0x6001E38")]
		[Address(RVA = "0x537C380", Offset = "0x537B380", VA = "0x537C380")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000399")]
	private bool HasUserData
	{
		[Token(Token = "0x6001E39")]
		[Address(RVA = "0x538D850", Offset = "0x538C850", VA = "0x538D850")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700039A")]
	private Hashtable Datastore
	{
		[Token(Token = "0x6001E3A")]
		[Address(RVA = "0x538D430", Offset = "0x538C430", VA = "0x538D430")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001E33")]
	[Address(RVA = "0x538CF60", Offset = "0x538BF60", VA = "0x538CF60")]
	internal LogicalCallContext()
	{
	}

	[Token(Token = "0x6001E34")]
	[Address(RVA = "0x538CF70", Offset = "0x538BF70", VA = "0x538CF70")]
	internal LogicalCallContext(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001E35")]
	[Address(RVA = "0x538D4E0", Offset = "0x538C4E0", VA = "0x538D4E0", Slot = "4")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001E36")]
	[Address(RVA = "0x538D880", Offset = "0x538C880", VA = "0x538D880", Slot = "5")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6001E37")]
	[Address(RVA = "0x537C3E0", Offset = "0x537B3E0", VA = "0x537C3E0")]
	internal void Merge(LogicalCallContext lc)
	{
	}

	[Token(Token = "0x6001E3B")]
	[Address(RVA = "0x538E270", Offset = "0x538D270", VA = "0x538E270")]
	public object GetData(string name)
	{
		return null;
	}

	[Token(Token = "0x6001E3C")]
	[Address(RVA = "0x538CAB0", Offset = "0x538BAB0", VA = "0x538CAB0")]
	public void SetData(string name, object data)
	{
	}
}
