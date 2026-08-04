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
		[Address(RVA = "0x51093E0", Offset = "0x51093E0", VA = "0x51093E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000002")]
	public string text
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x51094E0", Offset = "0x51094E0", VA = "0x51094E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000003")]
	public string url
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x5109650", Offset = "0x5109650", VA = "0x5109650")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000004")]
	public override bool keepWaiting
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x5109670", Offset = "0x5109670", VA = "0x5109670", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000001")]
	[Address(RVA = "0x5109390", Offset = "0x5109390", VA = "0x5109390")]
	public WWW(string url)
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x5109690", Offset = "0x5109690", VA = "0x5109690", Slot = "9")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x5109560", Offset = "0x5109560", VA = "0x5109560")]
	private bool WaitUntilDoneIfPossible()
	{
		return default(bool);
	}
}
