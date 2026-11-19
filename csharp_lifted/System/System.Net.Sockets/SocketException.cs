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
[Token(Token = "0x200033E")]
public class SocketException : Win32Exception
{
	[NonSerialized]
	[Token(Token = "0x4000D98")]
	[FieldOffset(Offset = "0x90")]
	private EndPoint m_EndPoint;

	[Token(Token = "0x1700050E")]
	public override int ErrorCode
	{
		[Token(Token = "0x60016CA")]
		[Address(RVA = "0x61B7970", Offset = "0x61B6970", VA = "0x61B7970", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700050F")]
	public override string Message
	{
		[Token(Token = "0x60016CB")]
		[Address(RVA = "0x61B7980", Offset = "0x61B6980", VA = "0x61B7980", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000510")]
	public SocketError SocketErrorCode
	{
		[Token(Token = "0x60016CC")]
		[Address(RVA = "0x61B5580", Offset = "0x61B4580", VA = "0x61B5580")]
		get
		{
			return default(SocketError);
		}
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x60016C4")]
	[Address(RVA = "0x61B7920", Offset = "0x61B6920", VA = "0x61B7920")]
	private static extern int WSAGetLastError_icall();

	[Token(Token = "0x60016C5")]
	[Address(RVA = "0x61B7930", Offset = "0x61B6930", VA = "0x61B7930")]
	public SocketException()
	{
	}

	[Token(Token = "0x60016C6")]
	[Address(RVA = "0x61B7950", Offset = "0x61B6950", VA = "0x61B7950")]
	internal SocketException(int error, string message)
	{
	}

	[Token(Token = "0x60016C7")]
	[Address(RVA = "0x61B3A90", Offset = "0x61B2A90", VA = "0x61B3A90")]
	public SocketException(int errorCode)
	{
	}

	[Token(Token = "0x60016C8")]
	[Address(RVA = "0x61B7060", Offset = "0x61B6060", VA = "0x61B7060")]
	internal SocketException(SocketError socketError)
	{
	}

	[Token(Token = "0x60016C9")]
	[Address(RVA = "0x61B7960", Offset = "0x61B6960", VA = "0x61B7960")]
	protected SocketException(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}
}
