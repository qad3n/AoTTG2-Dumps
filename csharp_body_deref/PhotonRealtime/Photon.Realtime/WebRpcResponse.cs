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
		[Address(RVA = "0x3BE32B0", Offset = "0x3BE32B0", VA = "0x3BE32B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000222")]
		[Address(RVA = "0x3BE32C0", Offset = "0x3BE32C0", VA = "0x3BE32C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700006F")]
	public int ResultCode
	{
		[Token(Token = "0x6000223")]
		[Address(RVA = "0x3BE32D0", Offset = "0x3BE32D0", VA = "0x3BE32D0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000224")]
		[Address(RVA = "0x3BE32E0", Offset = "0x3BE32E0", VA = "0x3BE32E0")]
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
		[Address(RVA = "0x3BE32F0", Offset = "0x3BE32F0", VA = "0x3BE32F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000071")]
	public string Message
	{
		[Token(Token = "0x6000226")]
		[Address(RVA = "0x3BE3300", Offset = "0x3BE3300", VA = "0x3BE3300")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000227")]
		[Address(RVA = "0x3BE3310", Offset = "0x3BE3310", VA = "0x3BE3310")]
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
		[Address(RVA = "0x3BE3320", Offset = "0x3BE3320", VA = "0x3BE3320")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000073")]
	public Dictionary<string, object> Parameters
	{
		[Token(Token = "0x6000229")]
		[Address(RVA = "0x3BE3330", Offset = "0x3BE3330", VA = "0x3BE3330")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600022A")]
		[Address(RVA = "0x3BE3340", Offset = "0x3BE3340", VA = "0x3BE3340")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x3BE3350", Offset = "0x3BE3350", VA = "0x3BE3350")]
	public WebRpcResponse(OperationResponse response)
	{
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x3BE3510", Offset = "0x3BE3510", VA = "0x3BE3510")]
	public string ToStringFull()
	{
		return null;
	}
}
