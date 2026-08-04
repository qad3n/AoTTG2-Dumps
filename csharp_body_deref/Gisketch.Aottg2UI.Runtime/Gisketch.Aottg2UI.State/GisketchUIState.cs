// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.State.GisketchUIState
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/State/GisketchUIState.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.State;

[Token(Token = "0x2000025")]
public sealed class GisketchUIState
{
	[Token(Token = "0x40000C7")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<string, string> _values;

	[Token(Token = "0x14000001")]
	public event Action<string> Changed
	{
		[Token(Token = "0x6000120")]
		[Address(RVA = "0x3A44C70", Offset = "0x3A44C70", VA = "0x3A44C70")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000121")]
		[Address(RVA = "0x3A45280", Offset = "0x3A45280", VA = "0x3A45280")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x3A46830", Offset = "0x3A46830", VA = "0x3A46830")]
	public void Set(string key, string value)
	{
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x3A467C0", Offset = "0x3A467C0", VA = "0x3A467C0")]
	public void SetBool(string key, bool value)
	{
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x3A45510", Offset = "0x3A45510", VA = "0x3A45510")]
	public string Get(string key, string fallback = "")
	{
		return null;
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x3A461A0", Offset = "0x3A461A0", VA = "0x3A461A0")]
	public bool GetBool(string key, bool fallback = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x3A46AF0", Offset = "0x3A46AF0", VA = "0x3A46AF0")]
	public GisketchUIState()
	{
	}
}
