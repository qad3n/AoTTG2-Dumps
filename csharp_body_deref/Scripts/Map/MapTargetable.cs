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

[Token(Token = "0x20003CB")]
internal class MapTargetable : ITargetable
{
	[Token(Token = "0x40013AF")]
	[FieldOffset(Offset = "0x10")]
	private Transform _transform;

	[Token(Token = "0x40013B0")]
	[FieldOffset(Offset = "0x18")]
	private Vector3 _center;

	[Token(Token = "0x17000285")]
	public GameObject GameObject
	{
		[Token(Token = "0x60017CE")]
		[Address(RVA = "0x1EDAB30", Offset = "0x1ED9130", VA = "0x181EDAB30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000286")]
	public string Team
	{
		[Token(Token = "0x60017CF")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60017D0")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000287")]
	public bool Enabled
	{
		[Token(Token = "0x60017D1")]
		[Address(RVA = "0xACDD00", Offset = "0xACC300", VA = "0x180ACDD00")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60017D2")]
		[Address(RVA = "0xACE1A0", Offset = "0xACC7A0", VA = "0x180ACE1A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60017D3")]
	[Address(RVA = "0x1EDAAD0", Offset = "0x1ED90D0", VA = "0x181EDAAD0")]
	public MapTargetable(Transform transform, Vector3 center, string team)
	{
	}

	[Token(Token = "0x60017D4")]
	[Address(RVA = "0x1EDAA70", Offset = "0x1ED9070", VA = "0x181EDAA70", Slot = "6")]
	public bool ValidTarget()
	{
		return default(bool);
	}

	[Token(Token = "0x60017D5")]
	[Address(RVA = "0x1EDAA10", Offset = "0x1ED9010", VA = "0x181EDAA10", Slot = "5")]
	public Vector3 GetPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x60017D6")]
	[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80", Slot = "4")]
	public string GetTeam()
	{
		return null;
	}
}
