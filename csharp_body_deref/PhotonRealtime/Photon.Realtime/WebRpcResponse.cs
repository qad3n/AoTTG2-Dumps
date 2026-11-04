// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.WebRpcResponse
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/WebRpc.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using ExitGames.Client.Photon;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000049")]
public class WebRpcResponse
{
	[Token(Token = "0x1700006E")]
	public string Name
	{
		[Token(Token = "0x600021F")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000220")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700006F")]
	public int ResultCode
	{
		[Token(Token = "0x6000221")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000222")]
		[Address(RVA = "0x111C9C0", Offset = "0x111AFC0", VA = "0x18111C9C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000070")]
	[Obsolete("Use ResultCode instead")]
	public int ReturnCode
	{
		[Token(Token = "0x6000223")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000071")]
	public string Message
	{
		[Token(Token = "0x6000224")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000225")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000072")]
	[Obsolete("Use Message instead")]
	public string DebugMessage
	{
		[Token(Token = "0x6000226")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000073")]
	public Dictionary<string, object> Parameters
	{
		[Token(Token = "0x6000227")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000228")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000229")]
	[Address(RVA = "0x1D2EC80", Offset = "0x1D2D280", VA = "0x181D2EC80")]
	public WebRpcResponse(OperationResponse response)
	{
	}

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x1D2EA80", Offset = "0x1D2D080", VA = "0x181D2EA80")]
	public string ToStringFull()
	{
		return null;
	}
}
