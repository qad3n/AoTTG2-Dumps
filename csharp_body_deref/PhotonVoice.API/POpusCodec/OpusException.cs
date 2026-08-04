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

[Token(Token = "0x2000008")]
public class OpusException : Exception
{
	[Token(Token = "0x4000020")]
	[FieldOffset(Offset = "0x8C")]
	private OpusStatusCode _statusCode;

	[Token(Token = "0x17000010")]
	public OpusStatusCode StatusCode
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x3F16C40", Offset = "0x3F16C40", VA = "0x3F16C40")]
		get
		{
			return default(OpusStatusCode);
		}
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x3F16200", Offset = "0x3F16200", VA = "0x3F16200")]
	public OpusException(OpusStatusCode statusCode, string message)
	{
	}
}
