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
			[Address(RVA = "0x4EA0920", Offset = "0x4EA0920", VA = "0x4EA0920")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700039B")]
		public bool HasInfo
		{
			[Token(Token = "0x6001DFB")]
			[Address(RVA = "0x4EA0930", Offset = "0x4EA0930", VA = "0x4EA0930")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001DF9")]
		[Address(RVA = "0x4EA0910", Offset = "0x4EA0910", VA = "0x4EA0910")]
		public Reader(LogicalCallContext ctx)
		{
		}

		[Token(Token = "0x6001DFC")]
		[Address(RVA = "0x4EA0990", Offset = "0x4EA0990", VA = "0x4EA0990")]
		public LogicalCallContext Clone()
		{
			return null;
		}

		[Token(Token = "0x6001DFD")]
		[Address(RVA = "0x4E9EF00", Offset = "0x4E9EF00", VA = "0x4E9EF00")]
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
		[Address(RVA = "0x4E8DF50", Offset = "0x4E8DF50", VA = "0x4E8DF50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000398")]
	private bool HasUserData
	{
		[Token(Token = "0x6001DF4")]
		[Address(RVA = "0x4E9FEC0", Offset = "0x4E9FEC0", VA = "0x4E9FEC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000399")]
	private Hashtable Datastore
	{
		[Token(Token = "0x6001DF5")]
		[Address(RVA = "0x4E9FAB0", Offset = "0x4E9FAB0", VA = "0x4E9FAB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001DEE")]
	[Address(RVA = "0x4E9F5D0", Offset = "0x4E9F5D0", VA = "0x4E9F5D0")]
	internal LogicalCallContext()
	{
	}

	[Token(Token = "0x6001DEF")]
	[Address(RVA = "0x4E9F5E0", Offset = "0x4E9F5E0", VA = "0x4E9F5E0")]
	internal LogicalCallContext(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001DF0")]
	[Address(RVA = "0x4E9FB50", Offset = "0x4E9FB50", VA = "0x4E9FB50", Slot = "4")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001DF1")]
	[Address(RVA = "0x4E9FEF0", Offset = "0x4E9FEF0", VA = "0x4E9FEF0", Slot = "5")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6001DF2")]
	[Address(RVA = "0x4E8DFB0", Offset = "0x4E8DFB0", VA = "0x4E8DFB0")]
	internal void Merge(LogicalCallContext lc)
	{
	}

	[Token(Token = "0x6001DF6")]
	[Address(RVA = "0x4EA0800", Offset = "0x4EA0800", VA = "0x4EA0800")]
	public object GetData(string name)
	{
		return null;
	}

	[Token(Token = "0x6001DF7")]
	[Address(RVA = "0x4E9F120", Offset = "0x4E9F120", VA = "0x4E9F120")]
	public void SetData(string name, object data)
	{
	}
}
