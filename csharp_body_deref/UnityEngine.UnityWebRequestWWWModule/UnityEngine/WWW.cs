using System;
using Il2CppDummyDll;
using UnityEngine.Networking;

namespace UnityEngine;

[Token(Token = "0x2000002")]
[Obsolete("Use UnityWebRequest, a fully featured replacement which is more efficient and has additional features")]
public class WWW : CustomYieldInstruction, IDisposable
{
	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x10")]
	private UnityWebRequest _uwr;

	[Token(Token = "0x17000001")]
	public string error
	{
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x4DE15D0", Offset = "0x4DE15D0", VA = "0x4DE15D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000002")]
	public string text
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x4DE16D0", Offset = "0x4DE16D0", VA = "0x4DE16D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000003")]
	public string url
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x4DE1840", Offset = "0x4DE1840", VA = "0x4DE1840")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000004")]
	public override bool keepWaiting
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x4DE1860", Offset = "0x4DE1860", VA = "0x4DE1860", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000001")]
	[Address(RVA = "0x4DE1580", Offset = "0x4DE1580", VA = "0x4DE1580")]
	public WWW(string url)
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x4DE1880", Offset = "0x4DE1880", VA = "0x4DE1880", Slot = "9")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x4DE1750", Offset = "0x4DE1750", VA = "0x4DE1750")]
	private bool WaitUntilDoneIfPossible()
	{
		return default(bool);
	}
}
