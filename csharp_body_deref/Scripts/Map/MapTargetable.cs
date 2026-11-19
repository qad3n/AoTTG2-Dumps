// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapTargetable
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapTargetable.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapTargetable.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Characters;
using Il2CppDummyDll;
using UnityEngine;

namespace Map;

[Token(Token = "0x200042A")]
internal class MapTargetable : ITargetable
{
	[Token(Token = "0x400154F")]
	[FieldOffset(Offset = "0x10")]
	private Transform _transform;

	[Token(Token = "0x4001550")]
	[FieldOffset(Offset = "0x18")]
	private Vector3 _center;

	[Token(Token = "0x170002C6")]
	public GameObject GameObject
	{
		[Token(Token = "0x6001A45")]
		[Address(RVA = "0x58A6480", Offset = "0x58A5480", VA = "0x58A6480")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002C7")]
	public string Team
	{
		[Token(Token = "0x6001A46")]
		[Address(RVA = "0x58A64A0", Offset = "0x58A54A0", VA = "0x58A64A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A47")]
		[Address(RVA = "0x58A64B0", Offset = "0x58A54B0", VA = "0x58A64B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002C8")]
	public bool Enabled
	{
		[Token(Token = "0x6001A48")]
		[Address(RVA = "0x58A64C0", Offset = "0x58A54C0", VA = "0x58A64C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A49")]
		[Address(RVA = "0x58A64D0", Offset = "0x58A54D0", VA = "0x58A64D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6001A4A")]
	[Address(RVA = "0x58A64E0", Offset = "0x58A54E0", VA = "0x58A64E0")]
	public MapTargetable(Transform transform, Vector3 center, string team)
	{
	}

	[Token(Token = "0x6001A4B")]
	[Address(RVA = "0x58A6550", Offset = "0x58A5550", VA = "0x58A6550", Slot = "6")]
	public bool ValidTarget()
	{
		return default(bool);
	}

	[Token(Token = "0x6001A4C")]
	[Address(RVA = "0x58A65B0", Offset = "0x58A55B0", VA = "0x58A65B0", Slot = "5")]
	public Vector3 GetPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6001A4D")]
	[Address(RVA = "0x58A65E0", Offset = "0x58A55E0", VA = "0x58A65E0", Slot = "4")]
	public string GetTeam()
	{
		return null;
	}
}
