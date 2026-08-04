// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Sockets.SocketException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x49B7730", Offset = "0x49B7730", VA = "0x49B7730", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002E8")]
	public override string Message
	{
		[Token(Token = "0x6000CC8")]
		[Address(RVA = "0x49B7740", Offset = "0x49B7740", VA = "0x49B7740", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002E9")]
	public SocketError SocketErrorCode
	{
		[Token(Token = "0x6000CC9")]
		[Address(RVA = "0x49B5290", Offset = "0x49B5290", VA = "0x49B5290")]
		get
		{
			return default(SocketError);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CC1")]
	[Address(RVA = "0x49B76E0", Offset = "0x49B76E0", VA = "0x49B76E0")]
	private static extern int WSAGetLastError_icall();

	[Token(Token = "0x6000CC2")]
	[Address(RVA = "0x49B76F0", Offset = "0x49B76F0", VA = "0x49B76F0")]
	public SocketException()
	{
	}

	[Token(Token = "0x6000CC3")]
	[Address(RVA = "0x49B7710", Offset = "0x49B7710", VA = "0x49B7710")]
	internal SocketException(int error, string message)
	{
	}

	[Token(Token = "0x6000CC4")]
	[Address(RVA = "0x49B56E0", Offset = "0x49B56E0", VA = "0x49B56E0")]
	public SocketException(int errorCode)
	{
	}

	[Token(Token = "0x6000CC5")]
	[Address(RVA = "0x49B6E00", Offset = "0x49B6E00", VA = "0x49B6E00")]
	internal SocketException(SocketError socketError)
	{
	}

	[Token(Token = "0x6000CC6")]
	[Address(RVA = "0x49B7720", Offset = "0x49B7720", VA = "0x49B7720")]
	protected SocketException(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}
}
