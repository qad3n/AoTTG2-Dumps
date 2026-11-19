// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileInputLayout
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileInputLayout.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Serializable]
[Token(Token = "0x200074F")]
public class MobileInputLayout
{
	[Token(Token = "0x40024EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public int Version;

	[Token(Token = "0x40024EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public string Name;

	[Token(Token = "0x40024ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public string Role;

	[Token(Token = "0x40024EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public bool Builtin;

	[Token(Token = "0x40024EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public List<MobileInputControlLayout> Controls;

	[Token(Token = "0x60046D2")]
	[Address(RVA = "0x5B732B0", Offset = "0x5B722B0", VA = "0x5B732B0")]
	public void AssignRuntimeIds()
	{
	}

	[Token(Token = "0x60046D3")]
	[Address(RVA = "0x5B73380", Offset = "0x5B72380", VA = "0x5B73380")]
	private void AssignRuntimeId(MobileInputControlLayout control, string id)
	{
	}

	[Token(Token = "0x60046D4")]
	[Address(RVA = "0x5B73480", Offset = "0x5B72480", VA = "0x5B73480")]
	public MobileInputLayoutRole GetRole()
	{
		return default(MobileInputLayoutRole);
	}

	[Token(Token = "0x60046D5")]
	[Address(RVA = "0x5B73500", Offset = "0x5B72500", VA = "0x5B73500")]
	public bool TryGetRole(out MobileInputLayoutRole role)
	{
		return default(bool);
	}

	[Token(Token = "0x60046D6")]
	[Address(RVA = "0x5B73570", Offset = "0x5B72570", VA = "0x5B73570")]
	public MobileInputLayout Clone([Optional] string name, bool builtin = false)
	{
		return null;
	}

	[Token(Token = "0x60046D7")]
	[Address(RVA = "0x5B737B0", Offset = "0x5B727B0", VA = "0x5B737B0")]
	public MobileInputLayout()
	{
	}
}
