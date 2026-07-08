using System.ComponentModel;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Net.Sockets;

[Serializable]
[Token(Token = "0x20001F5")]
public class SocketException : Win32Exception
{
	[NonSerialized]
	[Token(Token = "0x4000A51")]
	[FieldOffset(Offset = "0x90")]
	private EndPoint m_EndPoint;

	[Token(Token = "0x170002E7")]
	public override int ErrorCode
	{
		[Token(Token = "0x6000CC7")]
		[Address(RVA = "0x4692630", Offset = "0x4692630", VA = "0x4692630", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002E8")]
	public override string Message
	{
		[Token(Token = "0x6000CC8")]
		[Address(RVA = "0x4692640", Offset = "0x4692640", VA = "0x4692640", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002E9")]
	public SocketError SocketErrorCode
	{
		[Token(Token = "0x6000CC9")]
		[Address(RVA = "0x4690190", Offset = "0x4690190", VA = "0x4690190")]
		get
		{
			return default(SocketError);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CC1")]
	[Address(RVA = "0x46925E0", Offset = "0x46925E0", VA = "0x46925E0")]
	private static extern int WSAGetLastError_icall();

	[Token(Token = "0x6000CC2")]
	[Address(RVA = "0x46925F0", Offset = "0x46925F0", VA = "0x46925F0")]
	public SocketException()
	{
	}

	[Token(Token = "0x6000CC3")]
	[Address(RVA = "0x4692610", Offset = "0x4692610", VA = "0x4692610")]
	internal SocketException(int error, string message)
	{
	}

	[Token(Token = "0x6000CC4")]
	[Address(RVA = "0x46905E0", Offset = "0x46905E0", VA = "0x46905E0")]
	public SocketException(int errorCode)
	{
	}

	[Token(Token = "0x6000CC5")]
	[Address(RVA = "0x4691D00", Offset = "0x4691D00", VA = "0x4691D00")]
	internal SocketException(SocketError socketError)
	{
	}

	[Token(Token = "0x6000CC6")]
	[Address(RVA = "0x4692620", Offset = "0x4692620", VA = "0x4692620")]
	protected SocketException(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}
}
