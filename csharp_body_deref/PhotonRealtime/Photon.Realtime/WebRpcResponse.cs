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

[Token(Token = "0x200004B")]
public class WebRpcResponse
{
	[Token(Token = "0x1700006E")]
	public string Name
	{
		[Token(Token = "0x6000221")]
		[Address(RVA = "0x3ED8C00", Offset = "0x3ED8C00", VA = "0x3ED8C00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000222")]
		[Address(RVA = "0x3ED8C10", Offset = "0x3ED8C10", VA = "0x3ED8C10")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700006F")]
	public int ResultCode
	{
		[Token(Token = "0x6000223")]
		[Address(RVA = "0x3ED8C20", Offset = "0x3ED8C20", VA = "0x3ED8C20")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000224")]
		[Address(RVA = "0x3ED8C30", Offset = "0x3ED8C30", VA = "0x3ED8C30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000070")]
	[Obsolete("Use ResultCode instead")]
	public int ReturnCode
	{
		[Token(Token = "0x6000225")]
		[Address(RVA = "0x3ED8C40", Offset = "0x3ED8C40", VA = "0x3ED8C40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000071")]
	public string Message
	{
		[Token(Token = "0x6000226")]
		[Address(RVA = "0x3ED8C50", Offset = "0x3ED8C50", VA = "0x3ED8C50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000227")]
		[Address(RVA = "0x3ED8C60", Offset = "0x3ED8C60", VA = "0x3ED8C60")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000072")]
	[Obsolete("Use Message instead")]
	public string DebugMessage
	{
		[Token(Token = "0x6000228")]
		[Address(RVA = "0x3ED8C70", Offset = "0x3ED8C70", VA = "0x3ED8C70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000073")]
	public Dictionary<string, object> Parameters
	{
		[Token(Token = "0x6000229")]
		[Address(RVA = "0x3ED8C80", Offset = "0x3ED8C80", VA = "0x3ED8C80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600022A")]
		[Address(RVA = "0x3ED8C90", Offset = "0x3ED8C90", VA = "0x3ED8C90")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x3ED8CA0", Offset = "0x3ED8CA0", VA = "0x3ED8CA0")]
	public WebRpcResponse(OperationResponse response)
	{
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x3ED8E60", Offset = "0x3ED8E60", VA = "0x3ED8E60")]
	public string ToStringFull()
	{
		return null;
	}
}
