// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.UnityWebRequestException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4A05750", Offset = "0x4A05750", VA = "0x4A05750")]
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
		[Address(RVA = "0x4A05760", Offset = "0x4A05760", VA = "0x4A05760")]
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
		[Address(RVA = "0x4A05770", Offset = "0x4A05770", VA = "0x4A05770")]
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
		[Address(RVA = "0x4A05780", Offset = "0x4A05780", VA = "0x4A05780")]
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
		[Address(RVA = "0x4A05790", Offset = "0x4A05790", VA = "0x4A05790")]
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
		[Address(RVA = "0x4A057A0", Offset = "0x4A057A0", VA = "0x4A057A0")]
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
		[Address(RVA = "0x4A057B0", Offset = "0x4A057B0", VA = "0x4A057B0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000939")]
	[Address(RVA = "0x49FAFB0", Offset = "0x49FAFB0", VA = "0x49FAFB0")]
	public UnityWebRequestException(UnityWebRequest unityWebRequest)
	{
	}
}
