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

[Token(Token = "0x2000283")]
internal class MapTargetable : ITargetable
{
	[Token(Token = "0x4000D98")]
	[FieldOffset(Offset = "0x10")]
	private Transform _transform;

	[Token(Token = "0x4000D99")]
	[FieldOffset(Offset = "0x18")]
	private Vector3 _center;

	[Token(Token = "0x170001D2")]
	public GameObject GameObject
	{
		[Token(Token = "0x6000F56")]
		[Address(RVA = "0x3FB6570", Offset = "0x3FB6570", VA = "0x3FB6570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D3")]
	public string Team
	{
		[Token(Token = "0x6000F57")]
		[Address(RVA = "0x3FB6590", Offset = "0x3FB6590", VA = "0x3FB6590")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F58")]
		[Address(RVA = "0x3FB65A0", Offset = "0x3FB65A0", VA = "0x3FB65A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001D4")]
	public bool Enabled
	{
		[Token(Token = "0x6000F59")]
		[Address(RVA = "0x3FB65B0", Offset = "0x3FB65B0", VA = "0x3FB65B0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000F5A")]
		[Address(RVA = "0x3FB65C0", Offset = "0x3FB65C0", VA = "0x3FB65C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000F5B")]
	[Address(RVA = "0x3FB65D0", Offset = "0x3FB65D0", VA = "0x3FB65D0")]
	public MapTargetable(Transform transform, Vector3 center, string team)
	{
	}

	[Token(Token = "0x6000F5C")]
	[Address(RVA = "0x3FB6640", Offset = "0x3FB6640", VA = "0x3FB6640", Slot = "6")]
	public bool ValidTarget()
	{
		return default(bool);
	}

	[Token(Token = "0x6000F5D")]
	[Address(RVA = "0x3FB66A0", Offset = "0x3FB66A0", VA = "0x3FB66A0", Slot = "5")]
	public Vector3 GetPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000F5E")]
	[Address(RVA = "0x3FB66D0", Offset = "0x3FB66D0", VA = "0x3FB66D0", Slot = "4")]
	public string GetTeam()
	{
		return null;
	}
}
