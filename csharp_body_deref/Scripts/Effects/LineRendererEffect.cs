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

[Token(Token = "0x200034F")]
internal class LineRendererEffect : BaseEffect
{
	[Token(Token = "0x4001147")]
	[FieldOffset(Offset = "0x30")]
	protected float _totalTime;

	[Token(Token = "0x4001148")]
	[FieldOffset(Offset = "0x38")]
	protected LineRenderer _renderer;

	[Token(Token = "0x6001523")]
	[Address(RVA = "0x1E682C0", Offset = "0x1E668C0", VA = "0x181E682C0", Slot = "4")]
	public override void Setup(Player owner, float liveTime, object[] settings)
	{
	}

	[Token(Token = "0x6001524")]
	[Address(RVA = "0x1E68550", Offset = "0x1E66B50", VA = "0x181E68550", Slot = "6")]
	protected override void Update()
	{
	}

	[Token(Token = "0x6001525")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public LineRendererEffect()
	{
	}
}
