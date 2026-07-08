using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using SimpleJSONFixed;
using UnityEngine;
using Utility;

namespace Characters;

[Token(Token = "0x2000515")]
internal class BasicTitanSetup : MonoBehaviour
{
	[Token(Token = "0x4001933")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static JSONNode Info;

	[Token(Token = "0x4001934")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static int BodyCount;

	[Token(Token = "0x4001935")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	public static int HeadCount;

	[Token(Token = "0x4001936")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static int EyeCount;

	[Token(Token = "0x4001937")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	public static int HairMCount;

	[Token(Token = "0x4001938")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public static int HairFCount;

	[Token(Token = "0x4001939")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static Dictionary<string, string> HairPrefabs;

	[Token(Token = "0x400193A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public static List<string> AllHairs;

	[Token(Token = "0x400193B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public static List<int> AIEyes;

	[Token(Token = "0x400193C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public static List<Color255> AIHairColors;

	[Token(Token = "0x60035C8")]
	[Address(RVA = "0x3F126C0", Offset = "0x3F126C0", VA = "0x3F126C0")]
	public static void Init()
	{
	}

	[Token(Token = "0x60035C9")]
	[Address(RVA = "0x3F13340", Offset = "0x3F13340", VA = "0x3F13340")]
	public static int[] GetRandomBodyHeadCombo([Optional] JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x60035CA")]
	[Address(RVA = "0x3F13930", Offset = "0x3F13930", VA = "0x3F13930")]
	public TitanCustomSet CreateRandomSet(int headPrefab)
	{
		return null;
	}

	[Token(Token = "0x60035CB")]
	[Address(RVA = "0x3F06700", Offset = "0x3F06700", VA = "0x3F06700")]
	public void Load(TitanCustomSet set)
	{
	}

	[Token(Token = "0x60035CC")]
	[Address(RVA = "0x3F13B60", Offset = "0x3F13B60", VA = "0x3F13B60")]
	protected void CopyColliders(Transform from, Transform to, bool capsule, bool moveTransform)
	{
	}

	[Token(Token = "0x60035CD")]
	[Address(RVA = "0x3F13D60", Offset = "0x3F13D60", VA = "0x3F13D60")]
	public BasicTitanSetup()
	{
	}
}
