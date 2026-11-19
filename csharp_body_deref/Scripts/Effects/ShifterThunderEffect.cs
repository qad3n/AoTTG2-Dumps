// ==================== AoTTG2 cross-reference ====================
// Type: Effects.ShifterThunderEffect
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Effects/ShifterThunderEffect.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace Effects;

[Token(Token = "0x20003B2")]
internal class ShifterThunderEffect : BaseEffect
{
	[Token(Token = "0x20003B3")]
	private sealed class Bolt
	{
		[Token(Token = "0x4001312")]
		[FieldOffset(Offset = "0x10")]
		private readonly LineRenderer _core;

		[Token(Token = "0x4001313")]
		[FieldOffset(Offset = "0x18")]
		private readonly LineRenderer _glow;

		[Token(Token = "0x60017AE")]
		[Address(RVA = "0x585CF90", Offset = "0x585BF90", VA = "0x585CF90")]
		public Bolt(Transform parent, Material material, int points, float scale)
		{
		}

		[Token(Token = "0x60017AF")]
		[Address(RVA = "0x585E0C0", Offset = "0x585D0C0", VA = "0x585E0C0")]
		private static LineRenderer CreateLine(Transform parent, Material material, int points, float width)
		{
			return null;
		}

		[Token(Token = "0x60017B0")]
		[Address(RVA = "0x585DC50", Offset = "0x585CC50", VA = "0x585DC50")]
		public void SetVisible(bool visible)
		{
		}

		[Token(Token = "0x60017B1")]
		[Address(RVA = "0x585DE90", Offset = "0x585CE90", VA = "0x585DE90")]
		public void SetPoints(Vector3[] points, float alpha)
		{
		}
	}

	[Token(Token = "0x40012F9")]
	private const int Strikes = 4;

	[Token(Token = "0x40012FA")]
	private const int BranchesPerStrike = 3;

	[Token(Token = "0x40012FB")]
	private const int MainPoints = 18;

	[Token(Token = "0x40012FC")]
	private const int BranchPoints = 8;

	[Token(Token = "0x40012FD")]
	private const float StrikeInterval = 0.18f;

	[Token(Token = "0x40012FE")]
	private const float StrikeDuration = 0.42f;

	[Token(Token = "0x40012FF")]
	private const float FlickerInterval = 0.04f;

	[Token(Token = "0x4001300")]
	private const float Height = 260f;

	[Token(Token = "0x4001301")]
	private const float Spread = 0.25f;

	[Token(Token = "0x4001302")]
	private const float Roughness = 0.045f;

	[Token(Token = "0x4001303")]
	private const float CoreWidth = 0.9f;

	[Token(Token = "0x4001304")]
	private const float GlowWidth = 9f;

	[Token(Token = "0x4001305")]
	private const float LightDuration = 1.4f;

	[Token(Token = "0x4001306")]
	private const float LightIntensity = 8f;

	[Token(Token = "0x4001307")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Color CoreColor;

	[Token(Token = "0x4001308")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Color GlowColor;

	[Token(Token = "0x4001309")]
	[FieldOffset(Offset = "0x20")]
	private static Material _material;

	[Token(Token = "0x400130A")]
	[FieldOffset(Offset = "0x30")]
	private readonly Bolt[] _bolts;

	[Token(Token = "0x400130B")]
	[FieldOffset(Offset = "0x38")]
	private readonly Vector3[] _mainPoints;

	[Token(Token = "0x400130C")]
	[FieldOffset(Offset = "0x40")]
	private readonly Vector3[] _branchPoints;

	[Token(Token = "0x400130D")]
	[FieldOffset(Offset = "0x48")]
	private Light _light;

	[Token(Token = "0x400130E")]
	[FieldOffset(Offset = "0x50")]
	private Transform _target;

	[Token(Token = "0x400130F")]
	[FieldOffset(Offset = "0x58")]
	private float _scale;

	[Token(Token = "0x4001310")]
	[FieldOffset(Offset = "0x5C")]
	private float _time;

	[Token(Token = "0x4001311")]
	[FieldOffset(Offset = "0x60")]
	private float _flickerTimeLeft;

	[Token(Token = "0x60017A6")]
	[Address(RVA = "0x585C810", Offset = "0x585B810", VA = "0x585C810", Slot = "4")]
	public override void Setup(Player owner, float liveTime, object[] settings)
	{
	}

	[Token(Token = "0x60017A7")]
	[Address(RVA = "0x585C930", Offset = "0x585B930", VA = "0x585C930")]
	private void Start()
	{
	}

	[Token(Token = "0x60017A8")]
	[Address(RVA = "0x585DAE0", Offset = "0x585CAE0", VA = "0x585DAE0", Slot = "6")]
	protected override void Update()
	{
	}

	[Token(Token = "0x60017A9")]
	[Address(RVA = "0x585D020", Offset = "0x585C020", VA = "0x585D020")]
	private void UpdateBolts()
	{
	}

	[Token(Token = "0x60017AA")]
	[Address(RVA = "0x585DC90", Offset = "0x585CC90", VA = "0x585DC90")]
	private static void Jag(Vector3 start, Vector3 end, Vector3[] points)
	{
	}

	[Token(Token = "0x60017AB")]
	[Address(RVA = "0x585CC90", Offset = "0x585BC90", VA = "0x585CC90")]
	private static Material GetMaterial()
	{
		return null;
	}

	[Token(Token = "0x60017AC")]
	[Address(RVA = "0x585DFC0", Offset = "0x585CFC0", VA = "0x585DFC0")]
	public ShifterThunderEffect()
	{
	}
}
