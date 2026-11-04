// ==================== AoTTG2 cross-reference ====================
// Type: Effects.ShifterThunderEffect
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Effects/ShifterThunderEffect.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace Effects;

[Token(Token = "0x2000350")]
internal class ShifterThunderEffect : BaseEffect
{
	[Token(Token = "0x2000351")]
	private sealed class Bolt
	{
		[Token(Token = "0x4001162")]
		[FieldOffset(Offset = "0x10")]
		private readonly LineRenderer _core;

		[Token(Token = "0x4001163")]
		[FieldOffset(Offset = "0x18")]
		private readonly LineRenderer _glow;

		[Token(Token = "0x600152E")]
		[Address(RVA = "0x1E63360", Offset = "0x1E61960", VA = "0x181E63360")]
		public Bolt(Transform parent, Material material, int points, float scale)
		{
		}

		[Token(Token = "0x600152F")]
		[Address(RVA = "0x1E62E90", Offset = "0x1E61490", VA = "0x181E62E90")]
		private static LineRenderer CreateLine(Transform parent, Material material, int points, float width)
		{
			return null;
		}

		[Token(Token = "0x6001530")]
		[Address(RVA = "0x1E63310", Offset = "0x1E61910", VA = "0x181E63310")]
		public void SetVisible(bool visible)
		{
		}

		[Token(Token = "0x6001531")]
		[Address(RVA = "0x1E63140", Offset = "0x1E61740", VA = "0x181E63140")]
		public void SetPoints(Vector3[] points, float alpha)
		{
		}
	}

	[Token(Token = "0x4001149")]
	private const int Strikes = 4;

	[Token(Token = "0x400114A")]
	private const int BranchesPerStrike = 3;

	[Token(Token = "0x400114B")]
	private const int MainPoints = 18;

	[Token(Token = "0x400114C")]
	private const int BranchPoints = 8;

	[Token(Token = "0x400114D")]
	private const float StrikeInterval = 0.18f;

	[Token(Token = "0x400114E")]
	private const float StrikeDuration = 0.42f;

	[Token(Token = "0x400114F")]
	private const float FlickerInterval = 0.04f;

	[Token(Token = "0x4001150")]
	private const float Height = 260f;

	[Token(Token = "0x4001151")]
	private const float Spread = 0.25f;

	[Token(Token = "0x4001152")]
	private const float Roughness = 0.045f;

	[Token(Token = "0x4001153")]
	private const float CoreWidth = 0.9f;

	[Token(Token = "0x4001154")]
	private const float GlowWidth = 9f;

	[Token(Token = "0x4001155")]
	private const float LightDuration = 1.4f;

	[Token(Token = "0x4001156")]
	private const float LightIntensity = 8f;

	[Token(Token = "0x4001157")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Color CoreColor;

	[Token(Token = "0x4001158")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Color GlowColor;

	[Token(Token = "0x4001159")]
	[FieldOffset(Offset = "0x20")]
	private static Material _material;

	[Token(Token = "0x400115A")]
	[FieldOffset(Offset = "0x30")]
	private readonly Bolt[] _bolts;

	[Token(Token = "0x400115B")]
	[FieldOffset(Offset = "0x38")]
	private readonly Vector3[] _mainPoints;

	[Token(Token = "0x400115C")]
	[FieldOffset(Offset = "0x40")]
	private readonly Vector3[] _branchPoints;

	[Token(Token = "0x400115D")]
	[FieldOffset(Offset = "0x48")]
	private Light _light;

	[Token(Token = "0x400115E")]
	[FieldOffset(Offset = "0x50")]
	private Transform _target;

	[Token(Token = "0x400115F")]
	[FieldOffset(Offset = "0x58")]
	private float _scale;

	[Token(Token = "0x4001160")]
	[FieldOffset(Offset = "0x5C")]
	private float _time;

	[Token(Token = "0x4001161")]
	[FieldOffset(Offset = "0x60")]
	private float _flickerTimeLeft;

	[Token(Token = "0x6001526")]
	[Address(RVA = "0x1E75DC0", Offset = "0x1E743C0", VA = "0x181E75DC0", Slot = "4")]
	public override void Setup(Player owner, float liveTime, object[] settings)
	{
	}

	[Token(Token = "0x6001527")]
	[Address(RVA = "0x1E75F10", Offset = "0x1E74510", VA = "0x181E75F10")]
	private void Start()
	{
	}

	[Token(Token = "0x6001528")]
	[Address(RVA = "0x1E76970", Offset = "0x1E74F70", VA = "0x181E76970", Slot = "6")]
	protected override void Update()
	{
	}

	[Token(Token = "0x6001529")]
	[Address(RVA = "0x1E762A0", Offset = "0x1E748A0", VA = "0x181E762A0")]
	private void UpdateBolts()
	{
	}

	[Token(Token = "0x600152A")]
	[Address(RVA = "0x1E75B10", Offset = "0x1E74110", VA = "0x181E75B10")]
	private static void Jag(Vector3 start, Vector3 end, Vector3[] points)
	{
	}

	[Token(Token = "0x600152B")]
	[Address(RVA = "0x1E75770", Offset = "0x1E73D70", VA = "0x181E75770")]
	private static Material GetMaterial()
	{
		return null;
	}

	[Token(Token = "0x600152C")]
	[Address(RVA = "0x1E76B10", Offset = "0x1E75110", VA = "0x181E76B10")]
	public ShifterThunderEffect()
	{
	}
}
