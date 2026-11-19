// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BasicTitanSetup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/BasicTitanSetup.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/BasicTitanSetup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using SimpleJSONFixed;
using UnityEngine;
using Utility;

namespace Characters;

[Token(Token = "0x2000719")]
internal class BasicTitanSetup : MonoBehaviour
{
	[Token(Token = "0x400231D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static JSONNode Info;

	[Token(Token = "0x400231E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static int BodyCount;

	[Token(Token = "0x400231F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	public static int HeadCount;

	[Token(Token = "0x4002320")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static int EyeCount;

	[Token(Token = "0x4002321")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	public static int HairMCount;

	[Token(Token = "0x4002322")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public static int HairFCount;

	[Token(Token = "0x4002323")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static Dictionary<string, string> HairPrefabs;

	[Token(Token = "0x4002324")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public static List<string> AllHairs;

	[Token(Token = "0x4002325")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public static List<string> AIHairs;

	[Token(Token = "0x4002326")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public static List<int> AIEyes;

	[Token(Token = "0x4002327")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public static List<Color255> AIHairColors;

	[Token(Token = "0x4002328")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly HashSet<Material> _ownedMaterials;

	[Token(Token = "0x4002329")]
	private const string HairPrefabPath = "Titans/Hairs/Prefabs/";

	[Token(Token = "0x400232A")]
	private const string HeadPrefabPath = "Titans/Heads/Prefabs/";

	[Token(Token = "0x400232B")]
	private const string HeadPart = "TitanHead";

	[Token(Token = "0x400232C")]
	private const string HeadColliderPart = "TitanHeadCollider";

	[Token(Token = "0x400232D")]
	private const string EyesPart = "TitanEyes";

	[Token(Token = "0x400232E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private static readonly string[] HeadParts;

	[Token(Token = "0x600453F")]
	[Address(RVA = "0x5B421B0", Offset = "0x5B411B0", VA = "0x5B421B0")]
	public static void PreloadAIAssets()
	{
	}

	[Token(Token = "0x6004540")]
	[Address(RVA = "0x5B42850", Offset = "0x5B41850", VA = "0x5B42850")]
	private static GameObject LoadHair(string hair)
	{
		return null;
	}

	[Token(Token = "0x6004541")]
	[Address(RVA = "0x5B42980", Offset = "0x5B41980", VA = "0x5B42980")]
	public static void ResetCloth(Transform hairSocket)
	{
	}

	[Token(Token = "0x6004542")]
	[Address(RVA = "0x5B42750", Offset = "0x5B41750", VA = "0x5B42750")]
	private static Transform LoadHeadPart(string part, int head)
	{
		return null;
	}

	[Token(Token = "0x6004543")]
	[Address(RVA = "0x5B42B00", Offset = "0x5B41B00", VA = "0x5B42B00")]
	public static void Init()
	{
	}

	[Token(Token = "0x6004544")]
	[Address(RVA = "0x5B433F0", Offset = "0x5B423F0", VA = "0x5B433F0")]
	private static void LoadHairs(string key)
	{
	}

	[Token(Token = "0x6004545")]
	[Address(RVA = "0x5B438D0", Offset = "0x5B428D0", VA = "0x5B438D0")]
	public static int[] GetRandomBodyHeadCombo([Optional] JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x6004546")]
	[Address(RVA = "0x5B43EA0", Offset = "0x5B42EA0", VA = "0x5B43EA0")]
	public TitanCustomSet CreateRandomSet(int headPrefab)
	{
		return null;
	}

	[Token(Token = "0x6004547")]
	[Address(RVA = "0x5B440D0", Offset = "0x5B430D0", VA = "0x5B440D0")]
	public void Load(TitanCustomSet set)
	{
	}

	[Token(Token = "0x6004548")]
	[Address(RVA = "0x5B44E40", Offset = "0x5B43E40", VA = "0x5B44E40")]
	private Material OwnInstance(Renderer renderer)
	{
		return null;
	}

	[Token(Token = "0x6004549")]
	[Address(RVA = "0x5B450C0", Offset = "0x5B440C0", VA = "0x5B450C0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600454A")]
	[Address(RVA = "0x5B44EB0", Offset = "0x5B43EB0", VA = "0x5B44EB0")]
	protected void CopyColliders(Transform from, Transform to, bool capsule, bool moveTransform)
	{
	}

	[Token(Token = "0x600454B")]
	[Address(RVA = "0x5B45250", Offset = "0x5B44250", VA = "0x5B45250")]
	public BasicTitanSetup()
	{
	}
}
