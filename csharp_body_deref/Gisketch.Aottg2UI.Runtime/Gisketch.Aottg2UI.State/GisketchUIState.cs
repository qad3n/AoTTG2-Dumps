// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.State.GisketchUIState
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/State/GisketchUIState.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.State;

[Token(Token = "0x2000036")]
public sealed class GisketchUIState
{
	[Token(Token = "0x4000116")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<string, string> _values;

	[Token(Token = "0x4000117")]
	[FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	private Action<string> m_Changed;

	[Token(Token = "0x14000001")]
	public event Action<string> Changed
	{
		[Token(Token = "0x60001D9")]
		[Address(RVA = "0x5243DE0", Offset = "0x5242DE0", VA = "0x5243DE0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60001DA")]
		[Address(RVA = "0x5244810", Offset = "0x5243810", VA = "0x5244810")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x5246530", Offset = "0x5245530", VA = "0x5246530")]
	public void Set(string key, string value)
	{
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x52467F0", Offset = "0x52457F0", VA = "0x52467F0")]
	public void CopyFrom(GisketchUIState other)
	{
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x52464C0", Offset = "0x52454C0", VA = "0x52464C0")]
	public void SetBool(string key, bool value)
	{
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x5244A90", Offset = "0x5243A90", VA = "0x5244A90")]
	public string Get(string key, string fallback = "")
	{
		return null;
	}

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x5245B50", Offset = "0x5244B50", VA = "0x5245B50")]
	public bool GetBool(string key, bool fallback = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x5246990", Offset = "0x5245990", VA = "0x5246990")]
	public GisketchUIState()
	{
	}
}
