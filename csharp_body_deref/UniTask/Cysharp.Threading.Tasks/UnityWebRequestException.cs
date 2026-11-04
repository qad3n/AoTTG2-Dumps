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
		[Address(RVA = "0xA4D3D0", Offset = "0xA4B9D0", VA = "0x180A4D3D0")]
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
		[Address(RVA = "0xB5B9F0", Offset = "0xB59FF0", VA = "0x180B5B9F0")]
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
		[Address(RVA = "0x187BC20", Offset = "0x187A220", VA = "0x18187BC20")]
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
		[Address(RVA = "0x58A890", Offset = "0x588E90", VA = "0x18058A890")]
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
		[Address(RVA = "0x1537220", Offset = "0x1535820", VA = "0x181537220")]
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
		[Address(RVA = "0x187BC10", Offset = "0x187A210", VA = "0x18187BC10")]
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
		[Address(RVA = "0x294FF00", Offset = "0x294E500", VA = "0x18294FF00", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600095D")]
	[Address(RVA = "0x294FDC0", Offset = "0x294E3C0", VA = "0x18294FDC0")]
	public UnityWebRequestException(UnityWebRequest unityWebRequest)
	{
	}
}
