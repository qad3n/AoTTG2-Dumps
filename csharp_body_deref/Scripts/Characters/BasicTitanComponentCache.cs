// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BasicTitanComponentCache
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/BasicTitanComponentCache.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/BasicTitanComponentCache.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x2000717")]
internal class BasicTitanComponentCache : BaseTitanComponentCache
{
	[Token(Token = "0x40022F4")]
	public const string ArmBloodParticle = "ArmBloodParticle";

	[Token(Token = "0x40022F5")]
	public const string ArmSmokeParticle = "ArmSmokeParticle";

	[Token(Token = "0x40022F6")]
	public const string NapeBloodParticle = "NapeBloodParticle";

	[Token(Token = "0x40022F7")]
	public const string WardedWeakSpotParticle = "WardedWeakSpotParticle";

	[Token(Token = "0x40022F8")]
	public const string DecapitationParticle = "DecapitationParticle";

	[Token(Token = "0x40022F9")]
	public const string NapeChunkParticle = "NapeChunkParticle";

	[Token(Token = "0x40022FA")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] Particles;

	[Token(Token = "0x40022FB")]
	public const string DissolveShader = "TitanDissolve";

	[Token(Token = "0x40022FC")]
	public const string RegrowthShader = "TitanRegrowth";

	[Token(Token = "0x40022FD")]
	public const string HaircutShader = "Haircut";

	[Token(Token = "0x40022FE")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string[] GoreShaders;

	[Token(Token = "0x40022FF")]
	private const int DissolveNoiseSize = 32;

	[Token(Token = "0x4002300")]
	private const int DissolveNoiseSeed = 1;

	[Token(Token = "0x4002301")]
	[FieldOffset(Offset = "0x10")]
	private static readonly int DissolveNoiseProperty;

	[Token(Token = "0x4002302")]
	[FieldOffset(Offset = "0x18")]
	private static Texture3D _dissolveNoise;

	[Token(Token = "0x4002303")]
	private const string ForearmLPath = "Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.L/upper_arm.L/forearm.L";

	[Token(Token = "0x4002304")]
	private const string ForearmRPath = "Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.R/upper_arm.R/forearm.R";

	[Token(Token = "0x4002305")]
	[FieldOffset(Offset = "0x100")]
	public BaseHitbox BodyHitbox;

	[Token(Token = "0x4002306")]
	[FieldOffset(Offset = "0x108")]
	public BaseHitbox CrawlerHitbox;

	[Token(Token = "0x4002307")]
	[FieldOffset(Offset = "0x110")]
	public Transform ForearmL;

	[Token(Token = "0x4002308")]
	[FieldOffset(Offset = "0x118")]
	public Transform ForearmR;

	[Token(Token = "0x4002309")]
	[FieldOffset(Offset = "0x120")]
	public Transform HandL;

	[Token(Token = "0x400230A")]
	[FieldOffset(Offset = "0x128")]
	public Transform HandR;

	[Token(Token = "0x400230B")]
	[FieldOffset(Offset = "0x130")]
	public float HandLHurtboxRadius;

	[Token(Token = "0x400230C")]
	[FieldOffset(Offset = "0x134")]
	public float HandRHurtboxRadius;

	[Token(Token = "0x400230D")]
	[FieldOffset(Offset = "0x138")]
	public Transform Body;

	[Token(Token = "0x400230E")]
	[FieldOffset(Offset = "0x140")]
	public Transform HairSocket;

	[Token(Token = "0x400230F")]
	[FieldOffset(Offset = "0x148")]
	public CapsuleCollider HeadCollider;

	[Token(Token = "0x4002310")]
	[FieldOffset(Offset = "0x150")]
	public Collider ForearmLHurtbox;

	[Token(Token = "0x4002311")]
	[FieldOffset(Offset = "0x158")]
	public Collider ForearmRHurtbox;

	[Token(Token = "0x4002312")]
	[FieldOffset(Offset = "0x160")]
	public ParticleSystem ForearmBloodL;

	[Token(Token = "0x4002313")]
	[FieldOffset(Offset = "0x168")]
	public ParticleSystem ForearmBloodR;

	[Token(Token = "0x4002314")]
	[FieldOffset(Offset = "0x170")]
	public ParticleSystem ForearmSmokeL;

	[Token(Token = "0x4002315")]
	[FieldOffset(Offset = "0x178")]
	public ParticleSystem ForearmSmokeR;

	[Token(Token = "0x4002316")]
	[FieldOffset(Offset = "0x180")]
	public ParticleSystem WardedWeakSpotForearmL;

	[Token(Token = "0x4002317")]
	[FieldOffset(Offset = "0x188")]
	public ParticleSystem WardedWeakSpotForearmR;

	[Token(Token = "0x4002318")]
	[FieldOffset(Offset = "0x190")]
	public ParticleSystem WardedWeakSpotLegL;

	[Token(Token = "0x4002319")]
	[FieldOffset(Offset = "0x198")]
	public ParticleSystem WardedWeakSpotLegR;

	[Token(Token = "0x400231A")]
	[FieldOffset(Offset = "0x1A0")]
	public ParticleSystem NapeBlood;

	[Token(Token = "0x400231B")]
	[FieldOffset(Offset = "0x1A8")]
	public ParticleSystem DecapitationBlood;

	[Token(Token = "0x6004530")]
	[Address(RVA = "0x5B3FC10", Offset = "0x5B3EC10", VA = "0x5B3FC10")]
	public BasicTitanComponentCache(GameObject owner)
	{
	}

	[Token(Token = "0x6004531")]
	[Address(RVA = "0x5B401F0", Offset = "0x5B3F1F0", VA = "0x5B401F0")]
	private void SetupParticles()
	{
	}

	[Token(Token = "0x6004532")]
	[Address(RVA = "0x5B40F80", Offset = "0x5B3FF80", VA = "0x5B40F80")]
	public static GameObject LoadParticle(string name)
	{
		return null;
	}

	[Token(Token = "0x6004533")]
	[Address(RVA = "0x5B41040", Offset = "0x5B40040", VA = "0x5B41040")]
	public static Material LoadWoundMaterial()
	{
		return null;
	}

	[Token(Token = "0x6004534")]
	[Address(RVA = "0x5B41120", Offset = "0x5B40120", VA = "0x5B41120")]
	public static Shader LoadShader(string name)
	{
		return null;
	}

	[Token(Token = "0x6004535")]
	[Address(RVA = "0x5B411E0", Offset = "0x5B401E0", VA = "0x5B411E0")]
	public static Shader LoadDissolveShader()
	{
		return null;
	}

	[Token(Token = "0x6004536")]
	[Address(RVA = "0x5B412E0", Offset = "0x5B402E0", VA = "0x5B412E0")]
	private static Texture3D CreateDissolveNoise()
	{
		return null;
	}

	[Token(Token = "0x6004537")]
	[Address(RVA = "0x5B41420", Offset = "0x5B40420", VA = "0x5B41420")]
	public static void PrewarmAssets(bool gore)
	{
	}

	[Token(Token = "0x6004538")]
	[Address(RVA = "0x5B41560", Offset = "0x5B40560", VA = "0x5B41560")]
	private static void PrewarmGore()
	{
	}

	[Token(Token = "0x6004539")]
	[Address(RVA = "0x5B40ED0", Offset = "0x5B3FED0", VA = "0x5B40ED0")]
	private static ParticleSystem InstantiateParticle(string name)
	{
		return null;
	}
}
