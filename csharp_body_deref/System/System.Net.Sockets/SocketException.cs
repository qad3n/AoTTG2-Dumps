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
[Token(Token = "0x2000382")]
public class SocketException : Win32Exception
{
	[NonSerialized]
	[Token(Token = "0x4000E80")]
	[FieldOffset(Offset = "0x98")]
	private EndPoint m_EndPoint;

	[Token(Token = "0x1700053B")]
	public override int ErrorCode
	{
		[Token(Token = "0x6001883")]
		[Address(RVA = "0xE925C0", Offset = "0xE90BC0", VA = "0x180E925C0", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700053C")]
	public override string Message
	{
		[Token(Token = "0x6001884")]
		[Address(RVA = "0x281A5C0", Offset = "0x2818BC0", VA = "0x18281A5C0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700053D")]
	public SocketError SocketErrorCode
	{
		[Token(Token = "0x6001885")]
		[Address(RVA = "0xE925C0", Offset = "0xE90BC0", VA = "0x180E925C0")]
		get
		{
			return default(SocketError);
		}
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x600187D")]
	[Address(RVA = "0x281A550", Offset = "0x2818B50", VA = "0x18281A550")]
	private static extern int WSAGetLastError_icall();

	[Token(Token = "0x600187E")]
	[Address(RVA = "0x281A5A0", Offset = "0x2818BA0", VA = "0x18281A5A0")]
	public SocketException()
	{
	}

	[Token(Token = "0x600187F")]
	[Address(RVA = "0x281A560", Offset = "0x2818B60", VA = "0x18281A560")]
	internal SocketException(int error, string message)
	{
	}

	[Token(Token = "0x6001880")]
	[Address(RVA = "0x281A570", Offset = "0x2818B70", VA = "0x18281A570")]
	public SocketException(int errorCode)
	{
	}

	[Token(Token = "0x6001881")]
	[Address(RVA = "0x281A570", Offset = "0x2818B70", VA = "0x18281A570")]
	internal SocketException(SocketError socketError)
	{
	}

	[Token(Token = "0x6001882")]
	[Address(RVA = "0x281A580", Offset = "0x2818B80", VA = "0x18281A580")]
	protected SocketException(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}
}
