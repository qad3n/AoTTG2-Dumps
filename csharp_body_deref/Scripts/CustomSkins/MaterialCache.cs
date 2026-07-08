using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomSkins;

[Token(Token = "0x2000224")]
internal class MaterialCache
{
	[Token(Token = "0x4000BE7")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<string, Material> _IdToMaterial;

	[Token(Token = "0x4000BE8")]
	[FieldOffset(Offset = "0x8")]
	private static int MaxItems;

	[Token(Token = "0x4000BE9")]
	[FieldOffset(Offset = "0x10")]
	public static Material TransparentMaterial;

	[Token(Token = "0x6000CCB")]
	[Address(RVA = "0x41483D0", Offset = "0x41483D0", VA = "0x41483D0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6000CCC")]
	[Address(RVA = "0x41484C0", Offset = "0x41484C0", VA = "0x41484C0")]
	public static void Clear()
	{
	}

	[Token(Token = "0x6000CCD")]
	[Address(RVA = "0x4146340", Offset = "0x4146340", VA = "0x4146340")]
	public static bool ContainsKey(string rendererId, string url)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CCE")]
	[Address(RVA = "0x4146430", Offset = "0x4146430", VA = "0x4146430")]
	public static Material GetMaterial(string rendererId, string url)
	{
		return null;
	}

	[Token(Token = "0x6000CCF")]
	[Address(RVA = "0x4147660", Offset = "0x4147660", VA = "0x4147660")]
	public static void SetMaterial(string rendererId, string url, Material material)
	{
	}

	[Token(Token = "0x6000CD0")]
	[Address(RVA = "0x4148550", Offset = "0x4148550", VA = "0x4148550")]
	private static string GetId(string rendererId, string url)
	{
		return null;
	}

	[Token(Token = "0x6000CD1")]
	[Address(RVA = "0x41485A0", Offset = "0x41485A0", VA = "0x41485A0")]
	public MaterialCache()
	{
	}
}
