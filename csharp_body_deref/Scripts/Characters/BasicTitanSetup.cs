// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BasicTitanSetup
// Update status: unchanged since the previous dump
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

[Token(Token = "0x200055A")]
internal class BasicTitanSetup : MonoBehaviour
{
	[Token(Token = "0x4001A46")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static JSONNode Info;

	[Token(Token = "0x4001A47")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static int BodyCount;

	[Token(Token = "0x4001A48")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	public static int HeadCount;

	[Token(Token = "0x4001A49")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static int EyeCount;

	[Token(Token = "0x4001A4A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	public static int HairMCount;

	[Token(Token = "0x4001A4B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public static int HairFCount;

	[Token(Token = "0x4001A4C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static Dictionary<string, string> HairPrefabs;

	[Token(Token = "0x4001A4D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public static List<string> AllHairs;

	[Token(Token = "0x4001A4E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public static List<int> AIEyes;

	[Token(Token = "0x4001A4F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public static List<Color255> AIHairColors;

	[Token(Token = "0x60037D6")]
	[Address(RVA = "0x421F0C0", Offset = "0x421F0C0", VA = "0x421F0C0")]
	public static void Init()
	{
	}

	[Token(Token = "0x60037D7")]
	[Address(RVA = "0x421FD40", Offset = "0x421FD40", VA = "0x421FD40")]
	public static int[] GetRandomBodyHeadCombo([Optional] JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x60037D8")]
	[Address(RVA = "0x4220330", Offset = "0x4220330", VA = "0x4220330")]
	public TitanCustomSet CreateRandomSet(int headPrefab)
	{
		return null;
	}

	[Token(Token = "0x60037D9")]
	[Address(RVA = "0x4213010", Offset = "0x4213010", VA = "0x4213010")]
	public void Load(TitanCustomSet set)
	{
	}

	[Token(Token = "0x60037DA")]
	[Address(RVA = "0x4220560", Offset = "0x4220560", VA = "0x4220560")]
	protected void CopyColliders(Transform from, Transform to, bool capsule, bool moveTransform)
	{
	}

	[Token(Token = "0x60037DB")]
	[Address(RVA = "0x4220760", Offset = "0x4220760", VA = "0x4220760")]
	public BasicTitanSetup()
	{
	}
}
