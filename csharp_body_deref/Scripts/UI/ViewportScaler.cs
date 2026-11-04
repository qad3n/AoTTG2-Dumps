// ==================== AoTTG2 cross-reference ====================
// Type: UI.ViewportScaler
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/ViewportScaler.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000740")]
internal class ViewportScaler : IgnoreScaler
{
	[Token(Token = "0x4002409")]
	[FieldOffset(Offset = "0x28")]
	public Vector2 ContentSize;

	[Token(Token = "0x60046ED")]
	[Address(RVA = "0x221B790", Offset = "0x2219D90", VA = "0x18221B790", Slot = "5")]
	public override void ApplyScale()
	{
	}

	[Token(Token = "0x60046EE")]
	[Address(RVA = "0x21B8EA0", Offset = "0x21B74A0", VA = "0x1821B8EA0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60046EF")]
	[Address(RVA = "0x2206F90", Offset = "0x2205590", VA = "0x182206F90")]
	public ViewportScaler()
	{
	}
}
