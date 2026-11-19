// ==================== AoTTG2 cross-reference ====================
// Type: POpusCodec.OpusException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/POpusCodec/OpusException.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using POpusCodec.Enums;

namespace POpusCodec;

[Token(Token = "0x2000006")]
public class OpusException : Exception
{
	[Token(Token = "0x400001B")]
	[FieldOffset(Offset = "0x8C")]
	private OpusStatusCode _statusCode;

	[Token(Token = "0x17000010")]
	public OpusStatusCode StatusCode
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x57019F0", Offset = "0x57009F0", VA = "0x57019F0")]
		get
		{
			return default(OpusStatusCode);
		}
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x5700FD0", Offset = "0x56FFFD0", VA = "0x5700FD0")]
	public OpusException(OpusStatusCode statusCode, string message)
	{
	}
}
