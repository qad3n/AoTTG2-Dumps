using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace Photon.Pun;

[Token(Token = "0x2000014")]
public struct InstantiateParameters
{
	[Token(Token = "0x400002D")]
	[FieldOffset(Offset = "0x0")]
	public int[] viewIDs;

	[Token(Token = "0x400002E")]
	[FieldOffset(Offset = "0x8")]
	public byte objLevelPrefix;

	[Token(Token = "0x400002F")]
	[FieldOffset(Offset = "0x10")]
	public object[] data;

	[Token(Token = "0x4000030")]
	[FieldOffset(Offset = "0x18")]
	public byte group;

	[Token(Token = "0x4000031")]
	[FieldOffset(Offset = "0x1C")]
	public Quaternion rotation;

	[Token(Token = "0x4000032")]
	[FieldOffset(Offset = "0x2C")]
	public Vector3 position;

	[Token(Token = "0x4000033")]
	[FieldOffset(Offset = "0x38")]
	public string prefabName;

	[Token(Token = "0x4000034")]
	[FieldOffset(Offset = "0x40")]
	public Player creator;

	[Token(Token = "0x4000035")]
	[FieldOffset(Offset = "0x48")]
	public int timestamp;

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x3BFB760", Offset = "0x3BFB760", VA = "0x3BFB760")]
	public InstantiateParameters(string prefabName, Vector3 position, Quaternion rotation, byte group, object[] data, byte objLevelPrefix, int[] viewIDs, Player creator, int timestamp)
	{
	}
}
