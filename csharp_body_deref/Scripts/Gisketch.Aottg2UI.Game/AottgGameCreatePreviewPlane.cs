// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreatePreviewPlane
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePreviewPlane.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001F9")]
internal sealed class AottgGameCreatePreviewPlane : BaseMeshEffect
{
	[Token(Token = "0x4000A8E")]
	[FieldOffset(Offset = "0x28")]
	private float _depth;

	[Token(Token = "0x4000A8F")]
	[FieldOffset(Offset = "0x2C")]
	private Vector2 _tilt;

	[Token(Token = "0x6000B9F")]
	[Address(RVA = "0x23CD7B0", Offset = "0x23CBDB0", VA = "0x1823CD7B0")]
	public void Setup(float depth)
	{
	}

	[Token(Token = "0x6000BA0")]
	[Address(RVA = "0x23CD740", Offset = "0x23CBD40", VA = "0x1823CD740")]
	public void SetTilt(Vector2 tilt)
	{
	}

	[Token(Token = "0x6000BA1")]
	[Address(RVA = "0x23CD270", Offset = "0x23CB870", VA = "0x1823CD270", Slot = "20")]
	public override void ModifyMesh(VertexHelper vertices)
	{
	}

	[Token(Token = "0x6000BA2")]
	[Address(RVA = "0x1E68D20", Offset = "0x1E67320", VA = "0x181E68D20")]
	public AottgGameCreatePreviewPlane()
	{
	}
}
