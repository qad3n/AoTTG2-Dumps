// ==================== AoTTG2 cross-reference ====================
// Type: Effects.LineRendererEffect
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Effects/LineRendererEffect.c
// Prior real C# source (older reference): Assets/Scripts/Effects/LineRendererEffect.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace Effects;

[Token(Token = "0x20003B1")]
internal class LineRendererEffect : BaseEffect
{
	[Token(Token = "0x40012F7")]
	[FieldOffset(Offset = "0x2C")]
	protected float _totalTime;

	[Token(Token = "0x40012F8")]
	[FieldOffset(Offset = "0x30")]
	protected LineRenderer _renderer;

	[Token(Token = "0x60017A3")]
	[Address(RVA = "0x585C4D0", Offset = "0x585B4D0", VA = "0x585C4D0", Slot = "4")]
	public override void Setup(Player owner, float liveTime, object[] settings)
	{
	}

	[Token(Token = "0x60017A4")]
	[Address(RVA = "0x585C720", Offset = "0x585B720", VA = "0x585C720", Slot = "6")]
	protected override void Update()
	{
	}

	[Token(Token = "0x60017A5")]
	[Address(RVA = "0x585C800", Offset = "0x585B800", VA = "0x585C800")]
	public LineRendererEffect()
	{
	}
}
