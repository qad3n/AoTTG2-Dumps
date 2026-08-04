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
[Token(Token = "0x2000396")]
[ComVisible(true)]
public sealed class LogicalCallContext : ISerializable, ICloneable
{
	[Token(Token = "0x2000397")]
	internal struct Reader
	{
		[Token(Token = "0x4000F3B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private LogicalCallContext m_ctx;

		[Token(Token = "0x1700039A")]
		public bool IsNull
		{
			[Token(Token = "0x6001DFA")]
			[Address(RVA = "0x3B86440", Offset = "0x3B86440", VA = "0x3B86440")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700039B")]
		public bool HasInfo
		{
			[Token(Token = "0x6001DFB")]
			[Address(RVA = "0x3B86450", Offset = "0x3B86450", VA = "0x3B86450")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001DF9")]
		[Address(RVA = "0x3B86430", Offset = "0x3B86430", VA = "0x3B86430")]
		public Reader(LogicalCallContext ctx)
		{
		}

		[Token(Token = "0x6001DFC")]
		[Address(RVA = "0x3B864B0", Offset = "0x3B864B0", VA = "0x3B864B0")]
		public LogicalCallContext Clone()
		{
			return null;
		}

		[Token(Token = "0x6001DFD")]
		[Address(RVA = "0x3B84A20", Offset = "0x3B84A20", VA = "0x3B84A20")]
		public object GetData(string name)
		{
			return null;
		}
	}

	[Token(Token = "0x4000F32")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Type s_callContextType;

	[Token(Token = "0x4000F33")]
	private const string s_CorrelationMgrSlotName = "System.Diagnostics.Trace.CorrelationManagerSlot";

	[Token(Token = "0x4000F34")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private Hashtable m_Datastore;

	[Token(Token = "0x4000F35")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private System.Runtime.Remoting.Messaging.CallContextRemotingData m_RemotingData;

	[Token(Token = "0x4000F36")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private System.Runtime.Remoting.Messaging.CallContextSecurityData m_SecurityData;

	[Token(Token = "0x4000F37")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private object m_HostContext;

	[Token(Token = "0x4000F38")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private bool m_IsCorrelationMgr;

	[Token(Token = "0x4000F39")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Header[] _sendHeaders;

	[Token(Token = "0x4000F3A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Header[] _recvHeaders;

	[Token(Token = "0x17000397")]
	public bool HasInfo
	{
		[Token(Token = "0x6001DF3")]
		[Address(RVA = "0x3B73A70", Offset = "0x3B73A70", VA = "0x3B73A70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000398")]
	private bool HasUserData
	{
		[Token(Token = "0x6001DF4")]
		[Address(RVA = "0x3B859E0", Offset = "0x3B859E0", VA = "0x3B859E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000399")]
	private Hashtable Datastore
	{
		[Token(Token = "0x6001DF5")]
		[Address(RVA = "0x3B855D0", Offset = "0x3B855D0", VA = "0x3B855D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001DEE")]
	[Address(RVA = "0x3B850F0", Offset = "0x3B850F0", VA = "0x3B850F0")]
	internal LogicalCallContext()
	{
	}

	[Token(Token = "0x6001DEF")]
	[Address(RVA = "0x3B85100", Offset = "0x3B85100", VA = "0x3B85100")]
	internal LogicalCallContext(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001DF0")]
	[Address(RVA = "0x3B85670", Offset = "0x3B85670", VA = "0x3B85670", Slot = "4")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001DF1")]
	[Address(RVA = "0x3B85A10", Offset = "0x3B85A10", VA = "0x3B85A10", Slot = "5")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6001DF2")]
	[Address(RVA = "0x3B73AD0", Offset = "0x3B73AD0", VA = "0x3B73AD0")]
	internal void Merge(LogicalCallContext lc)
	{
	}

	[Token(Token = "0x6001DF6")]
	[Address(RVA = "0x3B86320", Offset = "0x3B86320", VA = "0x3B86320")]
	public object GetData(string name)
	{
		return null;
	}

	[Token(Token = "0x6001DF7")]
	[Address(RVA = "0x3B84C40", Offset = "0x3B84C40", VA = "0x3B84C40")]
	public void SetData(string name, object data)
	{
	}
}
