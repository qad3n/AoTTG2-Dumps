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

[Token(Token = "0x200002F")]
public sealed class GisketchUIState
{
	[Token(Token = "0x40000F3")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<string, string> _values;

	[Token(Token = "0x40000F4")]
	[FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	private Action<string> m_Changed;

	[Token(Token = "0x14000001")]
	public event Action<string> Changed
	{
		[Token(Token = "0x600018F")]
		[Address(RVA = "0x18BE540", Offset = "0x18BCB40", VA = "0x1818BE540")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000190")]
		[Address(RVA = "0x18BE5F0", Offset = "0x18BCBF0", VA = "0x1818BE5F0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x18BE3D0", Offset = "0x18BC9D0", VA = "0x1818BE3D0")]
	public void Set(string key, string value)
	{
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x18BE350", Offset = "0x18BC950", VA = "0x1818BE350")]
	public void SetBool(string key, bool value)
	{
	}

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x18BE2B0", Offset = "0x18BC8B0", VA = "0x1818BE2B0")]
	public string Get(string key, string fallback = "")
	{
		return null;
	}

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x18BE1E0", Offset = "0x18BC7E0", VA = "0x1818BE1E0")]
	public bool GetBool(string key, bool fallback = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000195")]
	[Address(RVA = "0x18BE4C0", Offset = "0x18BCAC0", VA = "0x1818BE4C0")]
	public GisketchUIState()
	{
	}
}
