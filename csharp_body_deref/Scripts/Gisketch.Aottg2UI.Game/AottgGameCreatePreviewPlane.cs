// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreatePreviewPlane
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePreviewPlane.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000214")]
internal sealed class AottgGameCreatePreviewPlane : BaseMeshEffect
{
	[Token(Token = "0x4000B0B")]
	[FieldOffset(Offset = "0x28")]
	private float _depth;

	[Token(Token = "0x4000B0C")]
	[FieldOffset(Offset = "0x2C")]
	private Vector2 _tilt;

	[Token(Token = "0x6000C65")]
	[Address(RVA = "0x5D88E50", Offset = "0x5D87E50", VA = "0x5D88E50")]
	public void Setup(float depth)
	{
	}

	[Token(Token = "0x6000C66")]
	[Address(RVA = "0x5D898C0", Offset = "0x5D888C0", VA = "0x5D898C0")]
	public void SetTilt(Vector2 tilt)
	{
	}

	[Token(Token = "0x6000C67")]
	[Address(RVA = "0x5D8A1D0", Offset = "0x5D891D0", VA = "0x5D8A1D0", Slot = "20")]
	public override void ModifyMesh(VertexHelper vertices)
	{
	}

	[Token(Token = "0x6000C68")]
	[Address(RVA = "0x5D8A5D0", Offset = "0x5D895D0", VA = "0x5D8A5D0")]
	public AottgGameCreatePreviewPlane()
	{
	}
}
