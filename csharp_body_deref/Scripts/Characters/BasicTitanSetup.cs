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

[Token(Token = "0x20006BA")]
internal class BasicTitanSetup : MonoBehaviour
{
	[Token(Token = "0x4002156")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static JSONNode Info;

	[Token(Token = "0x4002157")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static int BodyCount;

	[Token(Token = "0x4002158")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	public static int HeadCount;

	[Token(Token = "0x4002159")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static int EyeCount;

	[Token(Token = "0x400215A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	public static int HairMCount;

	[Token(Token = "0x400215B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public static int HairFCount;

	[Token(Token = "0x400215C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static Dictionary<string, string> HairPrefabs;

	[Token(Token = "0x400215D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public static List<string> AllHairs;

	[Token(Token = "0x400215E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public static List<string> AIHairs;

	[Token(Token = "0x400215F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public static List<int> AIEyes;

	[Token(Token = "0x4002160")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public static List<Color255> AIHairColors;

	[Token(Token = "0x4002161")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly HashSet<Material> _ownedMaterials;

	[Token(Token = "0x6004292")]
	[Address(RVA = "0x219EEF0", Offset = "0x219D4F0", VA = "0x18219EEF0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6004293")]
	[Address(RVA = "0x219F7E0", Offset = "0x219DDE0", VA = "0x18219F7E0")]
	private static void LoadHairs(string key)
	{
	}

	[Token(Token = "0x6004294")]
	[Address(RVA = "0x219E960", Offset = "0x219CF60", VA = "0x18219E960")]
	public static int[] GetRandomBodyHeadCombo([Optional] JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x6004295")]
	[Address(RVA = "0x219E720", Offset = "0x219CD20", VA = "0x18219E720")]
	public TitanCustomSet CreateRandomSet(int headPrefab)
	{
		return null;
	}

	[Token(Token = "0x6004296")]
	[Address(RVA = "0x219FC90", Offset = "0x219E290", VA = "0x18219FC90")]
	public void Load(TitanCustomSet set)
	{
	}

	[Token(Token = "0x6004297")]
	[Address(RVA = "0x21A1160", Offset = "0x219F760", VA = "0x1821A1160")]
	private Material OwnInstance(Renderer renderer)
	{
		return null;
	}

	[Token(Token = "0x6004298")]
	[Address(RVA = "0x21A1000", Offset = "0x219F600", VA = "0x1821A1000")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6004299")]
	[Address(RVA = "0x219E490", Offset = "0x219CA90", VA = "0x18219E490")]
	protected void CopyColliders(Transform from, Transform to, bool capsule, bool moveTransform)
	{
	}

	[Token(Token = "0x600429A")]
	[Address(RVA = "0x21A13D0", Offset = "0x219F9D0", VA = "0x1821A13D0")]
	public BasicTitanSetup()
	{
	}
}
