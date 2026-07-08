using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Networking;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000185")]
public class UnityWebRequestException : Exception
{
	[Token(Token = "0x400061F")]
	[FieldOffset(Offset = "0xC0")]
	private string msg;

	[Token(Token = "0x17000067")]
	public UnityWebRequest UnityWebRequest
	{
		[Token(Token = "0x6000933")]
		[Address(RVA = "0x46E0650", Offset = "0x46E0650", VA = "0x46E0650")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000068")]
	public UnityWebRequest.Result Result
	{
		[Token(Token = "0x6000934")]
		[Address(RVA = "0x46E0660", Offset = "0x46E0660", VA = "0x46E0660")]
		[CompilerGenerated]
		get
		{
			return default(UnityWebRequest.Result);
		}
	}

	[Token(Token = "0x17000069")]
	public string Error
	{
		[Token(Token = "0x6000935")]
		[Address(RVA = "0x46E0670", Offset = "0x46E0670", VA = "0x46E0670")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006A")]
	public string Text
	{
		[Token(Token = "0x6000936")]
		[Address(RVA = "0x46E0680", Offset = "0x46E0680", VA = "0x46E0680")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006B")]
	public long ResponseCode
	{
		[Token(Token = "0x6000937")]
		[Address(RVA = "0x46E0690", Offset = "0x46E0690", VA = "0x46E0690")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700006C")]
	public Dictionary<string, string> ResponseHeaders
	{
		[Token(Token = "0x6000938")]
		[Address(RVA = "0x46E06A0", Offset = "0x46E06A0", VA = "0x46E06A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006D")]
	public override string Message
	{
		[Token(Token = "0x600093A")]
		[Address(RVA = "0x46E06B0", Offset = "0x46E06B0", VA = "0x46E06B0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000939")]
	[Address(RVA = "0x46D62A0", Offset = "0x46D62A0", VA = "0x46D62A0")]
	public UnityWebRequestException(UnityWebRequest unityWebRequest)
	{
	}
}
