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
	[FieldOffset(Offset = "0x90")]
	private OpusStatusCode _statusCode;

	[Token(Token = "0x17000010")]
	public OpusStatusCode StatusCode
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0xE925C0", Offset = "0xE90BC0", VA = "0x180E925C0")]
		get
		{
			return default(OpusStatusCode);
		}
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x1D70430", Offset = "0x1D6EA30", VA = "0x181D70430")]
	public OpusException(OpusStatusCode statusCode, string message)
	{
	}
}
