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
		[Address(RVA = "0x56C4EC0", Offset = "0x56C3EC0", VA = "0x56C4EC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000220")]
		[Address(RVA = "0x56C4ED0", Offset = "0x56C3ED0", VA = "0x56C4ED0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700006F")]
	public int ResultCode
	{
		[Token(Token = "0x6000221")]
		[Address(RVA = "0x56C4EE0", Offset = "0x56C3EE0", VA = "0x56C4EE0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000222")]
		[Address(RVA = "0x56C4EF0", Offset = "0x56C3EF0", VA = "0x56C4EF0")]
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
		[Address(RVA = "0x56C4F00", Offset = "0x56C3F00", VA = "0x56C4F00")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000071")]
	public string Message
	{
		[Token(Token = "0x6000224")]
		[Address(RVA = "0x56C4F10", Offset = "0x56C3F10", VA = "0x56C4F10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000225")]
		[Address(RVA = "0x56C4F20", Offset = "0x56C3F20", VA = "0x56C4F20")]
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
		[Address(RVA = "0x56C4F30", Offset = "0x56C3F30", VA = "0x56C4F30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000073")]
	public Dictionary<string, object> Parameters
	{
		[Token(Token = "0x6000227")]
		[Address(RVA = "0x56C4F40", Offset = "0x56C3F40", VA = "0x56C4F40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000228")]
		[Address(RVA = "0x56C4F50", Offset = "0x56C3F50", VA = "0x56C4F50")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000229")]
	[Address(RVA = "0x56C4F60", Offset = "0x56C3F60", VA = "0x56C4F60")]
	public WebRpcResponse(OperationResponse response)
	{
	}

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x56C5120", Offset = "0x56C4120", VA = "0x56C5120")]
	public string ToStringFull()
	{
		return null;
	}
}
