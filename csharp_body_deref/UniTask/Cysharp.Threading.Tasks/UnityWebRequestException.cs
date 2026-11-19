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

[Token(Token = "0x2000188")]
public class UnityWebRequestException : Exception
{
	[Token(Token = "0x4000632")]
	[FieldOffset(Offset = "0xC0")]
	private string msg;

	[Token(Token = "0x17000069")]
	public UnityWebRequest UnityWebRequest
	{
		[Token(Token = "0x6000957")]
		[Address(RVA = "0x62F3120", Offset = "0x62F2120", VA = "0x62F3120")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006A")]
	public UnityWebRequest.Result Result
	{
		[Token(Token = "0x6000958")]
		[Address(RVA = "0x62F3130", Offset = "0x62F2130", VA = "0x62F3130")]
		[CompilerGenerated]
		get
		{
			return default(UnityWebRequest.Result);
		}
	}

	[Token(Token = "0x1700006B")]
	public string Error
	{
		[Token(Token = "0x6000959")]
		[Address(RVA = "0x62F3140", Offset = "0x62F2140", VA = "0x62F3140")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006C")]
	public string Text
	{
		[Token(Token = "0x600095A")]
		[Address(RVA = "0x62F3150", Offset = "0x62F2150", VA = "0x62F3150")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006D")]
	public long ResponseCode
	{
		[Token(Token = "0x600095B")]
		[Address(RVA = "0x62F3160", Offset = "0x62F2160", VA = "0x62F3160")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700006E")]
	public Dictionary<string, string> ResponseHeaders
	{
		[Token(Token = "0x600095C")]
		[Address(RVA = "0x62F3170", Offset = "0x62F2170", VA = "0x62F3170")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006F")]
	public override string Message
	{
		[Token(Token = "0x600095E")]
		[Address(RVA = "0x62F3180", Offset = "0x62F2180", VA = "0x62F3180", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600095D")]
	[Address(RVA = "0x62E85E0", Offset = "0x62E75E0", VA = "0x62E85E0")]
	public UnityWebRequestException(UnityWebRequest unityWebRequest)
	{
	}
}
