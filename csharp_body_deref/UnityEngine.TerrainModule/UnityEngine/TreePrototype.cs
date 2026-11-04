// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TreePrototype
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000006")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeAsStruct]
public sealed class TreePrototype
{
	[Token(Token = "0x4000003")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.NativeName("prefab")]
	internal GameObject m_Prefab;

	[Token(Token = "0x4000004")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	[UnityEngine.Bindings.NativeName("bendFactor")]
	internal float m_BendFactor;

	[Token(Token = "0x4000005")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	[UnityEngine.Bindings.NativeName("navMeshLod")]
	internal int m_NavMeshLod;

	[Token(Token = "0x17000007")]
	public GameObject prefab
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x172DEB0", Offset = "0x172C4B0", VA = "0x18172DEB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000008")]
	public float bendFactor
	{
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x2E82BD0", Offset = "0x2E811D0", VA = "0x182E82BD0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000009")]
	public int navMeshLod
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0xAD35F0", Offset = "0xAD1BF0", VA = "0x180AD35F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public TreePrototype()
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x2FFC820", Offset = "0x2FFAE20", VA = "0x182FFC820", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x2F20CC0", Offset = "0x2F1F2C0", VA = "0x182F20CC0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x2FFC960", Offset = "0x2FFAF60", VA = "0x182FFC960")]
	private bool Equals(TreePrototype other)
	{
		return default(bool);
	}
}
