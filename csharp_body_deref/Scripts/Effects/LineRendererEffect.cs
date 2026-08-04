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

[Token(Token = "0x2000237")]
internal class LineRendererEffect : BaseEffect
{
	[Token(Token = "0x4000C37")]
	[FieldOffset(Offset = "0x2C")]
	protected float _totalTime;

	[Token(Token = "0x4000C38")]
	[FieldOffset(Offset = "0x30")]
	protected LineRenderer _renderer;

	[Token(Token = "0x6000DD1")]
	[Address(RVA = "0x4472D20", Offset = "0x4472D20", VA = "0x4472D20", Slot = "4")]
	public override void Setup(Player owner, float liveTime, object[] settings)
	{
	}

	[Token(Token = "0x6000DD2")]
	[Address(RVA = "0x4472F60", Offset = "0x4472F60", VA = "0x4472F60", Slot = "5")]
	protected override void Update()
	{
	}

	[Token(Token = "0x6000DD3")]
	[Address(RVA = "0x4473040", Offset = "0x4473040", VA = "0x4473040")]
	public LineRendererEffect()
	{
	}
}
