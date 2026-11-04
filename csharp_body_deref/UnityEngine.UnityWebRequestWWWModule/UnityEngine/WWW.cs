// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.WWW
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x330FCA0", Offset = "0x330E2A0", VA = "0x18330FCA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000002")]
	public string text
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x330FDE0", Offset = "0x330E3E0", VA = "0x18330FDE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000003")]
	public string url
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x330FF30", Offset = "0x330E530", VA = "0x18330FF30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000004")]
	public override bool keepWaiting
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x330FDB0", Offset = "0x330E3B0", VA = "0x18330FDB0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000001")]
	[Address(RVA = "0x330FC40", Offset = "0x330E240", VA = "0x18330FC40")]
	public WWW(string url)
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x330FB10", Offset = "0x330E110", VA = "0x18330FB10", Slot = "9")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x330FB50", Offset = "0x330E150", VA = "0x18330FB50")]
	private bool WaitUntilDoneIfPossible()
	{
		return default(bool);
	}
}
